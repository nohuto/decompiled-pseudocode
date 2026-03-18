/*
 * XREFs of RtlQueryAtomsInAtomTable @ 0x1407214C8
 * Callers:
 *     NtQueryInformationAtom @ 0x14057D5D0 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1400830B0 (KeLeaveCriticalRegion.c)
 *     RtlpLookupLowBox @ 0x1400A6468 (RtlpLookupLowBox.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     RtlpLockAtomTable @ 0x1404D2D94 (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlQueryAtomsInAtomTable(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v9; // rbx
  __int64 i; // rsi
  __int64 j; // rdi
  unsigned int v12; // [rsp+20h] [rbp-48h]

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v12 = 0;
  v9 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
  {
    for ( j = *(_QWORD *)(a1 + 8 * i + 32); j; j = *(_QWORD *)j )
    {
      if ( RtlpLookupLowBox(a1, j, 0) )
      {
        if ( (unsigned int)v9 >= a2 )
          v12 = -1073741820;
        else
          *(_WORD *)(a4 + 2 * v9) = *(_WORD *)(j + 10);
        v9 = (unsigned int)(v9 + 1);
      }
    }
  }
  *a3 = v9;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v12;
}
