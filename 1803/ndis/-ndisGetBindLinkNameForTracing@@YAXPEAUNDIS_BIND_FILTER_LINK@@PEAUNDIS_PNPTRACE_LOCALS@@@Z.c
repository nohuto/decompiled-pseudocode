/*
 * XREFs of ?ndisGetBindLinkNameForTracing@@YAXPEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_PNPTRACE_LOCALS@@@Z @ 0x1C00FD3B4
 * Callers:
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BBD08 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00BCBB8 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BCFB4 (-PauseMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z @ 0x1C00BD158 (-PauseNeededForBind@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUBindStack@2@@Z.c)
 *     ?UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD34C (-UnbindMiniportStack@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z @ 0x1C00BD5A0 (-MakeOptionalFiltersMandatoryDuringBoot@BindRules@Ndis@@YAXPEAUBindStack@2@_N@Z.c)
 *     ?UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD79C (-UnbindOnDetach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BD8F8 (-UnbindOnAttach@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDC9C (-CheckMissingMandatoryFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BDED8 (-RetryProtocolBindingsAfterMiniportChange@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE018 (-CheckMissingModifyingFilter@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BE0D0 (-UnbindIncompatibleDriversForMacChange@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE384 (-CheckForDriverLoaded@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00BE518 (-ReStartTemporaryPause@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z @ 0x1C00BE68C (-ReEnableTemporaryUnbind@BindRules@Ndis@@YAXPEAUBindStack@2@@Z.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C27D8 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 *     ?UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00C2864 (-UpdateFiltersFullStackRebind@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$u.c)
 *     ??$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@_KAEAV?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@@Z @ 0x1C00C2950 (--$AddBindingToSet@UNDIS_BIND_FILTER_LINK@@@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEA.c)
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C5090 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     ?ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C514C (-ndisClearTransientBindFailuresAboveThisFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTE.c)
 *     ?ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INFORMATION@@@Z @ 0x1C00C7270 (-ndisRestartFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@PEAUNDIS_RESTART_INF.c)
 *     ndisFSetRestartAttributes @ 0x1C00C7BDC (ndisFSetRestartAttributes.c)
 *     ?ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00E67C8 (-ndisQueueFilterRestart@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ @ 0x1C0016EC4 (-RtlUnicodeStringPrintf@@YAJPEAU_UNICODE_STRING@@PEBGZZ.c)
 */

void __fastcall ndisGetBindLinkNameForTracing(struct NDIS_BIND_FILTER_LINK *a1, struct _UNICODE_STRING *a2)
{
  struct _UNICODE_STRING *v2; // r12
  unsigned __int64 v5; // xmm0_8
  int v6; // [rsp+20h] [rbp-78h]
  int v7; // [rsp+28h] [rbp-70h]
  int v8; // [rsp+30h] [rbp-68h]
  int v9; // [rsp+38h] [rbp-60h]
  int v10; // [rsp+40h] [rbp-58h]
  int v11; // [rsp+48h] [rbp-50h]
  int v12; // [rsp+50h] [rbp-48h]
  int v13; // [rsp+58h] [rbp-40h]
  int v14; // [rsp+60h] [rbp-38h]
  unsigned int FilterIndex; // [rsp+68h] [rbp-30h]

  v2 = a2 + 1;
  a2[1].Length = 0;
  a2[1].MaximumLength = 128;
  a2[1].Buffer = &a2[2].Length;
  v5 = _mm_srli_si128((__m128i)a1->BindDriver._p->_t.Guid, 8).m128i_u64[0];
  FilterIndex = a1->FilterIndex;
  v14 = HIBYTE(v5);
  v13 = BYTE6(v5);
  v12 = BYTE5(v5);
  v11 = BYTE4(v5);
  v10 = BYTE3(v5);
  v9 = BYTE2(v5);
  v8 = BYTE1(v5);
  v7 = (unsigned __int8)v5;
  v6 = HIWORD(*(_QWORD *)&a1->BindDriver._p->_t.Guid.Data1);
  RtlUnicodeStringPrintf(
    a2 + 1,
    L"{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}-%04d",
    *(_QWORD *)&a1->BindDriver._p->_t.Guid.Data1,
    (unsigned __int16)WORD2(*(_QWORD *)&a1->BindDriver._p->_t.Guid.Data1),
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12,
    v13,
    v14,
    FilterIndex);
  *(_QWORD *)&a2->Length = a1->BindState.Miniport;
  a2->Buffer = &v2->Length;
}
