/*
 * XREFs of TpSetPoolStackInformation @ 0x180048A20
 * Callers:
 *     TpSetDefaultPoolStackInformation @ 0x180048900 (TpSetDefaultPoolStackInformation.c)
 *     sub_180059230 @ 0x180059230 (sub_180059230.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetPoolStackInformation(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return ZwSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 10LL, a2);
  else
    return 3221225485LL;
}
