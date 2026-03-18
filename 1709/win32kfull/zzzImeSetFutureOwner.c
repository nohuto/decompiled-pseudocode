/*
 * XREFs of zzzImeSetFutureOwner @ 0x1C005455C
 * Callers:
 *     NtUserSetImeOwnerWindow @ 0x1C0056750 (NtUserSetImeOwnerWindow.c)
 *     zzzImeCanDestroyDefIME @ 0x1C00CD740 (zzzImeCanDestroyDefIME.c)
 * Callees:
 *     SetWindowGroupBand @ 0x1C0056C00 (SetWindowGroupBand.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     GetWindowCloakStateComponentUIAware @ 0x1C005D344 (GetWindowCloakStateComponentUIAware.c)
 *     DwmAsyncOwnerChange @ 0x1C0060154 (DwmAsyncOwnerChange.c)
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     ?WantImeWindow@@YAHPEAUtagWND@@0@Z @ 0x1C0072D6C (-WantImeWindow@@YAHPEAUtagWND@@0@Z.c)
 */

void __fastcall zzzImeSetFutureOwner(struct tagWND *a1, struct tagWND *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  struct tagWND *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r9
  __int64 v9; // r11
  struct tagWND *v10; // rax
  unsigned int WindowCloakStateComponentUIAware; // eax
  void *v12; // rax
  __int64 v13; // rax
  __int16 v14; // dx
  __int64 v15; // r10
  __int64 v16; // rax
  _QWORD v17[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( a2 )
  {
    v3 = *((_QWORD *)a1 + 2);
    if ( (*((_BYTE *)a2 + 71) & 0x40) == 0 )
    {
      v4 = *((_QWORD *)a2 + 15);
      v5 = a2;
      while ( v4 && *(_QWORD *)(v4 + 16) == v3 )
      {
        v5 = (struct tagWND *)v4;
        v4 = *(_QWORD *)(v4 + 120);
      }
      if ( (*((_BYTE *)v5 + 60) & 0x20) != 0 && (*((_BYTE *)a2 + 60) & 0x20) == 0 )
        v5 = a2;
      v6 = *((_QWORD *)v5 + 21);
      if ( (*(_BYTE *)(v6 + 102) & 1) != 0 || *(_WORD *)(v6 + 8) == *(_WORD *)(gpsi + 882LL) )
        v5 = a2;
      if ( a2 == v5 )
      {
        v7 = *((_QWORD *)v5 + 13);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 112);
          if ( v8 )
          {
            v9 = *((_QWORD *)v5 + 2);
            while ( 1 )
            {
              if ( v9 == *(_QWORD *)(v8 + 16) )
              {
                v13 = *(_QWORD *)(v8 + 168);
                v14 = *(_WORD *)(v13 + 8);
                if ( v14 != *(_WORD *)(gpsi + 890LL)
                  && (*(_BYTE *)(v13 + 102) & 1) == 0
                  && v14 != *(_WORD *)(gpsi + 882LL)
                  && *(char *)(v8 + 60) >= 0 )
                {
                  if ( (unsigned int)WantImeWindow(*(struct tagWND **)(v8 + 104), (struct tagWND *)v8) )
                  {
                    if ( (*(_BYTE *)(v8 + 71) & 0x40) == 0 && v5 != (struct tagWND *)v8 )
                    {
                      v16 = *(_QWORD *)(v8 + 120);
                      if ( !v16 || v15 != *(_QWORD *)(v16 + 16) )
                        break;
                    }
                  }
                }
              }
              v8 = *(_QWORD *)(v8 + 88);
              if ( !v8 )
                goto LABEL_14;
            }
            v5 = (struct tagWND *)v8;
          }
        }
      }
LABEL_14:
      v10 = v5;
      if ( v5 )
      {
        while ( v10 != a1 )
        {
          v10 = (struct tagWND *)*((_QWORD *)v10 + 15);
          if ( !v10 )
            goto LABEL_17;
        }
        UserSetLastError(87LL);
      }
      else
      {
LABEL_17:
        if ( *((_DWORD *)a1 + 80) != *((_DWORD *)v5 + 80) )
          SetWindowGroupBand(a1);
        v17[1] = v5;
        v17[0] = (char *)a1 + 120;
        HMAssignmentLock(v17);
        WindowCloakStateComponentUIAware = GetWindowCloakStateComponentUIAware(v5);
        zzzSetWindowCompositionCloak(a1, 0LL, WindowCloakStateComponentUIAware);
        if ( (unsigned int)IsWindowDesktopComposed(a1) )
        {
          v12 = (void *)ReferenceDwmApiPort();
          DwmAsyncOwnerChange(v12);
        }
      }
    }
  }
}
