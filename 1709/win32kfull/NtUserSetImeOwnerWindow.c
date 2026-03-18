/*
 * XREFs of NtUserSetImeOwnerWindow @ 0x1C0056750
 * Callers:
 *     <none>
 * Callees:
 *     zzzImeSetFutureOwner @ 0x1C005455C (zzzImeSetFutureOwner.c)
 *     ImeCheckTopmost @ 0x1C0056864 (ImeCheckTopmost.c)
 *     zzzImeSetOwnerWindow @ 0x1C0056AE8 (zzzImeSetOwnerWindow.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetImeOwnerWindow(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r9

  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    v6 = gpsi;
    if ( (*gpsi & 4) == 0 )
    {
      UserSetLastError(120LL);
      goto LABEL_10;
    }
    if ( (*(_WORD *)(v4 + 82) & 0x3FFF) == 0x2A9 )
    {
      if ( !a2 )
      {
        v5 = 0LL;
        goto LABEL_6;
      }
      v5 = ValidateHwnd(a2);
      if ( v5 )
      {
LABEL_6:
        ++gdwDeferWinEvent;
        if ( v5 )
          goto LABEL_7;
        v10 = *(_QWORD *)(v8 + 16);
        v11 = *(_QWORD *)(*(_QWORD *)(v10 + 408) + 120LL);
        if ( !v11 )
          goto LABEL_17;
        if ( v11 == *(_QWORD *)(v8 + 120) )
          goto LABEL_9;
        v12 = *(_QWORD *)(v11 + 168);
        if ( *(_WORD *)(v12 + 8) != *(_WORD *)(gpsi + 882LL)
          && (*(_BYTE *)(v12 + 102) & 1) == 0
          && v10 == *(_QWORD *)(v11 + 16) )
        {
LABEL_7:
          zzzImeSetOwnerWindow((struct tagWND *)v8);
        }
        else
        {
LABEL_17:
          zzzImeSetFutureOwner((struct tagWND *)v8, *(struct tagWND **)(v8 + 120));
        }
        ImeCheckTopmost(v8);
LABEL_9:
        zzzEndDeferWinEventNotify();
        v7 = 1LL;
      }
    }
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v6, v5);
  return v7;
}
