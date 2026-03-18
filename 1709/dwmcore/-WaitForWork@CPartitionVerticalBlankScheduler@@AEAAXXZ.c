/*
 * XREFs of ?WaitForWork@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x180015000
 * Callers:
 *     ?ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ @ 0x180014A50 (-ScheduleAndProcessFrame@CPartitionVerticalBlankScheduler@@UEAAJXZ.c)
 * Callees:
 *     ?ForceFullRender@CRenderTargetManager@@QEAAXXZ @ 0x18001BA38 (-ForceFullRender@CRenderTargetManager@@QEAAXXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001F0A0 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?ResetTokenThread@CSurfaceManager@@QEAAJXZ @ 0x180076BDC (-ResetTokenThread@CSurfaceManager@@QEAAJXZ.c)
 *     ??$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z @ 0x1800824CC (--$ReleaseInterface@VCRemoteApplicationWindow@@@@YAXAEAPEAVCRemoteApplicationWindow@@@Z.c)
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     ?Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z @ 0x1801259E4 (-Wait@CoRenderHost@@QEAAKIPEBQEAXI@Z.c)
 *     McTemplateU0qqqqq @ 0x180126B58 (McTemplateU0qqqqq.c)
 *     ?CurrentTime@CDebugFrameCounter@@IEAA_KXZ @ 0x18012FC6C (-CurrentTime@CDebugFrameCounter@@IEAA_KXZ.c)
 *     ?UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z @ 0x18012FE64 (-UpdateGlitchList@CDebugFrameCounter@@IEAAXAEA_K@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

void __fastcall CPartitionVerticalBlankScheduler::WaitForWork(CPartitionVerticalBlankScheduler *this)
{
  char v2; // r14
  int v3; // r13d
  char v4; // si
  CD3DModuleLoaderInternal *v5; // rcx
  CDXGIEnumeration *v6; // rdi
  unsigned int v7; // ebx
  CDXGIEnumeration *v8; // r12
  unsigned int v9; // r9d
  CoRenderHost *v10; // rcx
  HANDLE *v11; // rdi
  void *const *v12; // r8
  unsigned int v13; // r13d
  unsigned int v14; // r12d
  DWORD *v15; // rsi
  unsigned int v16; // ebx
  DWORD v17; // eax
  int v18; // ecx
  unsigned int (__fastcall *v19)(CMILRefCountBase *__hidden); // rax
  int v20; // ebx
  int v21; // esi
  int v22; // edi
  int v23; // eax
  unsigned __int64 v24; // rax
  char *v25; // rcx
  int v26; // ecx
  __int64 v27; // r8
  int v28; // ecx
  unsigned int v29; // eax
  char *v30; // rdx
  int v31; // eax
  int v32; // ebx
  BOOL v33; // eax
  CHAR v34; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  CHAR Response[4]; // [rsp+60h] [rbp+7h] BYREF
  int v38; // [rsp+64h] [rbp+Bh] BYREF
  unsigned __int64 v39; // [rsp+68h] [rbp+Fh] BYREF
  CMILRefCountBase *v40; // [rsp+70h] [rbp+17h]
  __int64 v41; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v42; // [rsp+80h] [rbp+27h]

  v41 = 0LL;
  v42 = 0LL;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_WFW_Start);
  v2 = 0;
  if ( *((_BYTE *)this + 24824) && *((_BYTE *)this + 24825) )
  {
    v24 = CDebugFrameCounter::CurrentTime((CPartitionVerticalBlankScheduler *)((char *)this + 24800));
    v39 = v24;
    if ( *((_BYTE *)this + 24826) )
    {
      if ( *((_DWORD *)this + 6204) == -1 )
        *((_QWORD *)this + 3102) = 0LL;
      *((_QWORD *)this + 3106) = v24;
      *(_OWORD *)((char *)this + 16 * *((unsigned int *)this + 6205) + 24856) = *(_OWORD *)((char *)this + 24840);
      if ( *((_DWORD *)this + 6204) != *((_DWORD *)this + 6205) )
      {
        do
        {
          v25 = (char *)this + 16 * *((unsigned int *)this + 6204) + 24800;
          if ( *((_QWORD *)v25 + 7) >= (unsigned __int64)(*((_QWORD *)this + 3106) - 10000000LL) )
            break;
          *((_QWORD *)this + 3104) += *((_QWORD *)v25 + 7) - *((_QWORD *)v25 + 8);
          *((_QWORD *)v25 + 8) = 0LL;
          *((_QWORD *)v25 + 7) = 0LL;
          v26 = (unsigned __int8)(*((_BYTE *)this + 24816) + 1);
          *((_DWORD *)this + 6204) = v26;
        }
        while ( v26 != *((_DWORD *)this + 6205) );
      }
      v27 = *((_QWORD *)this + 3104)
          + *((_QWORD *)this + 2 * *((unsigned int *)this + 6205) + 3108)
          - *((_QWORD *)this + 2 * *((unsigned int *)this + 6205) + 3107);
      v28 = (unsigned __int8)(*((_DWORD *)this + 6205) + 1);
      v29 = *((_DWORD *)this + 6204);
      *((_QWORD *)this + 3104) = v27;
      *((_DWORD *)this + 6205) = v28;
      if ( v29 == v28 )
      {
        v30 = (char *)this + 16 * v29 + 24800;
        *((_QWORD *)this + 3104) = v27 + *((_QWORD *)v30 + 7) - *((_QWORD *)v30 + 8);
        *((_QWORD *)v30 + 8) = 0LL;
        *((_QWORD *)v30 + 7) = 0LL;
        *((_DWORD *)this + 6204) = (unsigned __int8)(*((_DWORD *)this + 6204) + 1);
      }
    }
    CDebugFrameCounter::UpdateGlitchList((CPartitionVerticalBlankScheduler *)((char *)this + 24800), &v39);
  }
  v3 = 0;
  v4 = 0;
  EnterCriticalSection(&g_DisplayManager);
  v6 = qword_18026EEB0;
  v7 = 4;
  LODWORD(v39) = 4;
  if ( !qword_18026EEB0 )
    goto LABEL_65;
  if ( !(*(unsigned int (__fastcall **)(_QWORD))(**((_QWORD **)qword_18026EEB0 + 2) + 104LL))(*((_QWORD *)qword_18026EEB0
                                                                                              + 2))
    || (unsigned int)DrvQueryAdapterPopulationUniqueness() != *((_DWORD *)v6 + 14)
    || qword_18026EEB0 != v6 )
  {
    ReleaseInterface<CRemoteApplicationWindow>(&qword_18026EEB0);
    v4 = 1;
  }
  if ( !qword_18026EEB0 )
  {
LABEL_65:
    *(_DWORD *)Response = CD3DModuleLoaderInternal::CreateD3DObjects(v5, &qword_18026EEB0);
    TranslateDXGIorD3DErrorInContext(*(unsigned int *)Response, 4LL, Response);
    v3 = *(_DWORD *)Response;
    if ( *(int *)Response < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180202590, 1u, *(int *)Response, 0x128u);
  }
  if ( v4 && qword_18026EEC0 )
    CSurfaceManager::ResetTokenThread(qword_18026EEC0);
  v8 = qword_18026EEB0;
  v40 = qword_18026EEB0;
  if ( qword_18026EEB0 )
    (**(void (__fastcall ***)(CDXGIEnumeration *))qword_18026EEB0)(qword_18026EEB0);
  LeaveCriticalSection(&g_DisplayManager);
  if ( v3 < 0 )
    *((_QWORD *)this + 4) = 0LL;
  else
    *((_QWORD *)this + 4) = *((_QWORD *)v8 + 12);
  if ( !*((_QWORD *)this + 4) )
  {
    v7 = 3;
    LODWORD(v39) = 3;
  }
  v10 = (CoRenderHost *)*((_QWORD *)this + 8);
  v11 = (HANDLE *)((char *)this + 8);
  v12 = (void *const *)((char *)this + 8);
  if ( v10 )
  {
    v13 = CoRenderHost::Wait(v10, v7, v12, v9);
    v38 = v13;
  }
  else if ( (*(int (__fastcall **)(_QWORD, _QWORD, void *const *, __int64, _DWORD, int *))(**((_QWORD **)this + 14)
                                                                                         + 56LL))(
              *((_QWORD *)this + 14),
              v7,
              v12,
              0xFFFFFFFFLL,
              0,
              &v38) < 0 )
  {
    v13 = -1;
    v38 = -1;
  }
  else
  {
    v13 = v38;
  }
  if ( v13 == 3 && v7 == 4 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
  if ( !CancelWaitableTimer(*((HANDLE *)this + 3)) )
  {
    while ( 1 )
    {
      v31 = IsKernelDebuggerPresent();
      strcpy(Response, "?");
      v32 = v31;
      if ( !v31 )
      {
        v33 = IsDebuggerPresent();
        v34 = Response[0];
        if ( v33 )
          v34 = 103;
        Response[0] = v34;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        (const wchar_t *)&word_1801EFDD8,
        (const wchar_t *)&word_1801EFDD8,
        L"false",
        "Function: ",
        L"CPartitionVerticalBlankScheduler::WaitForWork",
        ", ",
        L"onecoreuap\\windows\\dwm\\dwmcore\\engine\\partitionverticalblankscheduler.cpp",
        363);
      if ( !v32 )
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
        JUMPOUT(0x1800CDD9CLL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
      switch ( Response[0] )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_88;
        case 'G':
        case 'g':
LABEL_88:
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
          goto LABEL_86;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_86;
        default:
LABEL_86:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_21:
  v14 = v39;
  v15 = (DWORD *)&v41;
  *((_DWORD *)this + 6199) = -1;
  v16 = 0;
  do
  {
    v17 = WaitForSingleObject(*v11, 0);
    v38 = v17;
    *v15 = v17;
    if ( !v17 && v16 == 3 && (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      McTemplateU0(&Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_SCHEDULE_DXGI_OCCLUSION_EVENT);
    ++v16;
    ++v11;
    ++v15;
  }
  while ( v16 < v14 );
  if ( v40 )
  {
    v19 = *(unsigned int (__fastcall **)(CMILRefCountBase *__hidden))(*(_QWORD *)v40 + 8LL);
    if ( v19 == CMILRefCountBase::Release )
      CMILRefCountBase::Release(v40);
    else
      v19(v40);
  }
  v20 = HIDWORD(v42);
  v21 = v42;
  v22 = HIDWORD(v41);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 4) != 0 )
    McTemplateU0qqqqq(v18, (unsigned int)&EVTDESC_SCHEDULE_WFW_Stop, v13, v41, SBYTE4(v41), v42, SBYTE4(v42));
  if ( !v13 || !(_DWORD)v41 )
    v2 = 1;
  if ( v13 == 1 || !v22 )
    v2 |= 2u;
  if ( v13 == 2 || !v21 )
    v2 |= 4u;
  if ( v13 == 3 || !v20 )
  {
    v2 |= 8u;
    CRenderTargetManager::ForceFullRender(*(CRenderTargetManager **)(*((_QWORD *)this + 9) + 72LL));
  }
  v23 = dword_18026EB94;
  if ( (v2 & 1) != 0 )
  {
    v23 = dword_18026EB94 | 8;
    dword_18026EB94 |= 8u;
  }
  if ( (v2 & 2) != 0 )
  {
    v23 |= 0x10u;
    dword_18026EB94 = v23;
  }
  if ( (v2 & 4) != 0 )
  {
    v23 |= 2u;
    dword_18026EB94 = v23;
  }
  if ( (v2 & 8) != 0 )
    dword_18026EB94 = v23 | 4;
}
