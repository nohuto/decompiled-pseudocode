/*
 * XREFs of ?_ShouldMoveOriginalWindowOffscreenForClone@CTransitionVisualController@@IEAA_NPEAVCWindowData@@@Z @ 0x1800083F0
 * Callers:
 *     ?_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ @ 0x1800084E8 (-_SetupHighZOrderStaticWindows@CTransitionVisualController@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     memset_0 @ 0x18004DE90 (memset_0.c)
 */

bool __fastcall CTransitionVisualController::_ShouldMoveOriginalWindowOffscreenForClone(
        CTransitionVisualController *this,
        struct CWindowData *a2)
{
  bool v3; // di
  int v4; // ecx
  wchar_t **i; // rdx
  WCHAR *v6; // rax
  int v7; // r10d
  int v8; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v3 = (unsigned int)(*((_DWORD *)a2 + 28) - 2) > 1
    && (unsigned int)GetPropW(*((HWND *)a2 + 5), L"NoAnimationOffscreenMovement") != 1;
  memset_0(ClassName, 0, 0x208uLL);
  if ( v3 && GetClassNameW(*((HWND *)a2 + 5), ClassName, 260) )
  {
    v4 = 0;
    for ( i = off_1800A68D0; ; ++i )
    {
      v6 = ClassName;
      do
      {
        v7 = *(WCHAR *)((char *)v6 + (char *)*i - (char *)ClassName);
        v8 = *v6 - v7;
        if ( v8 )
          break;
        ++v6;
      }
      while ( v7 );
      if ( !v8 )
        break;
      if ( (unsigned int)++v4 >= 2 )
        return v3;
    }
    return 0;
  }
  return v3;
}
