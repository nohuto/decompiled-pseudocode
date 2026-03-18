/*
 * XREFs of ?DispatchScribbles@CFramebuffer@CComputeScribbleRenderer@@QEAAJPEAUID3D12CommandQueue@@PEAVCComputeScribbleStopwatch@@_KAEAV?$vector@UComputeScribbleLatencyData@@V?$allocator@UComputeScribbleLatencyData@@@std@@@std@@@Z @ 0x18021C30C
 * Callers:
 *     ?ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ @ 0x18021DD44 (-ProcessScribbleFrame@CScheduler@CComputeScribbleRenderer@@AEAAJXZ.c)
 * Callees:
 *     ??$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x18007DA70 (--$AppendRects@UtagRECT@@@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180142BE4 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801430F8 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180158FE8 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z @ 0x1801C5C50 (-DebugInspectSurface@@YAJPEAUID3D12CommandQueue@@PEAUID3D12Resource@@W4D3D12_RESOURCE_STATES@@@Z.c)
 *     ?ResetEvent@details@wil@@YAXPEAX@Z @ 0x1801F92B4 (-ResetEvent@details@wil@@YAXPEAX@Z.c)
 *     McTemplateU0xxxq @ 0x1802003D4 (McTemplateU0xxxq.c)
 *     std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___ @ 0x18021BD1C (std--vector_ComputeScribbleLatencyData_std--allocator_ComputeScribbleLatencyData___--_Resize__la.c)
 *     _lambda_5473257d4121221b454f30f9568d7f98_::operator() @ 0x18021C000 (_lambda_5473257d4121221b454f30f9568d7f98_--operator().c)
 *     ?AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z @ 0x18021C228 (-AcquireForScribble@CFramebuffer@CComputeScribbleRenderer@@AEAA_N_K@Z.c)
 *     TransitionResourceBarrier_0 @ 0x18021CB30 (TransitionResourceBarrier_0.c)
 *     ?clear@?$vector@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAAXXZ @ 0x18021CCAC (-clear@-$vector@V-$com_ptr_t@VCComputeScribble@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V.c)
 *     McTemplateU0xc @ 0x18021CD00 (McTemplateU0xc.c)
 *     ?GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ @ 0x18021EAD8 (-GetElapsedTimeMs@CComputeScribbleStopwatch@@QEAAMXZ.c)
 *     ?StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z @ 0x18021EE64 (-StopOnGpu@CComputeScribbleStopwatch@@QEAAXPEAUID3D12GraphicsCommandList@@@Z.c)
 */

