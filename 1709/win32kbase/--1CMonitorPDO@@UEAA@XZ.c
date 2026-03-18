/*
 * XREFs of ??1CMonitorPDO@@UEAA@XZ @ 0x1C00EDA20
 * Callers:
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00EDA60 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00F0BD0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?Destroy@CMonitorPDO@@UEAAJXZ @ 0x1C00A17C0 (-Destroy@CMonitorPDO@@UEAAJXZ.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00EDAE8 (--_GCMutex@@QEAAPEAXI@Z.c)
 */

void __fastcall CMonitorPDO::~CMonitorPDO(CMonitorPDO *this, unsigned int a2)
{
  bool v2; // zf
  void *v4; // rcx

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &CMonitorPDO::`vftable';
  if ( !v2 )
    CMonitorPDO::Destroy(this);
  v4 = (void *)*((_QWORD *)this + 1);
  if ( v4 )
    CMutex::`scalar deleting destructor'(v4, a2);
  *((_QWORD *)this + 1) = 0LL;
}
