/*
 * XREFs of GetDCOrgOnScreen @ 0x1C00809E4
 * Callers:
 *     ?InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z @ 0x1C006B8C8 (-InternalScrollDC@@YAHPEAUtagWND@@PEAUHDC__@@HHPEAUtagRECT@@2PEAUHRGN__@@32H@Z.c)
 *     xxxScrollWindowEx @ 0x1C006C6B0 (xxxScrollWindowEx.c)
 *     _ExcludeUpdateRgn @ 0x1C0080120 (_ExcludeUpdateRgn.c)
 * Callees:
 *     UserGetRedirectedWindowOrigin @ 0x1C0092BA0 (UserGetRedirectedWindowOrigin.c)
 */

__int64 __fastcall GetDCOrgOnScreen(__int64 a1, _DWORD *a2)
{
  int v5; // [rsp+40h] [rbp+18h] BYREF
  int v6; // [rsp+44h] [rbp+1Ch]

  if ( !(unsigned int)GreGetDCOrg(a1, a2) || !(unsigned int)UserGetRedirectedWindowOrigin(a1, &v5) )
    return 0LL;
  *a2 += v5;
  a2[1] += v6;
  return 1LL;
}
