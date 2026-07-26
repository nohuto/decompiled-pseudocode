/*
 * XREFs of ndisSetMiniportPacketFilter @ 0x1C001C6E8
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00C0B40 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C00419DC (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C0043DD8 (WPP_SF_qdD.c)
 */

char __fastcall ndisSetMiniportPacketFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r13
  char v7; // bp
  int v8; // r14d
  KIRQL v9; // dl
  unsigned int *v10; // r15
  unsigned __int8 v11; // r14
  unsigned int v13; // r14d

  v6 = 0LL;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(97LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2);
  *a3 = 0;
  v7 = 1;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v8 = **(_DWORD **)(a2 + 40);
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2301620;
    if ( !*(_DWORD *)(a1 + 1836) )
      v6 = *(_QWORD *)(a1 + 400);
    v10 = (unsigned int *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v8;
    if ( v6 )
    {
      if ( (v8 & 0xFFFFFF7F) != (*(_DWORD *)(v6 + 312) & 0xFFFFFF7F) )
      {
        *v10 = v8 & 0xFFFFFF7F;
        v7 = 0;
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x20000) == 0 )
        goto LABEL_10;
      v13 = v8 & 0xFFFFFF5F;
      if ( v13 == (*(_DWORD *)(v6 + 312) & 0xFFFFFF5F) )
        goto LABEL_10;
      *v10 = v13;
    }
    v7 = 0;
LABEL_10:
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
    v11 = 0;
    if ( (*(_DWORD *)(a2 + 88) & 0x80000) == 0 )
      v11 = v7;
    if ( v11 )
    {
      if ( !*a3 )
        *(_DWORD *)(a2 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(a2 + 88) |= 0x800u;
      *(_QWORD *)(a1 + 528) = *(_QWORD *)(a2 + 40);
      *(_WORD *)(a1 + 536) = *(_WORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v10;
      *(_DWORD *)(a2 + 48) = 4;
    }
    if ( (unsigned __int8)byte_1C0099612 >= 4u )
      WPP_SF_qdD(99LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, v11, *a3);
    return v11;
  }
  *(_DWORD *)(a2 + 56) = 4;
  *a3 = -1073676268;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_d(98LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, 3221291028LL);
  return 1;
}
