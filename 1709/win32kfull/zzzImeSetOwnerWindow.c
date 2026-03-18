/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C0056AE8
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0056750 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     GetNonChildAncestor @ 0x1C0057F60 (GetNonChildAncestor.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v9; // rax
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 168);
  if ( (*(_BYTE *)(v3 + 102) & 1) == 0 && *(_WORD *)(v3 + 8) != *(_WORD *)(gpsi + 882LL) )
  {
    NonChildAncestor = GetNonChildAncestor(a2);
    v6 = NonChildAncestor;
    while ( NonChildAncestor )
    {
      if ( *(_WORD *)(*(_QWORD *)(NonChildAncestor + 168) + 8LL) == v5 )
      {
        v6 = 0LL;
        break;
      }
      NonChildAncestor = *(_QWORD *)(NonChildAncestor + 120);
    }
    v7 = v6;
    if ( v6 )
    {
      while ( a1 != (struct tagWND *)v7 )
      {
        v7 = *(_QWORD *)(v7 + 104);
        if ( !v7 )
          goto LABEL_10;
      }
      UserSetLastError(87LL);
      v6 = 0LL;
LABEL_10:
      if ( v6 && *((_DWORD *)a1 + 80) != *(_DWORD *)(v6 + 320) )
        SetWindowGroupBand(a1);
    }
    v10[1] = v6;
    v10[0] = (char *)a1 + 120;
    HMAssignmentLock(v10);
    if ( v6 )
    {
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v6);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v9 = (void *)ReferenceDwmApiPort();
      DwmAsyncOwnerChange(v9);
    }
  }
}
