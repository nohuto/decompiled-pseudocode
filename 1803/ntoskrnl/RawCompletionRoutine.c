/*
 * XREFs of RawCompletionRoutine @ 0x140006360
 * Callers:
 *     <none>
 * Callees:
 *     RawEndOperation @ 0x1400063FC (RawEndOperation.c)
 *     RawInitiateDeleteVolume @ 0x1400066DC (RawInitiateDeleteVolume.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 */

__int64 __fastcall RawCompletionRoutine(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rcx

  v3 = *(_QWORD *)(a2 + 184);
  if ( (unsigned __int8)(*(_BYTE *)v3 - 3) <= 1u )
  {
    v6 = *(_QWORD *)(v3 + 48);
    if ( v6 )
    {
      if ( (*(_DWORD *)(v6 + 80) & 2) != 0 && *(int *)(a2 + 48) >= 0 )
        *(_QWORD *)(v6 + 104) += *(_QWORD *)(a2 + 56);
    }
  }
  if ( *(_BYTE *)(a2 + 65) )
    *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  RawEndOperation(a3, *(_QWORD *)(v3 + 48));
  if ( *(_BYTE *)v3 == 27 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a3 + 224));
    --*(_DWORD *)(a3 + 112);
    if ( *(_DWORD *)(a3 + 108) || !(unsigned __int8)RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a3) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a3 + 224));
  }
  return 0LL;
}
