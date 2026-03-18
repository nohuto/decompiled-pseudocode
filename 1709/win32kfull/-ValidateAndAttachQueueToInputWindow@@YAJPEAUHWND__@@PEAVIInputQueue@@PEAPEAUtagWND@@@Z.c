/*
 * XREFs of ?ValidateAndAttachQueueToInputWindow@@YAJPEAUHWND__@@PEAVIInputQueue@@PEAPEAUtagWND@@@Z @ 0x1C008DE84
 * Callers:
 *     UserValidateAndAttachQueueToInputWindowApiExt @ 0x1C008DE70 (UserValidateAndAttachQueueToInputWindowApiExt.c)
 * Callees:
 *     ?AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z @ 0x1C008DF74 (-AttachInputQueueToWindow@@YAJPEAUtagWND@@PEAVIInputQueue@@@Z.c)
 *     ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C008E6C4 (--0ReEnterLeaveCrit@@QEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     _GetAncestor @ 0x1C0113990 (_GetAncestor.c)
 */

__int64 __fastcall ValidateAndAttachQueueToInputWindow(HWND a1, struct IInputQueue *a2, struct tagWND **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  _QWORD *v12; // rsi
  _QWORD *v13; // rbx
  int v14; // ebx
  __int64 v16; // rax
  int v17; // [rsp+50h] [rbp+18h] BYREF

  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v17);
  *a3 = 0LL;
  LOBYTE(v6) = 1;
  v7 = HMValidateHandleNoSecure(a1, v6);
  v10 = v7;
  if ( v7 && (v9 = (*(_WORD *)(v7 + 82) & 0x3FFFu) - 669, (v9 & 0xFFFFFFFD) != 0) )
  {
    CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v9);
    v12 = *(_QWORD **)(v10 + 16);
    v13 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process == (_QWORD *)v12[50]
      || (unsigned int)IsProcessDwm(*CurrentProcessWin32Process)
      || v12[169] == GetAncestor(v10, 1LL)
      && (v16 = v12[170]) != 0
      && v13 == *(_QWORD **)(*(_QWORD *)(v16 + 16) + 400LL) )
    {
      v14 = AttachInputQueueToWindow((struct tagWND *)v10, a2);
      if ( v14 >= 0 )
        *a3 = (struct tagWND *)v10;
    }
    else
    {
      v14 = -1073741790;
    }
  }
  else
  {
    v14 = -1073741811;
  }
  if ( !v17 )
    UserSessionSwitchLeaveCrit(v9, v8);
  return (unsigned int)v14;
}
