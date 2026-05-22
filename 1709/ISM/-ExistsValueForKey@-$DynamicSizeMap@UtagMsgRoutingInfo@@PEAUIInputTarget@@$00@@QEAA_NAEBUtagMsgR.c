/*
 * XREFs of ?ExistsValueForKey@?$DynamicSizeMap@UtagMsgRoutingInfo@@PEAUIInputTarget@@$00@@QEAA_NAEBUtagMsgRoutingInfo@@@Z @ 0x18001EAE0
 * Callers:
 *     ?RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x1800191F0 (-RegisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z @ 0x180019600 (-UnregisterInputHost@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@@Z.c)
 *     ?InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z @ 0x180019780 (-InputHostSupportedInputUpdate@DWMInputRouter@@UEAAJUtagMsgRoutingInfo@@KK@Z.c)
 *     ?CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z @ 0x180019CA4 (-CreateAndRegisterTarget@DWMInputRouter@@IEAAJ_KPEAXPEAPEAUIInputTarget@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x180024078 (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 */

char __fastcall DynamicSizeMap<tagMsgRoutingInfo,IInputTarget *,1>::ExistsValueForKey(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  __int64 v3; // r11
  __int64 v4; // r8
  __int64 v5; // r9
  int v6; // r8d
  unsigned int v7; // r10d

  if ( (unsigned __int8)operator==(a2, a1 + 16) )
    return 0;
  v4 = 0LL;
  if ( !*((_DWORD *)v2 + 2) )
    return 0;
  v5 = *v2;
  while ( !(unsigned __int8)operator==(v5 + 48 * v4, v3) )
  {
    v4 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v4 >= v7 )
      return 0;
  }
  return 1;
}
