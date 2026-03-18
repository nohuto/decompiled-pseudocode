/*
 * XREFs of ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C001248C
 * Callers:
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C000E0E8 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 * Callees:
 *     ?NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z @ 0x1C000A1AC (-NotifyDirty@CCompositionBuffer@@QEAAXAEBUIRegion@@PEBUScrollOptimization@@@Z.c)
 *     ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C000AB4C (-FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011DB0 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurface::UpdateBufferDirtyRegion(
        CCompositionSurface *a1,
        __int64 a2,
        const struct IRegion *a3)
{
  int Buffer; // ebx
  struct CCompositionBuffer *v5; // rdi
  struct CFlipExBuffer *v6; // rax
  struct CCompositionBuffer *v8; // [rsp+20h] [rbp-18h] BYREF

  Buffer = CCompositionSurface::FindBuffer(a1, a2, &v8);
  if ( Buffer >= 0 )
  {
    v5 = v8;
    if ( (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)v8 + 8LL))(v8) == 2 )
    {
      v6 = CFlipExBuffer::FromBuffer(v5);
      if ( *((_DWORD *)v6 + 87) == -1 )
        *((_DWORD *)v6 + 87) = 0;
      *((_DWORD *)v6 + 12) = 1;
      CCompositionBuffer::NotifyDirty(v6, a3, 0LL);
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}
