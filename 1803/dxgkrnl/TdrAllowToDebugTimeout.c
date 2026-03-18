/*
 * XREFs of TdrAllowToDebugTimeout @ 0x1C019AB3C
 * Callers:
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C019A2D0 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     ?TdrValidateDebugMode@@YAXXZ @ 0x1C0031638 (-TdrValidateDebugMode@@YAXXZ.c)
 *     ?TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0199C28 (-TdrGetDbgOwnerTag@@YA_KPEBU_TDR_RECOVERY_CONTEXT@@@Z.c)
 */

__int64 __fastcall TdrAllowToDebugTimeout(struct _TDR_RECOVERY_CONTEXT *a1)
{
  unsigned int v1; // ebx
  char v2; // al
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h]
  struct _TDR_RECOVERY_CONTEXT *v5; // [rsp+40h] [rbp+8h]
  unsigned __int64 DbgOwnerTag; // [rsp+48h] [rbp+10h]

  v5 = a1;
  v1 = 0;
  g_TdrRecoveryToDebug = a1;
  if ( (dword_1C007BE64 & 1) != 0 )
  {
    v2 = byte_1C007BE68;
  }
  else
  {
    LOBYTE(a1) = 1;
    dword_1C007BE64 |= 1u;
    v2 = (unsigned __int8)WdIsDebuggerPresent(a1) != 0;
    byte_1C007BE68 = v2;
  }
  byte_1C007BD3C = v2;
  TdrValidateDebugMode();
  if ( (byte_1C007BD3C || (unsigned __int8)WdQueryDebugFlag(0LL)) && !g_TdrDebugMode )
  {
    DbgOwnerTag = TdrGetDbgOwnerTag(v5);
    if ( !DbgOwnerTag || DbgOwnerTag == -1LL )
      LODWORD(DbgOwnerTag) = (_DWORD)retaddr;
    DbgPrintEx(
      0x65u,
      0,
      "\n"
      "The GPU Scheduler detected a timeout condition. We broke into the  debugger to allow a chance for debugging this i"
      "ssue. Please use !analyze -v for more info.\n"
      "\n"
      "    TDR_RECOVERY_CONTEXT : 0x%p\n"
      "    Debug Owner Tag      : 0x%Ix\n"
      "\n",
      v5,
      DbgOwnerTag);
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
  g_TdrRecoveryToDebug = 0LL;
  LOBYTE(v1) = g_TdrDebugMode == 1;
  return v1;
}
