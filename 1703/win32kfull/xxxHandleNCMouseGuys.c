/*
 * XREFs of xxxHandleNCMouseGuys @ 0x1C01394E4
 * Callers:
 *     ?xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z @ 0x1C01127C4 (-xxxDWP_NCMouse@@YAXPEAUtagWND@@II_J@Z.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     IsWindowSubjectToShellWindowBehavior @ 0x1C0021D00 (IsWindowSubjectToShellWindowBehavior.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C00530C0 (xxxSendTransformableMessageTimeout.c)
 *     xxxActivateWindow @ 0x1C00B3994 (xxxActivateWindow.c)
 *     xxxSetSysMenu @ 0x1C00C1FC0 (xxxSetSysMenu.c)
 *     xxxGetSysMenuHandle @ 0x1C00C2730 (xxxGetSysMenuHandle.c)
 *     _GetMenuState @ 0x1C01128F0 (_GetMenuState.c)
 *     DragOperationFromMaximizedAllowed @ 0x1C0139664 (DragOperationFromMaximizedAllowed.c)
 *     MoveWithArrangementAllowed @ 0x1C01EDE38 (MoveWithArrangementAllowed.c)
 *     SizeWithSnapAllowed @ 0x1C01EDE68 (SizeWithSnapAllowed.c)
 *     xxxArrangeWindow @ 0x1C01F62C4 (xxxArrangeWindow.c)
 */

__int64 __fastcall xxxHandleNCMouseGuys(_BYTE *a1, int a2, int a3, struct _LARGE_STRING *a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rbp
  int v6; // r15d
  unsigned int v9; // esi
  int v10; // edx
  __int64 NonChildAncestor; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 result; // rax
  __int64 SysMenuHandle; // rax
  __int64 v16; // r8
  _QWORD v17[4]; // [rsp+50h] [rbp-38h] BYREF

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
        if ( (a1[71] & 0x21) != 0 || (unsigned int)MoveWithArrangementAllowed(a1) && (a1[305] & 3) != 0 )
        {
          v9 = 61728;
        }
        else if ( (a1[70] & 1) != 0 )
        {
          v9 = 61488;
        }
        v6 = 1;
      }
    }
    else if ( (a1[71] & 0xC0) != 0x40 || (a1[305] & 0x10) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor((__int64)a1);
      v17[0] = *(_QWORD *)(gptiCurrent + 368LL);
      *(_QWORD *)(gptiCurrent + 368LL) = v17;
      v17[1] = NonChildAncestor;
      if ( NonChildAncestor )
        ++*(_DWORD *)(NonChildAncestor + 8);
      xxxActivateWindow((struct tagWND *)NonChildAncestor, 6LL);
      ThreadUnlock1(v13, v12);
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
    else if ( (a3 == 12 || a3 == 15) && a2 == 163 && (unsigned int)SizeWithSnapAllowed() && (a1[71] & 0x21) == 0 )
    {
      v6 = 1;
      if ( (a1[305] & 3) != 0 )
      {
        if ( (a1[305] & 3) == 3 )
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
    || (a1[70] & 8) == 0
    || (xxxSetSysMenu(a1),
        SysMenuHandle = xxxGetSysMenuHandle((__int64)a1),
        result = GetMenuState(SysMenuHandle, (unsigned __int16)v9 & 0xFFF0),
        (result & 3) == 0)
    || v9 == 61456
    && (a1[70] & 4) != 0
    && (a1[71] & 1) != 0
    && ((result = DragOperationFromMaximizedAllowed(a1), (_DWORD)result)
     || (result = IsWindowSubjectToShellWindowBehavior((__int64)a1, 4LL, v16), (_DWORD)result)) )
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
        return xxxArrangeWindow(a1, v4);
    }
    else
    {
      _InterlockedAdd(&glSendMessage, 1u);
      return xxxSendTransformableMessageTimeout((ULONG_PTR)a1, 0x112u, v5 | v9, a4, 0, 0, 0LL, 1, 1);
    }
  }
  return result;
}
