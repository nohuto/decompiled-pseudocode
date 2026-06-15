/*
 * XREFs of ?ReevaluateSaDevicesForEndpoint@CAudioResourceManager@@KAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x1800AC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18002AA50 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?AcquireShutdownLock@CAudioResourceManager@@IEAA?AVSyncLockCriticalSection@Details@Wrappers@WRL@Microsoft@@XZ @ 0x1800AA4B8 (-AcquireShutdownLock@CAudioResourceManager@@IEAA-AVSyncLockCriticalSection@Details@Wrappers@WRL@.c)
 *     ?ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z @ 0x1800ABF78 (-ReevaluateSaDeviceSettings@CAudioResourceManager@@IEAAXPEBG@Z.c)
 *     ?begin@?$deque@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@V?$allocator@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@2@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$shared_ptr@USaDeviceReevaluationContext@@@std@@@std@@@std@@@2@XZ @ 0x1800C50DC (-begin@-$deque@V-$shared_ptr@USaDeviceReevaluationContext@@@std@@V-$allocator@V-$shared_ptr@USaD.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CAudioResourceManager::ReevaluateSaDevicesForEndpoint(
        PTP_CALLBACK_INSTANCE Instance,
        _QWORD *Context,
        PTP_TIMER Timer)
{
  __int64 v4; // rdx
  CAudioResourceManager *v5; // rcx
  __int64 v6; // rax
  const unsigned __int16 ***v7; // rbx
  std::_Ref_count_base *v8; // rcx
  _BYTE v10[32]; // [rsp+28h] [rbp-20h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+58h] [rbp+10h] BYREF

  CAudioResourceManager::AcquireShutdownLock((__int64)Context, (__int64)&lpCriticalSection);
  if ( *((_BYTE *)Context + 80) )
  {
    v4 = std::deque<std::shared_ptr<SaDeviceReevaluationContext>>::begin(Context + 11, v10);
    v5 = *(CAudioResourceManager **)v4;
    if ( *(_QWORD *)v4 )
      v6 = *(_QWORD *)v5;
    else
      v6 = 0LL;
    v7 = *(const unsigned __int16 ****)(*(_QWORD *)(v6 + 8) + 8 * (*(_QWORD *)(v4 + 16) & (*(_QWORD *)(v6 + 16) - 1LL)));
    CAudioResourceManager::ReevaluateSaDeviceSettings(v5, **v7);
    CloseThreadpoolTimer((PTP_TIMER)(*v7)[1]);
    v8 = *(std::_Ref_count_base **)(*(_QWORD *)(Context[12] + 8 * (Context[14] & (Context[13] - 1LL))) + 8LL);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
    if ( Context[15]-- == 1LL )
      Context[14] = 0LL;
    else
      ++Context[14];
  }
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
}
