/*
 * XREFs of ?SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@W4DXGI_HDR_METADATA_TYPE@@PEBXAEBUtagRECT@@4@Z @ 0x1801EA850
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetDirectFlipOverride(
        CDWMSwapChain *this,
        struct IDXGIResource *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        unsigned int a4,
        const void *a5,
        const struct tagRECT *a6,
        const struct tagRECT *a7)
{
  __int64 v9; // rcx
  __int64 v12; // rax
  __int64 result; // rax

  v9 = *((_QWORD *)this + 59);
  if ( v9 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    *((_QWORD *)this + 59) = 0LL;
  }
  *((_QWORD *)this + 59) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  v12 = *(_QWORD *)this;
  *((_DWORD *)this + 120) = a3;
  (*(void (__fastcall **)(CDWMSwapChain *, _QWORD, const void *))(v12 + 112))(this, a4, a5);
  *(struct tagRECT *)((char *)this + 484) = *a6;
  result = 0LL;
  *(struct tagRECT *)((char *)this + 500) = *a7;
  return result;
}
