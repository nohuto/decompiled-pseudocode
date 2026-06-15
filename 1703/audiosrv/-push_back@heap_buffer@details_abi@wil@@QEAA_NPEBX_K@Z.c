/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x1800289F4
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x180028C00 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180028C78 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x1800453B8 (-SubscribeToEnabledStateChanges@FeatureStateManager@details@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANG.c)
 * Callees:
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180028A4C (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     memcpy_s @ 0x18002A1B0 (memcpy_s.c)
 */

char __fastcall wil::details_abi::heap_buffer::push_back(wil::details_abi::heap_buffer *this, const void *a2)
{
  bool v4; // al
  rsize_t v5; // rdx
  void *v6; // rcx

  v4 = wil::details_abi::heap_buffer::ensure(this, 0x10uLL);
  v5 = 0LL;
  if ( !v4 )
    return 0;
  v6 = (void *)*((_QWORD *)this + 1);
  if ( (unsigned __int64)v6 < *((_QWORD *)this + 2) )
    v5 = *((_QWORD *)this + 2) - (_QWORD)v6;
  memcpy_s(v6, v5, a2, 0x10uLL);
  *((_QWORD *)this + 1) += 16LL;
  return 1;
}
