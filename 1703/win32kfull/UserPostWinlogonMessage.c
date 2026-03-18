/*
 * XREFs of UserPostWinlogonMessage @ 0x1C01A1298
 * Callers:
 *     ?InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z @ 0x1C013FD18 (-InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager@@SAHPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UserPostWinlogonMessage(__int64 a1, __int64 a2)
{
  if ( gpidLogon )
    return PostWinlogonMessage(a1, a2);
  else
    return 3221226025LL;
}
