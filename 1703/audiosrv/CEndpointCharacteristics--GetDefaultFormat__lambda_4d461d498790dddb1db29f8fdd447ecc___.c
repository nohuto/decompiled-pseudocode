/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB264
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB3A4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BAB88 (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974 (_lambda_0a80d7e3d12d42377e48064cdd362aeb_--operator().c)
 *     ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BD5AC (-GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___(
        CEndpointCharacteristics *a1,
        int a2,
        int a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  struct tWAVEFORMATEX **v8; // rsi
  int OffloadDeviceFormat; // ebx
  int ComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc; // eax
  __int128 v11; // xmm1
  __int64 v12; // xmm0_8
  __int128 v13; // xmm1
  struct tagPROPVARIANT pvar; // [rsp+28h] [rbp-21h] BYREF
  __int128 v16[4]; // [rsp+48h] [rbp-1h] BYREF
  __int64 v17; // [rsp+88h] [rbp+3Fh]
  char v18; // [rsp+B0h] [rbp+67h] BYREF

  memset(&pvar, 0, sizeof(pvar));
  if ( a2 )
  {
    v8 = a5;
    OffloadDeviceFormat = CEndpointCharacteristics::GetOffloadDeviceFormat(a1, a5);
    if ( OffloadDeviceFormat >= 0 )
      lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(a4, *v8, &v18);
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
      && (v18 = 0, lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(a4, pvar.bstrblobVal.pData, &v18), v18) )
    {
      ComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc = CloneWaveFormat(
                                                                         (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                         a5);
    }
    else
    {
      v11 = *(_OWORD *)(a4 + 16);
      v16[0] = *(_OWORD *)a4;
      v16[2] = *(_OWORD *)(a4 + 32);
      v12 = *(_QWORD *)(a4 + 64);
      v16[1] = v11;
      v13 = *(_OWORD *)(a4 + 48);
      v17 = v12;
      v16[3] = v13;
      ComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___(
                                                                         (__int64)a1,
                                                                         a3,
                                                                         v16,
                                                                         a5);
    }
    OffloadDeviceFormat = ComputedDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc;
  }
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 5933, OffloadDeviceFormat);
  return (unsigned int)OffloadDeviceFormat;
}
