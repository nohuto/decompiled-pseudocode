/*
 * XREFs of ?push_back@heap_buffer@details_abi@wil@@QEAA_NPEBX_K@Z @ 0x18001D74C
 * Callers:
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18001D958 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x180029870 (-WilApiImpl_SubscribeFeatureStateChangeNotification@details@wil@@YAXPEAPEAUFEATURE_STATE_CHANGE_.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180029A28 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18001D640 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x180194E10 (_invalid_parameter_noinfo.c)
 *     memset @ 0x180194E50 (memset.c)
 */

bool __fastcall wil::details_abi::heap_buffer::push_back(wil::details_abi::heap_buffer *this, _OWORD *a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  bool result; // al
  _OWORD *v7; // rcx
  unsigned __int64 v8; // rbx
  size_t v9; // rbx

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
    v8 = *((_QWORD *)this + 2);
    if ( (unsigned __int64)v7 < v8 )
      v9 = v8 - (_QWORD)v7;
    else
      v9 = 0LL;
    if ( !v7 )
      goto LABEL_9;
    if ( a2 && v9 >= 0x10 )
    {
      *v7 = *a2;
    }
    else
    {
      memset(v7, 0, v9);
      if ( !a2 )
      {
LABEL_9:
        *(_DWORD *)_o__errno() = 22;
LABEL_16:
        invalid_parameter_noinfo();
        goto LABEL_17;
      }
      if ( v9 < 0x10 )
      {
        *(_DWORD *)_o__errno() = 34;
        goto LABEL_16;
      }
    }
LABEL_17:
    *((_QWORD *)this + 1) += 16LL;
    return 1;
  }
  return result;
}
