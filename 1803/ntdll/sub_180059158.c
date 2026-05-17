/*
 * XREFs of sub_180059158 @ 0x180059158
 * Callers:
 *     sub_18003829C @ 0x18003829C (sub_18003829C.c)
 *     LdrGetDllHandleEx @ 0x180041D20 (LdrGetDllHandleEx.c)
 *     sub_180055808 @ 0x180055808 (sub_180055808.c)
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     LdrAddRefDll @ 0x1800590F0 (LdrAddRefDll.c)
 *     LdrInitShimEngineDynamic @ 0x1800CC730 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x1800262F0 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028090 (RtlAcquireSRWLockExclusive.c)
 *     sub_180059528 @ 0x180059528 (sub_180059528.c)
 */

__int64 __fastcall sub_180059158(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, __int64 a4)
{
  unsigned int v5; // edi
  __int64 v6; // rcx

  v5 = 0;
  RtlAcquireSRWLockExclusive((unsigned __int64)&qword_18015D070, a2, a3, a4);
  v6 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v6 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v6 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v6 + 24) )
      sub_180059528();
    else
      v5 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&qword_18015D070);
  return v5;
}
