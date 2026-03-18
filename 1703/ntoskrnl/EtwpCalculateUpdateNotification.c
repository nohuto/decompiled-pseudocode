/*
 * XREFs of EtwpCalculateUpdateNotification @ 0x1405539C8
 * Callers:
 *     EtwpEnableGuid @ 0x140552C6C (EtwpEnableGuid.c)
 *     EtwpDisallowedGuidAddition @ 0x1405C7F38 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140709A14 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     RtlCompareMemory @ 0x140189B00 (RtlCompareMemory.c)
 *     memset @ 0x140192D80 (memset.c)
 *     EtwpGetSchematizedFilterSize @ 0x1404808F0 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x1404F218C (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpBuildNotificationPacket @ 0x140554118 (EtwpBuildNotificationPacket.c)
 */

bool __fastcall EtwpCalculateUpdateNotification(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        char a4,
        char a5,
        int a6,
        _OWORD **a7)
{
  bool v9; // r15
  unsigned __int8 v10; // si
  unsigned __int8 v11; // al
  char v12; // dl
  _OWORD *v13; // r14
  __int64 v14; // rcx
  __int128 v15; // xmm0
  int SchematizedFilterSize; // eax
  __int64 v17; // r8
  _BYTE Source2[120]; // [rsp+28h] [rbp-51h] BYREF

  v9 = (*(_BYTE *)(a1 + 98) & 8) != 0;
  if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
  {
    v10 = *(_BYTE *)(a1 + 100);
    if ( !v10 && a6 == 1 )
    {
      if ( !a3 )
        return 0;
      goto LABEL_9;
    }
LABEL_22:
    *a7 = 0LL;
    return 1;
  }
  v10 = *(_BYTE *)(a1 + 100);
  if ( a5 )
  {
    v11 = *(_BYTE *)(a1 + 101);
    v12 = *(_BYTE *)(a1 + 100);
  }
  else
  {
    v12 = *(_BYTE *)(a1 + 101);
    v11 = *(_BYTE *)(a1 + 100);
  }
  if ( (a2 & a3) == 0 && (v11 & a2) == 0 )
    return 0;
  if ( a4 == v11 && !v12 && a5 != 2 )
    goto LABEL_22;
LABEL_9:
  memset(Source2, 0, sizeof(Source2));
  v13 = *a7;
  v14 = *(_QWORD *)(a1 + 32);
  *(_OWORD *)Source2 = **a7;
  *(_OWORD *)&Source2[16] = v13[1];
  *(_OWORD *)&Source2[32] = v13[2];
  *(_OWORD *)&Source2[48] = v13[3];
  *(_QWORD *)&Source2[64] = *((_QWORD *)v13 + 8);
  v15 = *(_OWORD *)(v14 + 24);
  *(_QWORD *)&Source2[4] = 0x100000078LL;
  *(_OWORD *)&Source2[40] = v15;
  SchematizedFilterSize = EtwpGetSchematizedFilterSize(v14, v10);
  if ( SchematizedFilterSize )
    *(_DWORD *)&Source2[4] = SchematizedFilterSize + 136;
  EtwpComputeRegEntryEnableInfo(a1, &Source2[72]);
  if ( v9 )
  {
    *(_QWORD *)&Source2[104] = 0LL;
    *(_DWORD *)&Source2[112] = 0;
  }
  if ( v13 )
  {
    if ( *((_DWORD *)v13 + 1) != *(_DWORD *)&Source2[4] || RtlCompareMemory(v13, Source2, 0x78uLL) != 120 )
      *a7 = 0LL;
    if ( *a7 )
      return 1;
  }
  LOBYTE(v17) = *(_BYTE *)(a1 + 100);
  return (int)EtwpBuildNotificationPacket(*(_QWORD *)(a1 + 32), Source2, v17, a7) >= 0;
}
