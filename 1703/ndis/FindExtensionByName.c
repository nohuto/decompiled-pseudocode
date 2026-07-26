/*
 * XREFs of FindExtensionByName @ 0x1C00F250C
 * Callers:
 *     ?GetExtensionForClient@@YAPEAUNET_PACKET_EXTENSION@@PEAUHNETPACKETCLIENT__@@PEBG@Z @ 0x1C00F258C (-GetExtensionForClient@@YAPEAUNET_PACKET_EXTENSION@@PEAUHNETPACKETCLIENT__@@PEBG@Z.c)
 *     NetPacketExtensionAllocate @ 0x1C00F2B80 (NetPacketExtensionAllocate.c)
 * Callees:
 *     ?AcquireShared@KLockHolder@@QEAAXXZ @ 0x1C00B4FC8 (-AcquireShared@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

unsigned __int16 **__fastcall FindExtensionByName(__int64 a1)
{
  unsigned __int16 **i; // rbx
  unsigned __int16 *v3; // rax
  int v4; // r8d
  int v5; // ecx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF

  v7.m_State = Unlocked;
  v7.m_Lock = (KPushLockBase *)&unk_1C0093D90;
  v7.m_Region.m_Entered = 0;
  KLockHolder::AcquireShared(&v7);
  for ( i = (unsigned __int16 **)P; i; i = (unsigned __int16 **)i[3] )
  {
    v3 = *i;
    do
    {
      v4 = *(unsigned __int16 *)((char *)v3 + a1 - (_QWORD)*i);
      v5 = *v3 - v4;
      if ( v5 )
        break;
      ++v3;
    }
    while ( v4 );
    if ( !v5 )
      break;
  }
  KLockHolder::~KLockHolder(&v7);
  return i;
}
