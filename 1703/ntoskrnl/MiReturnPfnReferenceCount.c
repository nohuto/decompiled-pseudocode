/*
 * XREFs of MiReturnPfnReferenceCount @ 0x14005EAC8
 * Callers:
 *     MiIdealClusterPage @ 0x1402224A8 (MiIdealClusterPage.c)
 *     MiMakeImagePageOk @ 0x140222D1C (MiMakeImagePageOk.c)
 *     MiReleaseProcessReferenceToSessionDataPage @ 0x1404515C8 (MiReleaseProcessReferenceToSessionDataPage.c)
 *     MiCreateImageFileMap @ 0x1404921D4 (MiCreateImageFileMap.c)
 *     MiCreateNewSection @ 0x1404933A8 (MiCreateNewSection.c)
 *     MiFillPerSessionProtos @ 0x1406BE094 (MiFillPerSessionProtos.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400CCB60 (MiRemoveLockedPageChargeAndDecRef.c)
 */

__int64 __fastcall MiReturnPfnReferenceCount(__int64 a1)
{
  unsigned __int64 v2; // rbx
  __int64 result; // rax

  v2 = (unsigned __int8)MiLockPageInline(a1);
  result = MiRemoveLockedPageChargeAndDecRef(a1);
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v2);
  return result;
}
