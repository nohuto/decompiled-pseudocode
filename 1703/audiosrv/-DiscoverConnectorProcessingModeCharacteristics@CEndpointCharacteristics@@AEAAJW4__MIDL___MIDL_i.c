/*
 * XREFs of ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAUPacketSizeConstraints@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@PEAVCUnsupportedConnectorFormats@@@Z @ 0x1800BC6DC
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@11@Z @ 0x18000D2D0 (-GetDefaultConnectorProcessingModeConfiguration@CEndpointCharacteristics@@QEAAXW4__MIDL___MIDL_i.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800416A4 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180041B34 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180049318 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004B548 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180079C64 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?Add@?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAHAEBQEAVCConnectorProcessingModeCharacteristics@@@Z @ 0x18007B38C (-Add@-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAV.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x180081EEC (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___ @ 0x1800B9E50 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb.c)
 *     ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800BBCE4 (--_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z.c)
 *     ?LogEPCProductionAssert@@YAX_KPEBG@Z @ 0x1800C14A4 (-LogEPCProductionAssert@@YAX_KPEBG@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::DiscoverConnectorProcessingModeCharacteristics(
        CEndpointCharacteristics *this,
        int a2,
        int a3,
        unsigned int *a4,
        __int64 a5,
        char a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9)
{
  __int64 v9; // r12
  int v11; // esi
  _DWORD *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  int v15; // r13d
  int v16; // eax
  int v17; // edi
  int v18; // eax
  _QWORD *v19; // rdi
  unsigned __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v23; // [rsp+38h] [rbp-C8h]
  int v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  int v26; // [rsp+50h] [rbp-B0h]
  int v27; // [rsp+54h] [rbp-ACh]
  size_t Size; // [rsp+58h] [rbp-A8h]
  LPVOID pv; // [rsp+60h] [rbp-A0h] BYREF
  struct _GUID v30; // [rsp+70h] [rbp-90h] BYREF
  int cchMax[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  unsigned int *v33; // [rsp+98h] [rbp-68h]
  LPOLESTR lpsz; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v35; // [rsp+A8h] [rbp-58h]
  __int128 v36; // [rsp+B0h] [rbp-50h]
  __m256i v37; // [rsp+C0h] [rbp-40h]
  __int128 v38; // [rsp+E0h] [rbp-20h]
  __int64 v39; // [rsp+F0h] [rbp-10h]
  __int64 v40; // [rsp+100h] [rbp+0h]
  __int64 v41[2]; // [rsp+110h] [rbp+10h] BYREF
  __m256i v42; // [rsp+120h] [rbp+20h]
  __int128 v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+150h] [rbp+50h]
  GUID rguid; // [rsp+160h] [rbp+60h] BYREF
  struct _GUID v46; // [rsp+170h] [rbp+70h] BYREF
  wchar_t pszDest[1024]; // [rsp+180h] [rbp+80h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+9D8h] [rbp+8D8h]

  v40 = -2LL;
  v33 = a4;
  LODWORD(Size) = a3;
  v9 = a2;
  v35 = a8;
  v11 = 0;
  v32 = 0LL;
  v46 = GUID_00000000_0000_0000_0000_000000000000;
  v25 = 0LL;
  v26 = 0;
  v27 = 0;
  if ( !a2 )
    CEndpointCharacteristics::GetDefaultConnectorProcessingModeConfiguration(
      this,
      eHostProcessConnector,
      &v46,
      0LL,
      0LL);
  v12 = operator new(0x10uLL, (const struct std::nothrow_t *)&std::nothrow);
  v13 = (__int64)v12;
  *(_QWORD *)&v30.Data1 = v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = 0LL;
    v12[2] = 0;
    v12[3] = 0;
  }
  else
  {
    v13 = 0LL;
  }
  v14 = v13;
  v32 = v13;
  if ( !v13 )
  {
    v11 = -2147024882;
    goto LABEL_35;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=((__int64)&v25, (__int64 *)this + 2 * v9 + 8);
  v15 = v26;
  if ( v26 != *((_DWORD *)this + 4 * v9 + 18) )
  {
    v11 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xEEC,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
      (const char *)0x8007000ELL);
    goto LABEL_35;
  }
  if ( !(_DWORD)v9 )
  {
    v16 = CAudioSignalProcessingModeArray::AddMultiple(
            (CAudioSignalProcessingModeArray *)&v25,
            *((_DWORD *)this + 374),
            *((const struct _GUID **)this + 186));
    v17 = v16;
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xEEF,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)(unsigned int)v16);
      v11 = v17;
      goto LABEL_35;
    }
    v15 = v26;
  }
  v18 = 0;
  v24 = 0;
  if ( v15 <= 0 )
  {
LABEL_34:
    v14 = 0LL;
    *v35 = v13;
  }
  else
  {
    while ( 1 )
    {
      v30 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                               (__int64)&v25,
                               v18);
      CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &rguid, v9, &v30, 0);
      v19 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
      *(_QWORD *)&v30.Data1 = v19;
      if ( v19 )
      {
        *(GUID *)v19 = rguid;
        v19[2] = 0LL;
        v19[3] = 0LL;
        v19[4] = 0LL;
        v19[5] = 0LL;
      }
      else
      {
        v19 = 0LL;
      }
      *(_QWORD *)&v30.Data1 = v19;
      if ( !v19 )
        break;
      *(_QWORD *)&v36 = v19;
      *((_QWORD *)&v36 + 1) = this;
      v37.m256i_i32[0] = v9;
      *(GUID *)((char *)v37.m256i_i64 + 4) = rguid;
      v37.m256i_i64[3] = a5;
      LOBYTE(v38) = a6;
      *((_QWORD *)&v38 + 1) = a7;
      v39 = a9;
      *(_OWORD *)v41 = v36;
      v42 = v37;
      v43 = v38;
      v44 = a9;
      *(GUID *)cchMax = rguid;
      v11 = CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0a80d7e3d12d42377e48064cdd362aeb___(
              this,
              (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v9,
              (unsigned int)Size,
              v33,
              (struct _GUID *)cchMax,
              (__int128 *)v41);
      if ( v11 < 0 )
        goto LABEL_32;
      if ( !*((_DWORD *)v19 + 6) )
      {
        pv = 0LL;
        if ( (int)CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)&pv) >= 0 )
        {
          *(_QWORD *)cchMax = 0LL;
          LODWORD(v23) = v9;
          if ( (int)StringCchPrintfExW(
                      pszDest,
                      0x400uLL,
                      &lpsz,
                      (unsigned __int64 *)cchMax,
                      0,
                      L"[%s], connector [%d] has no supported formats for mode - ",
                      pv,
                      v23) >= 0 )
          {
            StringFromGUID2(&rguid, lpsz, cchMax[0]);
            LogEPCProductionAssert(v20, pszDest);
          }
        }
        CoTaskMemFree(pv);
        *((_DWORD *)this + 45) = 1;
        v21 = *(_QWORD *)&v46.Data1 - *(_QWORD *)&rguid.Data1;
        if ( *(_QWORD *)&v46.Data1 == *(_QWORD *)&rguid.Data1 )
          v21 = *(_QWORD *)v46.Data4 - *(_QWORD *)rguid.Data4;
        if ( !v21 )
          *((_QWORD *)this + 19) = 0LL;
      }
      if ( !(unsigned int)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::Add(
                            v13,
                            &v30) )
      {
        v11 = -2147024882;
LABEL_32:
        CConnectorProcessingModeCharacteristics::`scalar deleting destructor'((CConnectorProcessingModeCharacteristics *)v19);
        goto LABEL_35;
      }
      v18 = v24 + 1;
      v24 = v18;
      if ( v18 >= v15 )
        goto LABEL_34;
    }
    v11 = -2147024882;
  }
LABEL_35:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v25);
  if ( v14 )
  {
    if ( *(_QWORD *)v14 )
    {
      free(*(void **)v14);
      *(_QWORD *)v14 = 0LL;
    }
    *(_QWORD *)(v14 + 8) = 0LL;
    operator delete((void *)v14, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v11;
}
