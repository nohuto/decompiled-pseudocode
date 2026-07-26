/*
 * XREFs of ?RebalanceExtensions@@YAXXZ @ 0x1C00C848C
 * Callers:
 *     ?Iterate@@YA_NXZ @ 0x1C00FBB9C (-Iterate@@YA_NXZ.c)
 *     NetPacketPoolInitialize @ 0x1C011B5E0 (NetPacketPoolInitialize.c)
 * Callees:
 *     ?AcquireExclusive@KLockHolder@@QEAAXXZ @ 0x1C00BDCB4 (-AcquireExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00BDCE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?NetPacketAssignLayout@@YAXPEAUNET_PACKET_EXTENSION@@PEAK@Z @ 0x1C00C8504 (-NetPacketAssignLayout@@YAXPEAUNET_PACKET_EXTENSION@@PEAK@Z.c)
 */

void RebalanceExtensions(void)
{
  ULONG RecommendedSharedDataAlignment; // eax
  unsigned int *v1; // rdx
  char *v2; // rcx
  PVOID *v3; // rbx
  int v4; // eax
  KLockHolder v5; // [rsp+20h] [rbp-28h] BYREF

  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v5.m_Region.m_Entered = 0;
  if ( RecommendedSharedDataAlignment < 0x10 )
    RecommendedSharedDataAlignment = 16;
  dword_1C0098810 &= 0xFFFFFFF0;
  v5.m_State = Unlocked;
  dword_1C0098814 = RecommendedSharedDataAlignment;
  v5.m_Lock = (KPushLockBase *)&unk_1C0099EA8;
  KLockHolder::AcquireExclusive(&v5);
  v2 = (char *)P;
  v3 = &P;
  if ( P )
  {
    do
    {
      if ( v2[20] )
      {
        *v3 = (PVOID)*((_QWORD *)v2 + 3);
        ExFreePoolWithTag(v2, 0x7845784Eu);
      }
      else
      {
        v3 = (PVOID *)(v2 + 24);
      }
      v2 = (char *)*v3;
    }
    while ( *v3 );
    v2 = (char *)P;
    if ( P )
    {
      v4 = dword_1C0098810;
      do
      {
        if ( *((_QWORD *)v2 + 5) )
        {
          v4 |= 1u;
          dword_1C0098810 = v4;
        }
        if ( *((_QWORD *)v2 + 6) )
        {
          v4 |= 2u;
          dword_1C0098810 = v4;
        }
        if ( *((_QWORD *)v2 + 7) )
        {
          v4 |= 4u;
          dword_1C0098810 = v4;
        }
        if ( *((_QWORD *)v2 + 8) )
        {
          v4 |= 8u;
          dword_1C0098810 = v4;
        }
        v2 = (char *)*((_QWORD *)v2 + 3);
      }
      while ( v2 );
    }
  }
  NetPacketAssignLayout((struct NET_PACKET_EXTENSION *)v2, v1);
  KLockHolder::~KLockHolder(&v5);
}
