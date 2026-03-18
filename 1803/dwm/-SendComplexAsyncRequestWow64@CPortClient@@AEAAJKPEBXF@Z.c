/*
 * XREFs of ?SendComplexAsyncRequestWow64@CPortClient@@AEAAJKPEBXF@Z @ 0x1400015E0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001530 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140006451 (memcpy_0.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x140008328 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPortClient::SendComplexAsyncRequestWow64(HANDLE *this, ULONG a2, const void *a3, __int16 a4)
{
  unsigned int v4; // r14d
  struct _PORT_MESSAGE *v9; // rax
  struct _PORT_MESSAGE *v10; // rbx
  NTSTATUS v11; // eax
  int v12; // eax
  int v14; // eax
  int v15; // r15d
  BOOL v16; // eax
  char v17; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+A8h] [rbp+20h] BYREF

  v4 = 0;
  if ( a3 )
  {
    v9 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, (unsigned __int16)(a4 + 48));
    v10 = v9;
    if ( v9 )
    {
      v9[1].u1.Length = a2;
      v9->u1.s1.DataLength = a4 + 8;
      v9->u1.s1.TotalLength = a4 + 48;
      if ( (__int16)(a4 + 48) > 512 )
      {
        while ( 1 )
        {
          v14 = IsKernelDebuggerPresent();
          Response = 63;
          v15 = v14;
          if ( !v14 )
          {
            v16 = IsDebuggerPresent();
            v17 = Response;
            if ( v16 )
              v17 = 103;
            LOBYTE(Response) = v17;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            word_14000A4A4,
            word_14000A4A4,
            L"pMsg->u1.s1.TotalLength <= 512",
            "Function: ",
            L"LpcVerifyOutgoingPayloadSize",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\lpcshared.h",
            310);
          if ( !v15 )
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
            JUMPOUT(0x140006850LL);
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
          switch ( (char)Response )
          {
            case 'B':
            case 'b':
              __debugbreak();
              goto LABEL_4;
            case 'G':
            case 'g':
              goto LABEL_4;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              CurrentProcess = GetCurrentProcess();
              TerminateProcess(CurrentProcess, 0xC0000001);
              goto LABEL_20;
            case 'T':
            case 't':
              CurrentThread = GetCurrentThread();
              TerminateThread(CurrentThread, 0xC0000001);
              goto LABEL_20;
            default:
LABEL_20:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
LABEL_4:
      memcpy_0(&v10[1].DoNotUseThisField, a3, a4);
      v11 = NtRequestPort(this[6], v10);
      v12 = CPortClient::CheckStatus((CPortClient *)this, v11);
      if ( v12 < 0 )
      {
        v4 = v12 | 0x10000000;
        MilInstrumentationCheckHR_MaybeFailFast(
          1u,
          &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
          8u,
          v12 | 0x10000000,
          0x69u);
      }
      HeapFree(this[10], 0, v10);
      return v4;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0x5Fu);
      return 2147942414LL;
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024890, 0x5Cu);
    return 2147942406LL;
  }
}
