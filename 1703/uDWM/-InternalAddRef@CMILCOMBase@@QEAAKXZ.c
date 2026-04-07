/*
 * XREFs of ?InternalAddRef@CMILCOMBase@@QEAAKXZ @ 0x1800134B0
 * Callers:
 *     ?AddRef@CBitmap@@UEAAKXZ @ 0x18003ED50 (-AddRef@CBitmap@@UEAAKXZ.c)
 *     ?Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_MODE@@PEAPEAVIBitmapSource@@@Z @ 0x18003F360 (-Create@CCompressedSourceBitmap@@SAJPEAUIWICImagingFactory@@PEBXKNNW4DXGI_FORMAT@@W4DXGI_ALPHA_M.c)
 *     ?HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z @ 0x18004031C (-HrCreateBitmapFromWICBitmapSource@@YAJPEAUIWICBitmapSource@@PEAPEAVIBitmapSource@@@Z.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ @ 0x18004E120 (-AddRef@CCompressedSourceBitmap@@WBA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ @ 0x18004E130 (-AddRef@CCompressedSourceBitmap@@WBI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ @ 0x18004E140 (-AddRef@CCompressedSourceBitmap@@WCA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ @ 0x18004E150 (-AddRef@CCompressedSourceBitmap@@WCI@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ @ 0x18004E160 (-AddRef@CCompressedSourceBitmap@@WDA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ @ 0x18004E170 (-AddRef@CCompressedSourceBitmap@@WPA@EAAKXZ.c)
 *     ?AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ @ 0x18004E180 (-AddRef@CCompressedSourceBitmap@@WPI@EAAKXZ.c)
 * Callees:
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1800A1364 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CMILCOMBase::InternalAddRef(CMILCOMBase *this)
{
  int v3; // eax
  int v4; // edi
  BOOL v5; // eax
  char v6; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+90h] [rbp+8h] BYREF

  if ( *((int *)this + 2) < 0 )
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
        word_1800AB3A8,
        word_1800AB3A8,
        "Function: ",
        L"CMILCOMBase::InternalAddRef",
        ", ",
        L"windows\\dwm\\common\\shared\\milcom.cpp",
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
        JUMPOUT(0x1800507D7LL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
        case 'G':
        case 'g':
          return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
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
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}
