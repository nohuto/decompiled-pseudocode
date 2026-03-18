/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0014828
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0014798 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C00149DC (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagPOINT@@AEBVCMo.c)
 * Callees:
 *     ApiSetEditionPostInputMessage @ 0x1C00129F8 (ApiSetEditionPostInputMessage.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C001463C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0016D34 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C0017E5C (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 */

__int64 __fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5)
{
  int *v5; // r14
  __int64 PtiFromInputDest; // rax
  __int64 v11; // rsi
  __int64 Queue; // rax
  __int64 *v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int128 v22; // rax

  v5 = (int *)(a1 + 333);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor::MouseMoveTimes *)(a1 + 333));
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  if ( !(unsigned int)HasHidTable(PtiFromInputDest)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(a2, 0LL) + 400) + 784LL) + 100LL) & 2) == 0 )
  {
    if ( (a5 & 2) != 0 && *(_DWORD *)(a2 + 92) == 2 )
      v11 = *(_QWORD *)(a2 + 80);
    else
      v11 = 0LL;
    Queue = CInputDest::GetQueue(a2, 0LL);
    v13 = (__int64 *)((Queue + 412) & -(__int64)(Queue != 0));
    v15 = CMouseProcessor::AddMouseKeysToWParam((CMouseProcessor *)(*a4 | (a4[2] << 16)), v14);
    ApiSetEditionPostInputMessage(a2, 0LL, v11, 0x200u, v15, v16, *v5, a1[334], a1[325], v17, v13, a3, 0LL);
  }
  v18 = CInputDest::GetQueue(a2, 0LL);
  if ( v18 )
    *(_DWORD *)(v18 + 380) &= ~0x20u;
  v20 = CInputDest::GetQueue(a2, v19);
  v21 = v20 + 412;
  v22 = -(__int128)(unsigned __int64)v20;
  *((_QWORD *)&v22 + 1) &= v21;
  if ( *((_QWORD *)&v22 + 1) )
    **((_QWORD **)&v22 + 1) = 0LL;
  *(_OWORD *)v5 = 0uLL;
  return v22;
}
