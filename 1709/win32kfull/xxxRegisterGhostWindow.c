/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0134590
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsHungWindow @ 0x1C0088E80 (IsHungWindow.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01347A8 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0134AA8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C0134ADC (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct tagWND *v24; // rcx
  int v25; // r8d
  __int16 v26; // r11
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v30; // r8
  unsigned int v31; // r11d
  __int64 v32; // r8
  unsigned int v33; // r11d
  _QWORD v34[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v35[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1, a2);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL, v6);
    return v4;
  }
  LOBYTE(v6) = 1;
  v10 = HMValidateHandleNoSecure((unsigned __int64)a2, v6, v7, v8);
  if ( v10 )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v9, v11, v12);
    v34[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v34;
    v34[1] = v10;
    _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v10) )
      goto LABEL_23;
    if ( GetProp(v10, *(_WORD *)(gpsi + 884LL), 1) != -1 )
      goto LABEL_23;
    if ( !(unsigned int)IsHungWindow(v10) )
      goto LABEL_23;
    LOBYTE(v14) = 1;
    v17 = HMValidateHandleNoSecure((unsigned __int64)a1, v14, v15, v16);
    v19 = v17;
    if ( !v17 )
      goto LABEL_23;
    if ( *(_QWORD *)(v17 + 16) != gptiCurrent )
      goto LABEL_23;
    v20 = *(_QWORD *)(v17 + 168);
    if ( *(_WORD *)(v20 + 8) != *(_WORD *)(gpsi + 884LL) )
      goto LABEL_23;
    v21 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi, v20, v18);
    v35[0] = *(_QWORD *)(v21 + 392);
    *(_QWORD *)(v21 + 392) = v35;
    v35[1] = v19;
    _InterlockedAdd((volatile signed __int32 *)(v19 + 8), 1u);
    if ( (unsigned int)SetGhostProp((struct tagWND *)v19, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v10, a1) )
      {
        SetGhostFNID((struct tagWND *)v19, 1);
        xxxShowGhostWindow(v24, (struct tagWND *)v10);
        if ( !(unsigned int)IsWindowBeingDestroyed(v19)
          && !(unsigned int)IsWindowBeingDestroyed(v10)
          && (HWND)GetProp(v19, *(_WORD *)(gpsi + 884LL), 1) == a2
          && (HWND)GetProp(v10, v26, v25) == a1 )
        {
          v4 = 1;
          goto LABEL_16;
        }
        SetGhostFNID((struct tagWND *)v19, 0);
        if ( (HWND)GetProp(v10, *(_WORD *)(gpsi + 884LL), 1) == a1 )
          InternalRemoveProp(v10, v31, v30);
        xxxHideGhostWindow((struct tagWND *)v19, (struct tagWND *)v10);
      }
      InternalRemoveProp(v19, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    }
LABEL_16:
    ThreadUnlock1(v23, v22);
    if ( v4 )
    {
LABEL_17:
      ThreadUnlock1(v28, v27);
      return v4;
    }
LABEL_23:
    if ( GetProp(v10, *(_WORD *)(gpsi + 884LL), 1) == -1 )
      InternalRemoveProp(v10, v33, v32);
    goto LABEL_17;
  }
  return v4;
}
