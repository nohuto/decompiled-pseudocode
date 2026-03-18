/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C0140028
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C00465DC (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     _GetMenuState @ 0x1C0046708 (_GetMenuState.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     xxxSetSysMenu @ 0x1C007AD30 (xxxSetSysMenu.c)
 *     xxxGetSysMenuHandle @ 0x1C007BAF0 (xxxGetSysMenuHandle.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C00968B4 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00A8A60 (xxxSendTransformableMessageTimeout.c)
 *     W32GetThreadWin32Thread @ 0x1C00AA650 (W32GetThreadWin32Thread.c)
 *     xxxActivateWindow @ 0x1C00CB624 (xxxActivateWindow.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C01401B0 (DragOperationFromMaximizedAllowed.c)
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     MoveWithArrangementAllowed @ 0x1C01F82D4 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01F8304 (SizeWithSnapAllowed.c)
 */

__int64 __fastcall xxxHandleNCMouseGuys(__int64 BugCheckParameter2, int a2, int a3, struct _LARGE_STRING *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  int v6; // r15d
  unsigned int v9; // esi
  int v10; // edx
  __int64 NonChildAncestor; // rbx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 ThreadWin32Thread; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 SysMenuHandle; // rax
  __int64 v20; // r8
  _QWORD v21[4]; // [rsp+50h] [rbp-38h] BYREF

  v4 = 23;
  v5 = (unsigned int)a3;
  v6 = 0;
  v9 = 0xFFFF;
  if ( a3 == 2 )
  {
    v10 = a2 - 161;
    if ( v10 )
    {
      if ( v10 == 2 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0x21) != 0
          || (unsigned int)MoveWithArrangementAllowed(BugCheckParameter2)
          && (*(_BYTE *)(BugCheckParameter2 + 305) & 3) != 0 )
        {
          v9 = 61728;
        }
        else if ( (*(_BYTE *)(BugCheckParameter2 + 70) & 1) != 0 )
        {
          v9 = 61488;
        }
        v6 = 1;
      }
    }
    else if ( (*(_BYTE *)(BugCheckParameter2 + 71) & 0xC0) != 0x40 || (*(_BYTE *)(BugCheckParameter2 + 305) & 0x10) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(BugCheckParameter2);
      ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v12, v13, v14);
      v21[0] = *(_QWORD *)(ThreadWin32Thread + 392);
      *(_QWORD *)(ThreadWin32Thread + 392) = v21;
      v21[1] = NonChildAncestor;
      if ( NonChildAncestor )
        _InterlockedIncrement((volatile signed __int32 *)(NonChildAncestor + 8));
      xxxActivateWindow((struct tagWND *)NonChildAncestor, 6LL);
      ThreadUnlock1(v17, v16);
      v9 = 61456;
    }
  }
  else
  {
    if ( a3 == 3 )
      goto LABEL_30;
    if ( a3 <= 4 )
      goto LABEL_7;
    if ( a3 <= 7 )
    {
LABEL_30:
      if ( ((a2 - 161) & 0xFFFFFFFD) != 0 )
        goto LABEL_7;
      if ( a3 == 3 )
      {
        if ( a2 == 163 )
        {
          v9 = 61536;
          goto LABEL_7;
        }
      }
      else if ( a3 != 5 )
      {
        if ( a3 == 6 )
          v9 = 61568;
        else
          v9 = 61552;
        goto LABEL_7;
      }
      v9 = 61584;
    }
    else if ( (a3 == 12 || a3 == 15)
           && a2 == 163
           && (unsigned int)SizeWithSnapAllowed()
           && (*(_BYTE *)(BugCheckParameter2 + 71) & 0x21) == 0 )
    {
      v6 = 1;
      if ( (*(_BYTE *)(BugCheckParameter2 + 305) & 3) != 0 )
      {
        if ( (*(_BYTE *)(BugCheckParameter2 + 305) & 3) == 3 )
          v4 = 18;
      }
      else
      {
        v4 = 17;
      }
    }
  }
LABEL_7:
  result = v9 - 61456;
  if ( v9 != 61456 && (result = v9 - 61488, v9 != 61488) && v9 != 61536
    || (*(_BYTE *)(BugCheckParameter2 + 70) & 8) == 0
    || (xxxSetSysMenu((struct tagWND *)BugCheckParameter2),
        SysMenuHandle = xxxGetSysMenuHandle(BugCheckParameter2),
        result = GetMenuState(SysMenuHandle, (unsigned __int16)v9 & 0xFFF0),
        (result & 3) == 0)
    || v9 == 61456
    && (*(_BYTE *)(BugCheckParameter2 + 70) & 4) != 0
    && (*(_BYTE *)(BugCheckParameter2 + 71) & 1) != 0
    && ((result = DragOperationFromMaximizedAllowed(BugCheckParameter2), (_DWORD)result)
     || (result = IsWindowSubjectToShellWindowBehavior(BugCheckParameter2, 4LL, v20), (_DWORD)result)) )
  {
    if ( v6 )
    {
      result = gSqmIsOptedIn;
      if ( gSqmIsOptedIn )
        result = WinSqmIncrementDWORD(&SqmGlobalSessionGuid, 3534LL, 1LL);
    }
    if ( v9 == 0xFFFF )
    {
      if ( v4 != 23 )
        return xxxArrangeWindow(BugCheckParameter2, v4);
    }
    else
    {
      _InterlockedIncrement(&glSendMessage);
      return xxxSendTransformableMessageTimeout((__int64 *)BugCheckParameter2, 274LL, v5 | v9, a4, 0, 0, 0LL, 1u, 1);
    }
  }
  return result;
}
