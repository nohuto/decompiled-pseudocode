/*
 * XREFs of xxxHandleDestroyGhostWindow @ 0x1C013FA7C
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // esi
  _QWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v8; // rdx
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1362LL), 1LL);
    if ( !v3 )
      return 0LL;
    v1 = 1;
  }
  LOBYTE(v4) = 1;
  v9 = HMValidateHandleNoSecure((unsigned __int64)v3, v4, v5, v6);
  if ( v9 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
    v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v16;
    v16[1] = v9;
    _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
    if ( v1 )
      v13 = *(unsigned __int16 *)(gpsi + 1362LL);
    else
      v13 = *(unsigned __int16 *)(gpsi + 884LL);
    InternalRemoveProp(v9, v13, 1LL);
    xxxHideGhostWindow(a1, (struct tagWND *)v9);
    ThreadUnlock1(v15, v14);
  }
  return 0LL;
}
