/*
 * XREFs of ndisSetMiniportPacketFilter @ 0x1C001C100
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00B6F50 (ndisOidPrePacketFilter.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_d @ 0x1C0043BDC (WPP_SF_d.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 */

char __fastcall ndisSetMiniportPacketFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v6; // r13
  char v7; // al
  char v8; // si
  int v9; // ebp
  KIRQL v10; // dl
  unsigned int *v11; // r15
  unsigned __int8 v12; // bp
  unsigned int v14; // ebp

  v6 = 0LL;
  v7 = byte_1C0092612;
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
  {
    WPP_SF_qq(97LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
    v7 = byte_1C0092612;
  }
  *a3 = 0;
  v8 = 1;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v9 = **(_DWORD **)(a2 + 40);
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
    *(_DWORD *)(a1 + 1856) = 2301317;
    if ( !*(_DWORD *)(a1 + 1836) )
      v6 = *(_QWORD *)(a1 + 400);
    v11 = (unsigned int *)(a1 + 160);
    *(_DWORD *)(a1 + 160) = v9;
    if ( v6 )
    {
      if ( (v9 & 0xFFFFFF7F) != (*(_DWORD *)(v6 + 312) & 0xFFFFFF7F) )
      {
        *v11 = v9 & 0xFFFFFF7F;
        v8 = 0;
      }
      if ( (*(_DWORD *)(a1 + 120) & 0x20000) == 0 )
        goto LABEL_10;
      v14 = v9 & 0xFFFFFF5F;
      if ( v14 == (*(_DWORD *)(v6 + 312) & 0xFFFFFF5F) )
        goto LABEL_10;
      *v11 = v14;
    }
    v8 = 0;
LABEL_10:
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v10);
    v12 = 0;
    if ( (*(_DWORD *)(a2 + 88) & 0x80000) == 0 )
      v12 = v8;
    if ( v12 )
    {
      if ( !*a3 )
        *(_DWORD *)(a2 + 52) = 4;
    }
    else
    {
      *(_DWORD *)(a2 + 88) |= 0x800u;
      *(_QWORD *)(a1 + 528) = *(_QWORD *)(a2 + 40);
      *(_WORD *)(a1 + 536) = *(_WORD *)(a2 + 48);
      *(_QWORD *)(a2 + 40) = v11;
      *(_DWORD *)(a2 + 48) = 4;
    }
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qdD(99LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, v12, *a3);
    return v12;
  }
  *(_DWORD *)(a2 + 56) = 4;
  *a3 = -1073676268;
  if ( (unsigned __int8)v7 >= 4u )
    WPP_SF_d(98LL, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, 3221291028LL);
  return 1;
}
