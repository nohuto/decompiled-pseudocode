/*
 * XREFs of ?IsRebalanceNeeded@@YA_NXZ @ 0x1C00FBB3C
 * Callers:
 *     ?Iterate@@YA_NXZ @ 0x1C00FBB9C (-Iterate@@YA_NXZ.c)
 *     ?NetPacketStateUpdate@@YAXXZ @ 0x1C00FBD80 (-NetPacketStateUpdate@@YAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 */

char IsRebalanceNeeded(void)
{
  char v0; // bl
  _QWORD *i; // rax
  KLockHolder v3; // [rsp+20h] [rbp-28h] BYREF

  v0 = 0;
  v3.m_State = Unlocked;
  v3.m_Lock = (KPushLockBase *)&unk_1C0099EA8;
  v3.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v3);
  for ( i = P; i; i = (_QWORD *)i[3] )
  {
    if ( !*((_DWORD *)i + 4) || *((_BYTE *)i + 20) )
    {
      v0 = 1;
      break;
    }
  }
  KLockHolder::~KLockHolder(&v3);
  return v0;
}
