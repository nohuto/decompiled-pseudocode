/*
 * XREFs of ?ReleaseD3DResources@CSwapChainBase@@EEAAXXZ @ 0x1800CDA70
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z @ 0x1800C7650 (--$ReleaseInterface@VCD3DVidMemOnlyTexture@@@@YAXAEAPEAVCD3DVidMemOnlyTexture@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CSwapChainBase::ReleaseD3DResources(CSwapChainBase *this)
{
  __int64 i; // rbx

  (*(void (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 272LL))(this);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 72); i = (unsigned int)(i + 1) )
    ReleaseInterface<CD3DVidMemOnlyTexture>((CMILPoolResource **)(*((_QWORD *)this + 33) + 8 * i));
}
