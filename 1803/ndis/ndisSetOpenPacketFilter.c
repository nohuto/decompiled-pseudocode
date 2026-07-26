/*
 * XREFs of ndisSetOpenPacketFilter @ 0x1C001C84C
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00C0B40 (ndisOidPrePacketFilter.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C001AFA4 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUpdateLoopbackOpens @ 0x1C001CA10 (ndisUpdateLoopbackOpens.c)
 *     XFilterAdjust @ 0x1C001CA48 (XFilterAdjust.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     WPP_SF_qqDL @ 0x1C0043EEC (WPP_SF_qqDL.c)
 */

char __fastcall ndisSetOpenPacketFilter(__int64 a1, __int64 a2, int *a3)
{
  __int64 v3; // rsi
  int v7; // r14d
  int v8; // ebx
  unsigned int v9; // r13d
  KIRQL v10; // r11
  int v11; // ecx
  unsigned __int8 v12; // r14
  _DWORD *v13; // rbx
  KIRQL v14; // dl
  KIRQL v15; // al
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v17; // r9
  __int64 v18; // r8
  KIRQL v19; // r9

  v3 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qq(91LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2);
  v7 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v8 = 259;
    v9 = **(_DWORD **)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
      goto LABEL_8;
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v11 = *(_DWORD *)(v3 + 464);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2301358;
    if ( v11 )
    {
      if ( v11 == 16 )
      {
        v7 = 259;
        *(_DWORD *)(a1 + 436) = *(_DWORD *)(a1 + 432);
        *(_DWORD *)(a1 + 432) = v9;
      }
    }
    else
    {
      v7 = XFilterAdjust(*(_QWORD *)(v3 + 400), a1, v9);
      v9 = *(_DWORD *)(*(_QWORD *)(v3 + 400) + 304LL);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v10);
    if ( v7 == 259 )
    {
LABEL_8:
      v12 = 0;
    }
    else
    {
      *(_DWORD *)(a2 + 52) = 4;
      v12 = 1;
      v8 = 0;
    }
    *a3 = v8;
    v13 = *(_DWORD **)(a2 + 40);
    v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
    if ( (*v13 & 0xA0) != 0 )
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) != 0 )
        goto LABEL_11;
      *(_DWORD *)(a1 + 224) |= 4u;
      ++*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 704) >= 6u )
        ++*(_DWORD *)(v3 + 2252);
    }
    else
    {
      if ( (*(_DWORD *)(a1 + 224) & 4) == 0 )
      {
LABEL_11:
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v14);
        v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        CurrentThread = KeGetCurrentThread();
        *(_QWORD *)(v3 + 520) = CurrentThread;
        LOBYTE(v17) = v15;
        *(_DWORD *)(v3 + 1856) = 2301440;
        ndisUpdateLoopbackOpens(v3, CurrentThread, v18, v17);
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v19);
        *(_DWORD *)(a2 + 164) = v9;
        *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 40) = a2 + 164;
        *(_DWORD *)(a2 + 48) = 4;
        if ( (unsigned __int8)byte_1C0099612 >= 4u )
          WPP_SF_qqDL(93LL, (unsigned int)*a3, a1, a2, v12, *a3);
        return v12;
      }
      *(_DWORD *)(a1 + 224) &= ~4u;
      --*(_BYTE *)(v3 + 90);
      if ( *(_DWORD *)(a1 + 704) >= 6u )
        --*(_DWORD *)(v3 + 2252);
    }
    ndisUpdateCheckForLoopbackFlag(v3);
    goto LABEL_11;
  }
  *(_DWORD *)(a2 + 56) = 4;
  if ( (unsigned __int8)byte_1C0099612 >= 4u )
    WPP_SF_qqd(92LL, &WPP_92d34e42f40030fdbbeb8d75cb2f24e9_Traceguids, a1, a2, -1073676268);
  *a3 = -1073676268;
  return 1;
}
