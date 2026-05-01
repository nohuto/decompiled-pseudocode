/*
 * XREFs of CempQueryUnbiasedInterruptTimeMs @ 0x18001FBDC
 * Callers:
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z @ 0x180010B70 (-AcquireInternalResources@ResourceSet@ExecutionModel@@QEAAJW4Enum@PendType@2@PEA_N@Z.c)
 *     ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180011784 (-LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     ?CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z @ 0x18001191C (-CheckUpdatePendStats@ResourceSet@ExecutionModel@@AEAAXKK@Z.c)
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z @ 0x180043BC8 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 CempQueryUnbiasedInterruptTimeMs()
{
  __int64 v0; // rdx
  unsigned __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  RtlQueryUnbiasedInterruptTime(&v2);
  v0 = (v2 / 0xA * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  return (v0 + ((v2 / 0xA - v0) >> 1)) >> 9;
}
