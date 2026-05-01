/*
 * XREFs of ?BeginCharmTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUCHARM_TRANSITION_INFORMATION@@@Z @ 0x18003BEA0
 * Callers:
 *     <none>
 * Callees:
 *     ?_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z @ 0x18003C17C (-_BeginCharmFlowTransitionRequest@CImmersiveApplicationTransitionHelper@@AEAAJPEAUHWND__@@0@Z.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginCharmTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct CHARM_TRANSITION_INFORMATION *const a2)
{
  HWND v3; // rdi
  signed int v4; // ebx
  HWND v5; // rbp
  bool v6; // r15
  CImmersiveApplicationTransitionHelper *v7; // rsi
  bool v8; // r12
  __int64 v9; // r14

  v3 = *(HWND *)a2;
  v4 = *((_BYTE *)this + 16) == 0 ? 0x8000000A : 0;
  if ( !*((_BYTE *)this + 16) )
    return (unsigned int)v4;
  v5 = (HWND)*((_QWORD *)a2 + 1);
  v6 = ((unsigned __int8)GetPropW(v5, L"AppWindowTransitionType") & 4) != 0;
  v7 = (CImmersiveApplicationTransitionHelper *)((char *)this - 40);
  v4 = 0;
  v8 = ((unsigned __int8)GetPropW(v3, L"AppWindowTransitionType") & 4) != 0;
  v9 = (unsigned __int64)v3 & -(__int64)v8;
  if ( ((unsigned __int64)v5 & -(__int64)v6) == 0 )
    goto LABEL_6;
  v4 = DwmpBeginTransitionRequest(18LL);
  if ( v4 >= 0 )
  {
    v4 = DwmpTransitionWindow((unsigned __int64)v5 & -(__int64)v6, 270532622LL);
    if ( v4 >= 0 )
    {
      *((_DWORD *)v7 + 16) = 18;
LABEL_6:
      if ( v9 )
      {
        v4 = DwmpBeginTransitionRequest(19LL);
        if ( v4 >= 0 )
        {
          v4 = DwmpTransitionWindow(v9, 805306384LL);
          if ( v4 >= 0 )
          {
            DwmFlush();
            *((_DWORD *)v7 + 17) = 19;
          }
        }
      }
    }
  }
  if ( v4 >= 0 )
  {
    if ( v8 )
      v3 = 0LL;
    if ( v6 )
      v5 = 0LL;
    return (unsigned int)CImmersiveApplicationTransitionHelper::_BeginCharmFlowTransitionRequest(v7, v5, v3);
  }
  return (unsigned int)v4;
}
