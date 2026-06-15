/*
 * XREFs of ?GetFxClsids@@YAJPEAUIMMDevice@@U_tagpropertykey@@1PEAIPEAPEAU_GUID@@@Z @ 0x1800D9D48
 * Callers:
 *     ?DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z @ 0x1800B38F0 (-DiscoverProcessingModeCapabilities@CEndpointCharacteristics@@AEAAJ_N@Z.c)
 *     ?FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@HH@Z @ 0x1800B4464 (-FixupProcessingModeSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoi.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x180008A30 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18005C878 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??8@YAHAEBU_tagpropertykey@@0@Z @ 0x18006F864 (--8@YAHAEBU_tagpropertykey@@0@Z.c)
 *     WPP_SF__guid_d @ 0x180076F00 (WPP_SF__guid_d.c)
 *     ?IsAPOClsidRegistered@@YAHU_GUID@@@Z @ 0x1800DFE44 (-IsAPOClsidRegistered@@YAHU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall GetFxClsids(
        struct IUnknown *a1,
        struct _tagpropertykey *a2,
        struct _tagpropertykey *a3,
        unsigned int *a4,
        struct _GUID **a5)
{
  __int64 v9; // r15
  struct IUnknown *v10; // rcx
  LPCLSID v11; // rbx
  HRESULT v12; // edi
  unsigned int v13; // esi
  bool v14; // al
  bool v15; // al
  unsigned int v16; // r14d
  _OWORD *p_Data1; // r15
  unsigned int v18; // r14d
  struct _GUID *v19; // rax
  __int64 v21; // [rsp+30h] [rbp-41h] BYREF
  LPCLSID pclsid[2]; // [rsp+40h] [rbp-31h] BYREF
  struct IUnknown *v23; // [rsp+50h] [rbp-21h] BYREF
  PROPVARIANT pvar; // [rsp+58h] [rbp-19h] BYREF
  LPCOLESTR lpsz; // [rsp+60h] [rbp-11h]
  __int64 v26; // [rsp+68h] [rbp-9h]
  __int64 v27; // [rsp+70h] [rbp-1h]

  v27 = -2LL;
  v9 = 0LL;
  v10 = 0LL;
  v23 = 0LL;
  v21 = 0LL;
  v11 = 0LL;
  pclsid[0] = 0LL;
  pvar = 0LL;
  lpsz = 0LL;
  v26 = 0LL;
  *a5 = 0LL;
  *a4 = 0;
  if ( a1 )
  {
    ATL::AtlComQIPtrAssign(&v23, a1, &GUID_419e19f7_d318_4c05_b705_2f17133c55da);
    v10 = v23;
  }
  v12 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64 *))v10->lpVtbl[1].Release)(v10, 0LL, &v21);
  if ( v12 < 0 )
    goto LABEL_29;
  if ( (*(int (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(v21, a2, &pvar) < 0
    || !(_WORD)pvar )
  {
    if ( !(unsigned int)operator==((__int64)a3, (__int64)&unk_180105FC0) )
    {
      v12 = (*(__int64 (__fastcall **)(__int64, struct _tagpropertykey *, PROPVARIANT *))(*(_QWORD *)v21 + 40LL))(
              v21,
              a3,
              &pvar);
      if ( v12 < 0 )
        goto LABEL_29;
      if ( (_WORD)pvar == 4127 )
      {
        v13 = (unsigned int)lpsz;
        if ( (_DWORD)lpsz )
        {
          v15 = ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(pclsid, (unsigned int)lpsz);
          v11 = pclsid[0];
          if ( !v15 )
            goto LABEL_8;
          v16 = 0;
          if ( v13 )
          {
            while ( 1 )
            {
              v12 = CLSIDFromString(*(LPCOLESTR *)(v9 + v26), &v11[v16]);
              if ( v12 < 0 )
                break;
              ++v16;
              v9 += 8LL;
              if ( v16 >= v13 )
                goto LABEL_19;
            }
          }
          else
          {
LABEL_27:
            v19 = v11;
            v11 = 0LL;
            *a5 = v19;
            *a4 = v13;
          }
          goto LABEL_29;
        }
      }
    }
LABEL_28:
    v12 = -2147467259;
    goto LABEL_29;
  }
  if ( (_WORD)pvar != 31 )
    goto LABEL_28;
  v13 = 1;
  v14 = ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(pclsid, 1uLL);
  v11 = pclsid[0];
  if ( !v14 )
  {
LABEL_8:
    v12 = -2147024882;
    goto LABEL_29;
  }
  v12 = CLSIDFromString(lpsz, pclsid[0]);
  if ( v12 >= 0 )
  {
LABEL_19:
    p_Data1 = &v11->Data1;
    v18 = 0;
    while ( 1 )
    {
      *(_OWORD *)pclsid = *p_Data1;
      if ( !(unsigned int)IsAPOClsidRegistered((GUID *)pclsid) )
        break;
      v12 = 0;
      ++v18;
      ++p_Data1;
      if ( v18 >= v13 )
        goto LABEL_27;
    }
    v12 = -2005139398;
    if ( WPP_GLOBAL_Control != (CAudioDGProcess *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF__guid_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0xAu,
        (__int64)&WPP_c44c19172469313206b53c59c74880a4_Traceguids,
        (__int64)&v11[v18]);
    }
  }
LABEL_29:
  PropVariantClear(&pvar);
  CoTaskMemFree(v11);
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v23 )
    ((void (__fastcall *)(struct IUnknown *))v23->lpVtbl->Release)(v23);
  return (unsigned int)v12;
}
