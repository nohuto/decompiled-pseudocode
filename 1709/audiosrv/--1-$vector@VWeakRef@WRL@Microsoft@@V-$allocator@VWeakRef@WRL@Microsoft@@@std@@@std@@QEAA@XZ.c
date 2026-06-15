/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18005C670
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$9 @ 0x1800380DE (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$9.c)
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$2 @ 0x180038219 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(__int64 a1)
{
  std::vector<Microsoft::WRL::WeakRef>::_Tidy(a1);
}
