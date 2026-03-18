/*
 * XREFs of ??1CAutoMutex@@QEAA@XZ @ 0x1C006D910
 * Callers:
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@KPEAVCMutex@@@Z @ 0x1C00ED3F8 (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 * Callees:
 *     <none>
 */

void __fastcall CAutoMutex::~CAutoMutex(struct _KMUTANT ***this)
{
  struct _KMUTANT *v2; // rcx

  v2 = **this;
  if ( v2 )
    KeReleaseMutex(v2, 0);
  *this = 0LL;
}
