/*
 * XREFs of FindBaseSimpleInputBrush @ 0x18008B3A4
 * Callers:
 *     ?GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUEffectInput@@@Z @ 0x18008E6C0 (-GetInputBrushParameters@CBrushRenderingGraph@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@IIPEAUE.c)
 * Callees:
 *     ?IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z @ 0x18008DB20 (-IsOfType@CSurfaceDrawListBrush@@UEBA_NW4DrawListBrushType@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall FindBaseSimpleInputBrush(_QWORD *a1)
{
  __int64 (__fastcall *v2)(_QWORD *, __int64); // rax
  char v3; // al

  while ( 1 )
  {
    v2 = *(__int64 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL);
    if ( (char *)v2 == (char *)CSurfaceDrawListBrush::IsOfType )
      v3 = CSurfaceDrawListBrush::IsOfType(a1, 2LL);
    else
      v3 = v2(a1, 2LL);
    if ( v3
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 1LL)
      || (*(unsigned __int8 (__fastcall **)(_QWORD *, _QWORD))(*a1 + 8LL))(a1, 0LL) )
    {
      return a1;
    }
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 5LL)
      && !(*(unsigned __int8 (__fastcall **)(_QWORD *, __int64))(*a1 + 8LL))(a1, 6LL) )
    {
      break;
    }
    a1 = (_QWORD *)a1[7];
  }
  return 0LL;
}
