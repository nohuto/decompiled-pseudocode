/*
 * XREFs of ?IsVisible@CVisual@@QEBA_NXZ @ 0x1800258E0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A6A0 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x18001DC88 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall CVisual::IsVisible(CVisual *this)
{
  bool result; // al
  float v2; // xmm2_4

  result = 0;
  if ( (*((_BYTE *)this + 84) & 4) != 0 && !*((_DWORD *)this + 22) )
  {
    v2 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)*((double *)this + 23)) & _xmm);
    return v2 >= 0.0000011920929;
  }
  return result;
}
