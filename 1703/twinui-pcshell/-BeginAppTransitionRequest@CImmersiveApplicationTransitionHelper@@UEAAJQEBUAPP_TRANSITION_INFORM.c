/*
 * XREFs of ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18003AB50
 * Callers:
 *     <none>
 * Callees:
 *     ?_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18003B0F8 (-_TransitionWithinApp@CImmersiveApplicationTransitionHelper@@AEAAJQEBUAPP_TRANSITION_INFORMATION.c)
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct APP_TRANSITION_INFORMATION *const a2)
{
  unsigned int v3; // r8d
  int v4; // r11d
  int v5; // r9d
  char v6; // cl

  v3 = *((_BYTE *)this + 16) == 0 ? 0x8000000A : 0;
  if ( *((_BYTE *)this + 16) )
  {
    v4 = *((_DWORD *)a2 + 5);
    if ( (v4 == 6 || (unsigned int)(v4 - 1) <= 2 && (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8))
      && !*((_DWORD *)this + 16)
      && *((_DWORD *)a2 + 3) != 6 )
    {
      v5 = *((_DWORD *)a2 + 4);
      if ( v5 != 6 )
      {
        if ( !*((_BYTE *)a2 + 56)
          || v5 != 1 && v5 != 8
          || (v6 = 1, v5 == 1)
          || *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 4) )
        {
          v6 = 0;
        }
        if ( v4 == 6 || v6 )
          return (unsigned int)CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
                                 (CImmersiveApplicationTransitionHelper *)((char *)this - 24),
                                 a2);
      }
    }
  }
  return v3;
}
