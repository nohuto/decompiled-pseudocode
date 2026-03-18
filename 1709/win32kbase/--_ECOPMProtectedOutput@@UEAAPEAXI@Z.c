/*
 * XREFs of ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00F0BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Destroy@COPMProtectedOutput@@UEAAJXZ @ 0x1C00A1300 (-Destroy@COPMProtectedOutput@@UEAAJXZ.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00EDA20 (--1CMonitorPDO@@UEAA@XZ.c)
 */

COPMProtectedOutput *__fastcall COPMProtectedOutput::`vector deleting destructor'(COPMProtectedOutput *this, char a2)
{
  bool v2; // zf

  v2 = *((_QWORD *)this + 1) == 0LL;
  *(_QWORD *)this = &COPMProtectedOutput::`vftable';
  if ( !v2 )
    COPMProtectedOutput::Destroy(this);
  CMonitorPDO::~CMonitorPDO(this, a2);
  if ( (a2 & 1) != 0 )
    ExFreePoolWithTag(this, 0x4D504F47u);
  return this;
}
