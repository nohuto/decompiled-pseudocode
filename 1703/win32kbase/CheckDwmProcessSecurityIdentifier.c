/*
 * XREFs of CheckDwmProcessSecurityIdentifier @ 0x1C0066270
 * Callers:
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x1C00663B4 (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     AllocateWindowManagerSid @ 0x1C00662E0 (AllocateWindowManagerSid.c)
 *     ?IsMobileCore@@YAEXZ @ 0x1C00666D8 (-IsMobileCore@@YAEXZ.c)
 */

__int64 CheckDwmProcessSecurityIdentifier()
{
  int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v0 = -1073741823;
  v2 = 0;
  if ( IsMobileCore() )
  {
    if ( UserIsCurrentProcessDwm() )
      return 0;
  }
  else
  {
    v0 = AllocateWindowManagerSid(&v3);
    if ( v0 >= 0 )
    {
      v0 = RtlCheckTokenMembership(0LL, v3, &v2);
      if ( v0 >= 0 && !v2 )
        v0 = -1073741720;
      Win32FreePool(v3);
    }
  }
  return (unsigned int)v0;
}
