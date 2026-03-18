/*
 * XREFs of ?ValidateWindowPos@@YAHPEAUtagCVR@@PEAUtagWND@@@Z @ 0x1C0068964
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x1C00624E4 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     xxxEndDeferWindowPosEx @ 0x1C006815C (xxxEndDeferWindowPosEx.c)
 *     ?ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z @ 0x1C00688B0 (-ValidateSmwp@@YAHPEAUtagSMWP@@PEAH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     _GetDesktopWindow @ 0x1C0065304 (_GetDesktopWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     IsThreadCrossSessionAttached @ 0x1C0143CAC (IsThreadCrossSessionAttached.c)
 */

_BOOL8 __fastcall ValidateWindowPos(struct tagCVR *a1, struct tagWND *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v4; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  int v8; // r8d
  unsigned __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v14; // rdx
  __int64 v15; // rbp
  struct tagWND *v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v20; // rax
  __int64 v21; // rdx
  char v22; // r10

  v4 = *(_QWORD *)a1;
  CurrentThread = KeGetCurrentThread();
  if ( !(unsigned int)IsThreadCrossSessionAttached(a1, a2, a3, a4) )
    PsGetThreadWin32Thread(CurrentThread);
  v8 = (unsigned __int16)v4;
  if ( (unsigned __int64)(unsigned __int16)v4 >= *(_QWORD *)(gpsi + 8LL) )
    return 0LL;
  v9 = v4 >> 16;
  v10 = gSharedInfo[1] + (unsigned int)(v8 * LODWORD(gSharedInfo[2]));
  v11 = 3 * ((__int64)(unsigned int)(v8 * LODWORD(gSharedInfo[2])) >> 5);
  if ( (_WORD)v9 != *(_WORD *)(v10 + 26) && (_WORD)v9 != 0xFFFF && ((_WORD)v9 || !PsGetCurrentProcessWow64Process(gpsi)) )
    return 0LL;
  if ( (*(_BYTE *)(v10 + 25) & 1) != 0 )
    return 0LL;
  if ( *(_BYTE *)(v10 + 24) != 1 )
    return 0LL;
  v12 = *(_QWORD *)(gpKernelHandleTable + 8 * v11);
  if ( !v12 )
    return 0LL;
  *((_QWORD *)a1 + 13) = *(_QWORD *)(v12 + 16);
  if ( (*((_DWORD *)a1 + 8) & 4) == 0 )
  {
    DesktopWindow = GetDesktopWindow(v12);
    v14 = *(struct tagWND **)(v12 + 104);
    v15 = DesktopWindow;
    v16 = v14;
    if ( *(char *)(v12 + 59) < 0 )
      return 0LL;
    v17 = *((_QWORD *)a1 + 1);
    if ( v17 > 0xFFFFFFFFFFFFFFFDuLL )
    {
      if ( v14 != (struct tagWND *)DesktopWindow )
        return 0LL;
      return !a2 || a2 == v14;
    }
    if ( v17 )
    {
      if ( v17 == 1 )
        return !a2 || a2 == v14;
      LOBYTE(v14) = 1;
      v20 = HMValidateHandleNoSecure(v17, v14);
      if ( !v20 || (v22 = *(_BYTE *)(v20 + 59), v22 < 0) )
      {
        UserSetLastError(6LL, v21);
        return 0LL;
      }
      if ( v12 == v20 )
        return 0LL;
      v14 = *(struct tagWND **)(v12 + 104);
      if ( v14 != *(struct tagWND **)(v20 + 104) )
        return 0LL;
      if ( a2 )
      {
        if ( v16 != (struct tagWND *)v15 )
          return !a2 || a2 == v14;
        if ( ((*(_BYTE *)(v12 + 59) & 4 ^ (*(unsigned __int8 *)(v12 + 64) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        {
          if ( ((v22 & 4 ^ (*(unsigned __int8 *)(v20 + 64) >> 1) & 4) & 0xFFFFFFFC) == 0 )
            return 0LL;
          return !a2 || a2 == v14;
        }
        v18 = *(_QWORD *)(v20 + 88);
        goto LABEL_19;
      }
    }
    else if ( a2 )
    {
      if ( v14 != (struct tagWND *)DesktopWindow
        || ((*(_BYTE *)(v12 + 59) & 4 ^ (*(unsigned __int8 *)(v12 + 64) >> 1) & 4) & 0xFFFFFFFC) != 0 )
      {
        return !a2 || a2 == v14;
      }
      v18 = *((_QWORD *)a2 + 14);
LABEL_19:
      if ( v18 && ((*(_BYTE *)(v18 + 59) & 4 ^ (*(unsigned __int8 *)(v18 + 64) >> 1) & 4) & 0xFFFFFFFC) != 0 )
        return 0LL;
      return !a2 || a2 == v14;
    }
  }
  return 1LL;
}
