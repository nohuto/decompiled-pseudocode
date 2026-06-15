/*
 * XREFs of ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x1800BD7F8
 * Callers:
 *     _lambda_d9b0be7eda368bff9c92e9d9b278ea98_::operator() @ 0x1800B07F0 (_lambda_d9b0be7eda368bff9c92e9d9b278ea98_--operator().c)
 *     _lambda_ef00be22e83d38d5b4646cbbead72a97_::operator() @ 0x1800B0C9C (_lambda_ef00be22e83d38d5b4646cbbead72a97_--operator().c)
 *     _lambda_f3af0907113bf748eb1a6fb65ef667f3_::operator() @ 0x1800B0DA0 (_lambda_f3af0907113bf748eb1a6fb65ef667f3_--operator().c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005E7F8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 *     ?CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@2@Z @ 0x1800BBF50 (-CreateOverrideChainLists@SystemEffectDescriptor@@AEAAJIPEBU_GUID@@W4SED_APOPLACEMENT@@AEAV-$CSi.c)
 *     ?ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z @ 0x1800BD424 (-ReplaceEffectChain@SystemEffectChainDescriptor@@IEAAJIPEBU_GUID@@I0@Z.c)
 *     ?SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z @ 0x1800BD604 (-SeparateStreamingModes@SystemEffectDescriptor@@AEAAJAEAVCAudioSignalProcessingModeArray@@00@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall SystemEffectDescriptor::UpdateEffectsInOverridingChain(
        SystemEffectDescriptor *a1,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int a3,
        __int64 a4,
        int a5,
        int a6)
{
  int v10; // eax
  unsigned int v11; // ebx
  __int64 v12; // rdx
  __int64 v13; // rax
  const struct _GUID *v14; // rcx
  unsigned int v15; // r9d
  struct _GUID *v17; // [rsp+38h] [rbp-48h] BYREF
  unsigned int v18[2]; // [rsp+40h] [rbp-40h]
  struct _GUID *v19; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v20[2]; // [rsp+50h] [rbp-30h]
  __int64 v21; // [rsp+58h] [rbp-28h] BYREF
  __int64 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h] BYREF
  __int64 v24; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v23 = 0LL;
  v24 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  SystemEffectDescriptor::SeparateStreamingModes(
    a1,
    a2,
    (struct CAudioSignalProcessingModeArray *)&v23,
    (struct CAudioSignalProcessingModeArray *)&v21);
  v19 = 0LL;
  *(_QWORD *)v20 = 0LL;
  v17 = 0LL;
  *(_QWORD *)v18 = 0LL;
  SystemEffectDescriptor::CreateOverrideChainLists((__int64)a1, a3, a4, a5, (__int64)&v19, &v17);
  if ( (int)v24 <= 0
    || (v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v18[0], v17, 0, 0LL), v11 = v10, v10 >= 0) )
  {
    if ( (int)v22 <= 0
      || (a6 != 1 || (v13 = *((_QWORD *)a1 + 2)) == 0
        ? (v14 = 0LL, v15 = 0)
        : (v14 = *(const struct _GUID **)(v13 + 56), v15 = *(_DWORD *)(v13 + 64)),
          v10 = SystemEffectChainDescriptor::ReplaceEffectChain(a2, v20[0], v19, v15, v14),
          v11 = v10,
          v10 >= 0) )
    {
      v11 = 0;
      goto LABEL_13;
    }
    v12 = 400LL;
  }
  else
  {
    v12 = 393LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
    (const char *)(unsigned int)v10);
LABEL_13:
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v17);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v19);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v21);
  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)&v23);
  return v11;
}
