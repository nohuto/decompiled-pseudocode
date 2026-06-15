/*
 * XREFs of _lambda_a89b631c09f285a4d3ef916a35e3beda_::operator() @ 0x1800B04EC
 * Callers:
 *     _lambda_d9b0be7eda368bff9c92e9d9b278ea98_::operator() @ 0x1800B07F0 (_lambda_d9b0be7eda368bff9c92e9d9b278ea98_--operator().c)
 *     ?AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@@Z @ 0x1800B21B4 (-AugmentOEMSpeechProcessingSupport@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengin.c)
 * Callees:
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180009C7C (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Add@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x18005ADF8 (-Add@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?Add@?$CSimpleMap@U_GUID@@U1@V?$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z @ 0x1800B1194 (-Add@-$CSimpleMap@U_GUID@@U1@V-$CSimpleMapEqualHelper@U_GUID@@U1@@ATL@@@ATL@@QEAAHAEBU_GUID@@0@Z.c)
 *     ?Remove@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z @ 0x1800B792C (-Remove@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAHAEBU_GUID@@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall lambda_a89b631c09f285a4d3ef916a35e3beda_::operator()(int *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r11
  __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *a1;
  v3 = *((_QWORD *)a1 + 3);
  if ( *(_DWORD *)(v3 + 4 * v1 + 40) )
  {
    if ( *a1
      && (unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
                         (__int64 *)(v3 + 16 * (v1 + 4)),
                         &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) == -1 )
    {
      if ( *a1 != 3 )
      {
        v6 = -2147418113;
        v5 = 1850LL;
        goto LABEL_5;
      }
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(v3 + 112, a1 + 1) )
      {
        v6 = -2147418113;
        v5 = 1843LL;
        goto LABEL_5;
      }
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            *((_QWORD *)a1 + 3) + 8 * (3LL * *a1 + 175),
                            v8,
                            a1 + 1) )
      {
        v5 = 1845LL;
        goto LABEL_4;
      }
    }
    else
    {
      if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Remove(
                            v3 + 16 * (v1 + 4),
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v6 = -2147418113;
        v5 = 1835LL;
        goto LABEL_5;
      }
      if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                            *((_QWORD *)a1 + 3) + 8 * (3LL * *a1 + 175),
                            v9,
                            &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3) )
      {
        v5 = 1837LL;
        goto LABEL_4;
      }
    }
  }
  else
  {
    *(_DWORD *)(v3 + 4 * v1 + 40) = 1;
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((void *)(*((_QWORD *)a1 + 3)
                                                                                   + 16 * (*a1 + 4LL)));
    if ( !(unsigned int)ATL::CSimpleMap<_GUID,_GUID,ATL::CSimpleMapEqualHelper<_GUID,_GUID>>::Add(
                          *((_QWORD *)a1 + 3) + 8 * (3LL * *a1 + 175),
                          v4,
                          &GUID_00000000_0000_0000_0000_000000000000) )
    {
      v5 = 1828LL;
LABEL_4:
      v6 = -2147024882;
LABEL_5:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v5,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
        (const char *)v6);
      return v6;
    }
  }
  if ( !(unsigned int)ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Add(
                        *((_QWORD *)a1 + 3) + 16 * (*a1 + 4LL),
                        &GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf) )
  {
    v5 = 1854LL;
    goto LABEL_4;
  }
  *(_DWORD *)(*((_QWORD *)a1 + 3) + 4LL * *a1 + 1384) = 1;
  return 0LL;
}
