/*
 * XREFs of ?AllowSnapshotForSWR@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x18008DF08
 * Callers:
 *     ?_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222PEA_N@Z @ 0x1800071EC (-_StageCloneRelative@CTransitionVisualController@@IEAAJPEAVCTopLevelWindow@@PEAVCVisual@@_N1222P.c)
 * Callees:
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     memset_0 @ 0x180045938 (memset_0.c)
 */

char __fastcall CTransitionVisualController::AllowSnapshotForSWR(HWND hWnd)
{
  char v2; // di
  int v3; // ecx
  wchar_t **i; // rdx
  WCHAR *v5; // rax
  int v6; // r10d
  int v7; // r8d
  WCHAR ClassName[264]; // [rsp+20h] [rbp-228h] BYREF

  v2 = 1;
  memset_0(ClassName, 0, 0x208uLL);
  if ( GetClassNameW(hWnd, ClassName, 260) )
  {
    v3 = 0;
    for ( i = &off_1800A7740; ; ++i )
    {
      v5 = ClassName;
      do
      {
        v6 = *(WCHAR *)((char *)v5 + (char *)*i - (char *)ClassName);
        v7 = *v5 - v6;
        if ( v7 )
          break;
        ++v5;
      }
      while ( v6 );
      if ( !v7 )
        break;
      if ( ++v3 )
        return v2;
    }
    return 0;
  }
  return v2;
}
