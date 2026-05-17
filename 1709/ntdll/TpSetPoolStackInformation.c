/*
 * XREFs of TpSetPoolStackInformation @ 0x180014490
 * Callers:
 *     TpSetDefaultPoolStackInformation @ 0x180014360 (TpSetDefaultPoolStackInformation.c)
 *     TppPoolpReferenceGlobalPool @ 0x180035C94 (TppPoolpReferenceGlobalPool.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TpSetPoolStackInformation(__int64 a1, __int64 a2)
{
  if ( a1 && a2 )
    return NtSetInformationWorkerFactory(*(_QWORD *)(a1 + 56), 10LL, a2);
  else
    return 3221225485LL;
}
