/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00C51F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BFF50 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C00C55D0 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  CMonitorPDO::~CMonitorPDO(this);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0x4D504F47u);
  return this;
}
