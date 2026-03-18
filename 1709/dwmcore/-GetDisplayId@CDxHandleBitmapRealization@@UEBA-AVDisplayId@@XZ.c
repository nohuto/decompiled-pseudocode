/*
 * XREFs of ?GetDisplayId@CDxHandleBitmapRealization@@UEBA?AVDisplayId@@XZ @ 0x18004D320
 * Callers:
 *     ?UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18004D4E0 (-UpdateAttributes@CDxHandleBitmapRealization@@UEAA_NAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     ?UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x18004D6A0 (-UpdateBitmapAttributes@CDxHandleBitmapRealization@@MEAA_NVDisplayId@@W4DXGI_ALPHA_MODE@@W4DXGI_.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall CDxHandleBitmapRealization::GetDisplayId(__int64 a1, _DWORD *a2)
{
  *a2 = *(_DWORD *)(a1 + 400);
  return a2;
}
