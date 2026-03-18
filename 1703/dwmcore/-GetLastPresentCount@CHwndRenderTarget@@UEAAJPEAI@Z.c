/*
 * XREFs of ?GetLastPresentCount@CHwndRenderTarget@@UEAAJPEAI@Z @ 0x18006CC20
 * Callers:
 *     ?ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ @ 0x1800666B0 (-ProcessFrame@CPartitionVerticalBlankScheduler@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18006C4C0 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x180070240 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetLastPresentCount(CHwndRenderTarget *this, unsigned int *a2)
{
  CHwFullScreenRenderTarget *v3; // rcx
  int (*v4)(CHwFullScreenRenderTarget *__hidden, unsigned int *); // rax
  int LastPresentCount; // eax
  unsigned int v6; // ebx

  if ( *((_BYTE *)this + 725) || (v3 = (CHwFullScreenRenderTarget *)*((_QWORD *)this + 7)) == 0LL )
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, -2003304307, 0x779u);
  }
  else
  {
    v4 = *(int (**)(CHwFullScreenRenderTarget *__hidden, unsigned int *))(*(_QWORD *)v3 + 232LL);
    if ( v4 == CHwFullScreenRenderTarget::GetLastPresentCount )
      LastPresentCount = CHwFullScreenRenderTarget::GetLastPresentCount(v3, a2);
    else
      LastPresentCount = ((__int64 (__fastcall *)(CHwFullScreenRenderTarget *, unsigned int *))v4)(v3, a2);
    v6 = LastPresentCount;
    if ( LastPresentCount < 0 )
      MilInstrumentationCheckHR(0x14u, &dword_1801D55C8, 1u, LastPresentCount, 0x775u);
  }
  CHwndRenderTarget::HandleWindowErrors((COverlayContext **)this - 8, v6);
  return v6;
}
