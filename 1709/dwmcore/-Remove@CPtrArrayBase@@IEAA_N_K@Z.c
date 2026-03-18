/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800B23D8
 * Callers:
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004EF00 (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z @ 0x18004F068 (-RemoveLight@CVisual@@QEAAJPEAVCCompositionLight@@W4LightBehavior@@@Z.c)
 *     ?RemoveAllLights@CVisual@@QEAAXXZ @ 0x180050288 (-RemoveAllLights@CVisual@@QEAAXXZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x180050854 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180051F3C (--1CVisual@@MEAA@XZ.c)
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x1800542A0 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 *     ??1CWindowBackgroundTreatment@@UEAA@XZ @ 0x1800B1BE0 (--1CWindowBackgroundTreatment@@UEAA@XZ.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x180129360 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x1801305E8 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 * Callees:
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800B244C (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 */

bool __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // r9
  bool result; // al
  unsigned __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rdx

  v2 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
    v5 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)this & 1LL;
  result = 0;
  if ( v5 )
  {
    v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 == 1 )
    {
      if ( a2 == v7 )
        *(_QWORD *)this = 0LL;
      return a2 == v7;
    }
    else
    {
      v8 = 0;
      v9 = 0LL;
      do
      {
        if ( a2 == *(_QWORD *)(v7 + 8 * v9 + 16) )
          break;
        v9 = ++v8;
      }
      while ( v8 < v5 );
      if ( v8 < v5 )
      {
        CPtrArrayBase::RemoveAt(this, v8);
        return 1;
      }
    }
  }
  return result;
}
