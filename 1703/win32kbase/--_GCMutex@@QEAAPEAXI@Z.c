/*
 * XREFs of ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00E8650
 * Callers:
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C00E8320 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ??1CMonitorPDO@@UEAA@XZ @ 0x1C00E8570 (--1CMonitorPDO@@UEAA@XZ.c)
 * Callees:
 *     ??1CMutex@@QEAA@XZ @ 0x1C006D970 (--1CMutex@@QEAA@XZ.c)
 */

void **__fastcall CMutex::`scalar deleting destructor'(void **P)
{
  CMutex::~CMutex(P);
  if ( P )
    ExFreePoolWithTag(P, 0x4D504F47u);
  return P;
}
