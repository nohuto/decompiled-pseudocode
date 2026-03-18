/*
 * XREFs of ??0CMutex@@QEAA@PEAJ@Z @ 0x1C0074C90
 * Callers:
 *     OPMInitialize @ 0x1C00749FC (OPMInitialize.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00A1890 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 * Callees:
 *     <none>
 */

CMutex *__fastcall CMutex::CMutex(CMutex *this, int *a2)
{
  struct _KMUTANT *PoolWithTag; // rax

  *(_QWORD *)this = 0LL;
  if ( *a2 >= 0 )
  {
    PoolWithTag = (struct _KMUTANT *)ExAllocatePoolWithTag((POOL_TYPE)512, 0x38uLL, 0x4D504F47u);
    *(_QWORD *)this = PoolWithTag;
    if ( PoolWithTag )
      KeInitializeMutex(PoolWithTag, 0);
    else
      *a2 = -1073741801;
  }
  return this;
}
