/*
 * XREFs of ?ReleaseShared@KLockHolder@@QEAAXXZ @ 0x1C00DA0C0
 * Callers:
 *     ?ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z @ 0x1C00B51F8 (-ndisDeliverBindCompleteEvent@@YAXPEAUNDIS_BIND_PROTOCOL_DRIVER@@@Z.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BAD34 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KLockHolder::ReleaseShared(KLockHolder *this)
{
  ExReleasePushLockEx(this->m_Lock, 0LL);
  this->m_State = Unlocked;
  this->m_Region.m_Entered = 0;
  KeLeaveCriticalRegion();
}
