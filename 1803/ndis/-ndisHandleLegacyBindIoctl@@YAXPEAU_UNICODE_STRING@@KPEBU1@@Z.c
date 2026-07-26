/*
 * XREFs of ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00E46B0
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00CADD4 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0009F08 (ndisDereferenceMiniport.c)
 *     WPP_SF_ @ 0x1C00255F4 (WPP_SF_.c)
 *     WPP_SF_Zq @ 0x1C004F564 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00BBF78 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00BC060 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00BCE4C (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C01003B4 (ndisReferenceMiniportByName.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(PCUNICODE_STRING SourceString, int a2, const struct _UNICODE_STRING *a3)
{
  __int64 v6; // r14
  unsigned __int64 i; // rbx
  __int64 v8; // rsi
  Ndis::BindState *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // [rsp+58h] [rbp+20h]

  if ( (unsigned __int8)byte_1C009960D >= 4u )
    WPP_SF_(0x15u, &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids);
  ndisReferenceMiniportByName(SourceString);
  if ( v12 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v12 + 5160, 0LL);
    v6 = *(unsigned int *)(v12 + 5036);
    for ( i = 0LL; i != v6; ++i )
    {
      if ( i >= *(unsigned int *)(v12 + 5036) )
        __fastfail(5u);
      v8 = *(_QWORD *)(v12 + 5040);
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 80LL) + 24LL), a3, 1u) )
      {
        v9 = *(Ndis::BindState **)(v8 + 8 * i);
        if ( a2 == 1 )
        {
          if ( Ndis::BindState::SetBinding(v9, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C0099623 >= 4u )
          {
            WPP_SF_Zq(
              0x16u,
              &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 80LL) + 24LL),
              **(_QWORD **)(v8 + 8 * i));
          }
        }
        else if ( Ndis::BindState::SetBinding(v9, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C0099623 >= 4u )
        {
          WPP_SF_Zq(
            0x17u,
            &WPP_47403e85a6be3c322bcf4a109a5fff7e_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 80LL) + 24LL),
            **(_QWORD **)(v8 + 8 * i));
        }
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v12 + 5136));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v12 + 5136), RunSynchronous, 0);
    ndisDereferenceMiniport(v12, 0x30u, v10, v11);
  }
}
