/*
 * XREFs of CemRcTableInitialize @ 0x18001CA58
 * Callers:
 *     ?HampClientInitialize@@YAXKKW4_HAM_CLIENT_TYPE@@PEAU_HAM_CLIENT_CONTEXT@@@Z @ 0x18001C9C4 (-HampClientInitialize@@YAXKKW4_HAM_CLIENT_TYPE@@PEAU_HAM_CLIENT_CONTEXT@@@Z.c)
 *     ?HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z @ 0x18002459C (-HampManagerInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@@Z.c)
 *     ?HampPkgInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_SESSION@@PEAU_HAM_PACKAGE@@@Z @ 0x180046B30 (-HampPkgInitialize@@YAXPEAU_HOST_ACTIVITY_MANAGER@@PEAU_HAM_PACKAGE_INFO@@PEAU_HAM_SESSION@@PEAU.c)
 * Callees:
 *     memset_0 @ 0x180026AAB (memset_0.c)
 */

__int64 __fastcall CemRcTableInitialize(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  memset_0(a2, 0, 0x30uLL);
  *a2 = 0LL;
  a2[1] = 0LL;
  RtlInitializeSRWLock(a2 + 2);
  result = RtlInitializeConditionVariable(a2 + 4);
  a2[3] = a1;
  return result;
}
