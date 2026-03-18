/*
 * XREFs of ?SetOutputType@CNaturalAnimation@@MEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18019D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CNaturalAnimation::SetOutputType(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned int v3; // ebx

  if ( (unsigned int)a2 <= 0x34 && (v2 = 0x10000800040000LL, _bittest64(&v2, a2)) )
  {
    *(_DWORD *)(a1 + 144) = a2;
    return 0;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0x10u);
  }
  return v3;
}
