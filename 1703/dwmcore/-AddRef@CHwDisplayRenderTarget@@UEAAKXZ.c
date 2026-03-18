/*
 * XREFs of ?AddRef@CHwDisplayRenderTarget@@UEAAKXZ @ 0x180039DE0
 * Callers:
 *     ?AddRef@CHwTextureRenderTarget@@WIA@EAAKXZ @ 0x1800D6100 (-AddRef@CHwTextureRenderTarget@@WIA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800D6110 (-AddRef@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800D6120 (-AddRef@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800D6130 (-AddRef@CHwTextureRenderTarget@@WMA@EAAKXZ.c)
 *     ?AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800D6140 (-AddRef@CHwTextureRenderTarget@@WMI@EAAKXZ.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::AddRef(CHwDisplayRenderTarget *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  if ( *((int *)this + 34) < 0 )
  {
    while ( 1 )
    {
      v3 = IsKernelDebuggerPresent();
      Response = 63;
      v4 = v3;
      if ( !v3 )
      {
        v5 = IsDebuggerPresent();
        v6 = Response;
        if ( v5 )
          v6 = 103;
        LOBYTE(Response) = v6;
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
      if ( !v4 )
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
        JUMPOUT(0x1800E3B43LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 34);
        case 'G':
        case 'g':
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 34);
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_14;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_14;
        default:
LABEL_14:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 34);
}
