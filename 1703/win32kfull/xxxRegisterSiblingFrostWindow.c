/*
 * XREFs of xxxRegisterSiblingFrostWindow @ 0x1C01D3460
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C001DCFC (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     InternalRemoveProp @ 0x1C005F3F8 (InternalRemoveProp.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C01326B0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetGhostFNID@@YAHPEAUtagWND@@H@Z @ 0x1C0132918 (-SetGhostFNID@@YAHPEAUtagWND@@H@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0132A60 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z @ 0x1C01D2FF0 (-SetFrostProp@@YAHPEAUtagWND@@PEAUHWND__@@@Z.c)
 *     ?_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z @ 0x1C01D312C (-_ShouldFrostSiblingWindow@@YAHPEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxRegisterSiblingFrostWindow(HWND a1, HWND a2)
{
  unsigned int v4; // esi
  __int64 CurrentProcess; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  struct tagWND *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagWND *v13; // rcx
  __int64 v14; // r10
  __int16 v15; // dx
  int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[3]; // [rsp+20h] [rbp-48h] BYREF
  _QWORD v23[3]; // [rsp+38h] [rbp-30h] BYREF

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
    v22[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v22;
    ++*(_DWORD *)(v6 + 8);
    v22[1] = v6;
    if ( !(unsigned int)_ShouldFrostSiblingWindow((struct tagWND *)v6) )
      goto LABEL_19;
    v9 = HMValidateHandleNoSecure((unsigned __int64)a1, 1);
    v10 = (struct tagWND *)v9;
    if ( !v9 )
      goto LABEL_19;
    v8 = gptiCurrent;
    if ( *(_QWORD *)(v9 + 16) != gptiCurrent )
      goto LABEL_19;
    v7 = gpsi;
    v8 = *(unsigned __int16 *)(gpsi + 884LL);
    if ( *(_WORD *)(*(_QWORD *)(v9 + 168) + 8LL) != (_WORD)v8 )
      goto LABEL_19;
    v23[0] = *(_QWORD *)(gptiCurrent + 368LL);
    *(_QWORD *)(gptiCurrent + 368LL) = v23;
    ++*(_DWORD *)(v9 + 8);
    v23[1] = v9;
    if ( (unsigned int)SetFrostProp((struct tagWND *)v9, (__int64)a2) )
    {
      if ( (unsigned int)SetFrostProp((struct tagWND *)v6, (__int64)a1) )
      {
        SetGhostFNID(v10, 1);
        xxxShowGhostWindow(v13, (struct tagWND *)v6);
        if ( !(unsigned int)IsWindowBeingDestroyed((__int64)v10)
          && !(unsigned int)IsWindowBeingDestroyed(v6)
          && (HWND)GetProp((__int64)v10, *(_WORD *)(*(_QWORD *)v14 + 1362LL), 1) == a2
          && (HWND)GetProp(v6, v15, v16) == a1 )
        {
          v4 = 1;
          goto LABEL_18;
        }
        SetGhostFNID(v10, 0);
        if ( (HWND)GetProp(v6, *(_WORD *)(*(_QWORD *)v17 + 1362LL), 1) == a1 )
          InternalRemoveProp(v6, v18, v19);
        xxxHideGhostWindow(v10, (struct tagWND *)v6, v19, v20);
      }
      InternalRemoveProp((__int64)v10, *(unsigned __int16 *)(gpsi + 1362LL), 1LL);
    }
LABEL_18:
    ThreadUnlock1(v12, v11);
LABEL_19:
    ThreadUnlock1(v8, v7);
  }
  return v4;
}
