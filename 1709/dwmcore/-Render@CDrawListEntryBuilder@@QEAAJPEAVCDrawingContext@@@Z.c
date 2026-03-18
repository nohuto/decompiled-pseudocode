/*
 * XREFs of ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180152418
 * Callers:
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x180023768 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x1800237AC (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x18003EA78 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800B2B14 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListEntryBuilder::Render(CDrawListEntryBuilder *this, struct CDrawingContext *a2)
{
  CDrawListCache **v2; // rdi
  signed int v5; // eax
  unsigned int v6; // ebx
  signed int v7; // eax
  signed int v8; // eax

  v2 = (CDrawListCache **)((char *)this + 2456);
  if ( *((_QWORD *)this + 307) || (v5 = CDrawListCache::Create(v2), v6 = v5, v5 >= 0) )
  {
    v7 = CDrawListCache::Update(*v2, a2, this);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x640u);
    }
    else
    {
      v8 = CDrawingContext::EmitDrawListCache(a2, *v2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v8, 0x641u);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x63Du);
  }
  if ( *v2 )
    CDrawListCache::Invalidate(*v2);
  return v6;
}
