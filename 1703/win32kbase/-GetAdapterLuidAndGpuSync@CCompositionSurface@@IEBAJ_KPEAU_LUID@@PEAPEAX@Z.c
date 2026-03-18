/*
 * XREFs of ?GetAdapterLuidAndGpuSync@CCompositionSurface@@IEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00068AC
 * Callers:
 *     ?GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z @ 0x1C00064AC (-GetAdapterLuidAndGpuSync@CompositionSurfaceObject@@QEBAJ_KPEAU_LUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::GetAdapterLuidAndGpuSync(
        CCompositionSurface *this,
        unsigned __int64 a2,
        struct _LUID *a3,
        void **a4)
{
  int Buffer; // edi
  struct CCompositionBuffer *v7; // rbx
  struct _LUID v8; // rdx
  __int64 v9; // rax
  struct CCompositionBuffer *v11[3]; // [rsp+20h] [rbp-18h] BYREF

  Buffer = CCompositionSurface::FindBuffer(this, a2, v11);
  if ( Buffer >= 0 )
  {
    v7 = v11[0];
    v8 = *(struct _LUID *)(*(__int64 (__fastcall **)(struct CCompositionBuffer *, struct CCompositionBuffer **))(*(_QWORD *)v11[0] + 72LL))(
                            v11[0],
                            v11);
    v9 = *(_QWORD *)v7;
    *a3 = v8;
    *a4 = (void *)(*(__int64 (__fastcall **)(struct CCompositionBuffer *))(v9 + 80))(v7);
  }
  return (unsigned int)Buffer;
}
