/*
 * XREFs of ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x180070124
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x1800701EC (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::Create(
        struct CPrimitiveGroupDrawListGenerator *a1,
        const struct D2D_RECT_F *a2,
        struct CPrimitiveGroupDrawListBrush **a3)
{
  unsigned int v6; // edi
  struct CObjectCache *ObjectCache; // rax
  char *v8; // rbx
  int v9; // r9d
  __int128 v10; // xmm0

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v8 = 0LL;
  v9 = *((_DWORD *)ObjectCache + 1);
  if ( v9 )
  {
    v8 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v8;
    *((_DWORD *)ObjectCache + 1) = v9 - 1;
  }
  if ( v8 || (v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x98uLL)) != 0LL )
  {
    v10 = (__int128)*a2;
    *(_QWORD *)v8 = &CPrimitiveGroupDrawListBrush::`vftable';
    *(_OWORD *)(v8 + 8) = v10;
    *((_QWORD *)v8 + 18) = a1;
    if ( a1 )
      (**(void (__fastcall ***)(struct CPrimitiveGroupDrawListGenerator *))a1)(a1);
  }
  else
  {
    v8 = 0LL;
  }
  *a3 = (struct CPrimitiveGroupDrawListBrush *)v8;
  if ( !v8 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x14u);
  }
  return v6;
}
