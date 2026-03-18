/*
 * XREFs of ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagLOGICALPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0037B44
 * Callers:
 *     ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0037ABC (-PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z.c)
 *     ?DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@AEBVCMoveEvent@1@@Z @ 0x1C0037C94 (-DetectAndApplyMouseMovePostStrategy@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBUtagLOGICALPOINT@@.c)
 * Callees:
 *     ?GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ @ 0x1C0036EF4 (-GetUserWindow@CInputDest@@QEBAPEAUtagWND@@XZ.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C0036FA4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 *     ?AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z @ 0x1C0037938 (-AddMouseKeysToWParam@CMouseProcessor@@AEBA_K_K@Z.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C003B018 (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     SetUnavailableInputSource @ 0x1C005ED00 (SetUnavailableInputSource.c)
 *     ApiSetEditionPostInputMessage @ 0x1C00651F8 (ApiSetEditionPostInputMessage.c)
 *     ?GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z @ 0x1C0067570 (-GetInputMessageSource@QHelper@@YAPEAUtagINPUT_MESSAGE_SOURCE@@AEBVCInputDest@@@Z.c)
 *     _anonymous_namespace_::InMouseRawInputMode @ 0x1C00781F0 (_anonymous_namespace_--InMouseRawInputMode.c)
 */

__int64 __fastcall CMouseProcessor::PostMouseMoveToInputDest(
        __int64 *a1,
        CInputDest *a2,
        __int64 a3,
        unsigned __int16 *a4,
        char a5)
{
  _DWORD *v5; // r15
  const struct CInputDest *v8; // rdx
  unsigned int UserWindow; // r12d
  struct tagINPUT_MESSAGE_SOURCE *InputMessageSource; // rsi
  int v11; // edi
  CMouseProcessor *v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 Queue; // rax
  const struct CInputDest *v16; // rdx
  struct tagINPUT_MESSAGE_SOURCE *v17; // rax
  __int64 result; // rax

  v5 = a1 + 315;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor::MouseMoveTimes *)(a1 + 315));
  if ( !(unsigned __int8)anonymous_namespace_::InMouseRawInputMode(a2, 0LL, 1LL) )
  {
    if ( (a5 & 2) != 0 )
      UserWindow = (unsigned int)CInputDest::GetUserWindow(a2);
    else
      UserWindow = 0;
    InputMessageSource = QHelper::GetInputMessageSource(a2, v8);
    v11 = a5 & 1 | 0x20;
    if ( (a5 & 4) == 0 )
      v11 = a5 & 1;
    v12 = (CMouseProcessor *)*a4;
    v13 = (int)((unsigned int)v12 | (a4[2] << 16));
    v14 = CMouseProcessor::AddMouseKeysToWParam(v12, 0LL);
    ApiSetEditionPostInputMessage(
      (_DWORD)a2,
      UserWindow,
      512,
      v14,
      v13,
      *v5,
      a1[316],
      a1[307],
      v11,
      (__int64)InputMessageSource,
      a3,
      0LL);
  }
  Queue = CInputDest::GetQueue(a2, 0LL);
  if ( Queue )
    *(_DWORD *)(Queue + 388) &= ~0x20u;
  v17 = QHelper::GetInputMessageSource(a2, v16);
  result = SetUnavailableInputSource(v17);
  *(_OWORD *)v5 = 0uLL;
  return result;
}
