/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01D7730
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C0062014 (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     IsWindowBeingDestroyed @ 0x1C008BBE4 (IsWindowBeingDestroyed.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C013482C (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0134AA8 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0134BF0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D7298 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D73EC (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  struct tagWND *v25; // rcx
  int v26; // r8d
  __int16 v27; // r11
  __int64 v28; // r8
  unsigned int v29; // r11d
  _QWORD v31[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v32[3]; // [rsp+38h] [rbp-30h] BYREF

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
    v31[0] = *(_QWORD *)(ThreadWin32Thread + 392);
    *(_QWORD *)(ThreadWin32Thread + 392) = v31;
    v31[1] = v10;
    _InterlockedAdd((volatile signed __int32 *)(v10 + 8), 1u);
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v10) )
      goto LABEL_19;
    LOBYTE(v14) = 1;
    v18 = HMValidateHandleNoSecure((unsigned __int64)a1, v14, v16, v17);
    v20 = v18;
    if ( !v18 )
      goto LABEL_19;
    v15 = gptiCurrent;
    v14 = gptiCurrent;
    if ( *(_QWORD *)(v18 + 16) != gptiCurrent )
      goto LABEL_19;
    v21 = *(_QWORD *)(v18 + 168);
    v14 = gpsi;
    v15 = *(unsigned __int16 *)(gpsi + 884LL);
    if ( *(_WORD *)(v21 + 8) != (_WORD)v15 )
      goto LABEL_19;
    v22 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), gpsi, v21, v19);
    v32[0] = *(_QWORD *)(v22 + 392);
    *(_QWORD *)(v22 + 392) = v32;
    v32[1] = v20;
    _InterlockedAdd((volatile signed __int32 *)(v20 + 8), 1u);
    if ( (unsigned int)SetFrostProp((struct tagWND *)v20, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v10, (__int64)a1) )
      {
        SetGhostFNID((struct tagWND *)v20, 1);
        xxxShowGhostWindow(v25, (struct tagWND *)v10);
        if ( !(unsigned int)IsWindowBeingDestroyed(v20)
          && !(unsigned int)IsWindowBeingDestroyed(v10)
          && (HWND)GetProp(v20, *(_WORD *)(gpsi + 1362LL), 1) == a2
          && (HWND)GetProp(v10, v27, v26) == a1 )
        {
          v4 = 1;
          goto LABEL_18;
        }
        SetGhostFNID((struct tagWND *)v20, 0);
        if ( (HWND)GetProp(v10, *(_WORD *)(gpsi + 1362LL), 1) == a1 )
          InternalRemoveProp(v10, v29, v28);
        xxxHideGhostWindow((struct tagWND *)v20, (struct tagWND *)v10);
      }
      InternalRemoveProp(v20, *(unsigned __int16 *)(gpsi + 1362LL), 1LL);
    }
LABEL_18:
    ThreadUnlock1(v24, v23);
LABEL_19:
    ThreadUnlock1(v15, v14);
  }
  return v4;
}
