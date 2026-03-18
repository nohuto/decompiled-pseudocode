/*
 * XREFs of MiReturnPfnReferenceCount @ 0x14004CD68
 * Callers:
 *     MiIdealClusterPage @ 0x140269D08 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x14026A8A4 (MiMakeImagePageOk.c)
 *     MiCreateNewSection @ 0x1404BE6AC (MiCreateNewSection.c)
 *     MiCreateImageFileMap @ 0x1404BF468 (MiCreateImageFileMap.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x14057A8C0 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiFillPerSessionProtos @ 0x140754D84 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140030AF8 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(ULONG_PTR a1)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  result = MiRemoveLockedPageChargeAndDecRef(a1, v3, v4, v5);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
