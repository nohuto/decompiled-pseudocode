/*
 * XREFs of zzzSetWindowCompositionCloak @ 0x1C001FA00
 * Callers:
 *     xxxSetParentWorker @ 0x1C0018034 (xxxSetParentWorker.c)
 *     zzzImeSetFutureOwner @ 0x1C001C368 (zzzImeSetFutureOwner.c)
 *     zzzImeSetOwnerWindow @ 0x1C001EA68 (zzzImeSetOwnerWindow.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     NtUserSetWindowCompositionAttribute @ 0x1C0038710 (NtUserSetWindowCompositionAttribute.c)
 *     xxxSetWindowData @ 0x1C004EA08 (xxxSetWindowData.c)
 *     xxxCreateWindowEx @ 0x1C006A17C (xxxCreateWindowEx.c)
 *     xxxAddShadow @ 0x1C011EA6C (xxxAddShadow.c)
 *     zzzCloakShadow @ 0x1C020B868 (zzzCloakShadow.c)
 *     xxxTrackPopupMenuEx @ 0x1C0213DB0 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     DwmAsyncSetCompositionAttribute @ 0x1C001EC48 (DwmAsyncSetCompositionAttribute.c)
 *     zzzSetWindowCompositionCloak @ 0x1C001FA00 (zzzSetWindowCompositionCloak.c)
 *     NextOwnedWindow @ 0x1C001FD34 (NextOwnedWindow.c)
 *     ?IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z @ 0x1C001FD84 (-IsHost@CoreWindowProp@@SAHPEAUtagWND@@@Z.c)
 *     ?GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FDB4 (-GetCloakFlags@@YAKPEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     ?SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z @ 0x1C001FF9C (-SetWindowCompositionInfo@@YAHPEAUtagWND@@PEBUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     WindowHasShadow @ 0x1C00213F8 (WindowHasShadow.c)
 *     FVisCountable @ 0x1C0022140 (FVisCountable.c)
 *     xxxWindowEvent @ 0x1C005A820 (xxxWindowEvent.c)
 *     _GetWindowCompositionInfo @ 0x1C0061E00 (_GetWindowCompositionInfo.c)
 *     ??$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z @ 0x1C006288C (--$GetProp@VCoreWindowProp@@@CWindowProp@@SAHQEAUtagWND@@PEAPEAVCoreWindowProp@@@Z.c)
 *     xxxFlushDeferredWindowEvents @ 0x1C00631F4 (xxxFlushDeferredWindowEvents.c)
 *     zzzCloakShadow @ 0x1C020B868 (zzzCloakShadow.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall zzzSetWindowCompositionCloak(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  _DWORD *v5; // rbx
  unsigned int CloakFlags; // r8d
  unsigned __int8 v7; // r9
  unsigned int v8; // eax
  unsigned __int8 v9; // dl
  __int64 v10; // rax
  bool v11; // zf
  __int64 v13; // xmm1_8
  unsigned int v14; // ebx
  unsigned int v15; // eax
  unsigned int v16; // ebx
  BOOL v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  void *v22; // rax
  int v23; // eax
  __int64 v24; // rbx
  int v25; // eax
  unsigned int v26; // eax
  unsigned int v27; // eax
  __int64 v28; // rbx
  _QWORD *v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 i; // rcx
  __int64 OwnedWindow; // rax
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  __int128 v35; // [rsp+38h] [rbp-48h] BYREF
  __int64 v36; // [rsp+48h] [rbp-38h]
  _DWORD v37[12]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v40; // [rsp+B8h] [rbp+38h]
  __int64 v41; // [rsp+B8h] [rbp+38h]
  __int64 v42; // [rsp+B8h] [rbp+38h]

  v4 = -1073741816;
  if ( a2 )
  {
    v13 = *(_QWORD *)(a2 + 16);
    v11 = *(_DWORD *)a2 == 0;
    v35 = *(_OWORD *)a2;
    v36 = v13;
    v40 = !v11;
  }
  else
  {
    v40 = a3 != 0;
    LODWORD(v35) = v40;
  }
  if ( !(unsigned int)GetWindowCompositionInfo(a1, v37) )
    return (unsigned int)v4;
  v5 = (_DWORD *)gdwDeferWinEvent;
  ++gdwDeferWinEvent;
  CloakFlags = GetCloakFlags((const struct WINDOWCOMPOSITIONINFO *)v37);
  LODWORD(v34) = CloakFlags;
  v8 = v40;
  if ( !v40 && a2 )
  {
    v9 = a3;
  }
  else
  {
    v9 = a3;
    if ( a3 == CloakFlags )
    {
      v4 = 0;
      goto LABEL_8;
    }
    if ( !a2 )
    {
      v14 = (a3 & 3) << 10;
      v15 = v37[0] & 0xFFFFF3FF;
      goto LABEL_26;
    }
  }
  v16 = v37[0];
  if ( (v9 & v7) != 0 )
  {
    v16 = (v40 << 10) | v37[0] & 0xFFFFFBFF;
    v8 = v40;
    v37[0] = v16;
  }
  if ( (v9 & 2) == 0 )
    goto LABEL_27;
  v14 = v16 & 0xFFFFF7FF;
  v15 = v8 << 11;
LABEL_26:
  v16 = v15 | v14;
  v37[0] = v16;
LABEL_27:
  if ( !__CFSHR__(v16, 12) )
    *(_BYTE *)(a1 + 306) |= 0x20u;
  if ( (unsigned int)SetWindowCompositionInfo((struct tagWND *)a1, (const struct WINDOWCOMPOSITIONINFO *)v37) )
  {
    v17 = (v16 & 0x400) != 0 || __CFSHR__(v16, 12);
    if ( ((_DWORD)v34 == 0) == v17 )
    {
      if ( (unsigned int)IsWindowDesktopComposed(a1) )
      {
        v22 = (void *)ReferenceDwmApiPort(v19, v18, v20, v21);
        v4 = DwmAsyncSetCompositionAttribute(v22, *(_QWORD *)a1, 17, &v35);
      }
      else
      {
        v4 = 0;
      }
      if ( (unsigned int)WindowHasShadow(a1) )
        zzzCloakShadow(a1, v40);
      if ( (unsigned int)FVisCountable(a1) && (*(_BYTE *)(a1 + 71) & 0x10) != 0 )
      {
        v24 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 376LL);
        v25 = *(_DWORD *)(v24 + 972);
        if ( v40 )
        {
          v27 = v25 + 1;
          *(_DWORD *)(v24 + 972) = v27;
          if ( *(_DWORD *)(v24 + 968) <= v27 && (*(_DWORD *)(v24 + 768) & 0x4000) != 0 )
          {
            PsUpdateComponentPower(*(_QWORD *)v24, 5LL);
            GreDxgkSetProcessStatus(v24, 2LL);
            *(_DWORD *)(v24 + 768) &= ~0x4000u;
          }
        }
        else
        {
          v26 = v25 - 1;
          *(_DWORD *)(v24 + 972) = v26;
          if ( *(_DWORD *)(v24 + 968) > v26 && (*(_DWORD *)(v24 + 768) & 0x4000) == 0 )
          {
            GreDxgkSetProcessStatus(v24, 2LL);
            PsUpdateComponentPower(*(_QWORD *)v24, 5LL);
            *(_DWORD *)(v24 + 768) |= 0x4000u;
          }
        }
      }
      v23 = 3;
      if ( !gdwDeferWinEvent )
        v23 = 1;
      xxxWindowEvent(32792 - (v40 != 0), a1, 0, 0, v23);
    }
    else
    {
      v4 = 0;
    }
  }
  else
  {
    v4 = -1073741801;
  }
  if ( v4 < 0 )
    goto LABEL_15;
  v5 = (_DWORD *)gdwDeferWinEvent;
LABEL_8:
  if ( (unsigned int)CoreWindowProp::IsHost((struct tagWND *)a1) )
  {
    v28 = 0LL;
    while ( 1 )
    {
      if ( (unsigned int)CWindowProp::GetProp<CoreWindowProp>(a1, &v34) )
      {
        v29 = *(_QWORD **)(v34 + 32);
        if ( v28 )
        {
          while ( v29 )
          {
            if ( v28 == v29[1] )
            {
              if ( !*v29 )
                break;
              v28 = *(_QWORD *)(*v29 + 8LL);
              goto LABEL_65;
            }
            v29 = (_QWORD *)*v29;
          }
        }
        else if ( v29 )
        {
          v28 = v29[1];
          goto LABEL_65;
        }
      }
      v28 = 0LL;
LABEL_65:
      if ( !v28 )
      {
        v5 = (_DWORD *)gdwDeferWinEvent;
        break;
      }
      v30 = *(_QWORD *)(v28 + 104);
      v31 = v28;
      for ( i = 0LL; ; i = v42 )
      {
        OwnedWindow = NextOwnedWindow(i, v31, v30);
        v42 = OwnedWindow;
        if ( !OwnedWindow )
          break;
        v4 = zzzSetWindowCompositionCloak(OwnedWindow, a2, a3);
        if ( v4 < 0 )
          break;
        v30 = *(_QWORD *)(a1 + 104);
        v31 = a1;
      }
    }
  }
  if ( v4 >= 0 )
  {
    v10 = NextOwnedWindow(0LL, a1, *(_QWORD *)(a1 + 104));
    v41 = v10;
    if ( v10 )
    {
      do
      {
        v4 = zzzSetWindowCompositionCloak(v10, a2, a3);
        if ( v4 < 0 )
          break;
        v10 = NextOwnedWindow(v41, a1, *(_QWORD *)(a1 + 104));
        v41 = v10;
      }
      while ( v10 );
LABEL_15:
      v5 = (_DWORD *)gdwDeferWinEvent;
    }
  }
  v11 = (*v5)-- == 1;
  if ( v11 && gpPendingNotifies )
    xxxFlushDeferredWindowEvents();
  return (unsigned int)v4;
}
