/*
 * XREFs of ?ndisHandleLegacyBindIoctl@@YAXPEAU_UNICODE_STRING@@KPEBU1@@Z @ 0x1C00D8B84
 * Callers:
 *     ndisHandleUModePnPOp @ 0x1C00D9594 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0011A54 (ndisDereferenceMiniport.c)
 *     WPP_SF_ @ 0x1C0028184 (WPP_SF_.c)
 *     WPP_SF_Zq @ 0x1C0050030 (WPP_SF_Zq.c)
 *     ?ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z @ 0x1C00B2868 (-ApplyBindChanges@BindEngine@Ndis@@QEAAXW4CallRunMode@@_N@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00B2948 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z @ 0x1C00B3610 (-SetBinding@BindState@Ndis@@QEAA_NW4BINDING_ENABLED_OR_DISABLED@@W4NDIS_DO_NOT_BIND_REASON@@@Z.c)
 *     ndisReferenceMiniportByName @ 0x1C00F5008 (ndisReferenceMiniportByName.c)
 */

void __fastcall ndisHandleLegacyBindIoctl(PCUNICODE_STRING SourceString, int a2, const struct _UNICODE_STRING *a3)
{
  int v6; // r15d
  __int64 i; // rsi
  __int64 v8; // r14
  Ndis::BindState *v9; // rcx
  __int64 v10; // [rsp+68h] [rbp+20h]

  if ( (unsigned __int8)byte_1C009260D >= 4u )
    WPP_SF_(0x19u, &WPP_bde249736f00345f1574c6c7be067711_Traceguids);
  ndisReferenceMiniportByName(SourceString);
  if ( v10 )
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10 + 5160, 0LL);
    v6 = *(_DWORD *)(v10 + 5036);
    for ( i = 0LL; (_DWORD)i != v6; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= *(_DWORD *)(v10 + 5036) )
        __fastfail(0xBAD0FFu);
      v8 = *(_QWORD *)(v10 + 5040);
      if ( RtlEqualUnicodeString(*(PCUNICODE_STRING *)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 80LL) + 32LL), a3, 1u) )
      {
        v9 = *(Ndis::BindState **)(v8 + 8 * i);
        if ( a2 == 1 )
        {
          if ( Ndis::BindState::SetBinding(v9, BindingEnabled, Reason_DisabledByLegacyIoctl)
            && (unsigned __int8)byte_1C0092623 >= 4u )
          {
            WPP_SF_Zq(
              0x1Au,
              &WPP_bde249736f00345f1574c6c7be067711_Traceguids,
              *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 80LL) + 32LL),
              **(_QWORD **)(v8 + 8 * i));
          }
        }
        else if ( Ndis::BindState::SetBinding(v9, BindingDisabled, Reason_DisabledByLegacyIoctl)
               && (unsigned __int8)byte_1C0092623 >= 4u )
        {
          WPP_SF_Zq(
            0x1Bu,
            &WPP_bde249736f00345f1574c6c7be067711_Traceguids,
            *(const wchar_t **)(*(_QWORD *)(*(_QWORD *)(v8 + 8 * i) + 80LL) + 32LL),
            **(_QWORD **)(v8 + 8 * i));
        }
      }
    }
    Ndis::BindEngine::EndPolicyUpdates((Ndis::BindEngine *)(v10 + 5136));
    Ndis::BindEngine::ApplyBindChanges((Ndis::BindEngine *)(v10 + 5136), RunSynchronous, 0);
    ndisDereferenceMiniport(v10, 0x30u);
  }
}
