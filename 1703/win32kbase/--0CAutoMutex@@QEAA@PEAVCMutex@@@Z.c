/*
 * XREFs of ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C006D940
 * Callers:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C00ED3F8 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C006D9A0 (-Lock@CMutex@@QEAAXXZ.c)
 */

CAutoMutex *__fastcall CAutoMutex::CAutoMutex(CAutoMutex *this, struct CMutex *a2)
{
  *(_QWORD *)this = a2;
  CMutex::Lock(a2);
  return this;
}
