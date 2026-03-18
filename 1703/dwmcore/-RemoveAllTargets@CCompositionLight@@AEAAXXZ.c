/*
 * XREFs of ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x180173070
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18005CD70 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 *     ??1CCompositionLight@@UEAA@XZ @ 0x1801722BC (--1CCompositionLight@@UEAA@XZ.c)
 * Callees:
 *     ?RemoveLight@CVisual@@QEAAXPEAVCCompositionLight@@@Z @ 0x180160E48 (-RemoveLight@CVisual@@QEAAXPEAVCCompositionLight@@@Z.c)
 */

void __fastcall CCompositionLight::RemoveAllTargets(CCompositionLight *this)
{
  __int64 v2; // rsi
  __int64 v3; // rdi

  if ( *((_DWORD *)this + 24) )
  {
    v2 = *((unsigned int *)this + 24);
    v3 = 0LL;
    do
    {
      CVisual::RemoveLight(*(CVisual **)(*((_QWORD *)this + 9) + v3), this);
      v3 += 8LL;
      --v2;
    }
    while ( v2 );
  }
  *((_DWORD *)this + 24) = 0;
  DynArrayImpl<0>::ShrinkToSize((__int64)this + 72, 8u);
}
