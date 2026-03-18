/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800558E8
 * Callers:
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18003BF40 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?__private_IsVariantEqual@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Variant_DwmHintingPpm@@W4VariantReportingKind@2@_N@Z @ 0x180052D60 (-__private_IsVariantEqual@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@SA_NW4Varia.c)
 *     ?PrepareForCalculation@CExpression@@MEAAXPEA_N@Z @ 0x180054130 (-PrepareForCalculation@CExpression@@MEAAXPEA_N@Z.c)
 *     ?RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_details_RecordUsageResult@@@Z @ 0x180055170 (-RecordFeatureUsageCallback@details@wil@@YAXIPEATwil_details_FeaturePropertyCache@@PEAUwil_detai.c)
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180055680 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x180057E50 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x1800583C8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x1800BC200 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ??4?$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800C78F0 (--4-$unique_ptr@XUprocess_heap_deleter@wil@@@wistd@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?FreeProcessHeap@details@wil@@YAXPEAX@Z @ 0x1800C93FC (-FreeProcessHeap@details@wil@@YAXPEAX@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil_details_ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        int a2,
        int a3)
{
  char v3; // di
  void *v6; // rdx
  void *v7[2]; // [rsp+30h] [rbp-20h] BYREF
  wil::details *v8[2]; // [rsp+40h] [rbp-10h] BYREF
  int v9; // [rsp+78h] [rbp+28h] BYREF
  int v10; // [rsp+80h] [rbp+30h] BYREF

  v10 = a3;
  v9 = a2;
  v3 = 1;
  if ( !wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v9, 4uLL, &v10, 4uLL, 1u) )
  {
    if ( *((_QWORD *)this + 3) )
    {
      if ( *((_BYTE *)this + 58) )
        wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), 0x28uLL);
    }
    else
    {
      *(_OWORD *)v7 = 0LL;
      *(_OWORD *)v8 = 0LL;
      if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v7, 0x32uLL) )
      {
        wil::details_abi::RawUsageIndex::SetBuffer(this, v7[0], 0LL, (char *)v8[0] - (char *)v7[0]);
        wistd::unique_ptr<void,wil::process_heap_deleter>::operator=((char *)this + 48, &v8[1]);
        *((_BYTE *)this + 58) = 1;
      }
      if ( v8[1] )
        wil::details::FreeProcessHeap(v8[1], v6);
    }
    return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, &v9, 4uLL, &v10, 4uLL, 1u);
  }
  return v3;
}
