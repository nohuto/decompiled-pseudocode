/*
 * XREFs of ndisSetRestorePacketFilter @ 0x1C004A240
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00B6F50 (ndisOidPrePacketFilter.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001A4A8 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUpdateLoopbackOpens @ 0x1C001BE34 (ndisUpdateLoopbackOpens.c)
 *     XFilterAdjust @ 0x1C001C03C (XFilterAdjust.c)
 *     WPP_SF_qq @ 0x1C003CA44 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C003CAE8 (WPP_SF_qqd.c)
 */

char __fastcall ndisSetRestorePacketFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  KIRQL v6; // r15
  bool v7; // zf
  __int64 v8; // rcx
  int v9; // edx
  __int64 v11; // rsi
  int v12; // [rsp+20h] [rbp-28h]

  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qq(0x5Eu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_DWORD *)(a1 + 464) == 0;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  v8 = *(_QWORD *)(a1 + 400);
  *(_DWORD *)(a1 + 1856) = 2301188;
  if ( v7 )
  {
    XFilterAdjust((__int64 *)v8, 0LL, 0);
    v8 = *(_QWORD *)(a1 + 400);
  }
  v9 = *(_DWORD *)(v8 + 304);
  *a3 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    **(_DWORD **)(a2 + 40) = v9;
    if ( (v9 & 0xA0) != 0 )
    {
      v11 = *(_QWORD *)(a1 + 56);
      *(_BYTE *)(a1 + 90) = 0;
      while ( v11 )
      {
        if ( (*(_DWORD *)(v11 + 432) & 0xA0) != 0 )
        {
          KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v11 + 232));
          *(_DWORD *)(v11 + 224) |= 4u;
          KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(v11 + 232));
          ++*(_BYTE *)(a1 + 90);
          if ( *(_DWORD *)(v11 + 704) >= 6u )
            ++*(_DWORD *)(a1 + 2252);
          ndisUpdateCheckForLoopbackFlag(a1);
        }
        v11 = *(_QWORD *)(v11 + 392);
      }
    }
    ndisUpdateLoopbackOpens(a1);
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
      WPP_SF_qq(0x60u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2);
    return 0;
  }
  else
  {
    *(_DWORD *)(a2 + 56) = 4;
    *a3 = -1073676268;
    if ( (unsigned __int8)byte_1C0092612 >= 4u )
    {
      v12 = -1073676268;
      WPP_SF_qqd(0x5Fu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, a1, a2, v12);
    }
    *(_QWORD *)(a1 + 520) = 0LL;
    *(_DWORD *)(a1 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v6);
    return 1;
  }
}
