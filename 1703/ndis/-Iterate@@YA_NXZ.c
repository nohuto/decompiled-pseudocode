/*
 * XREFs of ?Iterate@@YA_NXZ @ 0x1C00F26B4
 * Callers:
 *     ?NetPacketStateUpdate@@YAXXZ @ 0x1C00F289C (-NetPacketStateUpdate@@YAXXZ.c)
 * Callees:
 *     ?RebalanceExtensions@@YAXXZ @ 0x1C00A8CF4 (-RebalanceExtensions@@YAXXZ.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B4FFC (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00B502C (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00B5090 (--1KLockHolder@@QEAA@XZ.c)
 *     ?IsRebalanceNeeded@@YA_NXZ @ 0x1C00F2654 (-IsRebalanceNeeded@@YA_NXZ.c)
 *     ?MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z @ 0x1C00F27EC (-MoveClientToNextState@@YAXPEAUNET_PACKET_CLIENT@@@Z.c)
 */

char Iterate(void)
{
  char v0; // bp
  const wchar_t *v1; // rsi
  struct NET_PACKET_CLIENT *v2; // rcx
  char v3; // di
  unsigned int i; // eax
  struct NET_PACKET_CLIENT *v5; // rbx
  PVOID *v6; // rdx
  KLockHolder v8; // [rsp+20h] [rbp-28h] BYREF

  v0 = IsRebalanceNeeded();
  v8.m_Region.m_Entered = 0;
  v1 = (const wchar_t *)&unk_1C00841D0;
  if ( !v0 )
    v1 = L"\a";
  v8.m_State = Unlocked;
  v8.m_Lock = (KPushLockBase *)&unk_1C0093D98;
  KLockHolder::AcquireExclusive(&v8);
  v2 = (struct NET_PACKET_CLIENT *)qword_1C0094158;
  v3 = 1;
  if ( !qword_1C0094158 )
  {
LABEL_9:
    for ( i = 0; i < 5; ++i )
    {
      v5 = v2;
      if ( v2 )
      {
        while ( *(_DWORD *)v5 != *(_DWORD *)v1 )
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
      v1 += 2;
    }
    KLockHolder::ReleaseExclusive(&v8);
    if ( v5 )
    {
      if ( *(_DWORD *)v5 != 7 )
      {
        MoveClientToNextState(v5);
        goto LABEL_25;
      }
    }
    else if ( v0 )
    {
      RebalanceExtensions();
      goto LABEL_25;
    }
    v3 = 0;
    goto LABEL_25;
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
      v2 = (struct NET_PACKET_CLIENT *)qword_1C0094158;
      goto LABEL_9;
    }
  }
  v6 = &qword_1C0094158;
  if ( qword_1C0094158 != v2 )
  {
    do
      v6 = (PVOID *)((char *)*v6 + 8);
    while ( *v6 != v2 );
  }
  *v6 = (PVOID)*((_QWORD *)v2 + 1);
  ExFreePoolWithTag(v2, 0x6C43784Eu);
LABEL_25:
  KLockHolder::~KLockHolder(&v8);
  return v3;
}
