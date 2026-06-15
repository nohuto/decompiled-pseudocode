/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800536D0
 * Callers:
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800511A4 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800521D4 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 * Callees:
 *     ??$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z @ 0x180017EF0 (--$AtlMultiply@_K@ATL@@YAJPEA_K_K1@Z.c)
 *     ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x180053D30 (-IsAPOClsidRegistered@@YAHU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180099E44 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x18009FA70 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall GetFxClsids(
        struct IMMDevice *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  __int64 v9; // r13
  GUID *v10; // rbx
  __int64 v11; // rcx
  int v12; // edi
  int v13; // eax
  unsigned int v15; // r12d
  GUID *v16; // rax
  HRESULT v17; // eax
  GUID *v18; // r15
  unsigned int v19; // edi
  struct _GUID *v20; // rax
  __int64 v21; // rax
  unsigned int v22; // r15d
  HRESULT v23; // eax
  GUID *v24; // r12
  int v25; // [rsp+20h] [rbp-A1h]
  char *v26; // [rsp+28h] [rbp-99h]
  GUID *v27; // [rsp+80h] [rbp-41h] BYREF
  __int64 v28; // [rsp+88h] [rbp-39h] BYREF
  __int64 v29; // [rsp+90h] [rbp-31h] BYREF
  PROPVARIANT pvar; // [rsp+98h] [rbp-29h] BYREF
  LPCOLESTR lpsz; // [rsp+A0h] [rbp-21h]
  __int64 v32; // [rsp+A8h] [rbp-19h]
  SIZE_T cb[2]; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v34; // [rsp+C0h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+57h]

  v34 = -2LL;
  v9 = 0LL;
  v10 = 0LL;
  v27 = 0LL;
  *a5 = 0LL;
  *a4 = 0;
  v11 = 0LL;
  v29 = 0LL;
  if ( a1 )
  {
    ((void (__fastcall *)(struct IMMDevice *, GUID *, __int64 *))a1->lpVtbl->QueryInterface)(
      a1,
      &GUID_419e19f7_d318_4c05_b705_2f17133c55da,
      &v29);
    v11 = v29;
  }
  v28 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v11 + 40LL))(v11, 0LL, &v28);
  if ( v12 >= 0 )
  {
    pvar = 0LL;
    lpsz = 0LL;
    v32 = 0LL;
    cb[0] = (SIZE_T)&pvar;
    LOBYTE(cb[1]) = 1;
    if ( (*(int (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
           v28,
           a2,
           &pvar) >= 0
      && (_WORD)pvar )
    {
      if ( (_WORD)pvar == 31 )
      {
        v15 = 1;
        cb[0] = 0LL;
        if ( (int)ATL::AtlMultiply<unsigned __int64>(cb, 1uLL, 0x10uLL) >= 0 )
        {
          if ( cb[0] > 0x7FFFFFFF )
          {
            v10 = 0LL;
            v27 = 0LL;
          }
          else
          {
            v16 = (GUID *)CoTaskMemAlloc(LODWORD(cb[0]));
            v10 = v16;
            v27 = v16;
            if ( v16 )
            {
              v17 = CLSIDFromString(lpsz, v16);
              v12 = v17;
              if ( v17 < 0 )
              {
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x8A,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
                  (const char *)(unsigned int)v17,
                  v25);
              }
              else
              {
LABEL_21:
                v18 = v10;
                v19 = 0;
                while ( 1 )
                {
                  *(GUID *)cb = *v18;
                  if ( !(unsigned int)IsAPOClsidRegistered((GUID *)cb) )
                    break;
                  ++v19;
                  ++v18;
                  if ( v19 >= v15 )
                    goto LABEL_24;
                }
                v24 = &v10[v19];
                LODWORD(v26) = v24->Data1;
                v12 = -2005139398;
                wil::details::in1diag3::Return_HrMsg(
                  retaddr,
                  (void *)0xA9,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
                  (const char *)0x887C003ALL,
                  (int)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
                  v26,
                  v24->Data2,
                  v24->Data3,
                  v24->Data4[0],
                  v24->Data4[1],
                  v24->Data4[2],
                  v24->Data4[3],
                  v24->Data4[4],
                  v24->Data4[5],
                  v24->Data4[6],
                  v24->Data4[7]);
              }
              goto LABEL_10;
            }
          }
        }
        v12 = -2147024882;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x87,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x8007000ELL,
          v25);
      }
      else
      {
        v12 = -2147467259;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x84,
          (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
          (const char *)0x80004005LL,
          v25);
      }
    }
    else
    {
      if ( a3->pid )
        goto LABEL_7;
      v21 = *(_QWORD *)&a3->fmtid.Data1;
      if ( !*(_QWORD *)&a3->fmtid.Data1 )
        v21 = *(_QWORD *)a3->fmtid.Data4;
      if ( v21 )
      {
LABEL_7:
        v13 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v28 + 40LL))(
                v28,
                a3,
                &pvar);
        v12 = v13;
        if ( v13 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x8E,
            (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
            (const char *)(unsigned int)v13,
            v25);
          goto LABEL_10;
        }
        if ( (_WORD)pvar == 4127 )
        {
          v15 = (unsigned int)lpsz;
          if ( (_DWORD)lpsz )
          {
            if ( (unsigned __int8)ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&v27, (unsigned int)lpsz) )
            {
              v22 = 0;
              v10 = v27;
              if ( v15 )
              {
                while ( 1 )
                {
                  v23 = CLSIDFromString(*(LPCOLESTR *)(v32 + v9), &v10[v22]);
                  v12 = v23;
                  if ( v23 < 0 )
                    break;
                  ++v22;
                  v9 += 8LL;
                  if ( v22 >= v15 )
                    goto LABEL_21;
                }
                wil::details::in1diag3::Return_Hr(
                  retaddr,
                  (void *)0x98,
                  (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
                  (const char *)(unsigned int)v23,
                  v25);
              }
              else
              {
LABEL_24:
                v20 = v10;
                v10 = 0LL;
                v27 = 0LL;
                *a5 = v20;
                *a4 = v15;
                v12 = 0;
              }
            }
            else
            {
              v12 = -2147024882;
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0x94,
                (unsigned int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
                (const char *)0x8007000ELL,
                v25);
              v10 = v27;
            }
            goto LABEL_10;
          }
        }
      }
      v12 = -2147467259;
    }
LABEL_10:
    PropVariantClear(&pvar);
  }
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  CoTaskMemFree(v10);
  return (unsigned int)v12;
}
