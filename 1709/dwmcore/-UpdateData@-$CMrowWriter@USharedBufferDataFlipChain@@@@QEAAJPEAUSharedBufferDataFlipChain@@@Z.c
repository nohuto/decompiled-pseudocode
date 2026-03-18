/*
 * XREFs of ?UpdateData@?$CMrowWriter@USharedBufferDataFlipChain@@@@QEAAJPEAUSharedBufferDataFlipChain@@@Z @ 0x18016603C
 * Callers:
 *     ?WriteSharedDataToDwm@CFlipChain@@AEAAJXZ @ 0x1801667DC (-WriteSharedDataToDwm@CFlipChain@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 *     ?Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z @ 0x1801CA78C (-Copy@SharedBufferDataFlipChain@@QEAAJAEBU1@@Z.c)
 */

__int64 __fastcall CMrowWriter<SharedBufferDataFlipChain>::UpdateData(
        __int64 a1,
        const struct SharedBufferDataFlipChain *a2)
{
  __int64 v2; // rdi
  __int16 v5; // cx
  int v6; // eax
  int v7; // ebx
  BOOL v8; // eax
  char v9; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  int v12; // eax
  int v13; // ebx
  BOOL v14; // eax
  char v15; // cl
  HANDLE v16; // rax
  HANDLE v17; // rax
  int v18; // eax
  int v19; // ebx
  BOOL v20; // eax
  char v21; // cl
  HANDLE v22; // rax
  HANDLE v23; // rax
  signed int v24; // eax
  unsigned int v25; // ebx
  signed __int32 v26; // [rsp+60h] [rbp+17h]
  signed __int32 v27; // [rsp+60h] [rbp+17h]
  signed __int32 v28; // [rsp+64h] [rbp+1Bh]
  signed __int32 v29; // [rsp+64h] [rbp+1Bh]
  signed __int32 v30; // [rsp+68h] [rbp+1Fh]
  __int16 Response; // [rsp+B0h] [rbp+67h] BYREF
  __int16 v32; // [rsp+C0h] [rbp+77h] BYREF
  __int16 v33; // [rsp+C8h] [rbp+7Fh] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
  {
    v26 = *(_DWORD *)(v2 + 24);
    LOWORD(v28) = v26;
    HIWORD(v28) = -1;
    if ( HIWORD(v26) != 0xFFFF )
    {
      v30 = _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v28, v26);
      v5 = *(_WORD *)(v2 + 24);
      if ( v30 == v26 )
      {
        if ( v5 != (_WORD)v26 )
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
              (const wchar_t *)&word_1801EFDD8,
              (const wchar_t *)&word_1801EFDD8,
              L"pData->m_Indices.Read == indicesOriginal.Read",
              "Function: ",
              L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
              ", ",
              L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
              448);
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
              __debugbreak();
            }
            DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
            switch ( (char)Response )
            {
              case 'B':
              case 'b':
                goto LABEL_31;
              case 'G':
              case 'g':
                goto LABEL_32;
              case 'I':
              case 'i':
                DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
                continue;
              case 'P':
              case 'p':
                CurrentProcess = GetCurrentProcess();
                TerminateProcess(CurrentProcess, 0xC0000001);
                goto LABEL_17;
              case 'T':
              case 't':
                CurrentThread = GetCurrentThread();
                TerminateThread(CurrentThread, 0xC0000001);
                goto LABEL_17;
              default:
LABEL_17:
                DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
                break;
            }
          }
        }
      }
      else if ( v5 != HIWORD(v26) )
      {
        while ( 1 )
        {
          v12 = IsKernelDebuggerPresent();
          v32 = 63;
          v13 = v12;
          if ( !v12 )
          {
            v14 = IsDebuggerPresent();
            v15 = v32;
            if ( v14 )
              v15 = 103;
            LOBYTE(v32) = v15;
          }
          DbgPrintEx(
            0x65u,
            0,
            "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
            (const wchar_t *)&word_1801EFDD8,
            (const wchar_t *)&word_1801EFDD8,
            L"pData->m_Indices.Read == indicesOriginal.Pending",
            "Function: ",
            L"CMrowWriter<struct SharedBufferDataFlipChain>::UpdateData",
            ", ",
            L"onecoreuap\\windows\\dwm\\common\\shared\\mrow.h",
            453);
          if ( !v13 )
          {
            DbgPrintEx(
              0x65u,
              0,
              "(No kernel debugger is present.) Respond with:\n"
              "  g                    -- Go (continue)\n"
              "  eb 0x%p 'p';g  -- terminate Process\n"
              "  eb 0x%p 't';g  -- terminate Thread\n"
              " or regular debugging.\n",
              &v32,
              &v32);
            __debugbreak();
          }
          DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&v32, 2u);
          switch ( (char)v32 )
          {
            case 'B':
            case 'b':
LABEL_31:
              __debugbreak();
              goto LABEL_32;
            case 'G':
            case 'g':
              goto LABEL_32;
            case 'I':
            case 'i':
              DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
              continue;
            case 'P':
            case 'p':
              v16 = GetCurrentProcess();
              TerminateProcess(v16, 0xC0000001);
              goto LABEL_30;
            case 'T':
            case 't':
              v17 = GetCurrentThread();
              TerminateThread(v17, 0xC0000001);
              goto LABEL_30;
            default:
LABEL_30:
              DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
              break;
          }
        }
      }
    }
LABEL_32:
    if ( *(_WORD *)(v2 + 26) != 0xFFFF )
    {
      while ( 1 )
      {
        v18 = IsKernelDebuggerPresent();
        v33 = 63;
        v19 = v18;
        if ( !v18 )
        {
          v20 = IsDebuggerPresent();
          v21 = v33;
          if ( v20 )
            v21 = 103;
          LOBYTE(v33) = v21;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          (const wchar_t *)&word_1801EFDD8,
          (const wchar_t *)&word_1801EFDD8,
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
            &v33,
            &v33);
          __debugbreak();
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&v33, 2u);
        switch ( (char)v33 )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_46;
          case 'G':
          case 'g':
            goto LABEL_46;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            v22 = GetCurrentProcess();
            TerminateProcess(v22, 0xC0000001);
            goto LABEL_44;
          case 'T':
          case 't':
            v23 = GetCurrentThread();
            TerminateThread(v23, 0xC0000001);
            goto LABEL_44;
          default:
LABEL_44:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_46:
    v27 = *(_DWORD *)(v2 + 24);
    LOWORD(v29) = v27;
    v24 = SharedBufferDataFlipChain::Copy((SharedBufferDataFlipChain *)(v2 + 96LL * ((_WORD)v27 == 0) + 32), a2);
    v25 = v24;
    if ( v24 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v24, 0x1D4u);
    }
    else
    {
      HIWORD(v29) = (_WORD)v27 == 0;
      _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 24), v29, v27);
    }
    return v25;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x88982F0C, 0x1AAu);
    return 2291674892LL;
  }
}
