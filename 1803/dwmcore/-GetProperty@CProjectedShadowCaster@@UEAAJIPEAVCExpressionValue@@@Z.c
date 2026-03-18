/*
 * XREFs of ?GetProperty@CProjectedShadowCaster@@UEAAJIPEAVCExpressionValue@@@Z @ 0x1801A05D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CProjectedShadowCaster::GetProperty(
        CProjectedShadowCaster *this,
        int a2,
        struct CExpressionValue *a3)
{
  unsigned int v3; // ebx

  v3 = 0;
  if ( !a2 )
  {
    *(_DWORD *)a3 = *((_DWORD *)this + 23);
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    goto LABEL_5;
  }
  if ( a2 == 4 )
  {
LABEL_5:
    *(_DWORD *)a3 = *((_DWORD *)this + 22);
    *((_DWORD *)a3 + 18) = 18;
    *((_BYTE *)a3 + 76) = 1;
    return v3;
  }
  v3 = -2147024809;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024809, 0x47u);
  return v3;
}
