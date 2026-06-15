/*
 * XREFs of ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180010434
 * Callers:
 *     _lambda_104fe0bd16c4203916a8d385bc72c031_::operator() @ 0x18004C3D8 (_lambda_104fe0bd16c4203916a8d385bc72c031_--operator().c)
 *     _lambda_667eb01a999704ac1c933d543c16abf4_::operator() @ 0x18004C4DC (_lambda_667eb01a999704ac1c933d543c16abf4_--operator().c)
 * Callees:
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x180010250 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x180010B20 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x180033760 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800447C4 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        _OWORD *a4,
        int a5,
        int a6)
{
  const struct _GUID *v10; // rcx
  unsigned int v11; // r9d
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // rdx
  __int64 v16; // rax
  int v17; // [rsp+20h] [rbp-60h]
  struct _GUID *v18; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v19[2]; // [rsp+40h] [rbp-40h]
  struct _GUID *v20; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v21[2]; // [rsp+50h] [rbp-30h]
  __int64 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+60h] [rbp-20h]
  __int64 v24; // [rsp+68h] [rbp-18h] BYREF
  __int64 v25; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v24 = 0LL;
  v25 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    a1,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v24,
    (struct CAudioSignalProcessingModeArray *)&v22);
  v20 = 0LL;
  *(_QWORD *)v21 = 0LL;
  v18 = 0LL;
  *(_QWORD *)v19 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)a1, a3, a4, a5, (__int64)&v20, (__int64)&v18);
  if ( (int)v25 > 0 )
  {
    v12 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v19[0], v18, 0, 0LL);
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 386LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v15,
        (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)(unsigned int)v12,
        v17);
      goto LABEL_7;
    }
  }
  if ( (int)v23 > 0 )
  {
    if ( a6 == 1 && (v16 = *((_QWORD *)a1 + 2)) != 0 )
    {
      v10 = *(const struct _GUID **)(v16 + 56);
      v11 = *(_DWORD *)(v16 + 64);
    }
    else
    {
      v10 = 0LL;
      v11 = 0;
    }
    v12 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v21[0], v20, v11, v10);
    v13 = v12;
    if ( v12 < 0 )
    {
      v15 = 393LL;
      goto LABEL_13;
    }
  }
  v13 = 0;
LABEL_7:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v18);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v20);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v22);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll(&v24);
  return v13;
}
