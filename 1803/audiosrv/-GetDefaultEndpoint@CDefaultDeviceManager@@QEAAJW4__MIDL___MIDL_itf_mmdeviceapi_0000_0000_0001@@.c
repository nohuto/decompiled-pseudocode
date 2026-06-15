/*
 * XREFs of ?GetDefaultEndpoint@CDefaultDeviceManager@@QEAAJW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAV?$CAtlList@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@@ATL@@PEAPEAUIMMDevice@@@Z @ 0x180037120
 * Callers:
 *     ?GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@W4__MIDL___MIDL_itf_mmdeviceapip_0000_0000_0001@@PEAPEAUIMMDevice@@@Z @ 0x18003FE30 (-GetDefaultAudioEndpoint@DynamicAudioEndpointManager@@AEAAJPEAXW4__MIDL___MIDL_itf_mmdeviceapi_0.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180016F9C (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x18005587C (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     __security_check_cookie @ 0x1800608E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
__int64 __fastcall CDefaultDeviceManager::GetDefaultEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        _QWORD *a4,
        _QWORD *a5)
{
  _QWORD *v7; // r14
  struct IUnknown *v8; // rdi
  struct IUnknown *v9; // rbx
  unsigned int v10; // r15d
  int v11; // esi
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  void *v15; // rax
  struct IUnknown *v16; // rcx
  struct IUnknown *v17; // rsi
  struct IUnknown *v18; // r14
  int v19; // r15d
  struct IUnknown *v20; // rcx
  struct IUnknown *v21; // r15
  struct IUnknown *v22; // r14
  unsigned int v23; // r14d
  struct IUnknown *v24; // rax
  void *v25; // rcx
  _WORD *v26; // rdx
  char *v27; // r9
  unsigned __int16 v28; // r8
  int v29; // edx
  __int64 v30; // r15
  unsigned int v31; // ecx
  struct IUnknown *v32; // rcx
  unsigned int v33; // [rsp+30h] [rbp-D0h]
  LPVOID pv; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v35; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  struct IUnknown *v38; // [rsp+50h] [rbp-B0h] BYREF
  struct IUnknown *v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v41; // [rsp+64h] [rbp-9Ch] BYREF
  int v42; // [rsp+68h] [rbp-98h]
  struct _FILETIME FileTime; // [rsp+70h] [rbp-90h] BYREF
  __int64 v44; // [rsp+78h] [rbp-88h] BYREF
  __int64 v45; // [rsp+80h] [rbp-80h]
  struct IUnknown *v46; // [rsp+88h] [rbp-78h] BYREF
  LPVOID ppv; // [rsp+90h] [rbp-70h] BYREF
  __int64 v48; // [rsp+98h] [rbp-68h] BYREF
  __int64 v49; // [rsp+A0h] [rbp-60h]
  FILETIME FileTime2; // [rsp+A8h] [rbp-58h] BYREF
  FILETIME v51; // [rsp+B0h] [rbp-50h] BYREF
  PROPVARIANT pvar; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-40h]
  SYSTEMTIME *v54; // [rsp+C8h] [rbp-38h]
  _QWORD *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  struct IUnknown *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  SYSTEMTIME SystemTime; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t v60[16]; // [rsp+100h] [rbp+0h] BYREF
  wchar_t Buffer[16]; // [rsp+120h] [rbp+20h] BYREF

  v58 = -2LL;
  v55 = a4;
  v7 = a5;
  v45 = (__int64)a5;
  ppv = 0LL;
  v44 = 0LL;
  v8 = 0LL;
  v46 = 0LL;
  v49 = -1LL;
  v33 = 0;
  FileTime2 = 0LL;
  v9 = 0LL;
  v57 = 0LL;
  v10 = 0;
  v36 = 0;
  v51 = 0LL;
  v11 = CoCreateInstance(
          &GUID_bcde0395_e52f_467c_8e3d_c4579291692e,
          0LL,
          0x17u,
          &GUID_a95664d2_9614_4f35_a746_de8db63617e6,
          &ppv);
  if ( v11 < 0 )
    goto LABEL_6;
  v11 = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64, __int64 *))(*(_QWORD *)ppv + 24LL))(ppv, a2, 1LL, &v44);
  if ( v11 < 0 )
    goto LABEL_6;
  v11 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v44 + 24LL))(v44, &v41);
  if ( v11 < 0 )
    goto LABEL_6;
  if ( !v41 )
    goto LABEL_5;
  v11 = StringCchPrintfW(Buffer, 13LL, L"Level:%x", a3);
  if ( v11 < 0 )
    goto LABEL_6;
  v13 = 0LL;
  v42 = 0;
  if ( !v41 )
  {
LABEL_106:
    if ( v8 )
    {
      v24 = v8;
      v8 = 0LL;
      v46 = 0LL;
LABEL_67:
      *v7 = v24;
    }
    if ( *v7 )
      goto LABEL_6;
LABEL_5:
    v11 = -2147023728;
    goto LABEL_6;
  }
  while ( 1 )
  {
    v35 = 0LL;
    v38 = 0LL;
    pv = 0LL;
    FileTime = 0LL;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, struct IUnknown **))(*(_QWORD *)v44 + 32LL))(v44, v13, &v35);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v38 )
        ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
      v32 = v35;
      if ( v35 )
        goto LABEL_127;
      goto LABEL_6;
    }
    v37 = 0;
    if ( (int)GetNeverSetAsDefaultProperty(v35, a2, a3, &v37) >= 0 && v37 )
    {
      v25 = pv;
LABEL_72:
      CoTaskMemFree(v25);
      pv = 0LL;
      if ( v38 )
        ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
      if ( v35 )
        ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
      v23 = v33;
      goto LABEL_63;
    }
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, LPVOID *))v35->lpVtbl[1].Release)(v35, &pv);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v38 )
        ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
      v32 = v35;
      if ( v35 )
        goto LABEL_127;
      goto LABEL_6;
    }
    v14 = (_QWORD *)*v55;
    v15 = pv;
    if ( *v55 )
    {
      while ( 1 )
      {
        v26 = (_WORD *)v14[2];
        v27 = (char *)((_BYTE *)pv - (_BYTE *)v26);
        while ( 1 )
        {
          v28 = *v26;
          if ( *v26 != *(_WORD *)&v27[(_QWORD)v26] )
            break;
          ++v26;
          if ( !v28 )
          {
            v29 = 0;
            goto LABEL_82;
          }
        }
        v29 = v28 < *(_WORD *)&v27[(_QWORD)v26] ? -1 : 1;
LABEL_82:
        if ( !v29 )
          break;
        v14 = (_QWORD *)*v14;
        if ( !v14 )
          goto LABEL_22;
      }
      v25 = pv;
      goto LABEL_72;
    }
LABEL_22:
    v16 = v38;
    if ( v38 != v35 )
    {
      v17 = v38;
      v16 = 0LL;
      v38 = 0LL;
      if ( v35 )
      {
        ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v35->lpVtbl->QueryInterface)(
          v35,
          &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
          &v38);
        v16 = v38;
        v15 = pv;
      }
      if ( v17 )
      {
        ((void (__fastcall *)(struct IUnknown *))v17->lpVtbl->Release)(v17);
        v16 = v38;
        v15 = pv;
      }
    }
    if ( !v16 )
      break;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, unsigned int *))v16->lpVtbl[3].QueryInterface)(
            v16,
            a3,
            &v40);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v38 )
        ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
      v32 = v35;
      if ( !v35 )
        goto LABEL_6;
LABEL_127:
      ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v32);
      goto LABEL_6;
    }
    v39 = 0LL;
    *(_DWORD *)&SystemTime.wYear = 67137;
    *(_QWORD *)&SystemTime.wDayOfWeek = 65537LL;
    *(_DWORD *)&SystemTime.wSecond = 0;
    pvar = 0LL;
    v53 = 0LL;
    v54 = 0LL;
    v11 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, struct IUnknown **))v35->lpVtbl[1].AddRef)(v35, 0LL, &v39);
    if ( v11 >= 0 )
    {
      v11 = ((__int64 (__fastcall *)(struct IUnknown *, void *, PROPVARIANT *))v39->lpVtbl[1].Release)(
              v39,
              &PKEY_Endpoint_CreationTime,
              &pvar);
      if ( v11 >= 0 )
      {
        if ( (_WORD)pvar != 65
          || (_DWORD)v53 != 16
          || !v54
          || (SystemTime = *v54, !SystemTimeToFileTime(&SystemTime, &FileTime)) )
        {
          v11 = -2147467259;
        }
      }
    }
    PropVariantClear(&pvar);
    if ( v39 )
      ((void (__fastcall *)(struct IUnknown *))v39->lpVtbl->Release)(v39);
    if ( v11 < 0 )
    {
      CoTaskMemFree(pv);
      pv = 0LL;
      if ( v38 )
        ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
      v32 = v35;
      if ( !v35 )
        goto LABEL_6;
      goto LABEL_127;
    }
    v18 = v35;
    v39 = 0LL;
    v37 = 0;
    v48 = 0LL;
    v19 = StringCchPrintfW(v60, 13LL, L"Level:%x", a3);
    if ( v19 >= 0 )
    {
      v20 = v39;
      if ( v39 != v18 )
      {
        v21 = v39;
        v20 = 0LL;
        v39 = 0LL;
        if ( v18 )
        {
          ((void (__fastcall *)(struct IUnknown *, GUID *, struct IUnknown **))v18->lpVtbl->QueryInterface)(
            v18,
            &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
            &v39);
          v20 = v39;
        }
        if ( v21 )
        {
          ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
          v20 = v39;
        }
      }
      if ( !v20 )
      {
        v19 = -2147024809;
        goto LABEL_47;
      }
      v37 = 8;
      v19 = ((__int64 (__fastcall *)(struct IUnknown *, wchar_t *, __int64, __int64 *, int *))v20->lpVtbl[5].QueryInterface)(
              v20,
              v60,
              11LL,
              &v48,
              &v37);
      if ( v19 >= 0 )
      {
        v20 = v39;
        if ( v37 == 8 )
          v56 = v48;
        else
          v19 = -2147024809;
        goto LABEL_47;
      }
    }
    v20 = v39;
LABEL_47:
    if ( v20 )
      ((void (__fastcall *)(struct IUnknown *))v20->lpVtbl->Release)(v20);
    if ( v19 < 0 )
    {
      v10 = v36;
      if ( v40 > v36 || v40 == v36 && CompareFileTime(&FileTime, &v51) == 1 )
      {
        v22 = v35;
        if ( v9 != v35 )
        {
          if ( v35 )
            ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->AddRef)(v35);
          if ( v9 )
            ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
          v9 = v22;
          v57 = v22;
        }
        v10 = v40;
        v36 = v40;
        v51 = FileTime;
      }
      v23 = v33;
      goto LABEL_59;
    }
    v30 = v56;
    if ( v56 > v49 )
      goto LABEL_95;
    v23 = v33;
    if ( v56 == v49 )
    {
      v31 = v40;
      if ( v40 > v33 )
        goto LABEL_96;
      if ( v40 == v33 && CompareFileTime(&FileTime, &FileTime2) == 1 )
      {
LABEL_95:
        v31 = v40;
LABEL_96:
        if ( v8 != v35 )
        {
          ATL::AtlComPtrAssign(&v46, v35);
          v8 = v46;
          v31 = v40;
        }
        v49 = v30;
        v23 = v31;
        v33 = v31;
        FileTime2 = FileTime;
      }
    }
    v10 = v36;
LABEL_59:
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v38 )
      ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
    if ( v35 )
      ((void (__fastcall *)(struct IUnknown *))v35->lpVtbl->Release)(v35);
LABEL_63:
    v13 = (unsigned int)(v42 + 1);
    v42 = v13;
    if ( (unsigned int)v13 >= v41 )
    {
      if ( v9 && (!v8 || v10 > v23 || v10 >= 0x60000000) )
      {
        v24 = v9;
        v9 = 0LL;
        v7 = (_QWORD *)v45;
        goto LABEL_67;
      }
      v7 = (_QWORD *)v45;
      goto LABEL_106;
    }
  }
  v11 = -2147024809;
  CoTaskMemFree(v15);
  pv = 0LL;
  if ( v38 )
    ((void (__fastcall *)(struct IUnknown *))v38->lpVtbl->Release)(v38);
  v32 = v35;
  if ( v35 )
    goto LABEL_127;
LABEL_6:
  if ( v9 )
    ((void (__fastcall *)(struct IUnknown *))v9->lpVtbl->Release)(v9);
  if ( v8 )
    ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
  if ( v44 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)v11;
}