__int64 __fastcall CComputeScribbleRenderer::CFramebuffer::DispatchScribbles(
        __int64 a1,
        struct ID3D12CommandQueue *a2,
        __int64 a3,
        unsigned __int64 a4,
        _QWORD *a5)
{
  __int64 v9; // rcx
  __int64 v10; // r9
  struct ID3D12CommandQueueVtbl *lpVtbl; // rax
  __int64 v13; // rdx
  HRESULT (__stdcall *Wait)(ID3D12CommandQueue *, ID3D12Fence *, UINT64); // rax
  int v15; // eax
  unsigned int LastError; // ebx
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rdx
  int appended; // eax
  __int64 v25; // rdx
  int v26; // eax
  void *v27; // rdx
  enum D3D12_RESOURCE_STATES v28; // r8d
  DWORD v29; // eax
  const char *v30; // r9
  __int64 v31; // rdi
  float ElapsedTimeMs; // xmm0_4
  unsigned __int64 v33; // rax
  float v34; // xmm0_4
  __int64 v35; // rcx
  unsigned __int64 v36; // rbx
  __int64 v37; // rax
  unsigned __int64 v38; // rbx
  __int64 v39; // rcx
  float v40; // xmm0_4
  __int64 v41; // [rsp+28h] [rbp-59h]
  int v42; // [rsp+40h] [rbp-41h] BYREF
  unsigned int v43; // [rsp+44h] [rbp-3Dh]
  __int64 v44; // [rsp+48h] [rbp-39h] BYREF
  __int128 v45; // [rsp+50h] [rbp-31h] BYREF
  unsigned __int64 v46; // [rsp+60h] [rbp-21h]
  char v47; // [rsp+68h] [rbp-19h]
  __int128 v48; // [rsp+70h] [rbp-11h] BYREF
  unsigned __int64 v49; // [rsp+80h] [rbp-1h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+57h]

  if ( CComputeScribbleRenderer::CFramebuffer::AcquireForScribble(
         (CComputeScribbleRenderer::CFramebuffer *)a1,
         a4,
         a3,
         a4) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    {
      LOBYTE(v10) = *(_BYTE *)(a1 + 209);
      McTemplateU0xc(v9, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCH_Start, a4, v10);
    }
    lpVtbl = a2->lpVtbl;
    v13 = *(_QWORD *)(a1 + 64);
    *(_QWORD *)&v48 = a1;
    *((_QWORD *)&v48 + 1) = a2;
    Wait = lpVtbl->Wait;
    v49 = a4;
    v45 = v48;
    v47 = 1;
    v46 = a4;
    v15 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, __int64, unsigned __int64))Wait)(a2, v13, a4);
    LastError = v15;
    if ( v15 >= 0 )
    {
      v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 16) + 64LL))(*(_QWORD *)(a1 + 16));
      LastError = v15;
      if ( v15 >= 0 )
      {
        v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 24) + 80LL))(
                *(_QWORD *)(a1 + 24),
                *(_QWORD *)(a1 + 16),
                0LL);
        LastError = v15;
        if ( v15 >= 0 )
        {
          a5[1] = *a5;
          std::vector_ComputeScribbleLatencyData_std::allocator_ComputeScribbleLatencyData___::_Resize__lambda_49aad73161a680b61c856fa3713eefe3___(
            (__int64)a5,
            (__int64)(*(_QWORD *)(a1 + 112) - *(_QWORD *)(a1 + 104)) >> 3);
          v21 = *(_QWORD *)(a1 + 104);
          v22 = *(_QWORD *)(a1 + 112);
          v42 = 0;
          v43 = 0;
          if ( (v22 - v21) >> 3 )
          {
            v23 = 0LL;
            while ( 1 )
            {
              appended = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *, __int64, __int128 *))(**(_QWORD **)(v21 + 8 * v23) + 32LL))(
                           *(_QWORD *)(v21 + 8 * v23),
                           *(_QWORD *)(a1 + 24),
                           *(_QWORD *)(a1 + 8),
                           &v42,
                           *a5 + 32 * v23,
                           &v48);
              LastError = appended;
              if ( appended < 0 )
                break;
              appended = CRegion::AppendRects<tagRECT>((FastRegion::CRegion *)(a1 + 128), (__int64)&v48, 1u);
              LastError = appended;
              if ( appended < 0 )
              {
                v25 = 259LL;
                goto LABEL_25;
              }
              v21 = *(_QWORD *)(a1 + 104);
              v23 = ++v43;
              if ( v43 >= (unsigned __int64)((*(_QWORD *)(a1 + 112) - v21) >> 3) )
                goto LABEL_19;
            }
            v25 = 258LL;
LABEL_25:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v25,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
              (const char *)(unsigned int)appended);
            v26 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24));
            if ( v26 < 0 )
              wil::details::in1diag3::_Log_Hr(
                retaddr,
                (void *)0xF1,
                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
                (const char *)(unsigned int)v26);
            goto LABEL_46;
          }
