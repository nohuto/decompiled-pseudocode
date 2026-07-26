/*
 * XREFs of ?IsRebalanceNeeded@@YA_NXZ @ 0x1C00FE50C
 * Callers:
 *     ?Iterate@@YA_NXZ @ 0x1C00FE56C (-Iterate@@YA_NXZ.c)
 *     ?NetPacketStateUpdate@@YAXXZ @ 0x1C00FE750 (-NetPacketStateUpdate@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 */

char IsRebalanceNeeded(void)
{
  char v0; // bl
  _QWORD *i; // rax
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v3.m_State = Unlocked;
  v3.m_Lock = (KPushLockBase *)&unk_1C009ACF8;
  v3.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v3);
  for ( i = qword_1C009AEB0; i; i = (_QWORD *)i[5] )
  {
    if ( !i[3] || *((_BYTE *)i + 32) )
    {
      v0 = 1;
      break;
    }
  }
  KLockHolder::~KLockHolder(&v3);
  return v0;
}
