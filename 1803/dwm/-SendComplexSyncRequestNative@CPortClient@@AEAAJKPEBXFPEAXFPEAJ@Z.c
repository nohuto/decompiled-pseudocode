/*
 * XREFs of ?SendComplexSyncRequestNative@CPortClient@@AEAAJKPEBXFPEAXFPEAJ@Z @ 0x140007A70
 * Callers:
 *     <none>
 * Callees:
 *     ?CheckStatus@CPortClient@@AEAAJJ@Z @ 0x140001530 (-CheckStatus@CPortClient@@AEAAJJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x140001950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memcpy_0 @ 0x140006451 (memcpy_0.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x140008328 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPortClient::SendComplexSyncRequestNative(
        HANDLE *this,
        ULONG a2,
        const void *a3,
        __int16 a4,
        void *a5,
        __int16 Response,
        int *a7)
{
  __int16 v7; // r12
  unsigned int v8; // edi
  __int16 v10; // ax
  unsigned __int16 v12; // ax
  struct _PORT_MESSAGE *v15; // rax
  struct _PORT_MESSAGE *v16; // rbx
  int v18; // eax
  int v19; // esi
  BOOL v20; // eax
  char v21; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  NTSTATUS v24; // eax
  int v25; // eax

  v7 = Response;
  v8 = 0;
  v10 = a4;
  if ( a4 <= Response )
    v10 = Response;
  v12 = v10 + 48;
  if ( v12 < 0x2B0u )
    v12 = 688;
  v15 = (struct _PORT_MESSAGE *)HeapAlloc(this[10], 8u, v12);
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
        v18 = IsKernelDebuggerPresent();
        Response = 63;
        v19 = v18;
        if ( !v18 )
        {
          v20 = IsDebuggerPresent();
          v21 = Response;
          if ( v20 )
            v21 = 103;
          LOBYTE(Response) = v21;
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
        if ( !v19 )
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
          __debugbreak();
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( (char)Response )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_21;
          case 'G':
          case 'g':
            goto LABEL_21;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_19;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_19;
          default:
LABEL_19:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_21:
    memcpy_0(&v16[1].DoNotUseThisField, a3, a4);
    v24 = NtRequestWaitReplyPort(this[6], v16, v16);
    v25 = CPortClient::CheckStatus((CPortClient *)this, v24);
    if ( v25 >= 0 )
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
    else
    {
      v8 = v25 | 0x10000000;
      MilInstrumentationCheckHR_MaybeFailFast(
        1u,
        &CPortClient::MILINSTRUMENTATIONHRESULTLIST,
        8u,
        v25 | 0x10000000,
        0xB2u);
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
