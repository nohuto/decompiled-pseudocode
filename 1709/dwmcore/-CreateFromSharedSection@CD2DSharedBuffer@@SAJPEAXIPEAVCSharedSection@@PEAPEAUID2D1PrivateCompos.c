/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x180046460
 * Callers:
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180026B94 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x180026FB4 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800C3238 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  char *v8; // rax
  char *v9; // rbx
  __int64 result; // rax
  int v11; // eax
  int v12; // ebp
  BOOL v13; // eax
  CHAR v14; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  int v17; // eax
  int v18; // edi
  BOOL v19; // eax
  char v20; // cl
  HANDLE v21; // rax
  HANDLE v22; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-38h] BYREF
  CHAR v24[52]; // [rsp+64h] [rbp-34h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v8, 0, 0x30uLL);
  *((_QWORD *)v9 + 3) = a1;
  *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_DWORD *)v9 + 8) = a2;
  *((_QWORD *)v9 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  *((_DWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 5) = a3;
  if ( a3 )
  {
    if ( *((int *)a3 + 2) < 0 )
    {
      while ( 1 )
      {
        v11 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v12 = v11;
        if ( !v11 )
        {
          v13 = IsDebuggerPresent();
          v14 = Response[0];
          if ( v13 )
            v14 = 103;
          Response[0] = v14;
        }
        DbgPrintEx(
          0x65u,
          0,
          "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
          L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
          (const wchar_t *)&word_1801EFDD8,
          (const wchar_t *)&word_1801EFDD8,
          "Function: ",
          L"CMILCOMBase::InternalAddRef",
          ", ",
          L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
          31);
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
            Response,
            Response);
          JUMPOUT(0x1800E2A99LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", Response, 2u);
        switch ( Response[0] )
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
            goto LABEL_18;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_18;
          default:
LABEL_18:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_4:
    _InterlockedIncrement((volatile signed __int32 *)a3 + 2);
  }
  if ( *((int *)v9 + 2) < 0 )
  {
    while ( 1 )
    {
      v17 = IsKernelDebuggerPresent();
      strcpy(v24, "?");
      v18 = v17;
      if ( !v17 )
      {
        v19 = IsDebuggerPresent();
        v20 = v24[0];
        if ( v19 )
          v20 = 103;
        v24[0] = v20;
      }
      DbgPrintEx(
        0x65u,
        0,
        "\n*** Assertion failed: %ls%ls%ls\n***   %s%ls%sSource: `%ls:%ld`\n\n",
        L"Tried to AddRef an object which has previously been freed (refcount went to 0).",
        (const wchar_t *)&word_1801EFDD8,
        (const wchar_t *)&word_1801EFDD8,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"onecoreuap\\windows\\dwm\\common\\shared\\milcom.cpp",
        31);
      if ( !v18 )
      {
        DbgPrintEx(
          0x65u,
          0,
          "(No kernel debugger is present.) Respond with:\n"
          "  g                    -- Go (continue)\n"
          "  eb 0x%p 'p';g  -- terminate Process\n"
          "  eb 0x%p 't';g  -- terminate Thread\n"
          " or regular debugging.\n",
          v24,
          v24);
        JUMPOUT(0x1800E2BDELL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", v24, 2u);
      switch ( v24[0] )
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
          v21 = GetCurrentProcess();
          TerminateProcess(v21, 0xC0000001);
          goto LABEL_31;
        case 'T':
        case 't':
          v22 = GetCurrentThread();
          TerminateThread(v22, 0xC0000001);
          goto LABEL_31;
        default:
LABEL_31:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_6:
  _InterlockedIncrement((volatile signed __int32 *)v9 + 2);
  result = 0LL;
  *a4 = (struct ID2D1PrivateCompositorBuffer *)(v9 + 16);
  return result;
}
