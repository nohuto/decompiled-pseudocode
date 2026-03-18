/*
 * XREFs of UIPISQMStatus @ 0x1C0124AF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 UIPISQMStatus()
{
  if ( !(unsigned int)FastGetProfileDwordW(0LL, 50LL, L"EnableMessageSQM", 0LL, &gfWinMsgSQMIsOptedIn, 0) )
    gfWinMsgSQMIsOptedIn = 0;
  if ( gfWinMsgSQMIsOptedIn )
    gfWinMsgSQMIsOptedIn = WinSqmIsOptedIn();
  return WinSqmSetDWORD(gSqmSession, 5715LL);
}
