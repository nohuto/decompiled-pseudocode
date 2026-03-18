/*
 * XREFs of KeRestoreProcessorSpecificFeatures @ 0x140203D30
 * Callers:
 *     PnprQuiesceProcessorDpc @ 0x14042CDC0 (PnprQuiesceProcessorDpc.c)
 *     PopHandleNextState @ 0x140439818 (PopHandleNextState.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KiRestoreFeatureBits @ 0x140208B60 (KiRestoreFeatureBits.c)
 *     KiDisableCacheErrataSource @ 0x14020B584 (KiDisableCacheErrataSource.c)
 *     KiSetPageAttributesTable @ 0x1404269A4 (KiSetPageAttributesTable.c)
 *     KiRestoreXSaveSupport @ 0x14042E878 (KiRestoreXSaveSupport.c)
 */

__int64 KeRestoreProcessorSpecificFeatures()
{
  unsigned __int64 v5; // rax

  KiSetPageAttributesTable();
  if ( KiTLBCOverride )
    KiDisableCacheErrataSource();
  _RAX = 2147483649LL;
  __asm { cpuid }
  if ( (_RDX & 0x2000000) != 0 )
  {
    _RCX = 3221225600LL;
    v5 = __readmsr(0xC0000080) | 0x4000;
    _RDX = HIDWORD(v5);
    __writemsr(0xC0000080, v5);
  }
  KiRestoreXSaveSupport(_RCX, _RDX);
  return KiRestoreFeatureBits();
}
