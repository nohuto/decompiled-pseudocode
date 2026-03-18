/*
 * XREFs of ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BFF50
 * Callers:
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00BFFD0 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00C51F0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00C0058 (--_GCMutex@@QEAAPEAXI@Z.c)
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C00C00F0 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 */

void __fastcall CMonitorPDO::~CMonitorPDO(CMonitorPDO *this)
{
  unsigned int v2; // edx
  void *v3; // rcx

  *(_QWORD *)this = &CMonitorPDO::`vftable';
  if ( *((_QWORD *)this + 1) )
  {
    CMonitorPDO::Destroy(this);
    v3 = (void *)*((_QWORD *)this + 1);
    if ( v3 )
      CMutex::`scalar deleting destructor'(v3, v2);
  }
  *((_QWORD *)this + 1) = 0LL;
}
