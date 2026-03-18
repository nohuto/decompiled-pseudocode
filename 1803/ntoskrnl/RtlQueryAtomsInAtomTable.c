/*
 * XREFs of RtlQueryAtomsInAtomTable @ 0x140784BE8
 * Callers:
 *     NtQueryInformationAtom @ 0x140547A60 (NtQueryInformationAtom.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     RtlpLookupLowBox @ 0x1400A1320 (RtlpLookupLowBox.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x1401037D0 (KeLeaveCriticalRegion.c)
 *     RtlpLockAtomTable @ 0x1404B624C (RtlpLockAtomTable.c)
 */

__int64 __fastcall RtlQueryAtomsInAtomTable(__int64 a1, unsigned int a2, _DWORD *a3, __int64 a4)
{
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v12; // rbx
  __int64 i; // rsi
  __int64 j; // rdi
  unsigned int v15; // [rsp+20h] [rbp-48h]

  if ( !RtlpLockAtomTable((_DWORD *)a1) )
    return 3221225485LL;
  v15 = 0;
  v12 = 0LL;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 28); i = (unsigned int)(i + 1) )
  {
    for ( j = *(_QWORD *)(a1 + 8 * i + 32); j; j = *(_QWORD *)j )
    {
      if ( RtlpLookupLowBox(a1, j, 0) )
      {
        if ( (unsigned int)v12 >= a2 )
          v15 = -1073741820;
        else
          *(_WORD *)(a4 + 2 * v12) = *(_WORD *)(j + 10);
        v12 = (unsigned int)(v12 + 1);
      }
    }
  }
  *a3 = v12;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8), v8, v9, v10);
  KeAbPostRelease(a1 + 8);
  KeLeaveCriticalRegion();
  return v15;
}
