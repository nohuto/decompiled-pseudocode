/*
 * XREFs of ?PostPendingMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@@Z @ 0x1C0014798
 * Callers:
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C0015374 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     ?PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagPOINT@@W4PostMouseMoveOptions@@@Z @ 0x1C0014828 (-PostMouseMoveToInputDest@CMouseProcessor@@AEAAXAEBVCInputDest@@PEBU_InputDeviceHandle@@AEBUtagP.c)
 *     ?GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z @ 0x1C00172E4 (-GetQueue@CInputDest@@QEBAPEAXW4QType@1@@Z.c)
 */

void __fastcall CMouseProcessor::PostPendingMouseMoveToInputDest(CMouseProcessor *this, const struct CInputDest *a2)
{
  __int64 Queue; // rax
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  Queue = CInputDest::GetQueue(a2, 0LL);
  if ( Queue && (*(_DWORD *)(Queue + 380) & 0x20) != 0 )
  {
    v6 = CInputDest::GetQueue(a2, v5);
    if ( v6 && (unsigned int)UserIsCurrentThreadDesktopComposed() )
      v7 = *(_QWORD *)(v6 + 184);
    else
      v7 = *((_QWORD *)gpsi + 618);
    v8 = v7;
    CMouseProcessor::PostMouseMoveToInputDest(this, a2, 0LL, &v8, 1);
  }
}
