/*
 * XREFs of ?SetIntegerProperty@CSpatialVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C015B3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C0018AD0 (-SetIntegerProperty@CVisualMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@.c)
 */

__int64 __fastcall DirectComposition::CSpatialVisualMarshaler::SetIntegerProperty(
        DirectComposition::CSpatialVisualMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  __int64 result; // rax

  result = 0LL;
  *a5 = 0;
  if ( a3 )
    return DirectComposition::CVisualMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
  *((_DWORD *)this + 4) |= 0x20000000u;
  *((_DWORD *)this + 70) = a4;
  *a5 = 1;
  return result;
}
