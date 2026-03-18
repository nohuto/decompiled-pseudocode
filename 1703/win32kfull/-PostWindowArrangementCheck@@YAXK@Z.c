/*
 * XREFs of ?PostWindowArrangementCheck@@YAXK@Z @ 0x1C00BB144
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C00BEA10 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

void __fastcall PostWindowArrangementCheck(int a1)
{
  if ( gSqmIsOptedIn
    && ((a1 & 1) != (dword_1C03257DC & 1) || (dword_1C03257DC & 1) != 0 && ((a1 ^ dword_1C03257DC) & 0xFFFFFFFE) != 0) )
  {
    WinSqmSetDWORD(&SqmGlobalSessionGuid, 3527LL);
  }
}
