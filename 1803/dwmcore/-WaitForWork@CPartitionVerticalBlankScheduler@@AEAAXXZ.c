/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18005DBF0
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x18005D3B0 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x18002030C (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z @ 0x180021438 (--$ReleaseInterface@VCD3DSurface@@@@YAXAEAPEAVCD3DSurface@@@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180059D60 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18005F774 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x1801487E4 (-Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z.c)
 *     McTemplateU0qqqqq @ 0x180148E68 (McTemplateU0qqqqq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x1801515FC (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x180151800 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(CPartitionVerticalBlankScheduler *this)
{
  char *v2; // rbx
  char v3; // r14
  int v4; // esi
  char v5; // di
  CD3DModuleLoaderInternal *v6; // rcx
  CDXGIEnumeration *v7; // rbx
  unsigned int v8; // r13d
  CDXGIEnumeration *v9; // rbx
  unsigned int v10; // r9d
  __int64 v11; // rax
  CoRenderHost *v12; // rcx
  HANDLE *v13; // rbx
  void *const *v14; // r8
  unsigned int v15; // r12d
  DWORD *v16; // rsi
  unsigned int i; // edi
  DWORD v18; // eax
  int v19; // ecx
  void (*v20)(void); // rax
  int v21; // ebx
  int v22; // esi
  int v23; // edi
  int v24; // eax
  unsigned __int64 v25; // rax
  int v26; // ecx
  unsigned int v27; // edx
  unsigned int v28; // ecx
  unsigned int v29; // eax
  char *v30; // r8
  unsigned __int64 v31; // r9
  __int64 v32; // r8
  int v33; // ecx
  __int64 v34; // rax
  int v35; // eax
  int v36; // edi
  BOOL v37; // eax
  CHAR v38; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-9h] BYREF
  int v42; // [rsp+64h] [rbp-5h] BYREF
  int D3DObjects; // [rsp+68h] [rbp-1h] BYREF
  unsigned __int64 v44; // [rsp+70h] [rbp+7h] BYREF
  CMILRefCountBase *v45; // [rsp+78h] [rbp+Fh]
  __int64 v46; // [rsp+80h] [rbp+17h] BYREF
  __int64 v47; // [rsp+88h] [rbp+1Fh]

  v46 = 0LL;
  v47 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFW_Start);
  v2 = (char *)this + 30576;
  v3 = 0;
  if ( *((_BYTE *)this + 30600) && *((_BYTE *)this + 30601) )
  {
    v25 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 30576));
    v44 = v25;
    if ( *((_BYTE *)this + 30602) )
    {
      if ( *((_DWORD *)this + 7648) == -1 )
      {
        *((_QWORD *)this + 3824) = 0LL;
        v26 = 0;
      }
      else
      {
        v26 = *((_DWORD *)this + 7649);
      }
      *((_QWORD *)this + 3828) = v25;
      *(_OWORD *)&v2[16 * v26 + 56] = *(_OWORD *)((char *)this + 30616);
      v27 = *((_DWORD *)this + 7648);
      v28 = *((_DWORD *)this + 7649);
      if ( v27 != v28 )
      {
        v29 = *((_DWORD *)this + 7648);
        do
        {
          v30 = &v2[16 * v29];
          v31 = *((_QWORD *)v30 + 7);
          if ( v31 >= *((_QWORD *)this + 3828) - 10000000LL )
            break;
          *((_QWORD *)this + 3826) += v31 - *((_QWORD *)v30 + 8);
          *((_QWORD *)v30 + 8) = 0LL;
          *((_QWORD *)v30 + 7) = 0LL;
          v27 = (unsigned __int8)(*((_DWORD *)this + 7648) + 1);
          *((_DWORD *)this + 7648) = v27;
          v29 = v27;
          v28 = *((_DWORD *)this + 7649);
        }
        while ( v27 != v28 );
      }
      v32 = *((_QWORD *)this + 3826) + *((_QWORD *)this + 2 * v28 + 3830) - *((_QWORD *)this + 2 * v28 + 3829);
      v33 = (unsigned __int8)(v28 + 1);
      *((_QWORD *)this + 3826) = v32;
      *((_DWORD *)this + 7649) = v33;
      if ( v27 == v33 )
      {
        v34 = 2LL * v27;
        *((_QWORD *)this + 3826) = *(_QWORD *)&v2[16 * v27 + 56] + v32 - *(_QWORD *)&v2[16 * v27 + 64];
        *(_QWORD *)&v2[8 * v34 + 64] = 0LL;
        *(_QWORD *)&v2[8 * v34 + 56] = 0LL;
        *((_DWORD *)this + 7648) = (unsigned __int8)(*((_DWORD *)this + 7648) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CPartitionVerticalBlankScheduler *)((char *)this + 30576), &v44);
  }
  v4 = 0;
  v5 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v7 = qword_1802D6430;
  v8 = 4;
  if ( !qword_1802D6430 )
    goto LABEL_54;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_1802D6430 + 2) + 104LL))(*((_QWORD *)qword_1802D6430
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v7 + 14)
    || qword_1802D6430 != v7 )
  {
    ReleaseInterface<CD3DSurface>((__int64 *)&qword_1802D6430);
    v5 = 1;
  }
  if ( !qword_1802D6430 )
  {
LABEL_54:
    D3DObjects = CD3DModuleLoaderInternal::CreateD3DObjects(v6, &qword_1802D6430);
    TranslateDXGIorD3DErrorInContext(D3DObjects, 4, &D3DObjects);
    v4 = D3DObjects;
    if ( D3DObjects < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, D3DObjects, 0x128u);
  }
  if ( v5 && qword_1802D6440 )
    CSurfaceManager::ResetTokenThread(qword_1802D6440);
  v9 = qword_1802D6430;
  v45 = qword_1802D6430;
  if ( qword_1802D6430 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_1802D6430)(qword_1802D6430);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v4 < 0 )
    v11 = 0LL;
  else
    v11 = *((_QWORD *)v9 + 12);
  *((_QWORD *)this + 4) = v11;
  if ( !v11 )
    v8 = 3;
  v12 = (CoRenderHost *)*((_QWORD *)this + 8);
  v13 = (HANDLE *)((char *)this + 8);
  v14 = (void *const *)((char *)this + 8);
  if ( v12 )
  {
    v15 = CoRenderHost::Wait(v12, v8, v14, v10);
    v42 = v15;
  }
  else if ( (*(int (__fastcall **)(_QWORD, _QWORD, void *const *, __int64, _DWORD, int *))(**((_QWORD **)this + 11)
                                                                                         + 56LL))(
              *((_QWORD *)this + 11),
              v8,
              v14,
              0xFFFFFFFFLL,
              0,
              &v42) < 0 )
  {
    v15 = -1;
    v42 = -1;
  }
  else
  {
    v15 = v42;
  }
  if ( v15 == 3 && v8 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
  if ( !CancelWaitableTimer(*((HANDLE *)this + 3)) )
  {
    while ( 1 )
    {
      v35 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v36 = v35;
      if ( !v35 )
      {
        v37 = IsDebuggerPresent();
        v38 = Response[0];
        if ( v37 )
          v38 = 103;
        Response[0] = v38;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        word_180252860,
        word_180252860,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::WaitForWork",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        357);
      if ( !v36 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          Response,
          Response);
        JUMPOUT(0x180108E99LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_89;
        case 'G':
        case 'g':
LABEL_89:
          RaiseFailFastException(0LL, 0LL, 0);
          goto LABEL_21;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_87;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_87;
        default:
LABEL_87:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_21:
  *((_DWORD *)this + 7643) = -1;
  v16 = (DWORD *)&v46;
  for ( i = 0; i < v8; ++i )
  {
    v18 = WaitForSingleObject(*v13, 0);
    v42 = v18;
    *v16 = v18;
    if ( !v18 && i == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    ++v13;
    ++v16;
  }
  v19 = (int)v45;
  if ( v45 )
  {
    v20 = *(void (**)(void))(*(_QWORD *)v45 + 8LL);
    if ( (char *)v20 == (char *)CMILRefCountBase::Release )
      CMILRefCountBase::Release(v45);
    else
      v20();
  }
  v21 = HIDWORD(v47);
  v22 = v47;
  v23 = HIDWORD(v46);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qqqqq(v19, (unsigned int)&EVTDESC_SCHEDULE_WFW_Stop, v15, v46, SBYTE4(v46), v47, SBYTE4(v47));
  if ( !v15 || !(_DWORD)v46 )
    v3 = 1;
  if ( v15 == 1 || !v23 )
    v3 |= 2u;
  if ( v15 == 2 || !v22 )
    v3 |= 4u;
  if ( v15 == 3 || !v21 )
  {
    v3 |= 8u;
    CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(*((_QWORD *)this + 9) + 72LL));
  }
  v24 = dword_1802D5EB0;
  if ( (v3 & 1) != 0 )
  {
    v24 = dword_1802D5EB0 | 8;
    dword_1802D5EB0 |= 8u;
  }
  if ( (v3 & 2) != 0 )
  {
    v24 |= 0x10u;
    dword_1802D5EB0 = v24;
  }
  if ( (v3 & 4) != 0 )
  {
    v24 |= 2u;
    dword_1802D5EB0 = v24;
  }
  if ( (v3 & 8) != 0 )
    dword_1802D5EB0 = v24 | 4;
}
