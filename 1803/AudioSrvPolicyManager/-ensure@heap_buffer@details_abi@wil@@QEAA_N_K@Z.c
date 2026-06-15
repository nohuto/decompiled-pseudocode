/*
 * XREFs of ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180004384
 * Callers:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180004A78 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 *     ?SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@P6AXPEAX@Z1@Z @ 0x18000585C (-SubscribeUnderLock@SubscriptionList@details_abi@wil@@QEAAXPEAPEAUFEATURE_STATE_CHANGE_SUBSCRIPT.c)
 *     ?QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z @ 0x1800060C0 (-QueueBackgroundSRUMUsageReporting@details@wil@@YAXIII@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePropertyCache@@@Z @ 0x180006664 (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATwil_details_FeaturePro.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800067BC (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 * Callees:
 *     memcpy_s @ 0x180001570 (memcpy_s.c)
 */

char __fastcall wil::details_abi::heap_buffer::ensure(wil::details_abi::heap_buffer *this, unsigned __int64 a2)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v4; // rcx
  unsigned __int64 v6; // rbx
  HANDLE ProcessHeap; // rax
  char *v8; // rax
  char v9; // bp
  char *v10; // rsi
  rsize_t v11; // r15
  char *v12; // r14
  HANDLE v13; // rax

  v3 = a2;
  v4 = *((_QWORD *)this + 2) - *(_QWORD *)this;
  if ( a2 + *((_QWORD *)this + 1) - *(_QWORD *)this < v4 )
    return 1;
  if ( a2 < 2 * v4 )
    v3 = 2 * v4;
  if ( v4 >= v3 )
    return 1;
  v6 = (v3 & 0xFFFFFFFFFFFFFFC0uLL) + 64;
  ProcessHeap = GetProcessHeap();
  v8 = (char *)HeapAlloc(ProcessHeap, 0, v6);
  v9 = 0;
  v10 = v8;
  if ( v8 )
  {
    v11 = *((_QWORD *)this + 1) - *(_QWORD *)this;
    memcpy_s(v8, v6, *(const void *const *)this, v11);
    v12 = (char *)*((_QWORD *)this + 3);
    if ( v10 != v12 )
    {
      if ( v12 )
      {
        v13 = GetProcessHeap();
        HeapFree(v13, 0, v12);
      }
      *((_QWORD *)this + 3) = v10;
    }
    *(_QWORD *)this = v10;
    *((_QWORD *)this + 1) = &v10[v11];
    *((_QWORD *)this + 2) = &v10[v6];
    return 1;
  }
  return v9;
}
