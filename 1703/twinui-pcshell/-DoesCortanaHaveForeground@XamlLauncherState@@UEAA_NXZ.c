/*
 * XREFs of ?DoesCortanaHaveForeground@XamlLauncherState@@UEAA_NXZ @ 0x180155770
 * Callers:
 *     ?OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ @ 0x180158304 (-OnCortanaCutoffTimerFired@XamlLauncherState@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XamlLauncherState::DoesCortanaHaveForeground(XamlLauncherState *this)
{
  __int64 result; // rax
  unsigned int v2; // edx
  int v3; // r8d

  result = 0LL;
  if ( !*((_BYTE *)this + 937) )
  {
    v2 = *((_DWORD *)this + 10);
    if ( v2 <= 0x15 )
    {
      v3 = 2127792;
      if ( _bittest(&v3, v2) )
        return 1LL;
    }
  }
  if ( *((_DWORD *)this + 10) == 3 || *((_DWORD *)this + 10) == 20 )
    return 1LL;
  return result;
}
