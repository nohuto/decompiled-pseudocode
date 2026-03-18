/*
 * XREFs of ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44
 * Callers:
 *     ?WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ @ 0x18021E4D4 (-WorkerThreadMain@CScheduler@CComputeScribbleRenderer@@AEAAKXZ.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     McTemplateU0x @ 0x180148F68 (McTemplateU0x.c)
 *     ?AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x180151B44 (-AddLatencyData@CTelemetryComputeScribbleAggregator@@SAXAEBV-$vector@UComputeScribbleLatencyData.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180158FE8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C (-DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComp.c)
 *     ?OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z @ 0x18021CA58 (-OnDroppedScribble@CFramebuffer@CComputeScribbleRenderer@@QEAAX_K@Z.c)
 *     McTemplateU0xc @ 0x18021CD00 (McTemplateU0xc.c)
 *     ??D?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@@std@@QEBAAEBUScribbleFrame@CScheduler@CComputeScribbleRenderer@@XZ @ 0x18021D2E8 (--D-$_Deque_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@UScribbleFrame@CScheduler@CCompu.c)
 *     ?SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z @ 0x18021E3E4 (-SetupWakeupFence@CScheduler@CComputeScribbleRenderer@@AEAAJAEBUScribbleFrame@12@@Z.c)
 *     ?_Tidy@?$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V?$allocator@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@@std@@@std@@IEAAXXZ @ 0x18021E7C0 (-_Tidy@-$deque@UScribbleFrame@CScheduler@CComputeScribbleRenderer@@V-$allocator@UScribbleFrame@C.c)
 *     ?reset@?$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18021E83C (-reset@-$com_ptr_t@UIDXGIResource@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_RTL_SRWLOCK@@@Z @ 0x18021E864 (-reset@-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclus.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x18021EAD8 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CScheduler::ProcessScribbleFrame(
        CComputeScribbleRenderer::CScheduler *this)
{
  LARGE_INTEGER *v1; // rbx
  RTL_SRWLOCK *v3; // rbx
  __int64 v4; // rcx
  unsigned __int64 v5; // r14
  __int64 *v6; // r9
  __int64 *v7; // r10
  unsigned __int64 v8; // rcx
  __int64 v9; // r9
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 *v12; // rax
  CComputeScribbleRenderer::CFramebuffer **v13; // r15
  bool v14; // zf
  int v15; // edi
  __int128 *v16; // rax
  __int64 v17; // r10
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  int v21; // ebx
  const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *v22; // rax
  __int64 v23; // r8
  struct ID3D12CommandQueue *v24; // rdx
  float ElapsedTimeMs; // xmm0_4
  char v26; // cl
  char *lpMem[3]; // [rsp+30h] [rbp-69h] BYREF
  __int64 *v29[3]; // [rsp+48h] [rbp-51h] BYREF
  __int128 v30; // [rsp+60h] [rbp-39h] BYREF
  __int64 v31; // [rsp+70h] [rbp-29h]
  __int128 v32; // [rsp+78h] [rbp-21h] BYREF
  __int64 v33; // [rsp+88h] [rbp-11h]
  __int128 v34; // [rsp+90h] [rbp-9h] BYREF
  __int64 v35; // [rsp+A0h] [rbp+7h]
  __int128 v36; // [rsp+A8h] [rbp+Fh]
  __int128 v37; // [rsp+B8h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  unsigned __int64 v39; // [rsp+100h] [rbp+67h]
  RTL_SRWLOCK *v40; // [rsp+108h] [rbp+6Fh] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+110h] [rbp+77h] BYREF

  v1 = (LARGE_INTEGER *)*((_QWORD *)this + 9);
  QueryPerformanceCounter(&PerformanceCount);
  v1[6] = PerformanceCount;
  v3 = (RTL_SRWLOCK *)((char *)this + 80);
  AcquireSRWLockExclusive((PSRWLOCK)this + 10);
  v4 = *((_QWORD *)this + 12);
  v5 = 0LL;
  v40 = (RTL_SRWLOCK *)((char *)this + 80);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 64LL))(v4);
    *((_DWORD *)this + 36) = v5;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0x(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_COMPUTESCRIBBLE_THREADWAKEUP, v5);
  if ( *((_QWORD *)this + 17) )
  {
    v6 = (__int64 *)*((_QWORD *)this + 16);
    while ( 1 )
    {
      v7 = (__int64 *)*((_QWORD *)this + 13);
      v29[1] = 0LL;
      v29[0] = v7;
      v29[2] = v6;
      v8 = *(unsigned int *)(std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*(v29)
                           + 16);
      v11 = 0LL;
      if ( v8 >= v5 )
        break;
      v30 = 0LL;
      v31 = v9;
      if ( this != (CComputeScribbleRenderer::CScheduler *)-104LL )
        v11 = v10;
      *(_QWORD *)&v30 = v11;
      v12 = (__int64 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*((__int64 **)&v30);
      v13 = (CComputeScribbleRenderer::CFramebuffer **)v12;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        McTemplateU0xc(*v12, &EVTDESC_COMPUTESCRIBBLE_FRAMEDROPPED, v12[1], *(_BYTE *)(*v12 + 209));
      CComputeScribbleRenderer::CFramebuffer::OnDroppedScribble(*v13);
      v14 = (*((_QWORD *)this + 17))-- == 1LL;
      if ( v14 )
      {
        *((_QWORD *)this + 16) = 0LL;
        v6 = 0LL;
      }
      else
      {
        v6 = (__int64 *)++*((_QWORD *)this + 16);
      }
      if ( !*((_QWORD *)this + 17) )
        goto LABEL_17;
    }
    v32 = 0LL;
    v33 = v9;
    if ( this != (CComputeScribbleRenderer::CScheduler *)-104LL )
      v11 = v10;
    *(_QWORD *)&v32 = v11;
    v16 = (__int128 *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*((__int64 **)&v32);
    v18 = *v16;
    v19 = v16[1];
    v14 = (*((_QWORD *)this + 17))-- == 1LL;
    v36 = v18;
    v37 = v19;
    if ( v14 )
    {
      *((_QWORD *)this + 16) = 0LL;
      v20 = 0LL;
    }
    else
    {
      v20 = ++*((_QWORD *)this + 16);
    }
    v21 = 0;
    if ( *((_QWORD *)this + 17) )
    {
      v35 = v20;
      v34 = 0LL;
      if ( this != (CComputeScribbleRenderer::CScheduler *)-104LL )
        *(_QWORD *)&v34 = v17;
      v22 = (const struct CComputeScribbleRenderer::CScheduler::ScribbleFrame *)std::_Deque_const_iterator<std::_Deque_val<std::_Deque_simple_types<CComputeScribbleRenderer::CScheduler::ScribbleFrame>>>::operator*((__int64 **)&v34);
      v21 = CComputeScribbleRenderer::CScheduler::SetupWakeupFence(this, v22);
      if ( v21 < 0 )
        std::deque<CComputeScribbleRenderer::CScheduler::ScribbleFrame>::_Tidy((char *)this + 104);
    }
    wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,2>,_RTL_SRWLOCK *,0,std::nullptr_t>>::reset(
      &v40,
      0LL);
    v23 = *((_QWORD *)this + 9);
    v24 = (struct ID3D12CommandQueue *)*((_QWORD *)this + 1);
    memset(lpMem, 0, sizeof(lpMem));
    v15 = CComputeScribbleRenderer::CFramebuffer::DispatchScribbles(
            v36,
            v24,
            v23,
            *((unsigned __int64 *)&v36 + 1),
            lpMem);
    if ( v15 >= 0 )
    {
      if ( v21 >= 0 )
      {
        ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs(*((CComputeScribbleStopwatch **)this + 9));
        LODWORD(v39) = 1;
        if ( ElapsedTimeMs <= (float)(*((float *)&v37 + 2) * 1000.0) )
        {
          v26 = 0;
          HIDWORD(v39) = 0;
        }
        else
        {
          v26 = 1;
          HIDWORD(v39) = 1;
        }
        _InterlockedExchangeAdd64(&qword_1802D5F50, v39);
        if ( !v26 )
          CTelemetryComputeScribbleAggregator::AddLatencyData(lpMem);
        v15 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x1E5,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
          (const char *)(unsigned int)v21);
        v15 = v21;
      }
    }
    else
    {
      if ( v21 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x1E1,
          (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
          (const char *)(unsigned int)v21);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1E2,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.scheduler.cpp",
        (const char *)(unsigned int)v15);
    }
    if ( lpMem[0] )
    {
      std::_Deallocate(lpMem[0], (lpMem[2] - lpMem[0]) >> 5, 0x20uLL);
      memset(lpMem, 0, sizeof(lpMem));
    }
    v3 = v40;
  }
  else
  {
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 88);
    wil::com_ptr_t<IDXGIResource,wil::err_returncode_policy>::reset((char *)this + 96);
LABEL_17:
    v15 = 0;
  }
  if ( v3 )
    ReleaseSRWLockExclusive(v3);
  return (unsigned int)v15;
}
