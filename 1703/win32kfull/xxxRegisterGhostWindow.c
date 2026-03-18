/*
 * XREFs of xxxRegisterGhostWindow @ 0x1C0132440
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     IsHungWindow @ 0x1C004A0A0 (IsHungWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C0132638 (-SetGhostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0132918 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?_ShouldGhostWindow@@YAHPEAUtagWND@@@Z @ 0x1C013294C (-_ShouldGhostWindow@@YAHPEAUtagWND@@@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 */

__int64 __fastcall xxxRegisterGhostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rax
  struct tagWND *v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagWND *v12; // rcx
  __int64 v13; // r10
  __int16 v14; // dx
  int v15; // r8d
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v19; // r10
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r8
  _QWORD v23[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-30h] BYREF

  v4 = 0;
  CurrentProcess = PsGetCurrentProcess(a1);
  if ( !(unsigned int)IsProcessDwm(CurrentProcess) )
  {
    UserSetLastError(5LL);
    return v4;
  }
  v6 = HMValidateHandleNoSecure((unsigned __int64)a2, 1);
  if ( v6 )
  {
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    ++*(_DWORD *)(v6 + 8);
    v23[1] = v6;
    if ( !(unsigned int)_ShouldGhostWindow((struct tagWND *)v6) )
      goto LABEL_23;
    if ( GetProp(v6, *(_WORD *)(gpsi + 884LL), 1) != -1 )
      goto LABEL_24;
    if ( !(unsigned int)IsHungWindow(v6) )
      goto LABEL_23;
    v8 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v9 = (struct tagWND *)v8;
    if ( !v8 || *(_QWORD *)(v8 + 16) != gptiCurrent )
      goto LABEL_23;
    v7 = gpsi;
    if ( *(_WORD *)(*(_QWORD *)(v8 + 168) + 8LL) != *(_WORD *)(gpsi + 884LL) )
      goto LABEL_24;
    v24[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v24;
    ++*(_DWORD *)(v8 + 8);
    v24[1] = v8;
    if ( (unsigned int)SetGhostProp((struct tagWND *)v8, a2) )
    {
      if ( (unsigned int)SetGhostProp((struct tagWND *)v6, a1) )
      {
        SetGhostFNID(v9, 1);
        xxxShowGhostWindow(v12, (struct tagWND *)v6);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v9)
          && !(unsigned int)IsWindowBeingDestroyed(v6)
          && (HWND)GetProp((__int64)v9, *(_WORD *)(*(_QWORD *)v13 + 884LL), 1) == a2
          && (HWND)GetProp(v6, v14, v15) == a1 )
        {
          v4 = 1;
          goto LABEL_16;
        }
        SetGhostFNID(v9, 0);
        if ( (HWND)GetProp(v6, *(_WORD *)(*(_QWORD *)v19 + 884LL), 1) == a1 )
          InternalRemoveProp(v6, v20, v21);
        xxxHideGhostWindow(v9, (struct tagWND *)v6);
      }
      InternalRemoveProp((__int64)v9, *(unsigned __int16 *)(gpsi + 884LL), 1LL);
    }
LABEL_16:
    ThreadUnlock1(v11, v10);
    if ( v4 )
    {
LABEL_17:
      ThreadUnlock1(v17, v16);
      return v4;
    }
LABEL_23:
    v7 = gpsi;
LABEL_24:
    if ( GetProp(v6, *(_WORD *)(*(_QWORD *)v7 + 884LL), 1) == -1 )
      InternalRemoveProp(v6, v16, v22);
    goto LABEL_17;
  }
  return v4;
}
