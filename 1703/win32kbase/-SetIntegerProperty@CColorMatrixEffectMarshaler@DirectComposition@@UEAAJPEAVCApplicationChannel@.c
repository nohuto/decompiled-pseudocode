/*
 * XREFs of ?SetIntegerProperty@CColorMatrixEffectMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C014D0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CColorMatrixEffectMarshaler::SetIntegerProperty(
        DirectComposition::CFilterEffectMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        int a4,
        bool *a5)
{
  bool *v5; // rax

  if ( a3 == 1 )
  {
    v5 = a5;
    *((_DWORD *)this + 42) = a4;
    goto LABEL_5;
  }
  v5 = a5;
  if ( a3 == 2 )
  {
    *((_DWORD *)this + 43) = a4;
LABEL_5:
    *v5 = 1;
    return 0LL;
  }
  return DirectComposition::CFilterEffectMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
