/*
 * XREFs of ?NetPacketStateUpdate@@YAXXZ @ 0x1C00F289C
 * Callers:
 *     ?NetPacketStateUpdateWorker@@YAXPEAX@Z @ 0x1C00F2990 (-NetPacketStateUpdateWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?IsRebalanceNeeded@@YA_NXZ @ 0x1C00F2654 (-IsRebalanceNeeded@@YA_NXZ.c)
 *     ?Iterate@@YA_NXZ @ 0x1C00F26B4 (-Iterate@@YA_NXZ.c)
 */

void NetPacketStateUpdate(void)
{
  char v0; // bl
  _QWORD *i; // rax
  KLockHolder v2; // [rsp+20h] [rbp-30h] BYREF
  KLockHolder v3; // [rsp+38h] [rbp-18h] BYREF

  while ( 1 )
  {
    if ( !IsRebalanceNeeded() )
    {
      v2.m_State = Unlocked;
      v2.m_Lock = (KPushLockBase *)&unk_1C0093D98;
      v2.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v2);
      for ( i = qword_1C0094158; ; i = (_QWORD *)i[1] )
      {
        if ( !i )
        {
          KLockHolder::~KLockHolder(&v2);
          v0 = 1;
          goto LABEL_9;
        }
        if ( *((_BYTE *)i + 5) || *(_DWORD *)i != 6 )
          break;
      }
      KLockHolder::~KLockHolder(&v2);
    }
    v0 = 0;
LABEL_9:
    v3.m_State = Unlocked;
    v3.m_Lock = (KPushLockBase *)&unk_1C00940C0;
    v3.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v3);
    if ( !byte_1C0094151 )
      break;
    byte_1C0094151 = 0;
    KLockHolder::ReleaseExclusive(&v3);
    while ( Iterate() )
      ;
    KLockHolder::~KLockHolder(&v3);
  }
  byte_1C0094160 = 0;
  if ( v0 )
    KeSetEvent(&Event, 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
