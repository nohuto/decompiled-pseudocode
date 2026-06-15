/*
 * XREFs of ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x18001F4A0
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x18001F3A0 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?CloneData@?$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z @ 0x180023C18 (-CloneData@-$CSimpleStringT@G$0A@@ATL@@CAPEAUCStringData@2@PEAU32@@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002A820 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x180038800 (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     atexit @ 0x18004925C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetApplicationDefaultEndpoint(
        CPolicyConfig *this,
        unsigned int a2,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002 a3,
        enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001 a4,
        unsigned __int16 **a5)
{
  __int64 v6; // r15
  CPolicyConfig *v8; // r13
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  __int64 *v10; // rax
  const unsigned __int16 *v11; // rbx
  int v12; // edi
  __int64 v13; // r8
  __int64 v14; // rdx
  int v15; // eax
  __int64 v16; // r10
  __int64 v18; // r8
  __int64 v19; // rdx
  ATL::CAtlException *v20; // rbx
  ATL::CAtlException *v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rdx
  _QWORD *v24; // rcx
  __int64 *v25; // r15
  __int64 i; // rdx
  ATL::CAtlException *v27; // rdx
  _QWORD *v28; // rcx
  __int64 *v29; // r15
  unsigned __int64 v30; // rsi
  unsigned __int16 *v31; // rax
  const unsigned __int16 *v32; // [rsp+30h] [rbp-1A8h] BYREF
  int v33; // [rsp+38h] [rbp-1A0h]
  int v34; // [rsp+3Ch] [rbp-19Ch]
  int v35; // [rsp+40h] [rbp-198h]
  WINBOOL fPending; // [rsp+44h] [rbp-194h] BYREF
  int v37; // [rsp+48h] [rbp-190h] BYREF
  int v38; // [rsp+50h] [rbp-188h] BYREF
  LPVOID Context; // [rsp+58h] [rbp-180h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+60h] [rbp-178h]
  char v41; // [rsp+68h] [rbp-170h]
  unsigned int v42; // [rsp+70h] [rbp-168h]
  int v43; // [rsp+74h] [rbp-164h]
  int v44; // [rsp+78h] [rbp-160h]
  unsigned int v45; // [rsp+7Ch] [rbp-15Ch]
  unsigned int v46; // [rsp+80h] [rbp-158h]
  int v47; // [rsp+84h] [rbp-154h]
  int v48; // [rsp+88h] [rbp-150h]
  unsigned int v49; // [rsp+8Ch] [rbp-14Ch]
  __int64 v50; // [rsp+90h] [rbp-148h]
  __int64 v51; // [rsp+98h] [rbp-140h]
  __int64 *v52; // [rsp+A0h] [rbp-138h]
  __int64 v53; // [rsp+A8h] [rbp-130h]
  __int64 *v54; // [rsp+B0h] [rbp-128h]
  __int64 v55; // [rsp+B8h] [rbp-120h]
  __int64 v56; // [rsp+C0h] [rbp-118h]
  unsigned __int16 **v57; // [rsp+C8h] [rbp-110h]
  unsigned int v58; // [rsp+D0h] [rbp-108h]
  _DWORD v59[2]; // [rsp+D8h] [rbp-100h] BYREF
  __int64 v60; // [rsp+E0h] [rbp-F8h]
  __int64 v61; // [rsp+E8h] [rbp-F0h]
  __int64 v62; // [rsp+F0h] [rbp-E8h]
  __int64 v63; // [rsp+F8h] [rbp-E0h]
  ATL::CAtlException *v64[5]; // [rsp+100h] [rbp-D8h] BYREF
  ATL::CAtlException *v65[3]; // [rsp+128h] [rbp-B0h] BYREF
  unsigned __int16 *v66; // [rsp+140h] [rbp-98h]
  int v67; // [rsp+148h] [rbp-90h]
  int v68; // [rsp+14Ch] [rbp-8Ch]
  void *v69; // [rsp+150h] [rbp-88h]
  int v70; // [rsp+158h] [rbp-80h]
  int v71; // [rsp+15Ch] [rbp-7Ch]
  const char *v72; // [rsp+160h] [rbp-78h]
  __int64 v73; // [rsp+168h] [rbp-70h]
  int *v74; // [rsp+170h] [rbp-68h]
  __int64 v75; // [rsp+178h] [rbp-60h]
  int *v76; // [rsp+180h] [rbp-58h]
  __int64 v77; // [rsp+188h] [rbp-50h]

  v65[1] = (ATL::CAtlException *)-2LL;
  v6 = a3;
  v57 = a5;
  v8 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)g_PolicyConfig + 3);
  v41 = 1;
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
  {
    _InterlockedIncrement(&dword_18012BAA0);
    v10 = &qword_18012BA90;
  }
  else
  {
    v10 = (__int64 *)v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  }
  v11 = (const unsigned __int16 *)(v10 + 3);
  v32 = (const unsigned __int16 *)(v10 + 3);
  if ( (unsigned int)v6 > 2 )
    goto LABEL_64;
  if ( a4 == eRender )
  {
    v35 = 0;
    v12 = 0;
    try
    {
      v13 = (__int64)v8 + 72 * v6 + 160;
      v64[1] = (ATL::CAtlException *)v13;
      v46 = a2;
      if ( *(_DWORD *)(v13 + 16) == 17 )
        v14 = a2 % 0x11;
      else
        v14 = a2 % *(_DWORD *)(v13 + 16);
      v47 = v14;
      if ( *(_QWORD *)v13 )
      {
        for ( i = *(_QWORD *)(*(_QWORD *)v13 + 8 * v14); ; i = *(_QWORD *)(i + 16) )
        {
          v56 = i;
          if ( !i )
            break;
          v48 = *(_DWORD *)(i + 24);
          if ( v48 == a2 && *(_DWORD *)i == a2 )
          {
            v64[2] = (ATL::CAtlException *)(i + 8);
            v27 = *(ATL::CAtlException **)(i + 8);
            v28 = (_QWORD *)((char *)v27 - 24);
            v64[3] = (ATL::CAtlException *)((char *)v27 - 24);
            v29 = v10;
            v54 = v10;
            if ( (__int64 *)((char *)v27 - 24) != v10 )
            {
              if ( *((int *)v10 + 4) >= 0 && *v28 == *v10 )
              {
                v55 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v28);
                if ( _InterlockedExchangeAdd((volatile signed __int32 *)v29 + 4, 0xFFFFFFFF) <= 1 )
                  (*(void (__fastcall **)(__int64))(*(_QWORD *)*v54 + 8LL))(*v54);
                v11 = (const unsigned __int16 *)(v55 + 24);
                v32 = (const unsigned __int16 *)(v55 + 24);
              }
              else
              {
                v49 = *((_DWORD *)v27 - 4);
                v64[4] = v27;
                ATL::CSimpleStringT<unsigned short,0>::SetString(&v32, v27, v49);
                v11 = v32;
              }
            }
            v15 = 1;
            goto LABEL_10;
          }
        }
      }
      v15 = 0;
LABEL_10:
      v35 = v15;
    }
    catch ( ATL::CAtlException *v65 )
    {
      v20 = v65[0];
      if ( *(_DWORD *)v65[0] == -1073741571 )
        _o__resetstkoflw();
      v33 = *(_DWORD *)v20;
      v15 = v35;
      goto LABEL_62;
    }
    goto LABEL_11;
  }
  if ( a4 != eCapture )
  {
LABEL_64:
    v12 = -2147024809;
    goto LABEL_14;
  }
  v34 = 0;
  v12 = 0;
  try
  {
    v18 = (__int64)v8 + 72 * v6 + 376;
    v65[2] = (ATL::CAtlException *)v18;
    v58 = a2;
    v42 = a2;
    if ( *(_DWORD *)(v18 + 16) == 17 )
      v19 = a2 % 0x11;
    else
      v19 = a2 % *(_DWORD *)(v18 + 16);
    v43 = v19;
    if ( !*(_QWORD *)v18 )
      goto LABEL_28;
    v22 = *(_QWORD *)(*(_QWORD *)v18 + 8 * v19);
    v50 = v22;
    while ( v22 )
    {
      v44 = *(_DWORD *)(v22 + 24);
      if ( v44 == a2 && *(_DWORD *)v22 == a2 )
      {
        v51 = v22;
        goto LABEL_40;
      }
      v22 = *(_QWORD *)(v22 + 16);
      v50 = v22;
    }
    v22 = 0LL;
    v51 = 0LL;
LABEL_40:
    if ( v22 )
    {
      v61 = v22 + 8;
      v23 = *(_QWORD *)(v22 + 8);
      v24 = (_QWORD *)(v23 - 24);
      v62 = v23 - 24;
      v25 = v10;
      v52 = v10;
      if ( (__int64 *)(v23 - 24) != v10 )
      {
        if ( *((int *)v10 + 4) >= 0 && *v24 == *v10 )
        {
          v53 = ATL::CSimpleStringT<unsigned short,0>::CloneData(v24);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v25 + 4, 0xFFFFFFFF) <= 1 )
            (*(void (__fastcall **)(__int64))(*(_QWORD *)*v52 + 8LL))(*v52);
          v11 = (const unsigned __int16 *)(v53 + 24);
          v32 = (const unsigned __int16 *)(v53 + 24);
        }
        else
        {
          v45 = *(_DWORD *)(v23 - 16);
          v63 = v23;
          ATL::CSimpleStringT<unsigned short,0>::SetString(&v32, v23, v45);
          v11 = v32;
        }
      }
      v15 = 1;
    }
    else
    {
LABEL_28:
      v15 = 0;
    }
    v34 = v15;
  }
  catch ( ATL::CAtlException *v64 )
  {
    v21 = v64[0];
    if ( *(_DWORD *)v64[0] == -1073741571 )
      _o__resetstkoflw();
    v33 = *(_DWORD *)v21;
    v15 = v34;
LABEL_62:
    v11 = v32;
    v12 = v33;
  }
LABEL_11:
  if ( v12 >= 0 )
  {
    if ( v15 )
    {
      v30 = *((_DWORD *)v11 - 4) + 1;
      v31 = (unsigned __int16 *)CoTaskMemAlloc(2 * v30);
      *v57 = v31;
      StringCchCopyW(v31, v30, v11);
      goto LABEL_18;
    }
    v12 = -2147023728;
  }
LABEL_14:
  v38 = v12;
  v37 = 4432;
  InitOnceBeginInitialize(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = qword_18012BF30;
    qword_18012BF30[0] = &AudioSrvTelemetryProvider::`vftable';
    qword_18012BF48 = (struct _TlgProvider_t *)&`AudioSrvTelemetryProvider::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_18012BF30, qword_18012BF48);
    InitOnceComplete(&`AudioSrvTelemetryProvider::Instance'::`2'::wrapper, 0, qword_18012BF30);
  }
  v16 = *((_QWORD *)Context + 1);
  if ( *(_DWORD *)v16 > 4u )
  {
    v72 = "CPolicyConfig::GetApplicationDefaultEndpoint";
    v73 = 45LL;
    v74 = &v37;
    v75 = 4LL;
    v76 = &v38;
    v77 = 4LL;
    v59[0] = ((unsigned int)&unk_1800F898E - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    v59[1] = 4;
    v60 = 0LL;
    v66 = *(unsigned __int16 **)(v16 + 8);
    v67 = *v66;
    v68 = 2;
    v69 = &unk_1800F8999;
    v70 = 35;
    v71 = 1;
    EtwEventWriteTransfer(*(_QWORD *)(v16 + 32), v59, 0LL, 0LL);
    v11 = v32;
  }
LABEL_18:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v11 - 3) + 8LL))(*((_QWORD *)v11 - 3));
  if ( v41 )
  {
    LeaveCriticalSection(lpCriticalSection);
    v41 = 0;
  }
  return (unsigned int)v12;
}
