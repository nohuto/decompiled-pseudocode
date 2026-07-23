/*
 * XREFs of ResCRuntimeViewLoadCultureMap @ 0x18010C144
 * Callers:
 *     ResCRuntimeGetCultureID @ 0x18010C014 (ResCRuntimeGetCultureID.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     ResCGetName @ 0x180110DA8 (ResCGetName.c)
 *     ResCCreateCultureMap @ 0x1801112C4 (ResCCreateCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801116E4 (ResCLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x180111780 (ResCReloadCultureMap.c)
 */

_BOOL8 __fastcall ResCRuntimeViewLoadCultureMap(__int64 a1)
{
  LONG LastErrorValue; // ecx
  void *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _BYTE Src[528]; // [rsp+20h] [rbp-228h] BYREF

  if ( !a1 )
  {
    if ( NtCurrentTeb()->LastErrorValue )
      return 0LL;
    LastErrorValue = 87;
LABEL_4:
    RtlSetLastWin32Error(LastErrorValue);
    return 0LL;
  }
  v4 = *(void **)(a1 + 8);
  if ( v4 )
  {
    v5 = ResCReloadCultureMap(v4);
LABEL_15:
    *(_QWORD *)(a1 + 8) = v5;
    return v5 != 0;
  }
  if ( !(unsigned int)ResCGetName(*(_QWORD *)(a1 + 32), 258LL, Src) )
    return 0LL;
  v6 = ResCLoadCultureMap(Src);
  *(_QWORD *)(a1 + 8) = v6;
  if ( !v6 )
  {
    LastErrorValue = NtCurrentTeb()->LastErrorValue;
    if ( LastErrorValue != 2 )
    {
      if ( !LastErrorValue || NtCurrentTeb()->LastErrorValue )
        return 0LL;
      goto LABEL_4;
    }
    v5 = ResCCreateCultureMap(Src);
    goto LABEL_15;
  }
  return 1LL;
}
