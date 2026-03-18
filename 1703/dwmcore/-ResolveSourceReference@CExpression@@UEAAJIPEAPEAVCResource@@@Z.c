/*
 * XREFs of ?ResolveSourceReference@CExpression@@UEAAJIPEAPEAVCResource@@@Z @ 0x180033710
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CExpression::ResolveSourceReference(CExpression *this, unsigned int a2, struct CResource **a3)
{
  volatile signed __int32 *v3; // rbx
  unsigned int (__fastcall *v4)(CResource *__hidden); // rax
  int v6; // eax
  int v7; // edi
  BOOL v8; // eax
  char v9; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+98h] [rbp+10h] BYREF

  if ( a2 >= *((_DWORD *)this + 84) || !*(_QWORD *)(8LL * a2 + *((_QWORD *)this + 39)) )
  {
    *a3 = 0LL;
    goto LABEL_25;
  }
  _mm_lfence();
  v3 = *(volatile signed __int32 **)(*(_QWORD *)(*((_QWORD *)this + 39) + 8LL * a2) + 8LL);
  *a3 = (struct CResource *)v3;
  if ( !v3 )
  {
LABEL_25:
    MilInstrumentationCheckHR(0x14u, &dword_1801F366C, 1u, -2147467259, 0x145u);
    return 2147500037LL;
  }
  v4 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)v3 + 8LL);
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
          word_1801D5868,
          word_1801D5868,
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
          JUMPOUT(0x1800DFF55LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( (char)Response )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_6;
          case 'G':
          case 'g':
            goto LABEL_6;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_22;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_22;
          default:
LABEL_22:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_6:
    _InterlockedIncrement(v3 + 2);
    return 0LL;
  }
  if ( v4 != CBitmapOfDeviceBitmaps::AddRef )
  {
    v4((CResource *)v3);
    return 0LL;
  }
  CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)v3);
  return 0LL;
}
