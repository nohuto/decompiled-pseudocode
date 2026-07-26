/*
 * XREFs of ?QueueStateUpdates@@YAXXZ @ 0x1C00F299C
 * Callers:
 *     NetPacketClientPauseComplete @ 0x1C00F2A10 (NetPacketClientPauseComplete.c)
 *     NetPacketDeregisterClient @ 0x1C00F2A30 (NetPacketDeregisterClient.c)
 *     NetPacketExtensionAllocate @ 0x1C00F2B80 (NetPacketExtensionAllocate.c)
 *     NetPacketExtensionFree @ 0x1C00F2CD0 (NetPacketExtensionFree.c)
 *     NetPacketRegisterClient @ 0x1C00F2F80 (NetPacketRegisterClient.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void QueueStateUpdates(void)
{
  KLockHolder v0; // [rsp+20h] [rbp-28h] BYREF

  v0.m_State = Unlocked;
  v0.m_Lock = (KPushLockBase *)&unk_1C00940C0;
  v0.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v0);
  byte_1C0094151 = 1;
  if ( !byte_1C0094160 )
  {
    byte_1C0094160 = 1;
    ExQueueWorkItem(&g_NetPacketStateUpdateWorkItem, NormalWorkQueue);
    KeClearEvent(&Event);
  }
  KLockHolder::~KLockHolder(&v0);
}
