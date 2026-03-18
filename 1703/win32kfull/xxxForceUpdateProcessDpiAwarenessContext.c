/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C0E2C
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0037EB0 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     FreeHwndList @ 0x1C00693F0 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C0069470 (BuildHwndList.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CD890 (PopAndFreeW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01BF2E0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, __int64 a2)
{
  unsigned int v2; // r14d
  __int64 v4; // rbp
  __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  struct tagBWL *v8; // rsi
  unsigned __int64 *i; // rdi
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v13[4]; // [rsp+38h] [rbp-20h] BYREF

  v2 = a2;
  v4 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 376LL);
  v12[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v12;
  ++*((_DWORD *)a1 + 2);
  v12[1] = a1;
  *(_DWORD *)(v4 + 280) = a2;
  GreIncrementDisplaySettingsUniqueness(a1, a2);
  xxxForceUpdateWindowTreeDpiAwarenessContext(a1, v2, 1);
  v7 = *(_QWORD **)(v4 + 632);
  if ( v7 )
    v7 = (_QWORD *)v7[2];
  while ( v7 )
  {
    v8 = BuildHwndList(*(_QWORD *)(v7[1] + 16LL), 1, 0LL);
    if ( v8 )
    {
      PushW32ThreadLock((__int64)v7, v13, UserDereferenceObject);
      ObfReferenceObject(v7);
      for ( i = (unsigned __int64 *)((char *)v8 + 32); *i != 1; ++i )
      {
        v10 = HMValidateHandleNoSecure(*i, 1);
        if ( v10 && *(_QWORD *)(*(_QWORD *)(v10 + 16) + 376LL) == v4 )
          xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v10, v2, 1);
      }
      FreeHwndList(v8);
      v7 = (_QWORD *)v7[4];
      PopAndFreeW32ThreadLock((__int64)v13);
    }
  }
  return ThreadUnlock1(v6, v5);
}
