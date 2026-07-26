/*
 * XREFs of ??0KPushLock@@QEAA@XZ @ 0x1C00FC8C0
 * Callers:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0024BC8 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     DriverEntry @ 0x1C011D0D0 (DriverEntry.c)
 *     ?ndisBindInitialize@@YAJXZ @ 0x1C011E688 (-ndisBindInitialize@@YAJXZ.c)
 * Callees:
 *     <none>
 */

KPushLock *__fastcall KPushLock::KPushLock(KPushLock *this)
{
  this->m_Lock.Value = 0LL;
  return this;
}
