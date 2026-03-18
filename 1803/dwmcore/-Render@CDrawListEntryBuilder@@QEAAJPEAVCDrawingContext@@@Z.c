/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18017B394
 * Callers:
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18015F254 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x180040EA4 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18006D0EC (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x18013E378 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(CDrawListEntryBuilder *this, struct CDrawingContext *a2)
{
  CDrawListCache **v2; // rdi
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax

  v2 = (CDrawListCache **)((char *)this + 2456);
  if ( *((_QWORD *)this + 307) || (v5 = CDrawListCache::Create(v2), v6 = v5, v5 >= 0) )
  {
    v7 = CDrawListCache::Update(*v2, a2, this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x5C8u);
    }
    else
    {
      v8 = CDrawingContext::EmitDrawListCache(a2, *v2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x5C9u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5C5u);
  }
  if ( *v2 )
    CDrawListCache::Invalidate(*v2);
  return v6;
}
