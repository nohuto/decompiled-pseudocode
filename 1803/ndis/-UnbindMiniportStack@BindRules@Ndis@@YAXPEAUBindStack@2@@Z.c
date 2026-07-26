/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD34C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C00496DC (WPP_SF_dd_ea_1C00496DC.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r12d
  __int64 v3; // rbp
  unsigned __int64 i; // rdi
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  char v9; // al
  __int64 v10; // rbp
  unsigned __int64 j; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // rbx
  int v14; // r8d
  bool v15; // cf
  char v16; // al
  unsigned __int16 v17; // cx
  _QWORD v18[20]; // [rsp+20h] [rbp-C8h] BYREF

  v2 = *((_DWORD *)this + 16);
  v3 = *((unsigned int *)this + 5);
  for ( i = 0LL; i != v3; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_DWORD **)(v6 + 8 * i);
    v8 = v7[8];
    if ( v2 )
    {
      v7[8] = v8 | 0x20000;
      if ( v8 != 0 && *(_QWORD *)v7 )
      {
        v16 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 | 0x20000);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v16 = 1;
      }
      if ( v16 )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v18);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v17 = 59;
            goto LABEL_41;
          }
        }
      }
    }
    else
    {
      v7[8] = v8 & 0xFFFDFFFF;
      if ( (v8 != 0) == ((v8 & 0xFFFDFFFF) != 0) && *(_QWORD *)v7 )
      {
        v9 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v8, v8 & 0xFFFDFFFF);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v9 = 1;
      }
      if ( v9 )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v18);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v17 = 58;
LABEL_41:
            WPP_SF_Zq(v17, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v18[1], v18[0]);
            continue;
          }
        }
      }
    }
  }
  v10 = *((unsigned int *)this + 1);
  for ( j = 0LL; j != v10; ++j )
  {
    if ( j >= *((unsigned int *)this + 1) )
      __fastfail(5u);
    v12 = *((_QWORD *)this + 1);
    v13 = *(_DWORD **)(v12 + 8 * j);
    v14 = v13[8];
    if ( v2 )
    {
      v13[8] = v14 | 0x20000;
      if ( v14 == 0 || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 | 0x20000);
        v15 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5240LL) = 1;
        if ( !v15 )
          WPP_SF_Zq(
            0x3Du,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * j));
      }
    }
    else
    {
      v13[8] = v14 & 0xFFFDFFFF;
      if ( (v14 != 0) != ((v14 & 0xFFFDFFFF) != 0) || !*(_QWORD *)v13 )
      {
        if ( (unsigned __int8)byte_1C0099623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_a000b6aa13863dc28771f74e17683f6b_Traceguids, v14, v14 & 0xFFFDFFFF);
        v15 = (unsigned __int8)byte_1C0099623 < 4u;
        *(_BYTE *)(*(_QWORD *)v13 + 5240LL) = 1;
        if ( !v15 )
          WPP_SF_Zq(
            0x3Cu,
            &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v12 + 8 * j) + 80LL) + 24LL),
            **(_QWORD **)(v12 + 8 * j));
      }
    }
  }
}
