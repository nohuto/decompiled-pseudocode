/*
 * XREFs of ?GetProcessingModeCharacteristicsFromPropertyStore@CEndpointCharacteristics@@AEAAJXZ @ 0x180041FC8
 * Callers:
 *     ?DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z @ 0x180041F34 (-DiscoverProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ??A?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z @ 0x1800109B0 (--A-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAU_GUID@@H@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z @ 0x1800416A4 (-AddMultiple@CAudioSignalProcessingModeArray@@QEAAJIPEBU_GUID@@@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x180041B34 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x180042260 (-ReadProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x180046104 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18004738C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?Lookup@CAudioSignalProcessingModeMap@@QEAA?AU_GUID@@U2@@Z @ 0x1800BE5F0 (-Lookup@CAudioSignalProcessingModeMap@@QEAA-AU_GUID@@U2@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CEndpointCharacteristics::GetProcessingModeCharacteristicsFromPropertyStore(
        CEndpointCharacteristics *this)
{
  __int64 v2; // r13
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // r14d
  int v6; // r12d
  struct _GUID *v7; // r15
  struct _GUID v8; // xmm0
  int v9; // eax
  struct _GUID *v10; // rax
  GUID v11; // xmm0
  GUID v12; // kr00_16
  __int64 v13; // rax
  int v14; // ecx
  __int64 i; // rdx
  bool v16; // zf
  _QWORD *v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v22; // r15d
  unsigned int j; // r14d
  bool v24; // zf
  _QWORD *v25; // rax
  _QWORD *v26; // rcx
  __int64 v27; // rax
  _QWORD *v28; // rdx
  __int64 v29; // rcx
  struct _GUID *v30; // [rsp+38h] [rbp-49h] BYREF
  __int64 v31; // [rsp+40h] [rbp-41h]
  struct _GUID v32; // [rsp+48h] [rbp-39h] BYREF
  __int64 v33; // [rsp+58h] [rbp-29h]
  GUID v34; // [rsp+60h] [rbp-21h] BYREF
  struct _GUID v35; // [rsp+70h] [rbp-11h] BYREF
  struct _GUID v36; // [rsp+88h] [rbp+7h] BYREF
  struct _GUID v37; // [rsp+98h] [rbp+17h] BYREF

  v33 = -2LL;
  v2 = 0LL;
  v3 = 0LL;
  *(_QWORD *)&v35.Data1 = 0LL;
  v4 = 0LL;
  *(_QWORD *)&v34.Data1 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  if ( !*((_DWORD *)this + 44) )
    goto LABEL_2;
  v5 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 3LL, &v35);
  v3 = *(_QWORD *)&v35.Data1;
  if ( v5 < 0 )
    goto LABEL_28;
  v22 = 0;
  if ( *((int *)this + 30) <= 0 )
  {
LABEL_2:
    v5 = CEndpointCharacteristics::ReadProcessingModeCharacteristics(this, 0LL, &v34);
    if ( v5 >= 0 )
    {
      ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(&v30, (char *)this + 64);
      if ( (_DWORD)v31 == *((_DWORD *)this + 18) )
      {
        v5 = CAudioSignalProcessingModeArray::AddMultiple(
               (CAudioSignalProcessingModeArray *)&v30,
               *((_DWORD *)this + 374),
               *((const struct _GUID **)this + 186));
        if ( v5 >= 0 )
        {
          v6 = 0;
          v4 = *(_QWORD *)&v34.Data1;
          if ( (int)v31 <= 0 )
          {
LABEL_27:
            v19 = v3;
            v3 = 0LL;
            *((_QWORD *)this + 24) = v19;
            v20 = v4;
            v4 = 0LL;
            *((_QWORD *)this + 23) = v20;
          }
          else
          {
            v7 = v30;
            while ( 1 )
            {
              if ( v2 < 0 )
              {
                RaiseException(0xC000008C, 1u, 0, 0LL);
                JUMPOUT(0x180060D80LL);
              }
              v8 = *v7;
              v36 = *v7;
              v9 = 0;
              if ( *((int *)this + 352) > 0 )
              {
                while ( 1 )
                {
                  v28 = (_QWORD *)(*((_QWORD *)this + 174) + 16LL * v9);
                  v29 = *v28 - *(_QWORD *)&v36.Data1;
                  if ( *v28 == *(_QWORD *)&v36.Data1 )
                    v29 = v28[1] - *(_QWORD *)v36.Data4;
                  if ( !v29 )
                    break;
                  if ( ++v9 >= *((_DWORD *)this + 352) )
                    goto LABEL_9;
                }
              }
              else
              {
LABEL_9:
                v9 = -1;
              }
              if ( v9 == -1 )
              {
                v35 = v8;
                v10 = &v35;
              }
              else
              {
                v32 = v8;
                v10 = CAudioSignalProcessingModeMap::Lookup(
                        (CEndpointCharacteristics *)((char *)this + 1392),
                        &v37,
                        &v32);
              }
              v11 = *v10;
              v34 = v11;
              v12 = v11;
              v13 = *(_QWORD *)&v11.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
              if ( *(_QWORD *)&v11.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
                v13 = *(_QWORD *)v11.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
              if ( !v13 )
              {
                v34 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
                v12 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
              }
              v14 = 0;
              for ( i = 0LL; ; i += 8LL )
              {
                v16 = v14 == *(_DWORD *)(v4 + 8);
                if ( v14 >= *(_DWORD *)(v4 + 8) )
                  break;
                if ( i < 0 || v14 >= *(_DWORD *)(v4 + 8) )
                {
                  RaiseException(0xC000008C, 1u, 0, 0LL);
                  JUMPOUT(0x180060D5CLL);
                }
                v17 = *(_QWORD **)(i + *(_QWORD *)v4);
                v18 = *v17 - *(_QWORD *)&v12.Data1;
                if ( *v17 == *(_QWORD *)&v12.Data1 )
                  v18 = v17[1] - *(_QWORD *)v12.Data4;
                if ( !v18 )
                {
                  v16 = v14 == *(_DWORD *)(v4 + 8);
                  break;
                }
                ++v14;
              }
              if ( v16 )
                break;
              ++v6;
              ++v2;
              ++v7;
              if ( v6 >= (int)v31 )
                goto LABEL_27;
            }
            v5 = -2147023728;
          }
          goto LABEL_28;
        }
      }
      else
      {
        v5 = -2147024882;
      }
    }
    v4 = *(_QWORD *)&v34.Data1;
    goto LABEL_28;
  }
  while ( 1 )
  {
    v32 = *(struct _GUID *)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator[](
                             (__int64)this + 112,
                             v22);
    CEndpointCharacteristics::GetAliasedDeviceConnectorMode((__int64)this, &v36, 3, &v32, 0);
    for ( j = 0; ; ++j )
    {
      v24 = j == *(_DWORD *)(v3 + 8);
      if ( (signed int)j >= *(_DWORD *)(v3 + 8) )
        break;
      v25 = (_QWORD *)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                        v3,
                        j);
      v26 = (_QWORD *)*v25;
      v27 = *(_QWORD *)*v25 - *(_QWORD *)&v36.Data1;
      if ( !v27 )
        v27 = v26[1] - *(_QWORD *)v36.Data4;
      if ( !v27 )
      {
        v24 = j == *(_DWORD *)(v3 + 8);
        break;
      }
    }
    if ( v24 )
      break;
    if ( ++v22 >= *((_DWORD *)this + 30) )
      goto LABEL_2;
  }
  v5 = -2147023728;
LABEL_28:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v30);
  if ( v4 )
  {
    if ( *(_QWORD *)v4 )
    {
      free(*(void **)v4);
      *(_QWORD *)v4 = 0LL;
    }
    *(_QWORD *)(v4 + 8) = 0LL;
    operator delete((void *)v4, (const struct std::nothrow_t *)0x10);
  }
  if ( v3 )
  {
    if ( *(_QWORD *)v3 )
    {
      free(*(void **)v3);
      *(_QWORD *)v3 = 0LL;
    }
    *(_QWORD *)(v3 + 8) = 0LL;
    operator delete((void *)v3, (const struct std::nothrow_t *)0x10);
  }
  return (unsigned int)v5;
}
