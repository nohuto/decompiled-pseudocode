/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x1404EFE84
 * Callers:
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189600 (RtlCompareMemory.c)
 *     memset @ 0x140192F40 (memset.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14048E508 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpGetSchematizedFilterSize @ 0x140491B04 (EtwpGetSchematizedFilterSize.c)
 *     EtwpBuildNotificationPacket @ 0x1404EE23C (EtwpBuildNotificationPacket.c)
 */

char __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        int a6,
        _QWORD *a7)
{
  unsigned __int8 v8; // r14
  __int16 v9; // r12
  char v10; // cl
  unsigned __int8 v11; // al
  _OWORD *v13; // r15
  __int64 v14; // rcx
  __int128 v15; // xmm0
  int SchematizedFilterSize; // eax
  _BYTE Source2[120]; // [rsp+20h] [rbp-61h] BYREF

  v8 = *(_BYTE *)(a1 + 100);
  v9 = *(_WORD *)(a1 + 98) & 8;
  if ( !v9 )
  {
    if ( a5 )
    {
      v11 = *(_BYTE *)(a1 + 101);
      v10 = *(_BYTE *)(a1 + 100);
    }
    else
    {
      v10 = *(_BYTE *)(a1 + 101);
      v11 = v8;
    }
    if ( (a2 & a3) == 0 && (v11 & a2) == 0 )
      return 0;
    if ( a4 == v11 && !v10 && a5 != 2 )
      goto LABEL_8;
    goto LABEL_17;
  }
  if ( v8 || a6 != 1 )
  {
LABEL_8:
    *a7 = 0LL;
    return 1;
  }
  if ( a3 )
  {
LABEL_17:
    memset(Source2, 0, sizeof(Source2));
    v13 = (_OWORD *)*a7;
    v14 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)Source2 = *(_OWORD *)*a7;
    *(_OWORD *)&Source2[16] = v13[1];
    *(_OWORD *)&Source2[32] = v13[2];
    *(_OWORD *)&Source2[48] = v13[3];
    *(_QWORD *)&Source2[64] = *((_QWORD *)v13 + 8);
    v15 = *(_OWORD *)(v14 + 24);
    *(_QWORD *)&Source2[4] = 0x100000078LL;
    *(_OWORD *)&Source2[40] = v15;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(v14, v8);
    if ( SchematizedFilterSize )
      *(_DWORD *)&Source2[4] = SchematizedFilterSize + 136;
    EtwpComputeRegEntryEnableInfo(a1, &Source2[72]);
    if ( v9 )
    {
      *(_QWORD *)&Source2[104] = 0LL;
      *(_DWORD *)&Source2[112] = 0;
    }
    if ( !v13 )
      goto LABEL_26;
    if ( *((_DWORD *)v13 + 1) != *(_DWORD *)&Source2[4] || RtlCompareMemory(v13, Source2, 0x78uLL) != 120 )
      *a7 = 0LL;
    if ( !*a7 )
    {
LABEL_26:
      if ( (int)EtwpBuildNotificationPacket(*(_QWORD *)(a1 + 32), Source2, *(_BYTE *)(a1 + 100), a7) < 0 )
        return 0;
    }
    return 1;
  }
  return 0;
}
