/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x180044920
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x180042494 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x18004363C (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x1800259F0 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180047240 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF__guid_d @ 0x180090954 (WPP_SF__guid_d.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetFxClsids(
        struct IMMDevice *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  __int64 v9; // rcx
  struct _GUID *v10; // rbx
  HRESULT v11; // edi
  unsigned int v13; // r15d
  struct _GUID *v14; // r10
  unsigned int v15; // esi
  __int64 v16; // r14
  __int64 v17; // r8
  unsigned int v18; // r14d
  GUID *v19; // rax
  int v20; // r10d
  OLECHAR *v21; // r11
  __int64 v22; // rax
  WCHAR *v23; // rdx
  int v24; // r9d
  WCHAR v25; // cx
  struct _GUID *v26; // rax
  __int64 v27; // rax
  char v28; // al
  SIZE_T cb; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v31; // [rsp+40h] [rbp-C0h] BYREF
  HKEY hKey; // [rsp+48h] [rbp-B8h] BYREF
  PROPVARIANT pvar; // [rsp+50h] [rbp-B0h] BYREF
  LPCOLESTR lpsz; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  HKEY v36; // [rsp+68h] [rbp-98h]
  HKEY i; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]
  GUID rguid; // [rsp+80h] [rbp-80h] BYREF
  WCHAR SubKey[80]; // [rsp+90h] [rbp-70h] BYREF

  v38 = -2LL;
  v9 = 0LL;
  v31 = 0LL;
  v30 = 0LL;
  v10 = 0LL;
  cb = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v35 = 0LL;
  *a5 = 0LL;
  *a4 = 0;
  if ( a1 )
  {
    v31 = 0LL;
    ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990,
      &v31);
    v9 = v31;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v9 + 40LL))(v9, 0LL, &v30);
  if ( v11 < 0 )
    goto LABEL_10;
  if ( (*(int (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(v30, a2, &pvar) < 0
    || !(_WORD)pvar )
  {
    if ( a3->pid )
      goto LABEL_15;
    v27 = *(_QWORD *)&a3->fmtid.Data1;
    if ( !*(_QWORD *)&a3->fmtid.Data1 )
      v27 = *(_QWORD *)a3->fmtid.Data4;
    if ( v27 )
    {
LABEL_15:
      v11 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v30 + 40LL))(
              v30,
              a3,
              &pvar);
      if ( v11 < 0 )
        goto LABEL_10;
      if ( (_WORD)pvar == 4127 && (_DWORD)lpsz )
      {
        v13 = (unsigned int)lpsz;
        cb = 0LL;
        if ( (int)ATL::AtlMultiply<unsigned __int64>(&cb, (unsigned int)lpsz, 0x10uLL) >= 0 )
        {
          if ( cb > 0x7FFFFFFF )
          {
            v10 = v14;
          }
          else
          {
            v10 = (struct _GUID *)CoTaskMemAlloc((unsigned int)cb);
            if ( v10 )
            {
              v15 = 0;
              v16 = 0LL;
              while ( 1 )
              {
                v11 = CLSIDFromString(*(LPCOLESTR *)(v35 + v16), &v10[v15]);
                if ( v11 < 0 )
                  goto LABEL_10;
                ++v15;
                v16 += 8LL;
                if ( v15 >= v13 )
                {
                  v17 = 0LL;
                  v18 = 0;
                  goto LABEL_23;
                }
              }
            }
          }
        }
LABEL_48:
        v11 = -2147024882;
        goto LABEL_10;
      }
    }
LABEL_9:
    v11 = -2147467259;
    goto LABEL_10;
  }
  if ( (_WORD)pvar != 31 )
    goto LABEL_9;
  v13 = 1;
  v28 = ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&cb, 1LL);
  v10 = (struct _GUID *)cb;
  if ( !v28 )
    goto LABEL_48;
  v11 = CLSIDFromString(lpsz, (LPCLSID)cb);
  if ( v11 >= 0 )
  {
    v17 = 0LL;
    v18 = 0;
LABEL_23:
    v19 = v10;
    cb = (SIZE_T)v10;
    v20 = (int)hKey;
    v36 = hKey;
    v21 = (OLECHAR *)hKey;
    for ( i = hKey; ; v21 = (OLECHAR *)i )
    {
      rguid = *v19;
      v22 = 75LL;
      v23 = SubKey;
      v24 = 0;
      while ( v22 != -2147483571 )
      {
        v25 = *(WCHAR *)((char *)v23 + (char *)L"AudioEngine\\AudioProcessingObjects\\" - (char *)SubKey);
        if ( !v25 )
          break;
        *v23++ = v25;
        ++v17;
        if ( !--v22 )
        {
          --v23;
          --v17;
          v24 = -2147024774;
          break;
        }
      }
      *v23 = 0;
      if ( ((v24 + 0x80000000) & 0x80000000) != 0 || v24 == -2147024774 )
      {
        v21 = &SubKey[v17];
        i = (HKEY)v21;
        v20 = 75 - v17;
        v36 = (HKEY)(75 - v17);
      }
      if ( v24 < 0
        || StringFromGUID2(&rguid, v21, v20) <= 0
        || RegOpenKeyExW(HKEY_CLASSES_ROOT, SubKey, 0, 0x20019u, &hKey) )
      {
        break;
      }
      RegCloseKey(hKey);
      v17 = 0LL;
      v11 = 0;
      ++v18;
      v19 = (GUID *)(cb + 16);
      cb += 16LL;
      if ( v18 >= v13 )
      {
        v26 = v10;
        v10 = 0LL;
        *a5 = v26;
        *a4 = v13;
        goto LABEL_10;
      }
      v20 = (int)v36;
    }
    v11 = -2005139398;
    if ( WPP_GLOBAL_Control != (CVolumeStrip *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        10LL,
        &WPP_bcb4de91adcb34afe264a4a8e51aa47e_Traceguids,
        &v10[v18],
        -2005139398);
    }
  }
LABEL_10:
  PropVariantClear(&pvar);
  CoTaskMemFree(v10);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)v11;
}
