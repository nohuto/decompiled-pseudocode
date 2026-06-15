/*
 * XREFs of ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x18005C568
 * Callers:
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$3 @ 0x180038078 (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$3.c)
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x180038138 (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ATL::CAutoPtr<CResourcePriorityTracker>::~CAutoPtr<CResourcePriorityTracker>(__int64 *a1)
{
  ATL::CAutoPtr<CResourcePriorityTracker>::Free(a1);
}
