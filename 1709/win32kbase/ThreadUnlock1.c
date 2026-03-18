/*
 * XREFs of ThreadUnlock1 @ 0x1C0047950
 * Callers:
 *     ??1CThreadLockInputDest@@QEAA@XZ @ 0x1C001831C (--1CThreadLockInputDest@@QEAA@XZ.c)
 *     DestroyThreadsObjects @ 0x1C003ED90 (DestroyThreadsObjects.c)
 *     xxxEnumDisplayMonitors @ 0x1C005C4E0 (xxxEnumDisplayMonitors.c)
 *     xxxActivateKeyboardLayout @ 0x1C00710E0 (xxxActivateKeyboardLayout.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0071AA8 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C0071C80 (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     xxxInternalActivateKeyboardLayout @ 0x1C00725C0 (xxxInternalActivateKeyboardLayout.c)
 *     xxxDestroyThreadInfo @ 0x1C009D264 (xxxDestroyThreadInfo.c)
 *     ?ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z @ 0x1C0124780 (-ProcessPrimaryDown@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     HMUnlockObjectInternal @ 0x1C0047A80 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall ThreadUnlock1(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 ThreadWin32Thread; // rdx
  _QWORD *v5; // rax
  __int64 result; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), a2, a3, a4);
  v5 = *(_QWORD **)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = *v5;
  result = v5[1];
  if ( result )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(result + 8), 0xFFFFFFFF) == 1 )
      return HMUnlockObjectInternal(result);
  }
  return result;
}
