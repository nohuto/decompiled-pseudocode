/*
 * XREFs of ?IsVisible@CVisual@@QEBA_NXZ @ 0x180019370
 * Callers:
 *     ?SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z @ 0x180009C40 (-SetWindowOffscreen@CTopLevelWindow@@QEAAX_N@Z.c)
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18001A860 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
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
