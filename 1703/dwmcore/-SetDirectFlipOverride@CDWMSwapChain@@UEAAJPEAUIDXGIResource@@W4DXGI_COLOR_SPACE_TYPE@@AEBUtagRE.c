/*
 * XREFs of ?SetDirectFlipOverride@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@W4DXGI_COLOR_SPACE_TYPE@@AEBUtagRECT@@2@Z @ 0x18019D5F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::SetDirectFlipOverride(
        CDWMSwapChain *this,
        struct IDXGIResource *a2,
        enum DXGI_COLOR_SPACE_TYPE a3,
        const struct tagRECT *a4,
        const struct tagRECT *a5)
{
  __int64 v7; // rcx
  __int64 result; // rax

  v7 = *((_QWORD *)this + 45);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    *((_QWORD *)this + 45) = 0LL;
  }
  *((_QWORD *)this + 45) = a2;
  if ( a2 )
    ((void (__fastcall *)(struct IDXGIResource *))a2->lpVtbl->AddRef)(a2);
  *((_DWORD *)this + 92) = a3;
  *(struct tagRECT *)((char *)this + 372) = *a4;
  result = 0LL;
  *(struct tagRECT *)((char *)this + 388) = *a5;
  return result;
}
