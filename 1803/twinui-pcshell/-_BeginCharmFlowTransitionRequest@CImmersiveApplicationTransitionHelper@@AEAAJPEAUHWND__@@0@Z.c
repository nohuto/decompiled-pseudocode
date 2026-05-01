/*
 * XREFs of ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x18011C138
 * Callers:
 *     ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x18011BCE0 (-BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_IN.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?SettingsPaneAnimationDwmTransition@@YAXPEAUHWND__@@_N@Z @ 0x18011BFDC (-SettingsPaneAnimationDwmTransition@@YAXPEAUHWND__@@_N@Z.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        HWND a2,
        HWND a3)
{
  HWND v3; // rsi
  HWND v4; // rbp
  void *v6; // rdi
  HANDLE v7; // rax
  unsigned int v8; // ebx
  int v9; // edi
  HWND v10; // rcx
  char v11; // dl
  HANDLE PropW; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  struct tagRECT Rect; // [rsp+20h] [rbp-58h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-48h] BYREF

  v3 = a3;
  v4 = a2;
  if ( a3 )
  {
    if ( a2 )
    {
      *(_QWORD *)&Rect.left = 0LL;
      *(_QWORD *)&Rect.right = 0LL;
      GetClientRect(a2, &Rect);
      *(_QWORD *)&v17.left = 0LL;
      *(_QWORD *)&v17.right = 0LL;
      GetClientRect(v3, &v17);
      if ( Rect.right <= v17.right )
      {
        v8 = 70;
        if ( Rect.right < v17.right )
          v8 = 72;
      }
      else
      {
        v8 = 71;
      }
      v9 = DwmpBeginTransitionRequest(v8);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v14 = 805306408LL;
      if ( v8 == 71 )
        v14 = 268435496LL;
      DwmpTransitionWindow(v3, v14);
      v13 = 268435497LL;
      v10 = v4;
    }
    else
    {
      PropW = GetPropW(a3, L"Charm_ActionType_Prop");
      if ( PropW && (_DWORD)PropW == 5 )
        LOBYTE(v4) = 1;
      v8 = 83;
      v9 = DwmpBeginTransitionRequestWithGUID(83LL, &unk_180384C18);
      if ( v9 < 0 )
        return (unsigned int)v9;
      v10 = v3;
      if ( (_BYTE)v4 )
      {
        v11 = 0;
        goto LABEL_14;
      }
      v13 = 805306410LL;
    }
    DwmpTransitionWindow(v10, v13);
    DwmFlush();
    goto LABEL_33;
  }
  v6 = &unk_180384C28;
  v7 = GetPropW(a2, L"Charm_ActionType_Prop");
  if ( v7 )
  {
    switch ( (_DWORD)v7 )
    {
      case 1:
        v6 = &unk_180384C38;
        break;
      case 2:
        v6 = &unk_180384BF8;
        break;
      case 4:
        v6 = &unk_180384C08;
        break;
      case 5:
        v6 = &unk_180384BE8;
        LOBYTE(v3) = 1;
        break;
    }
  }
  v8 = 82;
  v9 = DwmpBeginTransitionRequestWithGUID(82LL, v6);
  if ( v9 >= 0 )
  {
    v10 = v4;
    if ( !(_BYTE)v3 )
    {
      DwmpTransitionWindow(v4, 270532650LL);
      goto LABEL_33;
    }
    v11 = 1;
LABEL_14:
    SettingsPaneAnimationDwmTransition(v10, v11);
LABEL_33:
    *((_DWORD *)this + 13) = v8;
  }
  return (unsigned int)v9;
}
