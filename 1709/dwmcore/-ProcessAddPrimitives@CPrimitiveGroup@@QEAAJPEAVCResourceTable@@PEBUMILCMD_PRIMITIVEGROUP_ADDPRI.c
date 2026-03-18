/*
 * XREFs of ?ProcessAddPrimitives@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_ADDPRIMITIVES@@@Z @ 0x1800276E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ @ 0x1800272D4 (-ResolveSharedMemoryBuffer@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x180027E70 (-IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180068870 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180084C20 (-IsOfType@CSharedSection@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     McTemplateU0qxqq @ 0x1801752C4 (McTemplateU0qxqq.c)
 *     ?IsKernelDebuggerPresent@@YAHXZ @ 0x1801941BC (-IsKernelDebuggerPresent@@YAHXZ.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessAddPrimitives(
        volatile signed __int32 **this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_ADDPRIMITIVES *a3)
{
  unsigned int v4; // edx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 (__fastcall *v10)(__int64, __int64); // rax
  char v11; // al
  int v12; // edx
  int v13; // ecx
  volatile signed __int32 *v14; // rdi
  bool (__fastcall *v15)(CPrimitiveGroup *__hidden); // rax
  bool IsEmptyDrawing; // al
  volatile signed __int32 *v17; // rcx
  char v18; // si
  __int64 v19; // rax
  bool (__fastcall *v20)(CPrimitiveGroup *__hidden); // rax
  char v21; // al
  __int64 v23; // r14
  __int64 v24; // rbp
  __int64 v25; // rdi
  int v26; // eax
  int v27; // r14d
  BOOL v28; // eax
  char v29; // cl
  HANDLE CurrentProcess; // rax
  HANDLE CurrentThread; // rax
  volatile signed __int32 *v32; // rcx
  __int16 Response; // [rsp+A8h] [rbp+10h] BYREF

  v4 = *((_DWORD *)a3 + 2);
  if ( !v4
    || v4 >= *((_DWORD *)a2 + 7)
    || (v7 = *((_QWORD *)a2 + 5), !*(_DWORD *)(v4 * *((_DWORD *)a2 + 6) + v7))
    || (v8 = v7 + v4 * *((_DWORD *)a2 + 6), (v9 = *(_QWORD *)(v8 + 8)) == 0)
    || ((v10 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48LL), v10 != CSharedSection::IsOfType)
      ? (v11 = v10(v9, 118LL))
      : (v11 = CSharedSection::IsOfType(v9, 118LL)),
        !v11 || (v14 = *(volatile signed __int32 **)(v8 + 8)) == 0LL) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xCDu);
    return 2291663875LL;
  }
  if ( *((_DWORD *)a3 + 3) < 0x3Cu )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003303421, 0xD2u);
    return 2291663875LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200) != 0 )
    McTemplateU0qxqq(v13, v12, *((_DWORD *)a2 + 12), (_DWORD)this, *((_DWORD *)a3 + 1), *((_DWORD *)a3 + 2));
  v15 = (bool (__fastcall *)(CPrimitiveGroup *__hidden))*((_QWORD *)*this + 24);
  if ( v15 == CPrimitiveGroup::IsEmptyDrawing )
    IsEmptyDrawing = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)this);
  else
    IsEmptyDrawing = v15((CPrimitiveGroup *)this);
  v17 = this[53];
  v18 = IsEmptyDrawing;
  if ( v17 && _InterlockedExchangeAdd(v17 + 2, 0xFFFFFFFF) == 1 )
  {
    --*((_DWORD *)v17 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v17 + 24LL))(v17, 1LL);
  }
  this[53] = v14;
  if ( *((int *)v14 + 2) < 0 )
  {
    while ( 1 )
    {
      v26 = IsKernelDebuggerPresent();
      Response = 63;
      v27 = v26;
      if ( !v26 )
      {
        v28 = IsDebuggerPresent();
        v29 = Response;
        if ( v28 )
          v29 = 103;
        LOBYTE(Response) = v29;
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
      if ( !v27 )
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
        JUMPOUT(0x1800D6AFDLL);
      }
      DbgPrompt("Break, Go (continue), terminate Process, or terminate Thread (bgpt)? ", (PCH)&Response, 2u);
      switch ( (char)Response )
      {
        case 'B':
        case 'b':
          __debugbreak();
          goto LABEL_18;
        case 'G':
        case 'g':
          goto LABEL_18;
        case 'I':
        case 'i':
          DbgPrintEx(0x65u, 0, "'i' is only supported with debug builds.\n");
          continue;
        case 'P':
        case 'p':
          CurrentProcess = GetCurrentProcess();
          TerminateProcess(CurrentProcess, 0xC0000001);
          goto LABEL_42;
        case 'T':
        case 't':
          CurrentThread = GetCurrentThread();
          TerminateThread(CurrentThread, 0xC0000001);
          goto LABEL_42;
        default:
LABEL_42:
          DbgPrintEx(0x65u, 0, "Unrecognized response.\n");
          break;
      }
    }
  }
LABEL_18:
  _InterlockedIncrement(v14 + 2);
  *((_DWORD *)this + 108) = *((_DWORD *)a3 + 3);
  *((_DWORD *)this + 109) = *((_DWORD *)a3 + 4);
  v19 = *((unsigned int *)this + 34);
  this[63] = 0LL;
  this[64] = 0LL;
  this[65] = 0LL;
  this[66] = 0LL;
  if ( (_DWORD)v19 )
  {
    v23 = 0LL;
    v24 = v19;
    do
    {
      v25 = *(_QWORD *)&this[14][v23];
      CD2DResource::RemoveResourceNotifier((CD2DResource *)(v25 + 16), (const struct IDeviceResourceNotify *)(this + 7));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v25 + 16LL))(v25);
      v23 += 2LL;
      --v24;
    }
    while ( v24 );
  }
  *((_DWORD *)this + 34) = 0;
  DynArrayImpl<0>::ShrinkToSize(this + 14, 8LL);
  if ( this[20] )
  {
    v32 = this[20];
    if ( v32 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v32 + 8LL))(v32);
      this[20] = 0LL;
    }
    (*((void (__fastcall **)(volatile signed __int32 **, __int64))*this + 8))(this, 5LL);
  }
  CPrimitiveGroup::ResolveSharedMemoryBuffer((CPrimitiveGroup *)this);
  v20 = (bool (__fastcall *)(CPrimitiveGroup *__hidden))*((_QWORD *)*this + 24);
  if ( v20 == CPrimitiveGroup::IsEmptyDrawing )
    v21 = CPrimitiveGroup::IsEmptyDrawing((CPrimitiveGroup *)this);
  else
    v21 = v20((CPrimitiveGroup *)this);
  if ( v18 != v21 )
    (*((void (__fastcall **)(volatile signed __int32 **, __int64))*this + 8))(this, 3LL);
  return 0LL;
}
