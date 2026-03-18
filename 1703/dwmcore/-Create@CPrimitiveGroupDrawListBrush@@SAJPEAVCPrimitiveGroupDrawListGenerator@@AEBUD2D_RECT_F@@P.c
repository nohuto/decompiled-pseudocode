/*
 * XREFs of ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x1801BA380
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::Create(
        struct CPrimitiveGroupDrawListGenerator *a1,
        const struct D2D_RECT_F *a2,
        struct CPrimitiveGroupDrawListBrush **a3)
{
  unsigned int v6; // edi
  char *v7; // rax
  struct CPrimitiveGroupDrawListBrush *v8; // rbx

  v6 = 0;
  v7 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL);
  v8 = (struct CPrimitiveGroupDrawListBrush *)v7;
  if ( v7 )
  {
    *(struct D2D_RECT_F *)(v7 + 8) = *a2;
    *(_QWORD *)v7 = &CPrimitiveGroupDrawListBrush::`vftable';
    *((_QWORD *)v7 + 18) = a1;
    if ( a1 )
      (**(void (__fastcall ***)(struct CPrimitiveGroupDrawListGenerator *))a1)(a1);
  }
  else
  {
    v8 = 0LL;
  }
  *a3 = v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x12u);
  }
  return v6;
}
