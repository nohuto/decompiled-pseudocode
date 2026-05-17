/*
 * XREFs of sub_1800FC374 @ 0x1800FC374
 * Callers:
 *     sub_1800EB1A0 @ 0x1800EB1A0 (sub_1800EB1A0.c)
 *     sub_1800FF090 @ 0x1800FF090 (sub_1800FF090.c)
 * Callees:
 *     ZwQueryInformationProcess @ 0x18009ADE0 (ZwQueryInformationProcess.c)
 */

__int64 sub_1800FC374()
{
  if ( (int)ZwQueryInformationProcess() < 0 )
    return 0LL;
  else
    return 2147483587LL;
}
