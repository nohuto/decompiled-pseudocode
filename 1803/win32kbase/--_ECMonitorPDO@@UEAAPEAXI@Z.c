/*
 * XREFs of ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00BFFD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00BFF50 (--1CMonitorPDO@@UEAA@XZ.c)
 *     ??_I@YAXPEAX_K1P6AX0@Z@Z @ 0x1C00C0088 (--_I@YAXPEAX_K1P6AX0@Z@Z.c)
 */

char *__fastcall CMonitorPDO::`vector deleting destructor'(char *P, char a2)
{
  int v3; // esi
  char *v4; // rdi

  v3 = a2 & 1;
  if ( (a2 & 2) != 0 )
  {
    v4 = P - 8;
    `vector destructor iterator'(P, 0x48uLL, *((_QWORD *)P - 1), (void (*)(void *))CMonitorPDO::~CMonitorPDO);
    if ( v3 )
    {
      if ( v4 )
        ExFreePoolWithTag(v4, 0x4D504F47u);
    }
    return v4;
  }
  else
  {
    CMonitorPDO::~CMonitorPDO((CMonitorPDO *)P);
    if ( v3 && P )
      ExFreePoolWithTag(P, 0x4D504F47u);
    return P;
  }
}
