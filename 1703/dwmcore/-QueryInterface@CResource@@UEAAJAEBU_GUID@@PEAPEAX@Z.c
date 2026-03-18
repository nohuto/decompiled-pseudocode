/*
 * XREFs of ?QueryInterface@CResource@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180034840
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x180189314 (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CResource::QueryInterface(CResource *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // edi
  volatile signed __int32 *v6; // rbx
  __int64 (__fastcall *v7)(CResource *); // rax
  __int64 result; // rax
  int v9; // eax
  int v10; // esi
  BOOL v11; // eax
  char v12; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  __int16 Response; // [rsp+A0h] [rbp+18h] BYREF

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    result = (*(__int64 (__fastcall **)(CResource *))(*(_QWORD *)this + 32LL))(this);
    v5 = result;
    if ( (int)result < 0 )
    {
      *a3 = 0LL;
      return result;
    }
  }
  else
  {
    *a3 = this;
    v5 = 0;
  }
  v6 = (volatile signed __int32 *)*a3;
  v7 = *(__int64 (__fastcall **)(CResource *))(*(_QWORD *)v6 + 8LL);
  if ( v7 == CResource::AddRef )
  {
    if ( *((int *)v6 + 2) < 0 )
    {
      while ( 1 )
      {
        v9 = IsKernelDebuggerPresent();
        Response = 63;
        v10 = v9;
        if ( !v9 )
        {
          v11 = IsDebuggerPresent();
          v12 = Response;
          if ( v11 )
            v12 = 103;
          LOBYTE(Response) = v12;
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
        if ( !v10 )
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
          JUMPOUT(0x1800E0FF8LL);
        }
        DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
        switch ( (char)Response )
        {
          case 'B':
          case 'b':
            __debugbreak();
            goto LABEL_8;
          case 'G':
          case 'g':
            goto LABEL_8;
          case 'I':
          case 'i':
            DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
            continue;
          case 'P':
          case 'p':
            CurrentProcess = GetCurrentProcess();
            TerminateProcess(CurrentProcess, 0xC0000001);
            goto LABEL_24;
          case 'T':
          case 't':
            CurrentThread = GetCurrentThread();
            TerminateThread(CurrentThread, 0xC0000001);
            goto LABEL_24;
          default:
LABEL_24:
            DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
            break;
        }
      }
    }
LABEL_8:
    _InterlockedIncrement(v6 + 2);
  }
  else
  {
    v7((CResource *)v6);
  }
  return v5;
}
