/*
 * XREFs of MiMapImageInSystemProcess @ 0x1406DF038
 * Callers:
 *     MiMapImageInSystemSpace @ 0x1404F7424 (MiMapImageInSystemSpace.c)
 * Callees:
 *     MiMapViewOfImageSection @ 0x1404D1270 (MiMapViewOfImageSection.c)
 */

__int64 __fastcall MiMapImageInSystemProcess(_DWORD *a1, char a2, unsigned __int64 *a3, unsigned __int64 *a4)
{
  __int64 v4; // r10
  _KPROCESS *Process; // r8
  __int64 v9; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)a1;
  *a4 = _InterlockedCompareExchange64((volatile signed __int64 *)(*(_QWORD *)a1 + 24LL), -1LL, -1LL);
  if ( (unsigned __int64)_InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 24), -1LL, -1LL) >= 0x100000000LL
    || *a4 > 0x7FFFFFFDFFFFLL )
  {
    return 3221225503LL;
  }
  *a3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = 0LL;
  return MiMapViewOfImageSection(
           a1,
           (__int64)Process,
           (unsigned __int64)Process,
           a3,
           &v9,
           a4,
           0LL,
           2,
           1,
           0LL,
           0x40000,
           a2);
}
