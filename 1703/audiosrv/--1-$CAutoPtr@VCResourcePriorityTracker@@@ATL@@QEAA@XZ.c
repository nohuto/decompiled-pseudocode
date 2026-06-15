/*
 * XREFs of ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x18007CC6C
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x180059C1C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$2.c)
 *     _CBaseStreamGroupProxy::_CBaseStreamGroupProxy_::_1_::dtor$3 @ 0x180059D8E (_CBaseStreamGroupProxy--_CBaseStreamGroupProxy_--_1_--dtor$3.c)
 * Callees:
 *     ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x18007C978 (--_GCResourcePriorityTracker@@QEAAPEAXI@Z.c)
 */

CResourcePriorityTracker *__fastcall ATL::CAutoPtr<CResourcePriorityTracker>::~CAutoPtr<CResourcePriorityTracker>(
        CResourcePriorityTracker **a1)
{
  CResourcePriorityTracker *v2; // rcx
  CResourcePriorityTracker *result; // rax

  v2 = *a1;
  if ( v2 )
    result = CResourcePriorityTracker::`scalar deleting destructor'(v2);
  *a1 = 0LL;
  return result;
}
