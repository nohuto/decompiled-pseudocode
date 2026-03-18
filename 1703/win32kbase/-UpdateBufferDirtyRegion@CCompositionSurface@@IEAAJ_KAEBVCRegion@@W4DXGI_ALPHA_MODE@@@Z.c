/*
 * XREFs of ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBVCRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C00114F4
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C0011A4C (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011630 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z @ 0x1C0012874 (-NotifyDirty@CCompositionBuffer@@QEAAXAEBVCRegion@@PEBUScrollOptimization@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UpdateBufferDirtyRegion(
        CCompositionSurface *a1,
        unsigned __int64 a2,
        const struct CRegion *a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v5; // rdi
  int v6; // eax
  CCompositionBuffer *v7; // rcx
  struct CCompositionBuffer *v9; // [rsp+20h] [rbp-18h] BYREF

  Buffer = CCompositionSurface::FindBuffer(a1, a2, &v9);
  if ( Buffer >= 0 )
  {
    v5 = v9;
    if ( (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v9 + 8LL))(v9) == 2 )
    {
      v6 = (*(__int64 (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v5 + 8LL))(v5);
      v7 = 0LL;
      if ( v6 == 2 )
        v7 = v5;
      if ( *((_DWORD *)v7 + 86) == -1 )
        *((_DWORD *)v7 + 86) = 0;
      *((_DWORD *)v7 + 12) = 1;
      CCompositionBuffer::NotifyDirty(v7, a3, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}
