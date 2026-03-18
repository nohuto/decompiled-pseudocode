/*
 * XREFs of ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x1800B1440
 * Callers:
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1800B1154 (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1800B185C (-Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMrowWriter<SharedBufferDataFlipChain>::UpdateData(
        __int64 a1,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rax
  unsigned __int16 v4; // si
  __int64 v5; // rdi
  __int16 v6; // cx
  int v7; // eax
  int v8; // ebx
  BOOL v9; // eax
  char v10; // cl
  int v11; // eax
  int v12; // ebx
  BOOL v13; // eax
  char v14; // cl
  int v15; // eax
  unsigned int v16; // ebx
  int v18; // eax
  int v19; // ebx
  BOOL v20; // eax
  char v21; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  HANDLE v24; // rax
  HANDLE v25; // rax
  HANDLE v26; // rax
  HANDLE v27; // rax
  signed __int32 v28; // [rsp+68h] [rbp+17h]
  signed __int32 v29; // [rsp+68h] [rbp+17h]
  signed __int32 v30; // [rsp+6Ch] [rbp+1Bh]
  signed __int32 v31; // [rsp+6Ch] [rbp+1Bh]
  signed __int32 v32; // [rsp+70h] [rbp+1Fh]
  __int16 Response; // [rsp+B8h] [rbp+67h] BYREF
  __int16 v34; // [rsp+C8h] [rbp+77h] BYREF
  __int16 v35; // [rsp+D0h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v4 = 0;
    v5 = v2 + 16;
    v28 = *(_DWORD *)(v2 + 24);
    LOWORD(v30) = v28;
    HIWORD(v30) = -1;
    if ( HIWORD(v28) != 0xFFFF )
    {
      v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v30, v28);
      v6 = *(_WORD *)(v2 + 24);
      if ( v32 == v28 )
      {
        if ( v6 != (_WORD)v28 )
        {
          while ( 1 )
          {
            v7 = IsKernelDebuggerPresent();
            Response = 63;
            v8 = v7;
            if ( !v7 )
            {
              v9 = IsDebuggerPresent();
              v10 = Response;
              if ( v9 )
                v10 = 103;
              LOBYTE(Response) = v10;
            }
            DbgPrintEx(
              0x65u,
              0,
              "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
              word_1801D5868,
              word_1801D5868,
              L"pData->m_Indices.Read == indicesOriginal.Read",
              "Function: ",
              L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
              ", ",
              L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
              448);
            if ( !v8 )
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
                goto LABEL_45;
              case 'G':
              case 'g':
                goto LABEL_22;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_11;
              case 'T':
              case 't':
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_11;
              default:
LABEL_11:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
      }
      else if ( v6 != HIWORD(v28) )
      {
        while ( 1 )
        {
          v11 = IsKernelDebuggerPresent();
          v34 = 63;
          v12 = v11;
          if ( !v11 )
          {
            v13 = IsDebuggerPresent();
            v14 = v34;
            if ( v13 )
              v14 = 103;
            LOBYTE(v34) = v14;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            word_1801D5868,
            word_1801D5868,
            L"pData->m_Indices.Read == indicesOriginal.Pending",
            "Function: ",
            L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
            453);
          if ( !v12 )
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              &v34,
              &v34);
            __debugbreak();
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&v34, 2u);
          switch ( (char)v34 )
          {
            case 'B':
            case 'b':
LABEL_45:
              __debugbreak();
              goto LABEL_22;
            case 'G':
            case 'g':
              goto LABEL_22;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              v24 = GetCurrentProcess();
              TerminateProcess(v24, 0xC0000001);
              goto LABEL_20;
            case 'T':
            case 't':
              v25 = GetCurrentThread();
              TerminateThread(v25, 0xC0000001);
              goto LABEL_20;
            default:
LABEL_20:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
    }
LABEL_22:
    if ( *(_WORD *)(v5 + 10) != 0xFFFF )
    {
      while ( 1 )
      {
        v18 = IsKernelDebuggerPresent();
        v35 = 63;
        v19 = v18;
        if ( !v18 )
        {
          v20 = IsDebuggerPresent();
          v21 = v35;
          if ( v20 )
            v21 = 103;
          LOBYTE(v35) = v21;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          word_1801D5868,
          word_1801D5868,
          L"pData->m_Indices.Pending == NoData",
          "Function: ",
          L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
          457);
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
            &v35,
            &v35);
          __debugbreak();
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&v35, 2u);
        switch ( (char)v35 )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_23;
          case 'G':
          case 'g':
            goto LABEL_23;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            v26 = GetCurrentProcess();
            TerminateProcess(v26, 0xC0000001);
            goto LABEL_34;
          case 'T':
          case 't':
            v27 = GetCurrentThread();
            TerminateThread(v27, 0xC0000001);
            goto LABEL_34;
          default:
LABEL_34:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_23:
    v29 = *(_DWORD *)(v5 + 8);
    LOWORD(v31) = v29;
    if ( !(_WORD)v29 )
      v4 = 1;
    HIWORD(v31) = v4;
    v15 = SharedBufferDataFlipChain::Copy((SharedBufferDataFlipChain *)(v5 + 96LL * v4 + 16), a2);
    v16 = v15;
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x1D4u);
    else
      _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v31, v29);
    return v16;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003292404, 0x1AAu);
    return 2291674892LL;
  }
}
