/*
 * XREFs of ?FromBuffer@CFlipExBuffer@@SAPEAV1@PEAVCCompositionBuffer@@@Z @ 0x1C000AB4C
 * Callers:
 *     ?NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z @ 0x1C00123A4 (-NotifyTokenCompleted@CCompositionSurface@@IEAAJAEBVCFlipToken@@@Z.c)
 *     ?UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z @ 0x1C001248C (-UpdateBufferDirtyRegion@CCompositionSurface@@IEAAJ_KAEBUIRegion@@W4DXGI_ALPHA_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 */

struct CFlipExBuffer *__fastcall CFlipExBuffer::FromBuffer(struct CCompositionBuffer *a1)
{
  __int64 v2; // rdi

  v2 = 0LL;
  if ( (*(unsigned int (__fastcall **)(struct CCompositionBuffer *))(*(_QWORD *)a1 + 8LL))(a1) == 2 )
    return a1;
  return (struct CFlipExBuffer *)v2;
}
