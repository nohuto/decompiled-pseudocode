/*
 * XREFs of ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x1800998D8
 * Callers:
 *     _CSaDeviceProxy::_CSaDeviceProxy_::_1_::dtor$2 @ 0x180068E0C (_CSaDeviceProxy--_CSaDeviceProxy_--_1_--dtor$2.c)
 * Callees:
 *     ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x18009954C (--_GCResourcePriorityTracker@@QEAAPEAXI@Z.c)
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