LABEL_19:
          std::vector<wil::com_ptr_t<CComputeScribble,wil::err_returncode_policy>>::clear(a1 + 104);
          if ( v42 )
          {
            TransitionResourceBarrier_0(*(_QWORD *)(a1 + 24), *(_QWORD *)(a1 + 8));
            v42 = 0;
          }
          CComputeScribbleStopwatch::StopOnGpu(
            (CComputeScribbleStopwatch *)a3,
            *(struct ID3D12GraphicsCommandList **)(a1 + 24));
          v15 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 72LL))(*(_QWORD *)(a1 + 24));
          LastError = v15;
          if ( v15 >= 0 )
          {
            v44 = *(_QWORD *)(a1 + 24);
            ((void (__fastcall *)(struct ID3D12CommandQueue *, __int64, __int64 *))a2->lpVtbl->ExecuteCommandLists)(
              a2,
              1LL,
              &v44);
            v15 = ((__int64 (__fastcall *)(struct ID3D12CommandQueue *, _QWORD, __int64))a2->lpVtbl->Signal)(
                    a2,
                    *(_QWORD *)(a1 + 32),
                    *(_QWORD *)(a1 + 48) + 1LL);
            LastError = v15;
            if ( v15 >= 0 )
            {
              ++*(_QWORD *)(a1 + 48);
              if ( g_LockAndReadComputeScribble )
                DebugInspectSurface(a2, *(struct ID3D12Resource **)(a1 + 8), v28);
              wil::details::ResetEvent(*(wil::details **)(a1 + 40), v27);
              v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(a1 + 32) + 72LL))(
                      *(_QWORD *)(a1 + 32),
                      *(_QWORD *)(a1 + 48),
                      *(_QWORD *)(a1 + 40));
              LastError = v15;
              if ( v15 >= 0 )
              {
                v29 = WaitForSingleObjectEx(*(HANDLE *)(a1 + 40), 0xFFFFFFFF, 0);
                if ( v29 == 258 )
                {
                  LastError = wil::details::in1diag3::Return_GetLastError(
                                retaddr,
                                (void *)0x12A,
                                (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
                                v30);
                }
                else
                {
                  if ( v29 )
                  {
                    wil::details::in1diag3::_FailFast_Unexpected(
                      retaddr,
                      (void *)0x967,
                      (__int64)"internal\\sdk\\inc\\wil/resource.h",
                      v30);
                    __debugbreak();
                  }
                  v31 = *(_QWORD *)(a3 + 48);
                  ElapsedTimeMs = CComputeScribbleStopwatch::GetElapsedTimeMs((CComputeScribbleStopwatch *)a3);
                  v33 = 0LL;
                  v34 = (float)(ElapsedTimeMs / 1000.0) * *(float *)(a3 + 8);
                  if ( v34 >= 9.223372e18 )
                  {
                    v34 = v34 - 9.223372e18;
                    if ( v34 < 9.223372e18 )
                      v33 = 0x8000000000000000uLL;
                  }
                  v35 = a5[1];
                  v36 = v33 + (unsigned int)(int)v34;
                  v37 = *a5;
                  v38 = *(_QWORD *)(a3 + 48) + v36;
                  while ( v37 != v35 )
                  {
                    *(_QWORD *)(v37 + 8) = v31;
                    *(_QWORD *)(v37 + 24) = v38;
                    v37 += 32LL;
                  }
                  v40 = CComputeScribbleStopwatch::GetElapsedTimeMs((CComputeScribbleStopwatch *)a3) * 1000.0;
                  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
                  {
                    LODWORD(v41) = (int)v40;
                    McTemplateU0xxxq(v39, &EVTDESC_COMPUTESCRIBBLE_GPUFINISHED, a4, v31, v38, v41);
                  }
                  LastError = 0;
                }
                goto LABEL_46;
              }
              v17 = 297LL;
            }
            else
            {
              v17 = 284LL;
            }
          }
          else
          {
            v17 = 276LL;
          }
        }
        else
        {
          v17 = 231LL;
        }
      }
      else
      {
        v17 = 230LL;
      }
    }
    else
    {
      v17 = 227LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v17,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\rendering\\computescribblerenderer.framebuffer.cpp",
      (const char *)(unsigned int)v15);
LABEL_46:
    v47 = 0;
    lambda_5473257d4121221b454f30f9568d7f98_::operator()(&v45, v18, v19, v20);
    return LastError;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    LOBYTE(v10) = *(_BYTE *)(a1 + 209);
    McTemplateU0xc(v9, &EVTDESC_COMPUTESCRIBBLE_FRAMEDISPATCHCANCELED, a4, v10);
  }
  return 0LL;
}
