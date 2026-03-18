/*
 * XREFs of ?SetBufferProperty@CGenericInkMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@IPEBX_KPEA_N@Z @ 0x1C0148A90
 * Callers:
 *     <none>
 * Callees:
 *     ?AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0148670 (-AddSegments@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 *     ?SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z @ 0x1C0148BAC (-SetProperties@CGenericInkMarshaler@DirectComposition@@AEAAJPEBE_KPEA_N@Z.c)
 */

int __fastcall DirectComposition::CGenericInkMarshaler::SetBufferProperty(
        DirectComposition::CGenericInkMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        const unsigned __int8 *a4,
        unsigned __int64 a5,
        bool *a6)
{
  *a6 = 0;
  if ( !a3 )
    return DirectComposition::CGenericInkMarshaler::SetProperties(this, a4, a5, a6);
  if ( a3 == 3 )
    return DirectComposition::CGenericInkMarshaler::AddSegments(this, a4, a5, a6);
  return -1073741811;
}
