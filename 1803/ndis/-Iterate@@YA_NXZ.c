/*
 * XREFs of ?Iterate@@YA_NXZ @ 0x1C00FE56C
 * Callers:
 *     ?NetPacketStateUpdate@@YAXXZ @ 0x1C00FE750 (-NetPacketStateUpdate@@YAXXZ.c)
 * Callees:
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00B497C (-RebalanceExtensions@@YAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE20 (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BEE50 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BEEB4 (--1KLockHolder@@QEAA@XZ.c)
 *     ?IsRebalanceNeeded@@YA_NXZ @ 0x1C00FE50C (-IsRebalanceNeeded@@YA_NXZ.c)
 *     ?MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z @ 0x1C00FE6A4 (-MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z.c)
 */

char Iterate(void)
{
  char v0; // bp
  _DWORD *v1; // rsi
  struct NET_PACKET_CLIENT *v2; // rcx
  char v3; // di
  unsigned int i; // eax
  struct NET_PACKET_CLIENT *v5; // rbx
  struct NET_PACKET_CLIENT *v6; // rax
  struct NET_PACKET_CLIENT **v7; // rdx
  KLockHolder v9; // [rsp+20h] [rbp-28h] BYREF

  v0 = IsRebalanceNeeded();
  v9.m_Region.m_Entered = 0;
  v1 = &unk_1C008A500;
  if ( !v0 )
    v1 = &unk_1C008A4E8;
  v9.m_State = Unlocked;
  v9.m_Lock = (KPushLockBase *)&unk_1C009AD00;
  KLockHolder::AcquireExclusive(&v9);
  v2 = qword_1C009B088;
  v3 = 1;
  if ( !qword_1C009B088 )
  {
LABEL_9:
    for ( i = 0; i < 5; ++i )
    {
      v5 = v2;
      if ( v2 )
      {
        while ( *(_DWORD *)v5 != *v1 )
        {
          v5 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v5 + 1);
          if ( !v5 )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v5 = 0LL;
      }
      if ( v5 )
        break;
      ++v1;
    }
    KLockHolder::ReleaseExclusive(&v9);
    if ( v5 )
    {
      if ( *(_DWORD *)v5 != 7 )
      {
        MoveClientToNextState(v5);
        goto LABEL_26;
      }
    }
    else if ( v0 )
    {
      RebalanceExtensions();
      goto LABEL_26;
    }
    v3 = 0;
    goto LABEL_26;
  }
  while ( !*((_BYTE *)v2 + 5) )
  {
    if ( *((_BYTE *)v2 + 4) )
    {
      *((_BYTE *)v2 + 4) = 0;
      *(_DWORD *)v2 = 8;
    }
    v2 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v2 + 1);
    if ( !v2 )
    {
      v2 = qword_1C009B088;
      goto LABEL_9;
    }
  }
  v6 = qword_1C009B088;
  v7 = &qword_1C009B088;
  while ( v6 != v2 )
  {
    v7 = (struct NET_PACKET_CLIENT **)((char *)v6 + 8);
    v6 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v6 + 1);
  }
  *v7 = (struct NET_PACKET_CLIENT *)*((_QWORD *)v2 + 1);
  ExFreePoolWithTag(v2, 0x6C43784Eu);
LABEL_26:
  KLockHolder::~KLockHolder(&v9);
  return v3;
}
