/*
 * XREFs of ?SendComplexSyncRequestWow64@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x1400023F0
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001530 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140006451 (memcpy_0.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x140008328 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequestWow64(
        HANDLE *this,
        ULONG a2,
        const void *a3,
        __int16 a4,
        void *a5,
        __int16 Response,
        int *a7)
{
  __int16 v7; // r15
  unsigned int v8; // ebp
  __int16 v13; // ax
  unsigned __int16 v14; // ax
  struct _PORT_MESSAGE *v15; // rax
  struct _PORT_MESSAGE *v16; // rbx
  NTSTATUS v17; // eax
  int v18; // eax
  int v20; // eax
  int v21; // r14d
  BOOL v22; // eax
  char v23; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax

  v7 = Response;
  v8 = 0;
  if ( a4 <= Response )
    v13 = Response;
  else
    v13 = a4;
  v14 = v13 + 48;
  if ( v14 < 0x2B0u )
    v14 = 688;
  v15 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, v14);
  v16 = v15;
  if ( v15 )
  {
    v15[1].u1.Length = a2;
    v15->u1.s1.DataLength = a4 + 8;
    v15->u1.s1.TotalLength = a4 + 48;
    if ( (__int16)(a4 + 48) > 512 )
    {
      while ( 1 )
      {
        v20 = IsKernelDebuggerPresent();
        Response = 63;
        v21 = v20;
        if ( !v20 )
        {
          v22 = IsDebuggerPresent();
          v23 = Response;
          if ( v22 )
            v23 = 103;
          LOBYTE(Response) = v23;
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
        if ( !v21 )
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
          JUMPOUT(0x140006CEDLL);
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
    memcpy_0(&v16[1].DoNotUseThisField, a3, a4);
    v17 = NtRequestWaitReplyPort(this[6], v16, v16);
    v18 = CPortClient::CheckStatus((CPortClient *)this, v17);
    if ( v18 < 0 )
    {
      v8 = v18 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        1u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        8u,
        v18 | 0x10000000,
        0xB2u);
    }
    else
    {
      if ( (v16[1].u2.ZeroInit & 0x80000000) == 0 && a5 && v7 )
      {
        if ( v16->u1.s1.DataLength == v7 + 8 )
        {
          memcpy_0(a5, &v16[1].DoNotUseThisField, v7);
        }
        else
        {
          v8 = -2147024872;
          MilInstrumentationCheckHR_MaybeFailFast(
            1u,
            &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
            8u,
            -2147024872,
            0xBAu);
        }
      }
      *a7 = v16[1].u2.ZeroInit;
    }
    HeapFree(this[10], 0, v16);
    return v8;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(1u, &CPortClient::MILINSTRUMENTATIONHRESULTLIST, 8u, -2147024882, 0xA8u);
    return 2147942414LL;
  }
}
