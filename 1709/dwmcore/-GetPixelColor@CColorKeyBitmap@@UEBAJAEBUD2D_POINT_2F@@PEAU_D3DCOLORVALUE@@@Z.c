/*
 * XREFs of ?GetPixelColor@CColorKeyBitmap@@UEBAJAEBUD2D_POINT_2F@@PEAU_D3DCOLORVALUE@@@Z @ 0x1801D1730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CColorKeyBitmap::GetPixelColor(
        CColorKeyBitmap *this,
        const struct D2D_POINT_2F *a2,
        struct _D3DCOLORVALUE *a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, const struct D2D_POINT_2F *, struct _D3DCOLORVALUE *))(**((_QWORD **)this + 2)
                                                                                                 + 112LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
}
