/*
 * XREFs of ?GetApplicationDefaultEndpoint@CPolicyConfig@@QEAAJKW4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAPEAG@Z @ 0x180018040
 * Callers:
 *     s_rtgGetDefaultAudioEndpoint @ 0x180017F40 (s_rtgGetDefaultAudioEndpoint.c)
 * Callees:
 *     ??4?$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800146FC (--4-$CSimpleStringT@G$0A@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800182F0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18002DA54 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CPolicyConfig::GetApplicationDefaultEndpoint(
        __int64 a1,
        unsigned int a2,
        int a3,
        int a4,
        unsigned __int16 **a5)
{
  __int64 v6; // rdi
  CPolicyConfig *v8; // r14
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rax
  struct ATL::CStringData *NilString; // rax
  int v11; // ecx
  unsigned int v12; // esi
  char *v13; // r8
  __int64 v14; // rdx
  __int64 v15; // r9
  unsigned __int16 *v16; // rdx
  char *v18; // r8
  __int64 v19; // rdx
  __int64 v20; // r9
  ATL::CAtlException *v21; // rbx
  ATL::CAtlException *v22; // rbx
  __int64 v23; // rdx
  __int64 v24; // rdx
  const unsigned __int16 *v25; // rbx
  unsigned __int64 v26; // rdi
  unsigned __int16 *v27; // rax
  int v28; // [rsp+20h] [rbp-58h]
  unsigned __int16 *v29[2]; // [rsp+28h] [rbp-50h] BYREF
  ATL::CAtlException *v30; // [rsp+38h] [rbp-40h] BYREF
  ATL::CAtlException *v31; // [rsp+40h] [rbp-38h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-30h]
  char v33; // [rsp+50h] [rbp-28h]
  int v34; // [rsp+80h] [rbp+8h]

  v29[1] = (unsigned __int16 *)-2LL;
  v6 = a3;
  v8 = g_PolicyConfig;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)g_PolicyConfig + 120);
  EnterCriticalSection((LPCRITICAL_SECTION)g_PolicyConfig + 3);
  v33 = 1;
  v9 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v9 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v9((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v29[0] = (unsigned __int16 *)((char *)NilString + 24);
  if ( (unsigned int)v6 > 6 )
    goto LABEL_42;
  if ( !a4 )
  {
    v11 = 0;
    v12 = 0;
    try
    {
      v18 = (char *)v8 + 72 * v6;
      if ( *((_DWORD *)v18 + 44) == 17 )
        v19 = a2 % 0x11;
      else
        v19 = a2 % *((_DWORD *)v18 + 44);
      v20 = *((_QWORD *)v18 + 20);
      if ( v20 )
      {
        v24 = *(_QWORD *)(v20 + 8 * v19);
        if ( v24 )
        {
          while ( *(_DWORD *)(v24 + 24) != a2 || *(_DWORD *)v24 != a2 )
          {
            v24 = *(_QWORD *)(v24 + 16);
            if ( !v24 )
              goto LABEL_20;
          }
          ATL::CSimpleStringT<unsigned short,0>::operator=(v29, (_QWORD *)(v24 + 8));
          v11 = 1;
        }
      }
LABEL_20:
      v28 = v11;
    }
    catch ( ATL::CAtlException *v31 )
    {
      v21 = v31;
      if ( *(_DWORD *)v31 == -1073741571 )
        _o__resetstkoflw();
      v34 = *(_DWORD *)v21;
      goto LABEL_36;
    }
    goto LABEL_11;
  }
  if ( a4 != 1 )
  {
LABEL_42:
    v12 = -2147024809;
LABEL_43:
    AudSrvTraceLoggingErrorHelper("CPolicyConfig::GetApplicationDefaultEndpoint", 0x1163u, v12);
    goto LABEL_13;
  }
  v11 = 0;
  v12 = 0;
  try
  {
    v13 = (char *)v8 + 72 * v6;
    if ( *((_DWORD *)v13 + 170) == 17 )
      v14 = a2 % 0x11;
    else
      v14 = a2 % *((_DWORD *)v13 + 170);
    v15 = *((_QWORD *)v13 + 83);
    if ( v15 )
    {
      v23 = *(_QWORD *)(v15 + 8 * v14);
      if ( v23 )
      {
        while ( *(_DWORD *)(v23 + 24) != a2 || *(_DWORD *)v23 != a2 )
        {
          v23 = *(_QWORD *)(v23 + 16);
          if ( !v23 )
            goto LABEL_10;
        }
        ATL::CSimpleStringT<unsigned short,0>::operator=(v29, (_QWORD *)(v23 + 8));
        v11 = 1;
      }
    }
LABEL_10:
    v28 = v11;
  }
  catch ( ATL::CAtlException *v30 )
  {
    v22 = v30;
    if ( *(_DWORD *)v30 == -1073741571 )
      _o__resetstkoflw();
    v34 = *(_DWORD *)v22;
LABEL_36:
    v12 = v34;
    if ( v34 < 0 )
      goto LABEL_39;
    v11 = v28;
  }
LABEL_11:
  if ( !v11 )
  {
    v12 = -2147023728;
    goto LABEL_13;
  }
  v25 = v29[0];
  v26 = *((_DWORD *)v29[0] - 4) + 1;
  v27 = (unsigned __int16 *)CoTaskMemAlloc(2 * v26);
  *a5 = v27;
  StringCchCopyW(v27, v26, v25);
LABEL_39:
  if ( (int)(v12 + 0x80000000) >= 0 && v12 != -2147023728 )
    goto LABEL_43;
LABEL_13:
  v16 = v29[0] - 12;
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v29[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  LeaveCriticalSection(lpCriticalSection);
  return v12;
}
