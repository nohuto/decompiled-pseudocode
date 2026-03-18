/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0045950
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C00458C0 (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDest@@AEBUtagPOINT@@PEBUtagINPUT_MESSAGE_SOURCE@@_N@Z @ 0x1C0045AC0 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXPEBU_InputDeviceHandle@@AEBVCInputDes.c)
 * Callees:
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C004575C (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     _anonymous_namespace_::GetPtiFromInputDest @ 0x1C0047C70 (_anonymous_namespace_--GetPtiFromInputDest.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0047F6C (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C007E408 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00805C8 (ApiSetEditionPostInputMessage.c)
 */

__int64 __fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5)
{
  _DWORD *v5; // rsi
  __int64 PtiFromInputDest; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  int v15; // r11d
  __int64 Queue; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int128 v20; // rax

  v5 = a1 + 314;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor::MouseMoveTimes *)(a1 + 314));
  PtiFromInputDest = anonymous_namespace_::GetPtiFromInputDest(a2, 0LL);
  if ( !(unsigned int)HasHidTable(PtiFromInputDest)
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(anonymous_namespace_::GetPtiFromInputDest(a2, 0LL) + 376) + 776LL) + 100LL) & 2) == 0 )
  {
    CInputDest::GetQueue(a2, 0LL);
    v12 = CMouseProcessor::AddMouseKeysToWParam((CMouseProcessor *)(*a4 | (a4[2] << 16)), v11);
    ApiSetEditionPostInputMessage(a2, 0, v15, 512, v12, v13, *v5, a1[315], a1[306], a5 & 1, v14, a3, 0LL, 0);
  }
  Queue = CInputDest::GetQueue(a2, 0LL);
  if ( Queue )
    *(_DWORD *)(Queue + 340) &= ~0x20u;
  v18 = CInputDest::GetQueue(a2, v17);
  v19 = v18 + 372;
  v20 = -(__int128)(unsigned __int64)v18;
  *((_QWORD *)&v20 + 1) &= v19;
  if ( *((_QWORD *)&v20 + 1) )
    **((_QWORD **)&v20 + 1) = 0LL;
  *(_OWORD *)v5 = 0uLL;
  return v20;
}
