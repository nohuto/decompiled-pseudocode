/*
 * XREFs of sub_18001A084 @ 0x18001A084
 * Callers:
 *     LdrAddRefDll @ 0x18001AD60 (LdrAddRefDll.c)
 *     sub_18001DF1C @ 0x18001DF1C (sub_18001DF1C.c)
 *     LdrGetDllHandleEx @ 0x18003BF00 (LdrGetDllHandleEx.c)
 *     sub_18006EEF8 @ 0x18006EEF8 (sub_18006EEF8.c)
 *     sub_18006F0A0 @ 0x18006F0A0 (sub_18006F0A0.c)
 *     LdrInitShimEngineDynamic @ 0x1800D6C20 (LdrInitShimEngineDynamic.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180021A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180028EC0 (RtlAcquireSRWLockExclusive.c)
 *     sub_180080894 @ 0x180080894 (sub_180080894.c)
 */

__int64 __fastcall sub_18001A084(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rcx

  v2 = 0;
  RtlAcquireSRWLockExclusive(&stru_18015C040);
  v3 = *(_QWORD *)(a1 + 152);
  if ( *(_DWORD *)(v3 + 24) != -1 && (*(_BYTE *)(*(_QWORD *)v3 - 56LL) & 0x20) == 0 )
  {
    if ( *(_DWORD *)(v3 + 24) )
      sub_180080894();
    else
      v2 = -1073741823;
  }
  RtlReleaseSRWLockExclusive(&stru_18015C040);
  return v2;
}
