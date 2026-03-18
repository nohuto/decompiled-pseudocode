/*
 * XREFs of ?GetTextureNoRef@CHwLinearGradientColorSource@@UEAAPEAVCD3DTexture@@XZ @ 0x1801A3010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DTexture *__fastcall CHwLinearGradientColorSource::GetTextureNoRef(CHwLinearGradientColorSource *this)
{
  struct CD3DTexture *result; // rax

  result = (struct CD3DTexture *)*((_QWORD *)this + 18);
  if ( !result || !*((_BYTE *)result + 77) )
    return 0LL;
  return result;
}
