/*
 * XREFs of ?IsVisible@XamlLauncher@@UEAAJPEAH@Z @ 0x180077960
 * Callers:
 *     <none>
 * Callees:
 *     ?IsStartVisible@XamlLauncherState@@UEAA_NXZ @ 0x180078930 (-IsStartVisible@XamlLauncherState@@UEAA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncher::IsVisible(XamlLauncher *this, int *a2)
{
  XamlLauncherState *v2; // rcx
  int v3; // ebx
  __int64 (*v5)(void); // rax
  char IsStartVisible; // al
  __int64 result; // rax

  v2 = (XamlLauncherState *)*((_QWORD *)this + 28);
  v3 = 0;
  if ( !v2 )
    return 2147943568LL;
  v5 = *(__int64 (**)(void))(*(_QWORD *)v2 + 96LL);
  if ( (char *)v5 == (char *)XamlLauncherState::IsStartVisible )
    IsStartVisible = XamlLauncherState::IsStartVisible(v2);
  else
    IsStartVisible = v5();
  LOBYTE(v3) = IsStartVisible != 0;
  result = 0LL;
  *a2 = v3;
  return result;
}
