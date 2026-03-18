/*
 * XREFs of PspJobIoRateQueryHistory @ 0x14008B354
 * Callers:
 *     PspQueryRateControlHistory @ 0x14053716C (PspQueryRateControlHistory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14008EE90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140125970 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall PspJobIoRateQueryHistory(__int64 a1, _QWORD *a2, _DWORD *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  __int64 v9; // rcx
  __int64 v10; // rax
  KIRQL v11; // al
  int v12; // ecx
  KIRQL v13; // bp
  int v14; // r8d
  __int64 v15; // rax

  v4 = 0;
  if ( !*(_QWORD *)(a1 + 1424) )
  {
    v9 = a1 + 1448;
    v10 = *(_QWORD *)v9;
    if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
    {
      if ( !v10 )
        return (unsigned int)-1073741275;
      v10 ^= v9;
    }
    if ( !v10 )
      return (unsigned int)-1073741275;
  }
  v11 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1440));
  v12 = *(_DWORD *)(a1 + 1480);
  v13 = v11;
  if ( v12 )
  {
    v14 = *(_DWORD *)(a1 + 1472);
    v15 = *(_QWORD *)(a1 + 1464);
    *a4 = v14 - *(_DWORD *)(a1 + 1476);
    *a2 = v15;
    *a3 = v12;
    *(_DWORD *)(a1 + 1476) = v14;
  }
  else
  {
    v4 = -1073741275;
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1440));
  __writecr8(v13);
  return v4;
}
