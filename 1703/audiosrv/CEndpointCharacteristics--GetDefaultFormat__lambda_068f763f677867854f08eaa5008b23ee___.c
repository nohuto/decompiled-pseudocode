/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BB150
 * Callers:
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x1800037E0 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x18007D2F0 (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BA638 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BD5AC (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        __int128 *a4,
        struct tWAVEFORMATEX **a5)
{
  int OffloadDeviceFormat; // ebx
  int ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee; // eax
  __int128 v10; // xmm1
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13[2]; // [rsp+40h] [rbp-20h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_068f763f677867854f08eaa5008b23ee_::operator()((__int64)a4, &(*a5)->wFormatTag);
  }
  else
  {
    if ( (*(int (__fastcall **)(_QWORD *, const PROPERTYKEY *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
           *((_QWORD **)a1 + 4),
           &PKEY_AudioEngine_OEMFormat,
           &pvar) >= 0
      && pvar.vt == 65
      && IsValidWfxBlob(&pvar)
      && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0
      && lambda_068f763f677867854f08eaa5008b23ee_::operator()((__int64)a4, pvar.caui.pElems) )
    {
      ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                         a5);
    }
    else
    {
      v10 = a4[1];
      v13[0] = *a4;
      v13[1] = v10;
      ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                         (__int64)a1,
                                                                         a3,
                                                                         v13,
                                                                         a5);
    }
    OffloadDeviceFormat = ComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 5933, OffloadDeviceFormat);
  return (unsigned int)OffloadDeviceFormat;
}
