/*
 * XREFs of LdrpFindLoadedDll @ 0x180035548
 * Callers:
 *     LdrGetDllHandleEx @ 0x180035770 (LdrGetDllHandleEx.c)
 *     LdrpInitializeProcess @ 0x1800D404C (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpDereferenceModule @ 0x180029804 (LdrpDereferenceModule.c)
 *     LdrpPreprocessDllName @ 0x1800318FC (LdrpPreprocessDllName.c)
 *     LdrpFindLoadedDllInternal @ 0x180035624 (LdrpFindLoadedDllInternal.c)
 *     LdrpDrainWorkQueue @ 0x18004AAA4 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x18004B1EC (LdrpDropLastInProgressCount.c)
 *     NtdllpFreeStringRoutine @ 0x18004FA20 (NtdllpFreeStringRoutine.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpFindLoadedDll(unsigned __int16 *a1, __int64 a2, char **a3)
{
  int LoadedDllInternal; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v12[3]; // [rsp+34h] [rbp-CCh] BYREF
  int v13; // [rsp+40h] [rbp-C0h] BYREF
  _WORD *v14; // [rsp+48h] [rbp-B8h]
  _WORD v15[128]; // [rsp+50h] [rbp-B0h] BYREF

  v13 = 0x1000000;
  *a3 = 0LL;
  v11 = 0;
  v14 = v15;
  v15[0] = 0;
  LoadedDllInternal = LdrpPreprocessDllName(a1, (unsigned __int16 *)&v13, 0LL, &v11);
  if ( LoadedDllInternal >= 0 )
  {
    LoadedDllInternal = LdrpFindLoadedDllInternal(&v13, a2, a3, v12, v11);
    if ( LoadedDllInternal >= 0 && v12[0] < 6 && (NtCurrentTeb()->SameTebFlags & 0x1000) == 0 )
    {
      LdrpDereferenceModule(*a3);
      *a3 = 0LL;
      LdrpDrainWorkQueue(0LL);
      LoadedDllInternal = LdrpFindLoadedDllInternal(&v13, a2, a3, v12, v11);
      LdrpDropLastInProgressCount(v8, v7, v9, v10);
      if ( LoadedDllInternal >= 0 && v12[0] != 9 )
      {
        LdrpDereferenceModule(*a3);
        *a3 = 0LL;
        LoadedDllInternal = -1073741515;
      }
    }
  }
  if ( v15 != v14 )
    NtdllpFreeStringRoutine(v14);
  return (unsigned int)LoadedDllInternal;
}
