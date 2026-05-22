/*
 * XREFs of ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800B2144
 * Callers:
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18007BDCC (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 * Callees:
 *     ??0DragNDropProcessorLegacy@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x1800B1C1C (--0DragNDropProcessorLegacy@@AEAA@AEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z.c)
 *     ?Initialize@DragNDropProcessorLegacy@@AEAAJXZ @ 0x1800B1E90 (-Initialize@DragNDropProcessorLegacy@@AEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall DragNDropProcessorLegacy::Create(__int64 *a1, DragNDropProcessorLegacy **a2)
{
  int v4; // ebx
  void *v5; // rax
  __int64 v6; // rbx
  DragNDropProcessorLegacy *v7; // rdi

  if ( a2 )
  {
    v5 = malloc(0xD0uLL);
    v6 = (__int64)v5;
    if ( v5 )
      memset_0(v5, 0, 0xD0uLL);
    if ( v6 )
      v7 = (DragNDropProcessorLegacy *)DragNDropProcessorLegacy::DragNDropProcessorLegacy(v6, a1);
    else
      v7 = 0LL;
    if ( v7 )
    {
      v4 = DragNDropProcessorLegacy::Initialize(v7);
      if ( v4 < 0 )
        (*(void (__fastcall **)(_QWORD *, __int64))(*((_QWORD *)v7 + 1) + 24LL))((_QWORD *)v7 + 1, 1LL);
      else
        *a2 = v7;
    }
    else
    {
      return (unsigned int)-2147024882;
    }
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return (unsigned int)v4;
}
