/*
 * XREFs of ?InsertExtension@@YAXPEAUNET_PACKET_EXTENSION@@@Z @ 0x1C00F25CC
 * Callers:
 *     NetPacketExtensionAllocate @ 0x1C00F2B80 (NetPacketExtensionAllocate.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 */

void __fastcall InsertExtension(struct NET_PACKET_EXTENSION *a1)
{
  size_t *v2; // rdx
  size_t v3; // rax
  _QWORD *v4; // rax
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  v5.m_State = Unlocked;
  v5.m_Lock = (KPushLockBase *)&unk_1C0093D90;
  v5.m_Region.m_Entered = 0;
  KLockHolder::AcquireExclusive(&v5);
  v2 = (size_t *)&P;
  if ( P )
  {
    do
    {
      v3 = *v2;
      if ( *(_DWORD *)(*v2 + 12) >= HIDWORD(a1->Name) )
        break;
      v2 = (size_t *)(v3 + 24);
    }
    while ( *(_QWORD *)(v3 + 24) );
  }
  a1->ExtensionSize = *v2;
  *v2 = (size_t)a1;
  v4 = P;
  do
  {
    if ( !v4 )
      break;
    v4 = (_QWORD *)v4[3];
  }
  while ( v4 );
  KLockHolder::~KLockHolder(&v5);
}
