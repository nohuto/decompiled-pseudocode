/*
 * XREFs of TdrTimedOperationAllowToDebugTimeout @ 0x1C0027288
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0027440 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C01A8120 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C00271F0 (-TdrValidateDebugMode@@YAXXZ.c)
 */

__int64 __fastcall TdrTimedOperationAllowToDebugTimeout(struct _DXGK_TIMED_OPERATION *a1)
{
  unsigned int v1; // ebx
  char v2; // al
  ULONG_PTR OwnerTag; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  struct _DXGK_TIMED_OPERATION *v6; // [rsp+40h] [rbp+8h]
  int v7; // [rsp+48h] [rbp+10h]

  v6 = a1;
  v1 = 0;
  g_TdrTimedOpToDebug = a1;
  if ( (dword_1C0039000 & 1) != 0 )
  {
    v2 = byte_1C0039004;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C0039000 |= 1u;
    v2 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C0039004 = v2;
  }
  byte_1C0060D74 = v2;
  TdrValidateDebugMode();
  if ( (byte_1C0060D74 || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    if ( v6 )
      OwnerTag = v6->OwnerTag;
    else
      OwnerTag = 0LL;
    v7 = OwnerTag;
    if ( !OwnerTag )
      v7 = (int)retaddr;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The timeout condition during Timed Operation had been detected. We broke into the  debugger to allow a chance for "
      "debugging this issue. Please use !analyze -v for more info.\n"
      "\n"
      "    DXGK_TIMED_OPERATION : 0x%p\n"
      "    Debug Owner Tag      : 0x%Ix\n"
      "\n",
      v6,
      v7);
    g_TdrDebugMode = -1;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "Please edit dxgkrnl!g_TdrDebugMode variable to choose timeout debug policy\n"
      "using command 'ed dxgkrnl!g_TdrDebugMode (mode)'\n"
      "           or 'ed 0x%p (mode)'\n"
      "where (mode) is: \n"
      "      0x00 - to continue execution as planned in end-user scenario\n"
      "      0x01 - to ignore timeout (useful to debug the timeout)\n"
      "      0x02 - to continue execution as with mode 0x00 but disable the timeout debugging\n"
      "      0x03 - same as 0x02 but will not check for consecutive recoveries.\n"
      "\n",
      (const void *)&g_TdrDebugMode);
    __debugbreak();
  }
  g_TdrTimedOpToDebug = 0LL;
  LOBYTE(v1) = g_TdrDebugMode == 1;
  return v1;
}
