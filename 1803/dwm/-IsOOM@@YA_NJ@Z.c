/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x1400019F0
 * Callers:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ModuleFailFastForHRESULT @ 0x140007394 (ModuleFailFastForHRESULT.c)
 *     ?MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z @ 0x14000820C (-MilInstrumentationHandleFailure_MaybeFailFast@@YAXIJKI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  int v1; // r8d
  _DWORD *i; // rdx

  v1 = 0;
  for ( i = &unk_14000A400; *i != a1; ++i )
  {
    if ( (unsigned int)++v1 >= 9 )
      return 0;
  }
  return 1;
}
