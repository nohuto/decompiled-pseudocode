/*
 * XREFs of ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00B3B5C
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00B2734 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00B338C (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     WPP_SF_dd @ 0x1C004A87C (WPP_SF_dd_ea_1C004A87C.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00F139C (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::UnbindMiniportStack(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  int v2; // r13d
  int v3; // r14d
  __int64 i; // rbp
  __int64 v6; // rsi
  _DWORD *v7; // rbx
  int v8; // r8d
  int v9; // r9d
  char v10; // al
  int v11; // ebp
  __int64 j; // rdi
  __int64 v13; // r14
  _DWORD *v14; // rbx
  int v15; // r8d
  int v16; // r9d
  int v17; // r9d
  bool v18; // cf
  unsigned __int16 v19; // cx
  _QWORD v20[20]; // [rsp+20h] [rbp-D8h] BYREF

  v2 = *((_DWORD *)this + 16);
  v3 = *((_DWORD *)this + 5);
  for ( i = 0LL; (_DWORD)i != v3; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 5) )
      __fastfail(0xBAD0FFu);
    v6 = *((_QWORD *)this + 3);
    if ( v2 )
    {
      if ( Ndis::BindState::SetBinding(
             *(Ndis::BindState **)(v6 + 8 * i),
             (enum BINDING_ENABLED_OR_DISABLED)(v2 != 0),
             Reason_MiniportNotReady)
        && (unsigned __int8)byte_1C0092623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(
          *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
          (struct NDIS_PNPTRACE_LOCALS *)v20);
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
        {
          v19 = 59;
          goto LABEL_35;
        }
      }
    }
    else
    {
      v7 = *(_DWORD **)(v6 + 8 * i);
      v8 = v7[8];
      v7[8] = v8 & 0xFFFDFFFF;
      v9 = v7[8];
      if ( (v8 != 0) == (v9 != 0) && *(_QWORD *)v7 )
      {
        v10 = 0;
      }
      else
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v8, v9);
        *(_BYTE *)(*(_QWORD *)v7 + 5240LL) = 1;
        v10 = 1;
      }
      if ( v10 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v20);
          if ( (unsigned __int8)byte_1C0092623 >= 4u )
          {
            v19 = 58;
LABEL_35:
            WPP_SF_Zq(v19, &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids, (const wchar_t *)v20[1], v20[0]);
            continue;
          }
        }
      }
    }
  }
  v11 = *((_DWORD *)this + 1);
  for ( j = 0LL; (_DWORD)j != v11; j = (unsigned int)(j + 1) )
  {
    if ( (unsigned int)j >= *((_DWORD *)this + 1) )
      __fastfail(0xBAD0FFu);
    v13 = *((_QWORD *)this + 1);
    v14 = *(_DWORD **)(v13 + 8 * j);
    v15 = v14[8];
    if ( v2 )
    {
      v14[8] = v15 | 0x20000;
      v17 = v14[8];
      if ( (v15 != 0) != (v17 != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v17);
        v18 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0x3Du,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v13 + 8 * j));
      }
    }
    else
    {
      v14[8] = v15 & 0xFFFDFFFF;
      v16 = v14[8];
      if ( (v15 != 0) != (v16 != 0) || !*(_QWORD *)v14 )
      {
        if ( (unsigned __int8)byte_1C0092623 >= 5u )
          WPP_SF_dd(0xEu, &WPP_dd4cdbe2961831c412ed9f171c8a4c99_Traceguids, v15, v16);
        v18 = (unsigned __int8)byte_1C0092623 < 4u;
        *(_BYTE *)(*(_QWORD *)v14 + 5240LL) = 1;
        if ( !v18 )
          WPP_SF_Zq(
            0x3Cu,
            &WPP_339be45e8b703252d0c5449fb14c5e43_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v13 + 8 * j) + 80LL) + 32LL),
            **(_QWORD **)(v13 + 8 * j));
      }
    }
  }
}
