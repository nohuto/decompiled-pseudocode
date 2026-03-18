/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C00578F4
 * Callers:
 *     zzzImeSetFutureOwner @ 0x1C005455C (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C0056AE8 (zzzImeSetOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C005E6F0 (NtUserSetWindowCompositionAttribute.c)
 *     xxxCreateWindowEx @ 0x1C006F794 (xxxCreateWindowEx.c)
 *     xxxSetWindowData @ 0x1C00A40EC (xxxSetWindowData.c)
 *     xxxSetParentWorker @ 0x1C00C8434 (xxxSetParentWorker.c)
 *     xxxAddShadow @ 0x1C012AC08 (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C020CD58 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0214E34 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     zzzSetWindowCompositionCloak @ 0x1C00578F4 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C0057BF0 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C0057C4C (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057C7C (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C0057E7C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     DwmAsyncSetCompositionAttribute @ 0x1C0057F80 (DwmAsyncSetCompositionAttribute.c)
 *     _GetWindowCompositionInfo @ 0x1C0065464 (_GetWindowCompositionInfo.c)
 *     WindowHasShadow @ 0x1C0066870 (WindowHasShadow.c)
 *     xxxWindowEvent @ 0x1C006D410 (xxxWindowEvent.c)
 *     zzzEndDeferWinEventNotify @ 0x1C006F614 (zzzEndDeferWinEventNotify.c)
 *     FVisCountable @ 0x1C0093070 (FVisCountable.c)
 *     ?GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z @ 0x1C020BF98 (-GetNextComponentWindow@CoreWindowProp@@SAPEAUtagWND@@PEAU2@0@Z.c)
 *     zzzCloakShadow @ 0x1C020CD58 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, _DWORD *a2, unsigned int a3)
{
  unsigned int v3; // esi
  int v5; // ebx
  int v6; // r9d
  unsigned __int8 v7; // cl
  __int64 j; // rcx
  __int64 v9; // rax
  __int64 v10; // rsi
  unsigned int v12; // ebx
  unsigned int v13; // ebx
  unsigned int v14; // eax
  BOOL v15; // eax
  void *v16; // rax
  int v17; // edx
  __int64 v18; // rsi
  int v19; // eax
  unsigned int v20; // eax
  unsigned int v21; // eax
  struct tagWND *v22; // rsi
  struct tagWND *NextComponentWindow; // rax
  __int64 v24; // r8
  struct tagWND *v25; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  unsigned int CloakFlags; // [rsp+30h] [rbp-50h]
  _DWORD v29[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v32; // [rsp+B8h] [rbp+38h]
  __int64 v33; // [rsp+B8h] [rbp+38h]

  v3 = 0;
  v5 = -1073741816;
  if ( a2 )
    LOBYTE(v3) = *a2 != 0;
  else
    LOBYTE(v3) = a3 != 0;
  v32 = v3;
  if ( (unsigned int)GetWindowCompositionInfo(a1, v29) )
  {
    ++gdwDeferWinEvent;
    CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v29);
    if ( !v3 && a2 )
    {
      v7 = a3;
    }
    else
    {
      v7 = a3;
      if ( a3 == CloakFlags )
      {
        v5 = 0;
LABEL_8:
        if ( (unsigned int)CoreWindowProp::IsHost((struct tagWND *)a1) )
        {
          v22 = 0LL;
          while ( 1 )
          {
            NextComponentWindow = CoreWindowProp::GetNextComponentWindow((struct tagWND *)a1, v22);
            v22 = NextComponentWindow;
            if ( !NextComponentWindow )
              break;
            v24 = *((_QWORD *)NextComponentWindow + 13);
            v25 = NextComponentWindow;
            for ( i = 0LL; ; i = v33 )
            {
              OwnedWindow = NextOwnedWindow(i, v25, v24);
              v33 = OwnedWindow;
              if ( !OwnedWindow )
                break;
              v5 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
              if ( v5 < 0 )
                break;
              v24 = *(_QWORD *)(a1 + 104);
              v25 = (struct tagWND *)a1;
            }
          }
        }
        if ( v5 >= 0 )
        {
          for ( j = 0LL; ; j = v10 )
          {
            v9 = NextOwnedWindow(j, a1, *(_QWORD *)(a1 + 104));
            v10 = v9;
            if ( !v9 )
              break;
            v5 = zzzSetWindowCompositionCloak(v9, a2, a3);
            if ( v5 < 0 )
              break;
          }
        }
LABEL_12:
        zzzEndDeferWinEventNotify();
        return (unsigned int)v5;
      }
      if ( !a2 )
      {
        v13 = ((v6 & a3) << 10) | ((a3 & 2) << 10);
        v14 = v29[0] & 0xFFFFF3FF;
        goto LABEL_22;
      }
    }
    v12 = v29[0];
    if ( (v7 & (unsigned __int8)v6) != 0 )
    {
      v12 = (v3 << 10) | v29[0] & 0xFFFFFBFF;
      v29[0] = v12;
    }
    if ( (v7 & 2) == 0 )
    {
LABEL_23:
      if ( !__CFSHR__(v12, 12) )
        *(_BYTE *)(a1 + 306) |= 0x20u;
      if ( (unsigned int)SetWindowCompositionInfo((struct tagWND *)a1, (const struct WINDOWCOMPOSITIONINFO *)v29) )
      {
        v15 = (v12 & 0x400) != 0 || __CFSHR__(v12, 12);
        if ( (CloakFlags == 0) == v15 )
        {
          if ( (unsigned int)IsWindowDesktopComposed(a1) )
          {
            v16 = (void *)ReferenceDwmApiPort();
            v5 = DwmAsyncSetCompositionAttribute(v16);
          }
          else
          {
            v5 = 0;
          }
          if ( (unsigned int)WindowHasShadow(a1) )
            zzzCloakShadow(a1, v3);
          if ( (unsigned int)FVisCountable(a1) && (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
          {
            v18 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 400LL);
            v19 = *(_DWORD *)(v18 + 980);
            if ( v32 )
            {
              v21 = v19 + 1;
              *(_DWORD *)(v18 + 980) = v21;
              if ( *(_DWORD *)(v18 + 976) <= v21 && (*(_DWORD *)(v18 + 776) & 0x4000) != 0 )
              {
                PsUpdateComponentPower(*(_QWORD *)v18, 5LL);
                GreDxgkSetProcessStatus(v18, 2LL);
                *(_DWORD *)(v18 + 776) &= ~0x4000u;
              }
            }
            else
            {
              v20 = v19 - 1;
              *(_DWORD *)(v18 + 980) = v20;
              if ( *(_DWORD *)(v18 + 976) > v20 && (*(_DWORD *)(v18 + 776) & 0x4000) == 0 )
              {
                GreDxgkSetProcessStatus(v18, 2LL);
                PsUpdateComponentPower(*(_QWORD *)v18, 5LL);
                *(_DWORD *)(v18 + 776) |= 0x4000u;
              }
            }
            v3 = v32;
          }
          v17 = 3;
          if ( !gdwDeferWinEvent )
            v17 = 1;
          xxxWindowEvent((v3 ^ 1) + 32791, a1, 0, 0, v17);
        }
        else
        {
          v5 = 0;
        }
      }
      else
      {
        v5 = -1073741801;
      }
      if ( v5 < 0 )
        goto LABEL_12;
      goto LABEL_8;
    }
    v13 = v12 & 0xFFFFF7FF;
    v14 = v3 << 11;
LABEL_22:
    v12 = v14 | v13;
    v29[0] = v12;
    goto LABEL_23;
  }
  return (unsigned int)v5;
}
