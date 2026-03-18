/*
 * XREFs of ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x1800182C0
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z @ 0x180014704 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N@Z.c)
 * Callees:
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800179B4 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18002EF60 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetLastPresentCount(CHwndRenderTarget *this, unsigned int *a2)
{
  CHwFullScreenRenderTarget *v3; // rcx
  int (*v4)(CHwFullScreenRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  unsigned int v6; // ebx

  v3 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 7);
  if ( v3 )
  {
    v4 = *(int (**)(CHwFullScreenRenderTarget *__hidden, unsigned int *))(*(_QWORD *)v3 + 240LL);
    if ( v4 == CHwFullScreenRenderTarget::GetLastPresentCount )
      LastPresentCount = CHwFullScreenRenderTarget::GetLastPresentCount(v3, a2);
    else
      LastPresentCount = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, unsigned int *))v4)(v3, a2);
    v6 = LastPresentCount;
    if ( LastPresentCount < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, LastPresentCount, 0x6CEu);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1801F0798, 1u, -2003304307, 0x6D2u);
  }
  CHwndRenderTarget::HandleWindowErrors((CHwndRenderTarget *)((char *)this - 64), v6);
  return v6;
}
