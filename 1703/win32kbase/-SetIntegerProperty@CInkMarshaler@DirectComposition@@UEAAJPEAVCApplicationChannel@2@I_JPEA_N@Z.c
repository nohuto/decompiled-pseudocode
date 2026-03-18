/*
 * XREFs of ?SetIntegerProperty@CInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0141E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInkMarshaler::SetIntegerProperty(
        DirectComposition::CInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned int a4,
        bool *a5)
{
  *a5 = 0;
  if ( a3 == 4 )
    return DirectComposition::CInkMarshaler::RemoveSegmentsAtEnd(this, a4, a5);
  else
    return 3221225485LL;
}
