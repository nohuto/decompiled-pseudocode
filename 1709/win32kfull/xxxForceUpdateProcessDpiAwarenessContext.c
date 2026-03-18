/*
 * XREFs of xxxForceUpdateProcessDpiAwarenessContext @ 0x1C01C457C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 * Callees:
 *     FreeHwndList @ 0x1C006F360 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C006F3E0 (BuildHwndList.c)
 *     PushW32ThreadLock @ 0x1C009DD90 (PushW32ThreadLock.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     PopAndFreeW32ThreadLock @ 0x1C00CE7E0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01C2BC0 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 */

__int64 __fastcall xxxForceUpdateProcessDpiAwarenessContext(struct tagWND *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 ThreadWin32Thread; // rax
  int v8; // ecx
  __int64 v9; // rdx
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  __int64 v12; // r9
  struct tagBWL *v13; // r14
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned __int64 *i; // rsi
  __int64 v18; // rax
  int v19; // edx
  _QWORD v21[3]; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v22[4]; // [rsp+38h] [rbp-20h] BYREF

  v5 = a2;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 400LL);
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
  *(_QWORD *)(ThreadWin32Thread + 392) = v21;
  v21[1] = a1;
  _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
  v8 = *(_DWORD *)(v6 + 1024);
  if ( !v8 )
    *(_DWORD *)(v6 + 1028) = *(_DWORD *)(v6 + 280);
  *(_DWORD *)(v6 + 1032) = *(_DWORD *)(v6 + 280);
  *(_DWORD *)(v6 + 1024) = v8 + 1;
  *(_DWORD *)(v6 + 280) = v5;
  if ( (v5 & 0xF) == 1 )
    *(_WORD *)(v6 + 284) = (v5 >> 8) & 0x1FF;
  GreIncrementDisplaySettingsUniqueness();
  xxxForceUpdateWindowTreeDpiAwarenessContext(a1, v5, 1);
  v11 = *(_QWORD **)(v6 + 640);
  if ( v11 )
    v11 = (_QWORD *)v11[2];
  while ( v11 )
  {
    v13 = BuildHwndList(*(_QWORD *)(v11[1] + 16LL), (struct tagWND *)1, 0LL);
    if ( v13 )
    {
      PushW32ThreadLock((__int64)v11, v22, UserDereferenceObject, v12);
      ObfReferenceObject(v11);
      for ( i = (unsigned __int64 *)((char *)v13 + 32); *i != 1; ++i )
      {
        LOBYTE(v14) = 1;
        v18 = HMValidateHandleNoSecure(*i, v14, v15, v16);
        if ( v18 && *(_QWORD *)(*(_QWORD *)(v18 + 16) + 400LL) == v6 )
          xxxForceUpdateWindowTreeDpiAwarenessContext((struct tagWND *)v18, v5, 1);
      }
      FreeHwndList(v13);
      v11 = (_QWORD *)v11[4];
      PopAndFreeW32ThreadLock((__int64)v22, v19);
    }
  }
  return ThreadUnlock1(v10, v9);
}
