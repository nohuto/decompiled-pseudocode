/*
 * XREFs of ndisSetOpenPacketFilter @ 0x1C00104F4
 * Callers:
 *     ndisOidPrePacketFilter @ 0x1C00BE170 (ndisOidPrePacketFilter.c)
 * Callees:
 *     ndisUpdateCheckForLoopbackFlag @ 0x1C000F750 (ndisUpdateCheckForLoopbackFlag.c)
 *     ndisUpdateLoopbackOpens @ 0x1C00104BC (ndisUpdateLoopbackOpens.c)
 *     XFilterAdjust @ 0x1C00106C0 (XFilterAdjust.c)
 *     WPP_SF_qq @ 0x1C0039520 (WPP_SF_qq.c)
 *     WPP_SF_qqDL @ 0x1C0042E00 (WPP_SF_qqDL.c)
 *     WPP_SF_qqd @ 0x1C0051268 (WPP_SF_qqd.c)
 */

char __fastcall ndisSetOpenPacketFilter(__int64 a1, __int64 a2, unsigned int *a3)
{
  __int64 v3; // rsi
  int v7; // ebx
  unsigned int v8; // r12d
  KIRQL v9; // r11
  int v10; // ecx
  unsigned __int8 v11; // r15
  _DWORD *v12; // rbx
  KIRQL v13; // dl
  KIRQL v14; // r9

  v3 = *(_QWORD *)(a1 + 16);
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qq(91LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2);
  v7 = 0;
  if ( *(_DWORD *)(a2 + 48) >= 4u )
  {
    v8 = **(_DWORD **)(a2 + 40);
    if ( (*(_DWORD *)(a1 + 224) & 0x8000) != 0 )
      goto LABEL_8;
    v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
    v10 = *(_DWORD *)(v3 + 464);
    *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
    *(_DWORD *)(v3 + 1856) = 2301363;
    if ( v10 )
    {
      if ( v10 == 16 )
      {
        v7 = 259;
        *(_DWORD *)(a1 + 436) = *(_DWORD *)(a1 + 432);
        *(_DWORD *)(a1 + 432) = v8;
      }
    }
    else
    {
      v7 = XFilterAdjust(*(_QWORD *)(v3 + 400), a1, v8);
      v8 = *(_DWORD *)(*(_QWORD *)(v3 + 400) + 304LL);
    }
    *(_QWORD *)(v3 + 520) = 0LL;
    *(_DWORD *)(v3 + 1856) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v9);
    if ( v7 == 259 )
    {
LABEL_8:
      v11 = 0;
      *a3 = 259;
    }
    else
    {
      *(_DWORD *)(a2 + 52) = 4;
      v11 = 1;
      *a3 = 0;
    }
    v12 = *(_DWORD **)(a2 + 40);
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 232));
    if ( (*v12 & 0xA0) != 0 )
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
        KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 232), v13);
        KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 96));
        *(_QWORD *)(v3 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v3 + 1856) = 2301445;
        ndisUpdateLoopbackOpens(v3);
        *(_QWORD *)(v3 + 520) = 0LL;
        *(_DWORD *)(v3 + 1856) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 96), v14);
        *(_DWORD *)(a2 + 164) = v8;
        *(_QWORD *)(a2 + 152) = *(_QWORD *)(a2 + 40);
        *(_DWORD *)(a2 + 160) = *(_DWORD *)(a2 + 48);
        *(_QWORD *)(a2 + 40) = a2 + 164;
        *(_DWORD *)(a2 + 48) = 4;
        if ( (unsigned __int8)byte_1C0098752 >= 4u )
          WPP_SF_qqDL(93LL, *a3, a1, a2, v11, *a3);
        return v11;
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qqd(92LL, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, a1, a2, -1073676268);
  *a3 = -1073676268;
  return 1;
}
