/*
 * XREFs of xxxDestroyCorrespondingGhostWindow @ 0x1C013420C
 * Callers:
 *     xxxDestroyWindow @ 0x1C005F7A0 (xxxDestroyWindow.c)
 *     xxxHandleHealthyWindow @ 0x1C013418C (xxxHandleHealthyWindow.c)
 * Callees:
 *     PostShellHookMessagesEx @ 0x1C00540B8 (PostShellHookMessagesEx.c)
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     IsNonImmersiveBand @ 0x1C009DE0C (IsNonImmersiveBand.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxDestroyCorrespondingGhostWindow(struct tagWND *a1)
{
  unsigned int v1; // ebx
  int v3; // ebp
  _QWORD *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 ThreadWin32Thread; // rcx
  __int64 v14; // rdx
  _QWORD v16[5]; // [rsp+20h] [rbp-28h] BYREF

  v1 = 0;
  v3 = 0;
  v4 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
  if ( v4 )
  {
    if ( v4 == (_QWORD *)-1LL )
    {
      if ( !IsNonImmersiveBand((__int64)a1) )
        PostShellHookMessagesEx(0x34u, *(_QWORD *)a1, 0LL);
      v4 = 0LL;
    }
  }
  else
  {
    v4 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1362LL), 1LL);
    if ( !v4 )
      return v1;
    v3 = 1;
  }
  v1 = 1;
  if ( v4 )
  {
    LOBYTE(v5) = 1;
    v9 = HMValidateHandleNoSecure((unsigned __int64)v4, v5, v6, v7);
    if ( v9 )
    {
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v8, v10, v11);
      v16[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v16;
      v16[1] = v9;
      _InterlockedAdd((volatile signed __int32 *)(v9 + 8), 1u);
      if ( (*(_WORD *)(v9 + 82) & 0x3FFF) == 0x2AA )
      {
        if ( v3 )
          v14 = *(unsigned __int16 *)(gpsi + 1362LL);
        else
          v14 = *(unsigned __int16 *)(gpsi + 884LL);
        InternalRemoveProp(v9, v14, 1LL);
        xxxHideGhostWindow((struct tagWND *)v9, a1);
      }
      else
      {
        v1 = 0;
      }
      ThreadUnlock1(ThreadWin32Thread, v12);
    }
  }
  return v1;
}
