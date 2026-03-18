/*
 * XREFs of ?Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015C3A0
 * Callers:
 *     ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514 (-DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ?Invalidate@CDrawListCache@@QEAAXXZ @ 0x180009930 (-Invalidate@CDrawListCache@@QEAAXXZ.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z @ 0x18000994C (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z @ 0x1800A7AC0 (-EmitDrawListCache@CDrawingContext@@QEAAJPEAVCDrawListCache@@@Z.c)
 *     ?Create@CDrawListCache@@SAJPEAPEAV1@@Z @ 0x1800AED48 (-Create@CDrawListCache@@SAJPEAPEAV1@@Z.c)
 */

__int64 __fastcall CDrawListPrimitiveBuilder::Render(CDrawListPrimitiveBuilder *this, struct CDrawingContext *a2)
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x604u);
    }
    else
    {
      v8 = CDrawingContext::EmitDrawListCache(a2, *v2);
      v6 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x605u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x601u);
  }
  if ( *v2 )
    CDrawListCache::Invalidate(*v2);
  return v6;
}
