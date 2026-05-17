/*
 * XREFs of TpSetPoolStackInformation @ 0x1800857C0
 * Callers:
 *     sub_180018508 @ 0x180018508 (sub_180018508.c)
 *     TpSetDefaultPoolStackInformation @ 0x1800856A0 (TpSetDefaultPoolStackInformation.c)
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
