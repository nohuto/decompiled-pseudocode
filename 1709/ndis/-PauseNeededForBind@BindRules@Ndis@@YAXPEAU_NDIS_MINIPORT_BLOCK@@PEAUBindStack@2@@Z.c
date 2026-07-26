/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BC3D0
 * Callers:
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BAE88 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BBB74 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BC16C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C0040DF4 (WPP_SF_dd_ea_1C0040DF4.c)
 *     WPP_SF_Zq @ 0x1C004EBF4 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FA890 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  const wchar_t *v3; // rbx
  unsigned __int64 BaseMiniport_high; // rcx
  unsigned __int64 i; // rsi
  _QWORD *MiniportAdapterContext; // r14
  __int64 v9; // rax
  int v10; // r8d
  bool v11; // zf
  int v12; // eax
  unsigned __int64 v13; // r8
  unsigned __int64 j; // rsi
  _NDIS_MINIPORT_BLOCK *NextMiniport; // r14
  __int64 v16; // rcx
  int v17; // r9d
  __int64 v18; // rdx
  int v19; // eax
  int v20; // r8d
  bool v21; // cf
  int v22; // r8d
  int SpinLock_high; // r8d
  unsigned __int16 v24; // cx
  _QWORD v25[20]; // [rsp+20h] [rbp-C8h] BYREF

  v3 = 0LL;
  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  for ( i = 0LL; i != BaseMiniport_high; ++i )
  {
    if ( i >= BaseMiniport_high )
      __fastfail(5u);
    MiniportAdapterContext = a2->MiniportAdapterContext;
    v9 = MiniportAdapterContext[i];
    v10 = *(_DWORD *)(v9 + 52);
    if ( v10 || *(_DWORD *)(v9 + 28) )
    {
      v11 = *(_BYTE *)(v9 + 9) == 0;
      v12 = 0;
      if ( v11 )
        LOBYTE(v12) = v10 == 0;
      if ( (*(_DWORD *)(MiniportAdapterContext[i] + 32LL) != 0) != v12 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high | 4;
        if ( !SpinLock_high || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( (unsigned __int8)byte_1C0098763 >= 5u )
            WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, SpinLock_high, SpinLock_high | 4);
          v21 = (unsigned __int8)byte_1C0098763 < 4u;
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
          if ( !v21 )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)MiniportAdapterContext[i],
              (struct NDIS_PNPTRACE_LOCALS *)v25);
            if ( (unsigned __int8)byte_1C0098763 >= 4u )
              WPP_SF_Zq(0x3Eu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v25[1], v25[0]);
          }
        }
        return;
      }
    }
  }
  v13 = *((unsigned int *)&a2->Header + 1);
  for ( j = 0LL; j != v13; ++j )
  {
    if ( j >= v13 )
      __fastfail(5u);
    NextMiniport = a2->NextMiniport;
    v16 = *((_QWORD *)&NextMiniport->Header.Type + j);
    v17 = *(_DWORD *)(v16 + 52);
    if ( v17 || *(_DWORD *)(v16 + 28) )
    {
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 40LL);
      if ( v18
        && *(_BYTE *)(v18 + 56) >= 6u
        && ((v19 = *(_DWORD *)(v16 + 32)) != 0 && (*(_BYTE *)(v16 + 9) || v17)
         || !*((_BYTE *)this + 1995) && !v19 && !*(_BYTE *)(v16 + 9) && !v17) )
      {
        v20 = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = v20 | 4;
        if ( !v20 || !*(_QWORD *)&a2->Reserved4.Length )
        {
          if ( (unsigned __int8)byte_1C0098763 >= 5u )
            WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v20, v20 | 4);
          v21 = (unsigned __int8)byte_1C0098763 < 4u;
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
          if ( !v21 )
            WPP_SF_Zq(
              0x3Fu,
              &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + j) + 80LL) + 24LL),
              **((_QWORD **)&NextMiniport->Header.Type + j));
        }
        return;
      }
    }
  }
  v22 = HIDWORD(a2->ShortRef.SpinLock);
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    HIDWORD(a2->ShortRef.SpinLock) = v22 | 4;
    if ( !v22 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v22, v22 | 4);
      v21 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( !v21 )
      {
        if ( this )
          v3 = (const wchar_t *)*((_QWORD *)this + 485);
        v24 = 64;
        goto LABEL_63;
      }
    }
  }
  else
  {
    HIDWORD(a2->ShortRef.SpinLock) = v22 & 0xFFFFFFFB;
    if ( (v22 != 0) != ((v22 & 0xFFFFFFFB) != 0) || !*(_QWORD *)&a2->Reserved4.Length )
    {
      if ( (unsigned __int8)byte_1C0098763 >= 5u )
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v22, v22 & 0xFFFFFFFB);
      v21 = (unsigned __int8)byte_1C0098763 < 4u;
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( !v21 )
      {
        if ( this )
          v3 = (const wchar_t *)*((_QWORD *)this + 485);
        v24 = 65;
LABEL_63:
        WPP_SF_Zq(v24, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v3, this);
      }
    }
  }
}
