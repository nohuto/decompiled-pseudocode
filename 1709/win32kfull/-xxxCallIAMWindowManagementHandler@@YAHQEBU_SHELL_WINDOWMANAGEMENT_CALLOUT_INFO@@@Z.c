/*
 * XREFs of ?xxxCallIAMWindowManagementHandler@@YAHQEBU_SHELL_WINDOWMANAGEMENT_CALLOUT_INFO@@@Z @ 0x1C01B8260
 * Callers:
 *     xxxCallIAMGetArrangementRectangleHandler @ 0x1C01B8CFC (xxxCallIAMGetArrangementRectangleHandler.c)
 *     xxxCallIAMShowWindowPolicyHandler @ 0x1C01B8DFC (xxxCallIAMShowWindowPolicyHandler.c)
 *     xxxCallShellWindowSizeStartingHandler @ 0x1C01B8E90 (xxxCallShellWindowSizeStartingHandler.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z @ 0x1C01B8230 (-SeverWindowManagementConnectionToShell@@YAXPEAUtagDESKTOP@@@Z.c)
 */

__int64 __fastcall xxxCallIAMWindowManagementHandler(struct _LARGE_STRING *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 ThreadWin32Thread; // rax
  unsigned int v8; // esi
  _BOOL8 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD v13[4]; // [rsp+50h] [rbp-28h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+88h] [rbp+10h] BYREF

  v5 = *(_QWORD *)(gptiCurrent + 432LL);
  BugCheckParameter3 = 0LL;
  if ( !v5 )
    return 0;
  if ( !*(_QWORD *)(v5 + 288) )
    return 0;
  v6 = *(_QWORD *)(v5 + 328);
  if ( !v6 )
    return 0;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gptiCurrent, a3, a4);
  v8 = 1;
  v13[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v13;
  v13[1] = v6;
  _InterlockedAdd((volatile signed __int32 *)(v6 + 8), 1u);
  v9 = xxxSendTransformableMessageTimeout((__int64 *)v6, 833LL, 0LL, a1, 2, 2000, (__int64 *)&BugCheckParameter3, 1u, 1) == 0;
  ThreadUnlock1(v11, v10);
  if ( v9 )
    SeverWindowManagementConnectionToShell((struct tagDESKTOP *)v5);
  if ( BugCheckParameter3 != 1 )
    return 0;
  return v8;
}
