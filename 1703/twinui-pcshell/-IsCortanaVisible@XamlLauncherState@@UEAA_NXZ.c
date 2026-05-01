/*
 * XREFs of ?IsCortanaVisible@XamlLauncherState@@UEAA_NXZ @ 0x180155750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XamlLauncherState::IsCortanaVisible(XamlLauncherState *this)
{
  unsigned __int8 result; // al
  unsigned int v2; // edx
  int v3; // ecx

  result = 0;
  if ( !*((_BYTE *)this + 937) )
  {
    v2 = *((_DWORD *)this + 10);
    if ( v2 <= 0x15 )
    {
      v3 = 2127792;
      return _bittest(&v3, v2);
    }
  }
  return result;
}
