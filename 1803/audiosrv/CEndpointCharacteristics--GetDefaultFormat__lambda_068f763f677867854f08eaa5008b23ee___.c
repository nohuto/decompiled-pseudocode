/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E8984
 * Callers:
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@666@Z @ 0x180011D90 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180038580 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180038090 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     _lambda_068f763f677867854f08eaa5008b23ee_::operator() @ 0x180099EF0 (_lambda_068f763f677867854f08eaa5008b23ee_--operator().c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1800B8A0C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800E7E64 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800EB598 (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x1800EC9AC (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x1800EFDC8 (-LogEPCError@@YAXPEBDHJ@Z.c)
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
      && (unsigned int)IsValidWfxBlob(&pvar)
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
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 6075, OffloadDeviceFormat);
  return (unsigned int)OffloadDeviceFormat;
}
