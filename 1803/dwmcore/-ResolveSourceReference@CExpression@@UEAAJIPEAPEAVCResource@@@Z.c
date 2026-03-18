/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x180054AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x18001DA50 (-InternalAddRef@CMILCOMBase@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2, struct CResource **a3)
{
  volatile signed __int32 *v3; // rbx
  __int64 (__fastcall *v4)(CResource *); // rax
  int v6; // eax
  int v7; // edi
  BOOL v8; // eax
  char v9; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 < *((_DWORD *)this + 96) && *(_QWORD *)(8LL * a2 + *((_QWORD *)this + 47)) )
  {
    _mm_lfence();
    v3 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 47) + 8LL * a2) + 8LL);
  }
  else
  {
    v3 = 0LL;
  }
  *a3 = (struct CResource *)v3;
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v3 + 8LL);
    if ( v4 == CResource::AddRef )
    {
      if ( *((int *)v3 + 2) < 0 )
      {
        while ( 1 )
        {
          v6 = IsKernelDebuggerPresent();
          Response = 63;
          v7 = v6;
          if ( !v6 )
          {
            v8 = IsDebuggerPresent();
            v9 = Response;
            if ( v8 )
              v9 = 103;
            LOBYTE(Response) = v9;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
            word_180252860,
            word_180252860,
            "Function: ",
            L"CMILCOMBase::InternalAddRef",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
            31);
          if ( !v7 )
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              &Response,
              &Response);
            JUMPOUT(0x180104885LL);
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
          switch ( (char)Response )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_7;
            case 'G':
            case 'g':
              goto LABEL_7;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_25;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_25;
            default:
LABEL_25:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_7:
      _InterlockedIncrement(v3 + 2);
      return 0LL;
    }
    if ( v4 != CMILCOMBase::InternalAddRef )
    {
      v4((CResource *)v3);
      return 0LL;
    }
    CMILCOMBase::InternalAddRef((CMILCOMBase *)v3);
    return 0LL;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180239D30, 1u, -2147467259, 0x198u);
    return 2147500037LL;
  }
}
