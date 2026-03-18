/*
 * XREFs of ?Pop@CLightStack@@QEAAJXZ @ 0x18009E8F8
 * Callers:
 *     ?Pop@CDrawingContext@@UEAAJXZ @ 0x18003B440 (-Pop@CDrawingContext@@UEAAJXZ.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?Release@CResource@@UEAAKXZ @ 0x1800A9F20 (-Release@CResource@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CLightStack::Pop(CLightStack *this)
{
  __int128 v1; // xmm0
  void (*v2)(void); // rax

  v1 = *(_OWORD *)(*(_QWORD *)this + 16LL * (unsigned int)--*((_DWORD *)this + 6));
  if ( (_QWORD)v1 )
  {
    v2 = *(void (**)(void))(*(_QWORD *)v1 + 16LL);
    if ( (char *)v2 == (char *)CResource::Release )
      CResource::Release((CResource *)v1);
    else
      v2();
  }
  return 0LL;
}
