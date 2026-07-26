/*
 * XREFs of ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE018
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4 (-ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z.c)
 */

void __fastcall Ndis::BindRules::CheckMissingModifyingFilter(Ndis::BindRules *this, struct Ndis::BindStack *a2)
{
  __int64 v2; // r14
  BOOL v3; // edi
  unsigned __int64 i; // rbx
  __int64 v6; // rsi
  __int64 v7; // r9
  unsigned __int16 v8; // cx
  _QWORD v9[20]; // [rsp+20h] [rbp-B8h] BYREF

  v2 = *((unsigned int *)this + 5);
  v3 = 0;
  for ( i = 0LL; i != v2; ++i )
  {
    if ( i >= *((unsigned int *)this + 5) )
      __fastfail(5u);
    v6 = *((_QWORD *)this + 3);
    v7 = *(_QWORD *)(v6 + 8 * i);
    if ( *(_DWORD *)(v7 + 52) || *(_DWORD *)(v7 + 28) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v7 + 80) + 40LL) & 2) == 0 )
      {
        v3 = *(_DWORD *)(v7 + 32) != 0;
        continue;
      }
      if ( v3 )
      {
        if ( Ndis::BindState::SetBinding(
               *(Ndis::BindState **)(v6 + 8 * i),
               BindingDisabled,
               Reason_MissingModifyingFilter)
          && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          ndisGetBindLinkNameForTracing(
            *(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i),
            (struct NDIS_PNPTRACE_LOCALS *)v9);
          if ( (unsigned __int8)byte_1C0099623 >= 4u )
          {
            v8 = 28;
            goto LABEL_20;
          }
        }
      }
      else if ( Ndis::BindState::SetBinding(
                  *(Ndis::BindState **)(v6 + 8 * i),
                  BindingEnabled,
                  Reason_MissingModifyingFilter)
             && (unsigned __int8)byte_1C0099623 >= 4u )
      {
        ndisGetBindLinkNameForTracing(*(struct NDIS_BIND_FILTER_LINK **)(v6 + 8 * i), (struct NDIS_PNPTRACE_LOCALS *)v9);
        if ( (unsigned __int8)byte_1C0099623 >= 4u )
        {
          v8 = 27;
LABEL_20:
          WPP_SF_Zq(v8, &WPP_28ccc015ff3a36b32c91c02afee3c661_Traceguids, (const wchar_t *)v9[1], v9[0]);
          continue;
        }
      }
    }
  }
}
