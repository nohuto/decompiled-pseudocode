/*
 * XREFs of ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x18003AC30
 * Callers:
 *     <none>
 * Callees:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x18003AF14 (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct CHARM_TRANSITION_INFORMATION *const a2)
{
  HWND v3; // rdi
  HWND v4; // rsi
  signed int v5; // ebx
  bool v6; // r15
  CImmersiveApplicationTransitionHelper *v7; // rbp
  bool v8; // r12
  __int64 v9; // r14

  v3 = (HWND)*((_QWORD *)a2 + 1);
  v4 = *(HWND *)a2;
  v5 = *((_BYTE *)this + 16) == 0 ? 0x8000000A : 0;
  if ( !*((_BYTE *)this + 16) )
    return (unsigned int)v5;
  v6 = ((unsigned __int8)GetPropW(v3, L"AppWindowTransitionType") & 4) != 0;
  v7 = (CImmersiveApplicationTransitionHelper *)((char *)this - 24);
  v5 = 0;
  v8 = ((unsigned __int8)GetPropW(v4, L"AppWindowTransitionType") & 4) != 0;
  v9 = (unsigned __int64)v4 & -(__int64)v8;
  if ( ((unsigned __int64)v3 & -(__int64)v6) == 0 )
    goto LABEL_6;
  v5 = DwmpBeginTransitionRequest(18LL);
  if ( v5 >= 0 )
  {
    v5 = DwmpTransitionWindow((unsigned __int64)v3 & -(__int64)v6, 270532622LL);
    if ( v5 >= 0 )
    {
      *((_DWORD *)v7 + 12) = 18;
LABEL_6:
      if ( v9 )
      {
        v5 = DwmpBeginTransitionRequest(19LL);
        if ( v5 >= 0 )
        {
          v5 = DwmpTransitionWindow(v9, 805306384LL);
          if ( v5 >= 0 )
          {
            DwmFlush();
            *((_DWORD *)v7 + 13) = 19;
          }
        }
      }
    }
  }
  if ( v5 >= 0 )
  {
    if ( v8 )
      v4 = 0LL;
    if ( v6 )
      v3 = 0LL;
    return (unsigned int)CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(v7, v3, v4);
  }
  return (unsigned int)v5;
}
