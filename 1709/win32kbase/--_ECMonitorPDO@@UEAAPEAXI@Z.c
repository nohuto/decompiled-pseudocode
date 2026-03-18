/*
 * XREFs of ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00EDA60
 * Callers:
 *     <none>
 * Callees:
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00965A0 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00EDA20 (--1CMonitorPDO@@UEAA@XZ.c)
 */

char *__fastcall CMonitorPDO::`vector deleting destructor'(char *P, char a2)
{
  char *v4; // rdi

  if ( (a2 & 2) != 0 )
  {
    v4 = P - 8;
    `vector destructor iterator'(P, 72LL, *((_QWORD *)P - 1), (void (__fastcall *)(char *))CMonitorPDO::~CMonitorPDO);
    if ( (a2 & 1) != 0 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4D504F47u);
    }
    return v4;
  }
  else
  {
    CMonitorPDO::~CMonitorPDO((CMonitorPDO *)P, a2);
    if ( (a2 & 1) != 0 && P )
      ExFreePoolWithTag(P, 0x4D504F47u);
    return P;
  }
}
