/*
 * XREFs of ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00E85B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00E8570 (--1CMonitorPDO@@UEAA@XZ.c)
 */

CMonitorPDO *__fastcall CMonitorPDO::`vector deleting destructor'(CMonitorPDO *P, char a2)
{
  char *v4; // rdi
  __int64 v5; // rsi
  CMonitorPDO *i; // rbx

  if ( (a2 & 2) != 0 )
  {
    v4 = (char *)P - 8;
    v5 = *((_QWORD *)P - 1);
    for ( i = (CMonitorPDO *)((char *)P + 72 * v5); v5; --v5 )
    {
      i = (CMonitorPDO *)((char *)i - 72);
      CMonitorPDO::~CMonitorPDO(i, a2);
    }
    if ( (a2 & 1) != 0 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4D504F47u);
    }
    return (CMonitorPDO *)v4;
  }
  else
  {
    CMonitorPDO::~CMonitorPDO(P, a2);
    if ( (a2 & 1) != 0 && P )
      ExFreePoolWithTag(P, 0x4D504F47u);
    return P;
  }
}
