/*
 * XREFs of ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B501C
 * Callers:
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01B5A6C (xxxCallIAMGetArrangementRectangleHandler.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01B5B6C (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01B5C00 (xxxCallShellWindowSizeStartingHandler.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B4FEC (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxCallIAMWindowManagementHandler(struct _LARGE_STRING *a1)
{
  __int64 v2; // rdi
  ULONG_PTR v3; // rcx
  unsigned int v4; // esi
  _BOOL8 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD v9[4]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v10; // [rsp+88h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(gptiCurrent + 408LL);
  v10 = 0LL;
  if ( !v2 )
    return 0;
  if ( !*(_QWORD *)(v2 + 288) )
    return 0;
  v3 = *(_QWORD *)(v2 + 328);
  if ( !v3 )
    return 0;
  v4 = 1;
  v9[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v9;
  ++*(_DWORD *)(v3 + 8);
  v9[1] = v3;
  v5 = xxxSendTransformableMessageTimeout(v3, 0x341u, 0LL, a1, 2, 2000, &v10, 1, 1) == 0;
  ThreadUnlock1(v7, v6);
  if ( v5 )
    SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v2);
  if ( v10 != 1 )
    return 0;
  return v4;
}
