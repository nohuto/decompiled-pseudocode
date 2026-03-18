/*
 * XREFs of ?CitpInputTimesAddTo@@YAXPEAU_CIT_INPUT_TIMES@@PEBU1@@Z @ 0x1C00234AC
 * Callers:
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagMONITOR@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C001BC74 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagM.c)
 * Callees:
 *     ?CitpStatIncrement@@YAXPEAGG@Z @ 0x1C00246DC (-CitpStatIncrement@@YAXPEAGG@Z.c)
 */

void __fastcall CitpInputTimesAddTo(struct _CIT_INPUT_TIMES *a1, const struct _CIT_INPUT_TIMES *a2)
{
  unsigned __int16 v2; // dx
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // r9
  __int64 v12; // r10
  __int64 v13; // r9
  __int64 v14; // r10

  v2 = *(_WORD *)a2;
  if ( v2 )
  {
    CitpStatIncrement((unsigned __int16 *)a1, v2);
    CitpStatIncrement((unsigned __int16 *)(v4 + 2), *(_WORD *)(v3 + 2));
    CitpStatIncrement((unsigned __int16 *)(v6 + 4), *(_WORD *)(v5 + 4));
    CitpStatIncrement((unsigned __int16 *)(v8 + 6), *(_WORD *)(v7 + 6));
    CitpStatIncrement((unsigned __int16 *)(v10 + 8), *(_WORD *)(v9 + 8));
    CitpStatIncrement((unsigned __int16 *)(v12 + 10), *(_WORD *)(v11 + 10));
    CitpStatIncrement((unsigned __int16 *)(v14 + 12), *(_WORD *)(v13 + 12));
  }
}
