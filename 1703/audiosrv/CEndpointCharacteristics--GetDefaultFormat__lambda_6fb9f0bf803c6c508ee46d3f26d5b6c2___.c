/*
 * XREFs of CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C114
 * Callers:
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004C1F0 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___ @ 0x18004BC5C (CEndpointCharacteristics--GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___.c)
 *     _lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator() @ 0x18004C854 (_lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 */

__int64 __fastcall CEndpointCharacteristics::GetDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        struct tWAVEFORMATEX **a5)
{
  __int64 v7; // rdx
  unsigned int ComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2; // eax
  __int64 v9; // xmm1_8
  unsigned int v10; // ebx
  struct tagPROPVARIANT pvar; // [rsp+20h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h] BYREF
  __int64 v14; // [rsp+50h] [rbp-10h]

  memset(&pvar, 0, sizeof(pvar));
  if ( (*(int (__fastcall **)(_QWORD, const PROPERTYKEY *, struct tagPROPVARIANT *))(**(_QWORD **)(a1 + 32) + 40LL))(
         *(_QWORD *)(a1 + 32),
         &PKEY_AudioEngine_OEMFormat,
         &pvar) >= 0
    && pvar.vt == 65
    && IsValidWfxBlob(&pvar)
    && (int)ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData) >= 0
    && (unsigned __int8)lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2_::operator()(a4, pvar.bstrblobVal.pData) )
  {
    ComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 = CloneWaveFormat(
                                                                       (const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData,
                                                                       a5);
  }
  else
  {
    v9 = *(_QWORD *)(a4 + 16);
    v13 = *(_OWORD *)a4;
    v14 = v9;
    ComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2 = CEndpointCharacteristics::GetComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2___(
                                                                       a1,
                                                                       v7,
                                                                       &v13,
                                                                       a5);
  }
  v10 = ComputedDefaultFormat__lambda_6fb9f0bf803c6c508ee46d3f26d5b6c2;
  PropVariantClear((PROPVARIANT *)&pvar);
  LogEPCError("CEndpointCharacteristics::GetDefaultFormat", 5933, v10);
  return v10;
}
