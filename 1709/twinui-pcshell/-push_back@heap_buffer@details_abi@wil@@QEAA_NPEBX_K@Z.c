/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001E228
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001E3B0 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18002982C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x18002A8C4 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001E11C (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x1801E2E30 (_invalid_parameter_noinfo.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(wil::details_abi::heap_buffer *this, _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  bool result; // al
  _OWORD *v7; // rcx
  __int64 v8; // rax
  unsigned __int64 v9; // rdi

  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( *((_QWORD *)this + 1) - *(_QWORD *)this + 16LL < v4 )
    goto LABEL_5;
  v5 = 16LL;
  if ( 2 * v4 > 0x10 )
    v5 = 2 * v4;
  result = wil::details_abi::heap_buffer::reserve(this, v5);
  if ( result )
  {
LABEL_5:
    v7 = (_OWORD *)*((_QWORD *)this + 1);
    v8 = *((_QWORD *)this + 2) - (_QWORD)v7;
    v9 = v8 & -(__int64)((unsigned __int64)v7 < *((_QWORD *)this + 2));
    if ( !v7 )
    {
LABEL_6:
      *(_DWORD *)_o__errno() = 22;
LABEL_13:
      invalid_parameter_noinfo();
      goto LABEL_14;
    }
    if ( a2 && v9 >= 0x10 )
    {
      *v7 = *a2;
    }
    else
    {
      memset(v7, 0, v8 & -(__int64)((unsigned __int64)v7 < *((_QWORD *)this + 2)));
      if ( !a2 )
        goto LABEL_6;
      if ( v9 < 0x10 )
      {
        *(_DWORD *)_o__errno() = 34;
        goto LABEL_13;
      }
    }
LABEL_14:
    *((_QWORD *)this + 1) += 16LL;
    return 1;
  }
  return result;
}
