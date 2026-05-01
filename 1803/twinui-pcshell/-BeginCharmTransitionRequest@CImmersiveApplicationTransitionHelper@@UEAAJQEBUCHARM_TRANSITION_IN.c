/*
 * XREFs of ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x18011BCE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x18011C138 (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 *     ?_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x18011C31C (-_BeginCharmPopupTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 */

signed int __fastcall CImmersiveApplicationTransitionHelper::BeginCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct CHARM_TRANSITION_INFORMATION *const a2)
{
  HWND v3; // rsi
  HWND v4; // rdi
  HWND v5; // rbx
  signed int result; // eax
  int v7; // r14d
  int v8; // r15d
  HWND v9; // r8

  v3 = (HWND)*((_QWORD *)a2 + 1);
  v4 = *(HWND *)a2;
  v5 = 0LL;
  result = *((_BYTE *)this + 16) == 0 ? 0x8000000A : 0;
  if ( *((_BYTE *)this + 16) )
  {
    v7 = (unsigned __int8)GetPropW(v3, L"AppWindowTransitionType") & 4;
    v8 = (unsigned __int8)GetPropW(v4, L"AppWindowTransitionType") & 4;
    result = CImmersiveApplicationTransitionHelper::_BeginCharmPopupTransitionRequest(
               (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
               (HWND)((unsigned __int64)v3 & -(__int64)(v7 != 0)),
               (HWND)((unsigned __int64)v4 & -(__int64)(v8 != 0)));
    if ( result >= 0 )
    {
      v9 = 0LL;
      if ( !v8 )
        v9 = v4;
      if ( !v7 )
        v5 = v3;
      return CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(
               (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
               v5,
               v9);
    }
  }
  return result;
}
