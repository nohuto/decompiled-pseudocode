/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C011DE30
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C004D930 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C03217CC & 1) || (dword_1C03217CC & 1) != 0 && ((a1 ^ dword_1C03217CC) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
