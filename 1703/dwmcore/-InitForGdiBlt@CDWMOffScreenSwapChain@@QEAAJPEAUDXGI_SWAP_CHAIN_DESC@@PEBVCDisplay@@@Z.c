/*
 * XREFs of ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1800CEE04
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1800CD48C (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@PEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::InitForGdiBlt(
        CDWMOffScreenSwapChain *this,
        struct DXGI_SWAP_CHAIN_DESC *a2,
        const struct CDisplay *a3)
{
  UINT Width; // esi
  UINT Height; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  HMODULE v9; // rcx
  NTSTATUS v10; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v12; // ebx
  HANDLE v13; // rbx
  HANDLE v14; // rax
  __int64 (__fastcall *v15)(_OWORD *, char *); // rax
  int v16; // eax
  int v17; // ebx
  int v19; // r9d
  signed int LastError; // eax
  unsigned int SectionPageProtection; // [rsp+20h] [rbp-49h]
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-19h] BYREF
  union _LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-11h] BYREF
  __int128 v24; // [rsp+60h] [rbp-9h]
  __int128 v25; // [rsp+70h] [rbp+7h]
  _OWORD v26[4]; // [rsp+80h] [rbp+17h] BYREF
  void *SectionHandle; // [rsp+D0h] [rbp+67h] BYREF
  HANDLE TargetHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+E8h] [rbp+7Fh] BYREF

  Width = a2->BufferDesc.Width;
  Height = a2->BufferDesc.Height;
  SectionHandle = 0LL;
  TargetHandle = 0LL;
  LibraryW = LoadLibraryW(L"rdsdwmdr.dll");
  *((_QWORD *)this + 57) = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "DwmIndirectCreate");
    v9 = (HMODULE)*((_QWORD *)this + 57);
    *((_QWORD *)this + 58) = ProcAddress;
    *((_QWORD *)this + 59) = GetProcAddress(v9, "DwmIndirectSetDebugFlag");
  }
  if ( !*((_QWORD *)this + 58) )
  {
    v17 = -2147024809;
    SectionPageProtection = 260;
    goto LABEL_14;
  }
  if ( !*((_QWORD *)this + 48) )
  {
    HIDWORD(v25) = Height;
    MaximumSize.QuadPart = 4 * Width * Height;
    v10 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v10 < 0 )
    {
      v17 = v10 | 0x10000000;
      SectionPageProtection = 285;
    }
    else
    {
      ViewSize = 0LL;
      SectionOffset.QuadPart = 0LL;
      *((_QWORD *)this + 48) = SectionHandle;
      CurrentProcess = GetCurrentProcess();
      v12 = NtMapViewOfSection(
              *((HANDLE *)this + 48),
              CurrentProcess,
              (PVOID *)this + 49,
              0LL,
              0LL,
              &SectionOffset,
              &ViewSize,
              ViewUnmap,
              0,
              4u);
      if ( v12 >= 0 )
        goto LABEL_7;
      v17 = v12 | 0x10000000;
      SectionPageProtection = 303;
    }
LABEL_14:
    v19 = v17;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, SectionPageProtection);
    return (unsigned int)v17;
  }
  HIDWORD(v25) = -Height;
LABEL_7:
  SetLastError(0);
  v13 = GetCurrentProcess();
  v14 = GetCurrentProcess();
  if ( !DuplicateHandle(v14, *((HANDLE *)this + 48), v13, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v17 = LastError;
    if ( LastError > 0 )
      v17 = (unsigned __int16)LastError | 0x80070000;
    SectionPageProtection = 318;
    if ( v17 >= 0 )
      v17 = -2003304445;
    goto LABEL_14;
  }
  *(_QWORD *)&v24 = TargetHandle;
  *(_QWORD *)&v25 = (char *)a3 + 136;
  v15 = (__int64 (__fastcall *)(_OWORD *, char *))*((_QWORD *)this + 58);
  DWORD2(v25) = Width;
  v26[0] = v24;
  v26[1] = v25;
  v16 = v15(v26, (char *)this + 480);
  v17 = v16;
  if ( v16 < 0 )
  {
    SectionPageProtection = 327;
    v19 = v16;
    goto LABEL_21;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 60))(
    *((_QWORD *)this + 60),
    &IID_IDWMRemotingIndirectEx,
    (char *)this + 488);
  return (unsigned int)v17;
}
