/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB3A4
 * Callers:
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___ @ 0x1800B9E50 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb.c)
 * Callees:
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     ?IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z @ 0x18002EBF8 (-IsValidWfxBlob@@YAHPEAUtagPROPVARIANT@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180098DD8 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB264 (CEndpointCharacteristics--GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 *     _lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator() @ 0x1800BB974 (_lambda_0a80d7e3d12d42377e48064cdd362aeb_--operator().c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_4d461d498790dddb1db29f8fdd447ecc___(
        CEndpointCharacteristics *a1,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  int DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc; // ebx
  bool v10; // sf
  const PROPERTYKEY *v11; // rax
  int updated; // eax
  struct tWAVEFORMATEX *v13; // rdi
  __int64 v15; // [rsp+38h] [rbp-89h] BYREF
  struct tWAVEFORMATEX *v16; // [rsp+40h] [rbp-81h] BYREF
  struct tagPROPVARIANT pvar; // [rsp+48h] [rbp-79h] BYREF
  int v18[4]; // [rsp+68h] [rbp-59h] BYREF
  __int128 v19; // [rsp+78h] [rbp-49h]
  __int128 v20; // [rsp+88h] [rbp-39h]
  __int128 v21; // [rsp+98h] [rbp-29h]
  __int64 v22; // [rsp+A8h] [rbp-19h]
  __int64 v23; // [rsp+B8h] [rbp-9h]
  GUID fmtid; // [rsp+C0h] [rbp-1h] BYREF
  DWORD pid; // [rsp+D0h] [rbp+Fh]

  v23 = -2LL;
  v16 = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)v18 = *(_OWORD *)a5;
    v19 = *(_OWORD *)(a5 + 16);
    v20 = *(_OWORD *)(a5 + 32);
    v21 = *(_OWORD *)(a5 + 48);
    v22 = *(_QWORD *)(a5 + 64);
    DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc = CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___(
                                                               a1,
                                                               a3,
                                                               a4,
                                                               (__int64)v18,
                                                               &v16);
    v10 = DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc < 0;
  }
  else
  {
    memset(&pvar, 0, sizeof(pvar));
    v11 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v11 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v11->fmtid;
    pid = v11->pid;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, struct tagPROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
           *((_QWORD **)a1 + 4),
           &fmtid,
           &pvar) >= 0
      && pvar.vt == 65
      && IsValidWfxBlob(&pvar)
      && (LOBYTE(v15) = 0,
          lambda_0a80d7e3d12d42377e48064cdd362aeb_::operator()(a5, pvar.bstrblobVal.pData, &v15),
          (_BYTE)v15) )
    {
      updated = CloneWaveFormat((const struct tWAVEFORMATEX *)pvar.bstrblobVal.pData, &v16);
    }
    else
    {
      *(_OWORD *)v18 = *(_OWORD *)a5;
      v19 = *(_OWORD *)(a5 + 16);
      v20 = *(_OWORD *)(a5 + 32);
      v21 = *(_OWORD *)(a5 + 48);
      v22 = *(_QWORD *)(a5 + 64);
      DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc = CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___(
                                                                 a1,
                                                                 a3,
                                                                 a4,
                                                                 (__int64)v18,
                                                                 &v16);
      if ( DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc < 0 )
        goto LABEL_17;
      updated = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(a1, a3, a4, v16);
    }
    DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc = updated;
    if ( updated < 0 )
      goto LABEL_17;
    PropVariantClear((PROPVARIANT *)&pvar);
    v10 = DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc < 0;
  }
  if ( !v10 )
  {
    v13 = v16;
    DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc = ValidateWaveFormatEx(v16);
    if ( DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc >= 0 )
    {
      v16 = 0LL;
      *a6 = v13;
    }
  }
LABEL_17:
  LogEPCError(
    "CEndpointCharacteristics::GetDeviceFormatInternal",
    6005,
    DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc);
  CoTaskMemFree(v16);
  return (unsigned int)DefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc;
}
