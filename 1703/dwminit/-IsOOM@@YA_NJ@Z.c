/*
 * XREFs of ?IsOOM@@YA_NJ@Z @ 0x180003E08
 * Callers:
 *     ?MilInstrumentationHandleFailure@@YAXIJKI@Z @ 0x180003C78 (-MilInstrumentationHandleFailure@@YAXIJKI@Z.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x180003CDC (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180003D74 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall IsOOM(int a1)
{
  char result; // al
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0;
  v2 = &unk_180008FE0;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 9 )
      return result;
  }
  return 1;
}
