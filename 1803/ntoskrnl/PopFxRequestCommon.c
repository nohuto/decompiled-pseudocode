/*
 * XREFs of PopFxRequestCommon @ 0x140276350
 * Callers:
 *     <none>
 * Callees:
 *     PopFxAcpiForwardRequestCommon @ 0x140282EE8 (PopFxAcpiForwardRequestCommon.c)
 */

__int64 __fastcall PopFxRequestCommon(int a1)
{
  if ( a1 == 1 )
    return PopFxAcpiForwardRequestCommon(1LL);
  else
    return 3221225659LL;
}
