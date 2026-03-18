/*
 * XREFs of ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x180060A80
 * Callers:
 *     ?GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z @ 0x18005F970 (-GetLastPresentCount@CRenderTargetManager@@QEAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18005FF50 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18007C020 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetLastPresentCount(CHwndRenderTarget *this, unsigned int *a2)
{
  CHwFullScreenRenderTarget *v3; // rcx
  int (*v4)(CHwFullScreenRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  unsigned int v6; // ebx

  v3 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 14);
  if ( v3 )
  {
    v4 = *(int (**)(CHwFullScreenRenderTarget *__hidden, unsigned int *))(*(_QWORD *)v3 + 288LL);
    if ( v4 == CHwFullScreenRenderTarget::GetLastPresentCount )
      LastPresentCount = CHwFullScreenRenderTarget::GetLastPresentCount(v3, a2);
    else
      LastPresentCount = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, unsigned int *))v4)(v3, a2);
    v6 = LastPresentCount;
    if ( LastPresentCount < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, LastPresentCount, 0x68Bu);
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_18023A090, 1u, -2003304307, 0x68Fu);
  }
  CHwndRenderTarget::HandleWindowErrors((CHwndRenderTarget *)((char *)this - 64), v6);
  return v6;
}
