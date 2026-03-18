/*
 * XREFs of HMAssignmentUnlock @ 0x1C0049000
 * Callers:
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0040840 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0040A10 (DestroyThreadsObjects.c)
 *     ?SetEmpty@CInputDest@@QEAAXXZ @ 0x1C0048010 (-SetEmpty@CInputDest@@QEAAXXZ.c)
 *     xxxDestroyThreadInfo @ 0x1C00482A0 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C004A190 (zzzDestroyQueue.c)
 *     ?Win32kNtUserCleanupInternal@@YAXXZ @ 0x1C0067500 (-Win32kNtUserCleanupInternal@@YAXXZ.c)
 *     DestroyKL @ 0x1C00786CC (DestroyKL.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1C0079674 (-xxxInternalUnloadKeyboardLayout@@YAHPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     ?FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z @ 0x1C011E74C (-FreeFrame@CTouchProcessor@@IEAAXPEAUCPointerInputFrame@@_N@Z.c)
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C012C950 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HMAssignmentUnlock(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( (*(_DWORD *)(result + 8))-- == 1 )
      return HMUnlockObjectInternal(result);
  }
  return result;
}
