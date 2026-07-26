/*
 * XREFs of ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00B3934
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::PauseNeededForBind(
        Ndis::BindRules *this,
        struct _NDIS_MINIPORT_BLOCK *a2,
        struct Ndis::BindStack *a3)
{
  unsigned __int64 BaseMiniport_high; // r8
  const wchar_t *v4; // rbx
  unsigned int i; // ecx
  __int64 v8; // rbp
  _QWORD *MiniportAdapterContext; // r14
  __int64 v10; // rax
  int v11; // edx
  unsigned __int64 v12; // r9
  unsigned int j; // edx
  __int64 v14; // rbp
  _NDIS_MINIPORT_BLOCK *NextMiniport; // r14
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // eax
  int v19; // r8d
  char v20; // cl
  int v21; // ecx
  int v22; // r8d
  int v23; // eax
  int SpinLock_high; // r8d
  char v25; // cl
  char v26; // cl
  char v27; // cl
  unsigned __int16 v28; // cx
  _QWORD v29[20]; // [rsp+20h] [rbp-C8h] BYREF

  BaseMiniport_high = HIDWORD(a2->BaseMiniport);
  v4 = 0LL;
  for ( i = 0; i != (_DWORD)BaseMiniport_high; ++i )
  {
    v8 = i;
    if ( i >= BaseMiniport_high )
      __fastfail(0xBAD0FFu);
    MiniportAdapterContext = a2->MiniportAdapterContext;
    v10 = MiniportAdapterContext[i];
    if ( *(_DWORD *)(v10 + 52) || *(_DWORD *)(v10 + 28) )
    {
      v11 = 0;
      if ( !*(_BYTE *)(v10 + 9) )
        LOBYTE(v11) = *(_DWORD *)(v10 + 52) == 0;
      if ( (*(_DWORD *)(MiniportAdapterContext[i] + 32LL) != 0) != v11 )
      {
        SpinLock_high = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = SpinLock_high | 4;
        if ( SpinLock_high == 0 || !*(_QWORD *)&a2->Reserved4.Length )
        {
          v26 = byte_1C0092623;
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, SpinLock_high, SpinLock_high | 4);
            v26 = byte_1C0092623;
          }
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
          if ( (unsigned __int8)v26 >= 4u )
          {
            ndisGetBindLinkNameForTracing(
              (struct NDIS_BIND_FILTER_LINK *)MiniportAdapterContext[v8],
              (struct NDIS_PNPTRACE_LOCALS *)v29);
            if ( (unsigned __int8)byte_1C0092623 >= 4u )
              WPP_SF_Zq(0x3Eu, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v29[1], v29[0]);
          }
        }
        return;
      }
    }
  }
  v12 = *((unsigned int *)&a2->Header + 1);
  for ( j = 0; j != (_DWORD)v12; ++j )
  {
    v14 = j;
    if ( j >= v12 )
      __fastfail(0xBAD0FFu);
    NextMiniport = a2->NextMiniport;
    v16 = *((_QWORD *)&NextMiniport->Header.Type + j);
    if ( *(_DWORD *)(v16 + 52) || *(_DWORD *)(v16 + 28) )
    {
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 80) + 48LL);
      if ( v17
        && *(_BYTE *)(v17 + 56) >= 6u
        && ((v18 = *(_DWORD *)(v16 + 32)) != 0 && (*(_BYTE *)(v16 + 9) || *(_DWORD *)(v16 + 52))
         || !*((_BYTE *)this + 1995) && !v18 && !*(_BYTE *)(v16 + 9) && !*(_DWORD *)(v16 + 52)) )
      {
        v19 = HIDWORD(a2->ShortRef.SpinLock);
        HIDWORD(a2->ShortRef.SpinLock) = v19 | 4;
        if ( v19 == 0 || !*(_QWORD *)&a2->Reserved4.Length )
        {
          v20 = byte_1C0092623;
          if ( (unsigned __int8)byte_1C0092623 >= 5u )
          {
            WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v19, v19 | 4);
            v20 = byte_1C0092623;
          }
          *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
          if ( (unsigned __int8)v20 >= 4u )
            WPP_SF_Zq(
              0x3Fu,
              &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*((_QWORD *)&NextMiniport->Header.Type + v14) + 80LL) + 32LL),
              **((_QWORD **)&NextMiniport->Header.Type + v14));
        }
        return;
      }
    }
  }
  v21 = 0;
  v22 = HIDWORD(a2->ShortRef.SpinLock);
  v23 = 0;
  if ( LODWORD(a2->ShortRef.SpinLock) )
  {
    HIDWORD(a2->ShortRef.SpinLock) = v22 | 4;
    LOBYTE(v21) = v22 != 0;
    LOBYTE(v23) = 1;
    if ( v21 != v23 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      v27 = byte_1C0092623;
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v22, v22 | 4);
        v27 = byte_1C0092623;
      }
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( (unsigned __int8)v27 >= 4u )
      {
        if ( this )
          v4 = (const wchar_t *)*((_QWORD *)this + 485);
        v28 = 64;
        goto LABEL_62;
      }
    }
  }
  else
  {
    HIDWORD(a2->ShortRef.SpinLock) = v22 & 0xFFFFFFFB;
    LOBYTE(v21) = v22 != 0;
    LOBYTE(v23) = (v22 & 0xFFFFFFFB) != 0;
    if ( v21 != v23 || !*(_QWORD *)&a2->Reserved4.Length )
    {
      v25 = byte_1C0092623;
      if ( (unsigned __int8)byte_1C0092623 >= 5u )
      {
        WPP_SF_dd(0xFu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v22, v22 & 0xFFFFFFFB);
        v25 = byte_1C0092623;
      }
      *(_BYTE *)(*(_QWORD *)&a2->Reserved4.Length + 5240LL) = 1;
      if ( (unsigned __int8)v25 >= 4u )
      {
        if ( this )
          v4 = (const wchar_t *)*((_QWORD *)this + 485);
        v28 = 65;
LABEL_62:
        WPP_SF_Zq(v28, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, v4, this);
      }
    }
  }
}
