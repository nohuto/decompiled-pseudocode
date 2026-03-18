/*
 * XREFs of ?CreateFromSharedSection@CD2DSharedBuffer@@SAJPEAXIPEAVCSharedSection@@PEAPEAUID2D1PrivateCompositorBuffer@@@Z @ 0x1800BE9D0
 * Callers:
 *     ?CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z @ 0x1800979B0 (-CreateNewGenerator@CPrimitiveGroup@@AEAAJPEAPEAVCPrimitiveGroupDrawListGenerator@@@Z.c)
 *     ?CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019E840 (-CreateNewD2DCommandList@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801CD38C (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CD2DSharedBuffer::CreateFromSharedSection(
        void *a1,
        int a2,
        struct CSharedSection *a3,
        struct ID2D1PrivateCompositorBuffer **a4)
{
  char *v8; // rax
  char *v9; // rbx
  int v10; // eax
  __int64 result; // rax
  int v12; // eax
  int v13; // ebp
  BOOL v14; // eax
  CHAR v15; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  int v18; // eax
  int v19; // edi
  BOOL v20; // eax
  char v21; // cl
  HANDLE v22; // rax
  HANDLE v23; // rax
  CHAR Response[4]; // [rsp+60h] [rbp-38h] BYREF
  CHAR v25[52]; // [rsp+64h] [rbp-34h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]

  v8 = (char *)HeapAlloc(WPF::g_processHeap, 0, 0x30uLL);
  v9 = v8;
  if ( !v8 )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  memset_0(v8, 0, 0x30uLL);
  v10 = 0;
  *((_QWORD *)v9 + 3) = a1;
  *((_DWORD *)v9 + 8) = a2;
  *(_QWORD *)v9 = &CD2DSharedBuffer::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)v9 + 2) = &CD2DSharedBuffer::`vftable'{for `ID2D1PrivateCompositorBuffer'};
  *((_DWORD *)v9 + 2) = 0;
  *((_QWORD *)v9 + 5) = a3;
  if ( a3 )
  {
    if ( *((int *)a3 + 2) < 0 )
    {
      while ( 1 )
      {
        v12 = IsKernelDebuggerPresent();
        strcpy(Response, "?");
        v13 = v12;
        if ( !v12 )
        {
          v14 = IsDebuggerPresent();
          v15 = Response[0];
          if ( v14 )
            v15 = 103;
          Response[0] = v15;
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
            Response,
            Response);
          JUMPOUT(0x180132EEDLL);
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
    v10 = *((_DWORD *)v9 + 2);
  }
  if ( v10 < 0 )
  {
    while ( 1 )
    {
      v18 = IsKernelDebuggerPresent();
      strcpy(v25, "?");
      v19 = v18;
      if ( !v18 )
      {
        v20 = IsDebuggerPresent();
        v21 = v25[0];
        if ( v20 )
          v21 = 103;
        v25[0] = v21;
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
          v25,
          v25);
        JUMPOUT(0x180133032LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", v25, 2u);
      switch ( v25[0] )
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
          v22 = GetCurrentProcess();
          TerminateProcess(v22, 0xC0000001);
          goto LABEL_31;
        case 'T':
        case 't':
          v23 = GetCurrentThread();
          TerminateThread(v23, 0xC0000001);
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
