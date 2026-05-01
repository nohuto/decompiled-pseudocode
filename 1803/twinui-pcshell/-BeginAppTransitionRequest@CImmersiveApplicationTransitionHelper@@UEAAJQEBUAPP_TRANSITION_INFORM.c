/*
 * XREFs of ?BeginAppTransitionRequest@CImmersiveApplicationTransitionHelper@@UEAAJQEBUAPP_TRANSITION_INFORMATION@@@Z @ 0x18008B7A0
 * Callers:
 *     ?PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z @ 0x180043F90 (-PerformModeBasedCallouts@CApplicationManager@@UEAAXQEBUMODE_TRANSITION_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveApplicationTransitionHelper::BeginAppTransitionRequest(
        CImmersiveApplicationTransitionHelper *this,
        const struct APP_TRANSITION_INFORMATION *const a2)
{
  unsigned int v3; // r8d
  __int64 result; // rax
  int v5; // r11d
  int v6; // r9d
  char v7; // cl

  v3 = *((_BYTE *)this + 16) == 0 ? 0x8000000A : 0;
  result = v3;
  if ( *((_BYTE *)this + 16) )
  {
    v5 = *((_DWORD *)a2 + 5);
    if ( v5 == 6 || (unsigned int)(v5 - 1) <= 2 && (*((_DWORD *)a2 + 4) == 1 || *((_DWORD *)a2 + 4) == 8) )
    {
      result = v3;
      if ( !*((_DWORD *)this + 16) && *((_DWORD *)a2 + 3) != 6 )
      {
        v6 = *((_DWORD *)a2 + 4);
        if ( v6 != 6 )
        {
          if ( !*((_BYTE *)a2 + 56)
            || v6 != 1 && v6 != 8
            || (v7 = 1, v6 == 1)
            || *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 4) )
          {
            v7 = 0;
          }
          if ( v5 == 6 )
            return CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
                     (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
                     a2);
          result = v3;
          if ( v7 )
            return CImmersiveApplicationTransitionHelper::_TransitionWithinApp(
                     (CImmersiveApplicationTransitionHelper *)((char *)this - 32),
                     a2);
        }
      }
    }
    else
    {
      return v3;
    }
  }
  return result;
}
