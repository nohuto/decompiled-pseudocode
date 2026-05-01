/*
 * XREFs of ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180189A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall XamlLauncherState::IsStartVisible(XamlLauncherState *this)
{
  unsigned int v1; // edx
  unsigned __int8 result; // al
  int v3; // ecx

  v1 = *((_DWORD *)this + 10);
  result = 0;
  if ( v1 <= 0x11 )
  {
    v3 = 227872;
    return _bittest(&v3, v1);
  }
  return result;
}
