/*
 * XREFs of ?Create@CPrimitiveGroupDrawListBrush@@SAJPEAVCPrimitiveGroupDrawListGenerator@@USamplerMode@@PEAPEAV1@@Z @ 0x1800058E4
 * Callers:
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 * Callees:
 *     ?GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z @ 0x180006054 (-GetObjectCache@CThreadContext@@SAPEAVCObjectCache@@PEAVCPrimitiveGroupDrawListBrush@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::Create(
        struct CPrimitiveGroupDrawListBrush *a1,
        __int16 *a2,
        _QWORD *a3)
{
  unsigned int v6; // edi
  struct CObjectCache *ObjectCache; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  struct CObjectCache *v10; // r9
  char *v11; // rbx
  int v12; // ecx
  __int16 v13; // bp
  char v14; // r15

  v6 = 0;
  ObjectCache = CThreadContext::GetObjectCache(a1);
  v10 = ObjectCache;
  v11 = 0LL;
  v12 = *((_DWORD *)ObjectCache + 1);
  if ( v12 )
  {
    v11 = (char *)*((_QWORD *)ObjectCache + 1);
    *((_QWORD *)ObjectCache + 1) = *(_QWORD *)v11;
    *((_DWORD *)ObjectCache + 1) = v12 - 1;
  }
  if ( v11 || (v11 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x48uLL)) != 0LL )
  {
    v13 = *a2;
    v14 = *((_BYTE *)a2 + 2);
    v11[52] = 0;
    *(_QWORD *)v11 = &CPrimitiveGroupDrawListBrush::`vftable';
    *(_OWORD *)(v11 + 8) = _xmm;
    *((_QWORD *)v11 + 3) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    *((_QWORD *)v11 + 7) = a1;
    if ( a1 )
      (**(void (__fastcall ***)(struct CPrimitiveGroupDrawListBrush *, __int64, __int64, struct CObjectCache *))a1)(
        a1,
        v8,
        v9,
        v10);
    *((_WORD *)v11 + 32) = v13;
    v11[66] = v14;
  }
  else
  {
    v11 = 0LL;
  }
  *a3 = v11;
  if ( !v11 )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x16u);
  }
  return v6;
}
