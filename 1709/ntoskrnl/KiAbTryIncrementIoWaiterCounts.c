/*
 * XREFs of KiAbTryIncrementIoWaiterCounts @ 0x1400A8BC0
 * Callers:
 *     KiAbProcessContextSwitch @ 0x14006F610 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x1400A7650 (KiAbProcessThreadLocks.c)
 *     KiAbForceProcessLockEntry @ 0x14013F9F0 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiAbTryIncrementIoWaiterCounts(unsigned __int8 *a1, __int64 a2)
{
  unsigned __int8 v2; // r8
  _BYTE *v3; // r9
  unsigned int v5; // r10d
  unsigned __int8 *v6; // rcx
  unsigned int v7; // r8d

  if ( (a1[25] & 1) == 0 )
    return 0LL;
  v2 = a1[27];
  v3 = a1 + 27;
  if ( (v2 & 6) == 6 )
    return 0LL;
  v5 = 0;
  v6 = &a1[-(unsigned __int16)(16 * a1[24])];
  if ( (v2 & 2) == 0 )
  {
    v7 = (*((_DWORD *)v6 + 436) >> 9) & 7;
    if ( (*(_DWORD *)(*((_QWORD *)v6 + 68) + 772LL) & 0x100000) != 0 )
      v7 = 0;
    if ( v7 >= 2 )
      goto LABEL_8;
    if ( v6 == (unsigned __int8 *)KeGetCurrentThread() && *((_DWORD *)v6 + 450) )
      v7 = 2;
    if ( v7 >= 2 || *((_DWORD *)v6 + 450) )
    {
LABEL_8:
      *(_WORD *)(a2 + 90) ^= (*(_WORD *)(a2 + 90) ^ (*(_WORD *)(a2 + 90) + 2)) & 0x1FE;
      *v3 |= 2u;
      if ( (*(_WORD *)(a2 + 90) & 0x1FE) == 2 )
        v5 = 1;
    }
  }
  if ( (*v3 & 4) == 0 && (!*((_DWORD *)v6 + 452) || *((_DWORD *)v6 + 451)) )
  {
    *(_WORD *)(a2 + 90) += 512;
    *v3 |= 4u;
    if ( (*(_WORD *)(a2 + 90) & 0xFE00) == 0x200 )
      v5 |= 2u;
  }
  return v5;
}
