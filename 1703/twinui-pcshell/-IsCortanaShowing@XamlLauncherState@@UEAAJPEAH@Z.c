/*
 * XREFs of ?IsCortanaShowing@XamlLauncherState@@UEAAJPEAH@Z @ 0x180155F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlLauncherState::IsCortanaShowing(XamlLauncherState *this, int *a2)
{
  int v2; // r8d
  int v3; // eax
  int v4; // ecx

  v2 = 0;
  if ( !*((_BYTE *)this + 929) )
  {
    v3 = *((_DWORD *)this + 8);
    v4 = 0;
    if ( v3 >= 4 && (v3 <= 5 || v3 > 6 && (v3 <= 10 || v3 > 11 && (v3 <= 14 || v3 == 21))) )
      v4 = 1;
    v2 = v4;
  }
  *a2 = v2;
  return 0LL;
}
