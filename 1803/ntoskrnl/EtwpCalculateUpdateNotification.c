/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x14058C620
 * Callers:
 *     EtwpEnableGuid @ 0x14058D2FC (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1407A5704 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x1407A5894 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x1401B3260 (RtlCompareMemory.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     EtwpBuildNotificationPacket @ 0x14058B92C (EtwpBuildNotificationPacket.c)
 *     EtwpGetSchematizedFilterSize @ 0x140590420 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140591660 (EtwpComputeRegEntryEnableInfo.c)
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
  __int16 v8; // r12
  unsigned __int8 v9; // di
  char v10; // cl
  unsigned __int8 v11; // al
  _OWORD *v13; // r15
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int128 v16; // xmm0
  int SchematizedFilterSize; // eax
  _OWORD *v18; // rax
  _BYTE Source2[120]; // [rsp+20h] [rbp-61h] BYREF

  v8 = *(_WORD *)(a1 + 98) & 8;
  if ( !v8 )
  {
    v9 = *(_BYTE *)(a1 + 100);
    if ( a5 )
    {
      v11 = *(_BYTE *)(a1 + 101);
      v10 = *(_BYTE *)(a1 + 100);
    }
    else
    {
      v10 = *(_BYTE *)(a1 + 101);
      v11 = v9;
    }
    if ( (a2 & a3) == 0 && (v11 & a2) == 0 )
      return 0;
    if ( a4 == v11 && !v10 && a5 != 2 )
      goto LABEL_8;
LABEL_16:
    memset(Source2, 0, sizeof(Source2));
    v13 = (_OWORD *)*a7;
    LOBYTE(v14) = v9;
    v15 = *(_QWORD *)(a1 + 32);
    *(_OWORD *)Source2 = *(_OWORD *)*a7;
    *(_OWORD *)&Source2[16] = v13[1];
    *(_OWORD *)&Source2[32] = v13[2];
    *(_OWORD *)&Source2[48] = v13[3];
    *(_QWORD *)&Source2[64] = *((_QWORD *)v13 + 8);
    v16 = *(_OWORD *)(v15 + 24);
    *(_QWORD *)&Source2[4] = 0x100000078LL;
    *(_OWORD *)&Source2[40] = v16;
    SchematizedFilterSize = EtwpGetSchematizedFilterSize(v15, v14);
    if ( SchematizedFilterSize )
      *(_DWORD *)&Source2[4] = SchematizedFilterSize + 136;
    EtwpComputeRegEntryEnableInfo(a1, &Source2[72]);
    if ( v8 )
    {
      *(_QWORD *)&Source2[104] = 0LL;
      *(_DWORD *)&Source2[112] = 0;
    }
    if ( !v13
      || (*((_DWORD *)v13 + 1) != *(_DWORD *)&Source2[4] || RtlCompareMemory(v13, Source2, 0x78uLL) != 120
        ? (*a7 = 0LL, v18 = 0LL)
        : (v18 = (_OWORD *)*a7),
          !v18) )
    {
      if ( (int)EtwpBuildNotificationPacket(*(_QWORD *)(a1 + 32), Source2, *(_BYTE *)(a1 + 100), a7) < 0 )
        return 0;
    }
    return 1;
  }
  if ( *(_BYTE *)(a1 + 100) || a6 != 1 )
  {
LABEL_8:
    *a7 = 0LL;
    return 1;
  }
  if ( a3 )
  {
    v9 = 0;
    goto LABEL_16;
  }
  return 0;
}
