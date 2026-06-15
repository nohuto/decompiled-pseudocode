/*
 * XREFs of CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x18000D900
 * Callers:
 *     ?GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z @ 0x180002CB0 (-GetProcessingPeriodInternal@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@HPEA_J1@Z.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180003C10 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18000C8C0 (-ValidateWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800266D8 (_TlgKeywordOn.c)
 *     WPP_SF_d @ 0x1800470A4 (WPP_SF_d.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BB150 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800BE5F0 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 *     ?UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x1800BF070 (-UpdateDeviceFormatEPProperty@CEndpointCharacteristics@@QEAAJ_NW4__MIDL___MIDL_itf_audioengineen.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetDeviceFormatInternal__lambda_068f763f677867854f08eaa5008b23ee___(
        CEndpointCharacteristics *a1,
        char a2,
        bool a3,
        int a4,
        __int64 *a5,
        _QWORD *a6)
{
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v6; // r12d
  CEndpointCharacteristics *v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // rsi
  const PROPERTYKEY *v10; // rax
  const struct tWAVEFORMATEX *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 *v15; // r8
  struct _GUID v16; // xmm0
  CAudioSignalProcessingModeMap *v17; // rcx
  int v18; // edx
  int v19; // eax
  struct _GUID *v20; // rax
  struct _GUID v21; // xmm1
  GUID v22; // kr00_16
  __int64 v23; // rax
  int v24; // edi
  __int64 i; // rsi
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r12d
  __int64 v30; // r14
  const void *v31; // rdi
  __int64 v32; // rbx
  void *v33; // rax
  void *v34; // rsi
  void *v35; // rbx
  int DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee; // edi
  void *v37; // rax
  _QWORD *v39; // r9
  __int64 v40; // r8
  LPCGUID v41; // r8
  LPCGUID v42; // r9
  char v43; // [rsp+30h] [rbp-D0h]
  int v45; // [rsp+38h] [rbp-C8h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD *v47; // [rsp+48h] [rbp-B8h] BYREF
  const struct tWAVEFORMATEX *v48; // [rsp+50h] [rbp-B0h]
  __int64 *v49; // [rsp+58h] [rbp-A8h]
  __int64 v50; // [rsp+60h] [rbp-A0h]
  CEndpointCharacteristics *v51; // [rsp+68h] [rbp-98h]
  PROPVARIANT pvar[2]; // [rsp+70h] [rbp-90h] BYREF
  void *Src[2]; // [rsp+80h] [rbp-80h]
  __int64 v54; // [rsp+90h] [rbp-70h]
  struct _GUID v55; // [rsp+A0h] [rbp-60h] BYREF
  GUID fmtid; // [rsp+B0h] [rbp-50h] BYREF
  DWORD pid; // [rsp+C0h] [rbp-40h]
  struct _GUID v58; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v59; // [rsp+E0h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+110h] [rbp+10h] BYREF
  int *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  _QWORD **v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]

  v54 = -2LL;
  v6 = a4;
  v45 = a4;
  v7 = a1;
  v51 = a1;
  v8 = (__int64)a5;
  v50 = (__int64)a5;
  v9 = a6;
  v47 = a6;
  pv = 0LL;
  *a6 = 0LL;
  if ( a2 )
  {
    *(_OWORD *)pvar = *(_OWORD *)a5;
    *(_OWORD *)Src = *((_OWORD *)a5 + 1);
    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                               (int)a1,
                                                               a3,
                                                               a4,
                                                               (int)pvar,
                                                               (struct tWAVEFORMATEX **)&pv);
    if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
    {
LABEL_31:
      v35 = pv;
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = ValidateWaveFormatEx((const struct tWAVEFORMATEX *)pv);
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
      {
        v37 = v35;
        v35 = 0LL;
        pv = 0LL;
        *v9 = v37;
      }
LABEL_33:
      LODWORD(v47) = DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
      v45 = 6005;
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
        goto LABEL_34;
      goto LABEL_61;
    }
LABEL_36:
    v35 = pv;
    goto LABEL_33;
  }
  pvar[0] = 0LL;
  pvar[1] = 0LL;
  Src[0] = 0LL;
  v10 = &PKEY_AudioEngine_DeviceFormat;
  if ( a4 == 3 )
    v10 = (const PROPERTYKEY *)&PKEY_AudioEngine_KeywordDetector_DeviceFormat;
  fmtid = v10->fmtid;
  pid = v10->pid;
  if ( (*(int (__fastcall **)(_QWORD *, GUID *, PROPVARIANT *))(**((_QWORD **)a1 + 4) + 40LL))(
         *((_QWORD **)a1 + 4),
         &fmtid,
         pvar) < 0
    || LOWORD(pvar[0]) != 65
    || LODWORD(pvar[1]) < 0x12
    || (v11 = (const struct tWAVEFORMATEX *)Src[0],
        v48 = (const struct tWAVEFORMATEX *)Src[0],
        LODWORD(pvar[1]) != *((unsigned __int16 *)Src[0] + 8) + 18LL) )
  {
LABEL_58:
    v58 = *(struct _GUID *)v8;
    v59 = *(_OWORD *)(v8 + 16);
    DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___(
                                                               (int)v7,
                                                               a3,
                                                               v6,
                                                               (int)&v58,
                                                               (struct tWAVEFORMATEX **)&pv);
    if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
    {
      DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = CEndpointCharacteristics::UpdateDeviceFormatEPProperty(
                                                                 v7,
                                                                 a3,
                                                                 v6,
                                                                 (const struct tWAVEFORMATEX *)pv);
      if ( DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee >= 0 )
      {
LABEL_30:
        PropVariantClear(pvar);
        goto LABEL_31;
      }
    }
    goto LABEL_36;
  }
  v12 = *((int *)a5 + 2);
  v13 = *a5;
  if ( (_DWORD)v12 == 3 )
    v14 = 192LL;
  else
    v14 = 184LL;
  v15 = (__int64 *)(v14 + v13);
  v49 = (__int64 *)(v14 + v13);
  v43 = 0;
  v16 = *(struct _GUID *)((char *)a5 + 12);
  v55 = v16;
  v17 = (CAudioSignalProcessingModeMap *)(v13 + 24 * (v12 + 58));
  v18 = 0;
  v19 = *((_DWORD *)v17 + 4);
  if ( v19 > 0 )
  {
    while ( 1 )
    {
      v39 = (_QWORD *)(*(_QWORD *)v17 + 16LL * v18);
      v40 = *v39 - *(_QWORD *)&v55.Data1;
      if ( *v39 == *(_QWORD *)&v55.Data1 )
        v40 = v39[1] - *(_QWORD *)v55.Data4;
      if ( !v40 )
        break;
      if ( ++v18 >= v19 )
        goto LABEL_47;
    }
    if ( v18 != -1 )
    {
      v55 = v16;
      v20 = CAudioSignalProcessingModeMap::Lookup(v17, &v58, &v55);
      v15 = v49;
      v11 = v48;
      goto LABEL_12;
    }
LABEL_47:
    v11 = v48;
    v15 = v49;
  }
  v55 = v16;
  v20 = &v55;
LABEL_12:
  v21 = *v20;
  v55 = v21;
  v22 = v21;
  v23 = *(_QWORD *)&v21.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v21.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v23 = *(_QWORD *)v21.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( !v23 )
  {
    v55 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    v22 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  }
  v24 = 0;
  for ( i = 0LL; ; i += 8LL )
  {
    v26 = *v15;
    if ( v24 >= *(_DWORD *)(*v15 + 8) )
    {
      if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x80000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          11LL,
          &WPP_901a5e9bcaaa38e898dae42cff5cb88c_Traceguids,
          (unsigned int)(v43 != 0) - 2005139366);
      }
      v6 = v45;
      v7 = v51;
      v9 = v47;
      v8 = v50;
      goto LABEL_58;
    }
    if ( i < 0 || v24 >= *(_DWORD *)(v26 + 8) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800651B9LL);
    }
    v27 = *(_QWORD *)(i + *(_QWORD *)v26);
    v28 = *(_QWORD *)v27 - *(_QWORD *)&v22.Data1;
    if ( *(_QWORD *)v27 == *(_QWORD *)&v22.Data1 )
      v28 = *(_QWORD *)(v27 + 8) - *(_QWORD *)v22.Data4;
    if ( !v28 )
    {
      v43 = 1;
      v29 = 0;
      if ( *(int *)(v27 + 24) > 0 )
        break;
    }
LABEL_35:
    ++v24;
  }
  v30 = 0LL;
  while ( 1 )
  {
    if ( v30 < 0 || v29 >= *(_DWORD *)(v27 + 24) )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x1800651A3LL);
    }
    if ( (unsigned int)CompareWaveFormat(v11, **(const struct tWAVEFORMATEX ***)(v30 + *(_QWORD *)(v27 + 16))) )
      break;
    ++v29;
    v30 += 8LL;
    v11 = v48;
    if ( v29 >= *(_DWORD *)(v27 + 24) )
    {
      v15 = v49;
      goto LABEL_35;
    }
  }
  v31 = Src[0];
  v32 = *((unsigned __int16 *)Src[0] + 8);
  v33 = CoTaskMemAlloc(v32 + 18);
  v34 = v33;
  if ( v33 )
  {
    memcpy_0(v33, v31, v32 + 18);
    pv = v34;
    v9 = v47;
    goto LABEL_30;
  }
  v35 = 0LL;
  pv = 0LL;
  DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee = -2147024882;
  LODWORD(v47) = -2147024882;
  v45 = 6005;
LABEL_61:
  if ( (unsigned int)hProvider > 3 && TlgKeywordOn((TraceLoggingHProvider)&hProvider, 4uLL) )
  {
    TlgCreateSz(&pDesc, "CEndpointCharacteristics::GetDeviceFormatInternal");
    v62 = &v45;
    v63 = 4LL;
    v64 = &v47;
    v65 = 4LL;
    TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800FA8C5, v41, v42, 5u, &pData);
    v35 = pv;
  }
LABEL_34:
  CoTaskMemFree(v35);
  return (unsigned int)DefaultFormat__lambda_068f763f677867854f08eaa5008b23ee;
}
