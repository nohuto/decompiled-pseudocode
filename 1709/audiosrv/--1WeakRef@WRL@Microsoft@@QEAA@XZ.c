/*
 * XREFs of ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x18005AC68
 * Callers:
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$2 @ 0x180037FE2 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$2.c)
 *     _CBaseStreamGroupProxy::GetProcessSubmix_::_1_::dtor$5 @ 0x180038006 (_CBaseStreamGroupProxy--GetProcessSubmix_--_1_--dtor$5.c)
 *     _CDeviceGraphObjectsStore::FindFirstMatchingSaDevice_::_1_::dtor$2 @ 0x180038241 (_CDeviceGraphObjectsStore--FindFirstMatchingSaDevice_--_1_--dtor$2.c)
 *     _CAudioResourceManager::DestroyStream_::_1_::dtor$6 @ 0x1800384A9 (_CAudioResourceManager--DestroyStream_--_1_--dtor$6.c)
 *     _CSharedStreamGroupProxy::RuntimeClassInitialize_::_1_::dtor$2 @ 0x180039B77 (_CSharedStreamGroupProxy--RuntimeClassInitialize_--_1_--dtor$2.c)
 *     _CMMNotificationDelegator::_CMMNotificationDelegator_::_1_::dtor$1 @ 0x18009249E (_CMMNotificationDelegator--_CMMNotificationDelegator_--_1_--dtor$1.c)
 *     __lambda_530575f8b419a08780554bb070101504_::operator()_::_1_::dtor$0 @ 0x180092582 (__lambda_530575f8b419a08780554bb070101504_--operator()_--_1_--dtor$0.c)
 *     _CDeviceGraphObjectsStore::GetAllStreamGroups_::_1_::dtor$1 @ 0x180096919 (_CDeviceGraphObjectsStore--GetAllStreamGroups_--_1_--dtor$1.c)
 *     _CDeviceGraphObjectsStore::GetConnectedStreamGroups_::_1_::dtor$1 @ 0x180096D1C (_CDeviceGraphObjectsStore--GetConnectedStreamGroups_--_1_--dtor$1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Microsoft::WRL::WeakRef::~WeakRef(volatile signed __int32 **this)
{
  volatile signed __int32 *v2; // rcx
  void (*v3)(void); // rax

  v2 = *this;
  if ( v2 )
  {
    *this = 0LL;
    v3 = *(void (**)(void))(*(_QWORD *)v2 + 16LL);
    if ( (char *)v3 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v2);
    else
      v3();
  }
}
