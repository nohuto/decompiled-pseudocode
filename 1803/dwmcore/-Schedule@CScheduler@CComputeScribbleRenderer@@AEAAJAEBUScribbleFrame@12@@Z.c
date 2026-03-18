/*
 * XREFs of ?Schedule@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E1C4
 * Callers:
 *     ?ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V?$span@QEAVCComputeScribble@@$0?0@gsl@@_KI@Z @ 0x18021E2F8 (-ScheduleScribbleFrame@CScheduler@CComputeScribbleRenderer@@QEAAJPEAVCFramebuffer@2@V-$span@QEAV.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0xqq @ 0x180159144 (McTemplateU0xqq.c)
 *     ??$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@QEAAXAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@Z @ 0x18021D074 (--$emplace_back@AEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@@-$deque@UScribbleFrame@C.c)
 *     ?CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z @ 0x18021D4D8 (-CheckForWorkerThreadHang@CScheduler@CComputeScribbleRenderer@@AEBA_NI@Z.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E3E4 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x18021E7C0 (-_Tidy@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@C.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     McTemplateU0xcqf @ 0x18021E8B8 (McTemplateU0xcqf.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::Schedule(
        RTL_SRWLOCK *this,
        const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *a2)
{
  RTL_SRWLOCK *v2; // rbp
  unsigned __int64 Ptr; // rax
  RTL_SRWLOCK *v6; // rsi
  __int64 v7; // rcx
  int v8; // eax
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // r9d
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = this + 10;
  AcquireSRWLockExclusive(this + 10);
  Ptr = (unsigned __int64)this[17].Ptr;
  if ( Ptr < 3 )
  {
    v6 = this + 13;
  }
  else
  {
    if ( !CComputeScribbleRenderer::CScheduler::CheckForWorkerThreadHang((__int64 **)this, *((_DWORD *)a2 + 4)) )
      goto LABEL_12;
    v6 = this + 13;
    std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy(&this[13]);
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&this[11]);
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset(&this[12]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0xqq(
        v7,
        &EVTDESC_COMPUTESCRIBBLE_WORKERHANG,
        *((_QWORD *)a2 + 1),
        *((_DWORD *)a2 + 4),
        (char)this[18].Ptr);
    Ptr = (unsigned __int64)this[17].Ptr;
  }
  if ( !Ptr )
  {
    v8 = CComputeScribbleRenderer::CScheduler::SetupWakeupFence((CComputeScribbleRenderer::CScheduler *)this, a2);
    v9 = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x111,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_13;
    }
  }
  std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::emplace_back<CComputeScribbleRenderer::CScheduler::ScribbleFrame const &>(
    v6,
    a2);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v11) = *(_BYTE *)(*(_QWORD *)a2 + 209LL);
    McTemplateU0xcqf(
      v10,
      (unsigned int)&EVTDESC_COMPUTESCRIBBLE_FRAMESCHEDULED,
      *((_QWORD *)a2 + 1),
      v11,
      *((_DWORD *)a2 + 4),
      *((_DWORD *)a2 + 5));
  }
LABEL_12:
  v9 = 0;
LABEL_13:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v9;
}
