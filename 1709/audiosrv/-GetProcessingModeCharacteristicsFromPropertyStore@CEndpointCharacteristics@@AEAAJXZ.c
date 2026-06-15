/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B5F24
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x1800B3FC8 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18005A2DC (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x18005AE7C (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x18005AFE0 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800B00F4 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800B14EC (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800B7638 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  _DWORD *v2; // rbx
  __int64 v3; // rdi
  int v4; // esi
  int v5; // r15d
  int v6; // r12d
  int j; // esi
  bool v8; // zf
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  __int64 v11; // rax
  int v12; // r12d
  int i; // r15d
  bool v14; // zf
  _QWORD *v15; // rax
  _QWORD *v16; // rcx
  __int64 v17; // rax
  _DWORD *v18; // rax
  __int64 v19; // rax
  __int64 v21; // [rsp+38h] [rbp-29h] BYREF
  int v22; // [rsp+40h] [rbp-21h]
  int v23; // [rsp+44h] [rbp-1Dh]
  void *v24; // [rsp+48h] [rbp-19h] BYREF
  __int64 v25; // [rsp+50h] [rbp-11h] BYREF
  __int64 v26; // [rsp+58h] [rbp-9h] BYREF
  int v27; // [rsp+60h] [rbp-1h]
  int v28; // [rsp+64h] [rbp+3h]
  struct _GUID v29; // [rsp+68h] [rbp+7h] BYREF
  __int64 v30; // [rsp+78h] [rbp+17h]
  struct _GUID v31; // [rsp+80h] [rbp+1Fh] BYREF

  v30 = -2LL;
  v2 = 0LL;
  v24 = 0LL;
  v3 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0;
  v28 = 0;
  if ( !*((_DWORD *)this + 44) )
  {
LABEL_20:
    v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v25);
    if ( v4 >= 0 )
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v26, (__int64)this + 64);
      if ( v27 == *((_DWORD *)this + 18) )
      {
        v4 = CAudioSignalProcessingModeArray::AddMultiple(
               (CAudioSignalProcessingModeArray *)&v26,
               *((_DWORD *)this + 376),
               *((const struct _GUID **)this + 187));
        if ( v4 >= 0 )
        {
          v12 = 0;
          v3 = v25;
          if ( v27 <= 0 )
          {
LABEL_36:
            v18 = v2;
            v2 = 0LL;
            *((_QWORD *)this + 24) = v18;
            v19 = v3;
            v3 = 0LL;
            *((_QWORD *)this + 23) = v19;
          }
          else
          {
            while ( 1 )
            {
              v29 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                                       (__int64)&v26,
                                       v12);
              CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v31, 0, &v29, 0);
              for ( i = 0; ; ++i )
              {
                v14 = i == *(_DWORD *)(v3 + 8);
                if ( i >= *(_DWORD *)(v3 + 8) )
                  break;
                v15 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                  v3,
                                  i);
                v16 = (_QWORD *)*v15;
                v17 = *(_QWORD *)*v15 - *(_QWORD *)&v31.Data1;
                if ( !v17 )
                  v17 = v16[1] - *(_QWORD *)v31.Data4;
                if ( !v17 )
                {
                  v14 = i == *(_DWORD *)(v3 + 8);
                  break;
                }
              }
              if ( v14 )
                break;
              if ( ++v12 >= v27 )
                goto LABEL_36;
            }
            v4 = -2147023728;
          }
          goto LABEL_38;
        }
      }
      else
      {
        v4 = -2147024882;
      }
    }
    v3 = v25;
    goto LABEL_38;
  }
  v21 = 0LL;
  v22 = 0;
  v23 = 0;
  v4 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v24);
  if ( v4 < 0 )
  {
LABEL_3:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
    v2 = v24;
    goto LABEL_38;
  }
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v21, (__int64)this + 112);
  if ( v22 != *((_DWORD *)this + 30) )
  {
    v4 = -2147024882;
    goto LABEL_3;
  }
  v4 = CAudioSignalProcessingModeArray::AddMultiple(
         (CAudioSignalProcessingModeArray *)&v21,
         *((_DWORD *)this + 388),
         *((const struct _GUID **)this + 193));
  if ( v4 < 0 )
    goto LABEL_3;
  v5 = 0;
  v2 = v24;
  v6 = v22;
  if ( v22 <= 0 )
  {
LABEL_19:
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
    goto LABEL_20;
  }
  while ( 1 )
  {
    v29 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[]((__int64)&v21, v5);
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v31, 3, &v29, 0);
    for ( j = 0; ; ++j )
    {
      v8 = j == v2[2];
      if ( j >= v2[2] )
        break;
      v9 = (_QWORD *)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                       (__int64)v2,
                       j);
      v10 = (_QWORD *)*v9;
      v11 = *(_QWORD *)*v9 - *(_QWORD *)&v31.Data1;
      if ( !v11 )
        v11 = v10[1] - *(_QWORD *)v31.Data4;
      if ( !v11 )
      {
        v8 = j == v2[2];
        break;
      }
    }
    if ( v8 )
      break;
    if ( ++v5 >= v6 )
      goto LABEL_19;
  }
  v4 = -2147023728;
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v21);
LABEL_38:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v26);
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *(_DWORD *)(v3 + 8) = 0;
    *(_DWORD *)(v3 + 12) = 0;
    operator delete((void *)v3, (const struct std::nothrow_t *)0x10);
  }
  if ( v2 )
  {
    if ( *(_QWORD *)v2 )
    {
      free(*(void **)v2);
      *(_QWORD *)v2 = 0LL;
    }
    v2[2] = 0;
    v2[3] = 0;
    operator delete(v2, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v4;
}
