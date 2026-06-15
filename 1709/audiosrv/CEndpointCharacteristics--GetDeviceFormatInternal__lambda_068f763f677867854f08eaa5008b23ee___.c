/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x180020F2C
 * Callers:
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180022274 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 * Callees:
 *     _TlgWrite @ 0x180001690 (_TlgWrite.c)
 *     ?GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@U_GUID@@W4PeriodicityType@@PEAI444@Z @ 0x180021E58 (-GetSharedModeEnginePeriodicity@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineen.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180023870 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateSz @ 0x18002CF70 (_TlgCreateSz.c)
 *     _TlgKeywordOn @ 0x1800312F4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800AF0B4 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800B8530 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
        CEndpointCharacteristics *a1,
        char a2,
        bool a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        __int64 a5,
        struct tWAVEFORMATEX **a6)
{
  const PROPERTYKEY *v9; // rax
  const void *v10; // rsi
  __int64 v11; // rdi
  struct tWAVEFORMATEX *v12; // rax
  struct tWAVEFORMATEX *v13; // rbx
  int DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee; // edi
  bool v15; // sf
  struct tWAVEFORMATEX *v16; // rax
  LPCGUID v18; // r9
  LPCGUID v19; // r8
  struct tWAVEFORMATEX *v20; // [rsp+58h] [rbp-B0h] BYREF
  int v21; // [rsp+60h] [rbp-A8h] BYREF
  int v22; // [rsp+68h] [rbp-A0h] BYREF
  PROPVARIANT pvar_8[2]; // [rsp+78h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+88h] [rbp-80h]
  int v25[4]; // [rsp+98h] [rbp-70h] BYREF
  __int128 v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B8h] [rbp-50h]
  GUID fmtid; // [rsp+C0h] [rbp-48h] BYREF
  DWORD pid; // [rsp+D0h] [rbp-38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+F8h] [rbp-10h] BYREF
  int *v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+114h] [rbp+Ch]
  int *v35; // [rsp+118h] [rbp+10h]
  int v36; // [rsp+120h] [rbp+18h]
  int v37; // [rsp+124h] [rbp+1Ch]

  v27 = -2LL;
  v20 = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar_8 = *(_OWORD *)a5;
    *(_OWORD *)Src = *(_OWORD *)(a5 + 16);
    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                               (int)a1,
                                                               a3,
                                                               a4,
                                                               (int)pvar_8,
                                                               &v20);
    v15 = DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0;
  }
  else
  {
    *(_OWORD *)pvar_8 = 0uLL;
    Src[0] = 0LL;
    v9 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
    if ( a4 != eKeywordDetectorConnector )
      v9 = &PKEY_AudioEngine_DeviceFormat;
    fmtid = v9->fmtid;
    pid = v9->pid;
    if ( (*(int (__fastcall **)(_QWORD *, GUID *, PROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
           *((_QWORD **)a1 + 4),
           &fmtid,
           pvar_8) >= 0
      && LOWORD(pvar_8[0]) == 65
      && LODWORD(pvar_8[1]) >= 0x12
      && LODWORD(pvar_8[1]) == *((unsigned __int16 *)Src[0] + 8) + 18LL
      && (*(_OWORD *)v25 = *(_OWORD *)(a5 + 12),
          (int)CEndpointCharacteristics::GetSharedModeEnginePeriodicity(
                 *(_QWORD *)a5,
                 *(unsigned int *)(a5 + 8),
                 Src[0],
                 v25,
                 0,
                 0LL,
                 0LL,
                 0LL,
                 0LL) >= 0) )
    {
      v10 = Src[0];
      v11 = *((unsigned __int16 *)Src[0] + 8);
      v12 = (struct tWAVEFORMATEX *)CoTaskMemAlloc(v11 + 18);
      v13 = v12;
      if ( v12 )
      {
        memcpy_0(v12, v10, v11 + 18);
        DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = 0;
      }
      else
      {
        DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024882;
      }
      v20 = v13;
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0 )
        goto LABEL_16;
    }
    else
    {
      *(_OWORD *)v25 = *(_OWORD *)a5;
      v26 = *(_OWORD *)(a5 + 16);
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                                 (int)a1,
                                                                 a3,
                                                                 a4,
                                                                 (int)v25,
                                                                 &v20);
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0 )
        goto LABEL_18;
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                                 a1,
                                                                 a3,
                                                                 a4,
                                                                 v20);
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0 )
        goto LABEL_18;
    }
    PropVariantClear(pvar_8);
    v15 = DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0;
  }
  if ( v15 )
  {
LABEL_18:
    v13 = v20;
    goto LABEL_16;
  }
  v13 = v20;
  DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = ValidateWaveFormatEx(v20);
  if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
  {
    v16 = v13;
    v13 = 0LL;
    v20 = 0LL;
    *a6 = v16;
  }
LABEL_16:
  v22 = DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
  v21 = 6111;
  if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee < 0
    && (unsigned int)hProvider > 3
    && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDeviceFormatInternal");
    v32 = &v21;
    v33 = (int)v18;
    v34 = 0;
    v35 = &v22;
    v36 = (int)v18;
    v37 = 0;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_180110C20, v19, v18, 5u, &pData);
    v13 = v20;
  }
  CoTaskMemFree(v13);
  return (unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
}
