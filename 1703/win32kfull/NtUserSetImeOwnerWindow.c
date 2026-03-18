/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C001E610
 * Callers:
 *     <none>
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C001C368 (zzzImeSetFutureOwner.c)
 *     ImeCheckTopmost @ 0x1C001E73C (ImeCheckTopmost.c)
 *     zzzImeSetOwnerWindow @ 0x1C001EA68 (zzzImeSetOwnerWindow.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  unsigned __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // rax
  bool v12; // zf
  __int64 v14; // r10

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    v7 = gpsi;
    v6 = (unsigned int)*gpsi;
    if ( (v6 & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_14;
    }
    if ( (*(_WORD *)(v4 + 82) & 0x3FFF) == 0x2A9 )
    {
      if ( a2 )
      {
        v11 = ValidateHwnd(a2);
        if ( !v11 )
          goto LABEL_14;
        v7 = gpsi;
      }
      else
      {
        v11 = 0LL;
      }
      v6 = gdwDeferWinEvent;
      ++gdwDeferWinEvent;
      if ( v11 )
        goto LABEL_8;
      v8 = *(_QWORD *)(v10 + 16);
      v5 = *(_QWORD *)(*(_QWORD *)(v8 + 384) + 88LL);
      if ( !v5 )
        goto LABEL_21;
      if ( v5 == *(_QWORD *)(v10 + 120) )
      {
LABEL_10:
        v12 = (*(_DWORD *)v6)-- == 1;
        if ( v12 && gpPendingNotifies )
          xxxFlushDeferredWindowEvents();
        v9 = 1LL;
        goto LABEL_14;
      }
      v14 = *(_QWORD *)(v5 + 168);
      if ( *(_WORD *)(v14 + 8) != *(_WORD *)(*(_QWORD *)v7 + 882LL)
        && (*(_BYTE *)(v14 + 94) & 1) == 0
        && v8 == *(_QWORD *)(v5 + 16) )
      {
LABEL_8:
        zzzImeSetOwnerWindow((struct tagWND *)v10);
      }
      else
      {
LABEL_21:
        zzzImeSetFutureOwner((struct tagWND *)v10, *(struct tagWND **)(v10 + 120));
      }
      ImeCheckTopmost(v10);
      v6 = gdwDeferWinEvent;
      goto LABEL_10;
    }
  }
LABEL_14:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
