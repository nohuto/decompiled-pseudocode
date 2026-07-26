/*
 * XREFs of ?NetPacketStateUpdate@@YAXXZ @ 0x1C00FBD80
 * Callers:
 *     ?NetPacketStateUpdateWorker@@YAXPEAX@Z @ 0x1C00FBE70 (-NetPacketStateUpdateWorker@@YAXPEAX@Z.c)
 * Callees:
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDC84 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?IsRebalanceNeeded@@YA_NXZ @ 0x1C00FBB3C (-IsRebalanceNeeded@@YA_NXZ.c)
 *     ?Iterate@@YA_NXZ @ 0x1C00FBB9C (-Iterate@@YA_NXZ.c)
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
      v2.m_Lock = (KPushLockBase *)&unk_1C0099EB0;
      v2.m_Region.m_Entered = 0;
      KLockHolder::AcquireExclusive(&v2);
      for ( i = qword_1C009A128; ; i = (_QWORD *)i[1] )
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
    v3.m_Lock = (KPushLockBase *)&unk_1C009A0A0;
    v3.m_Region.m_Entered = 0;
    KLockHolder::AcquireExclusive(&v3);
    if ( !byte_1C009A121 )
      break;
    byte_1C009A121 = 0;
    KLockHolder::ReleaseExclusive(&v3);
    while ( Iterate() )
      ;
    KLockHolder::~KLockHolder(&v3);
  }
  byte_1C009A130 = 0;
  if ( v0 )
    KeSetEvent(&Event, 0, 0);
  KLockHolder::~KLockHolder(&v3);
}
