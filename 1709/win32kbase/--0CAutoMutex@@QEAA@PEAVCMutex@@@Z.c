/*
 * XREFs of ??0CAutoMutex@@QEAA@PEAVCMutex@@@Z @ 0x1C0074BE0
 * Callers:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C0074D38 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 * Callees:
 *     ?Lock@CMutex@@QEAAXXZ @ 0x1C0074C60 (-Lock@CMutex@@QEAAXXZ.c)
 */

CAutoMutex *__fastcall CAutoMutex::CAutoMutex(CAutoMutex *this, struct CMutex *a2)
{
  *(_QWORD *)this = a2;
  CMutex::Lock(a2);
  return this;
}
