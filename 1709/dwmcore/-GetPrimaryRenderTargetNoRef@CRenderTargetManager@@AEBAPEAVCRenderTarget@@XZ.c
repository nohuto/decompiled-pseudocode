/*
 * XREFs of ?GetPrimaryRenderTargetNoRef@CRenderTargetManager@@AEBAPEAVCRenderTarget@@XZ @ 0x18001B1B4
 * Callers:
 *     ?SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z @ 0x18001BB30 (-SetPrimaryVsyncPresentWaitTarget@CRenderTargetManager@@QEBAJI@Z.c)
 * Callees:
 *     ?IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ @ 0x180017400 (-IsPrimaryMonitor@CHwndRenderTarget@@UEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

struct CRenderTarget *__fastcall CRenderTargetManager::GetPrimaryRenderTargetNoRef(CRenderTargetManager *this)
{
  unsigned int v1; // ebp
  __int64 v2; // rbx
  unsigned int v4; // edi
  __int64 i; // r14
  CHwndRenderTarget *v6; // rcx
  bool (__fastcall *v7)(CHwndRenderTarget *); // rax
  char v8; // al

  v1 = *((_DWORD *)this + 12);
  v2 = 0LL;
  v4 = 0;
  if ( v1 )
  {
    for ( i = 0LL; ; i += 8LL )
    {
      v6 = *(CHwndRenderTarget **)(i + *((_QWORD *)this + 3));
      v7 = *(bool (__fastcall **)(CHwndRenderTarget *))(*(_QWORD *)v6 + 224LL);
      v8 = v7 == CHwndRenderTarget::IsPrimaryMonitor
         ? CHwndRenderTarget::IsPrimaryMonitor(v6)
         : ((__int64 (*)(void))v7)();
      if ( v8
        && !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(i + *((_QWORD *)this + 3)) + 192LL))(*(_QWORD *)(i + *((_QWORD *)this + 3))) )
      {
        break;
      }
      if ( ++v4 >= v1 )
        return (struct CRenderTarget *)v2;
    }
    return *(struct CRenderTarget **)(*((_QWORD *)this + 3) + 8LL * v4);
  }
  return (struct CRenderTarget *)v2;
}
