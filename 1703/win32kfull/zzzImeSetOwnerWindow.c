/*
 * XREFs of zzzImeSetOwnerWindow @ 0x1C001EA68
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C001E610 (NtUserSetImeOwnerWindow.c)
 * Callees:
 *     GetNonChildAncestor @ 0x1C001E9D4 (GetNonChildAncestor.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C001E9F4 (GetWindowCloakStateComponentUIAware.c)
 *     SetWindowGroupBand @ 0x1C001ED20 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     UserSetLastError @ 0x1C0038584 (UserSetLastError.c)
 *     DwmAsyncOwnerChange @ 0x1C005CFBC (DwmAsyncOwnerChange.c)
 */

void __fastcall zzzImeSetOwnerWindow(struct tagWND *a1, __int64 a2)
{
  __int64 v3; // rcx
  __int64 NonChildAncestor; // rax
  __int16 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rax
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = *(_QWORD *)(a2 + 168);
  if ( (*(_BYTE *)(v3 + 94) & 1) == 0 && *(_WORD *)(v3 + 8) != *(_WORD *)(gpsi + 882LL) )
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
    v14[1] = v6;
    v14[0] = (char *)a1 + 120;
    HMAssignmentLock(v14);
    if ( v6 )
    {
      WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware((struct tagWND *)v6);
      zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
    }
    if ( (unsigned int)IsWindowDesktopComposed(a1) )
    {
      v13 = (void *)ReferenceDwmApiPort(v10, v9, v11, v12);
      DwmAsyncOwnerChange(v13);
    }
  }
}
