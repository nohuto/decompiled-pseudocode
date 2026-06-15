/*
 * XREFs of ??1?$vector@VWeakRef@WRL@Microsoft@@V?$allocator@VWeakRef@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x18007CD50
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$8 @ 0x180059DE1 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$8.c)
 *     _CDeviceGraphObjectsStore::CDeviceGraphObjectsStore_::_1_::dtor$2 @ 0x180059E47 (_CDeviceGraphObjectsStore--CDeviceGraphObjectsStore_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall std::vector<Microsoft::WRL::WeakRef>::~vector<Microsoft::WRL::WeakRef>(volatile signed __int32 ***a1)
{
  std::vector<Microsoft::WRL::WeakRef>::_Tidy(a1);
}
