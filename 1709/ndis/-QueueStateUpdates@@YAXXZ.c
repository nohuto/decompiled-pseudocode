/*
 * XREFs of ?QueueStateUpdates@@YAXXZ @ 0x1C00FBE84
 * Callers:
 *     NetPacketClientPauseComplete @ 0x1C00FBF00 (NetPacketClientPauseComplete.c)
 *     NetPacketDeregisterClient @ 0x1C00FBF20 (NetPacketDeregisterClient.c)
 *     NetPacketExtensionAllocate @ 0x1C00FC070 (NetPacketExtensionAllocate.c)
 *     NetPacketExtensionFree @ 0x1C00FC1C0 (NetPacketExtensionFree.c)
 *     NetPacketRegisterClient @ 0x1C00FC470 (NetPacketRegisterClient.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

void QueueStateUpdates(void)
{
  KLockHolder v0; // [rsp+20h] [rbp-28h] BYREF

  v0.m_State = Unlocked;
  v0.m_Lock = (KPushLockBase *)&unk_1C009A0A0;
  v0.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v0);
  byte_1C009A121 = 1;
  if ( !byte_1C009A130 )
  {
    byte_1C009A130 = 1;
    ExQueueWorkItem(&g_NetPacketStateUpdateWorkItem, NormalWorkQueue);
    KeClearEvent(&Event);
  }
  KLockHolder::~KLockHolder(&v0);
}
