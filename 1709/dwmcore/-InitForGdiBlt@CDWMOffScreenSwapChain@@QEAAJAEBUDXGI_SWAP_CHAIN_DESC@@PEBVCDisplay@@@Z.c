/*
 * XREFs of ?InitForGdiBlt@CDWMOffScreenSwapChain@@QEAAJAEBUDXGI_SWAP_CHAIN_DESC@@PEBVCDisplay@@@Z @ 0x1801B1698
 * Callers:
 *     ?Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@PEBVCDisplay@@PEAPEAV1@@Z @ 0x1801B12BC (-Create@CDWMOffScreenSwapChain@@SAJPEAVCD3DResourceManager@@AEBUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COL.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::InitForGdiBlt(
        CDWMOffScreenSwapChain *this,
        const struct DXGI_SWAP_CHAIN_DESC *a2,
        const struct CDisplay *a3)
{
  UINT Width; // esi
  UINT Height; // ebx
  HMODULE LibraryW; // rax
  FARPROC ProcAddress; // rax
  HMODULE v9; // rcx
  int v10; // ebx
  DWORD v11; // r9d
  HANDLE v12; // rbx
  HANDLE v13; // rax
  signed int LastError; // eax
  NTSTATUS v15; // ebx
  HANDLE CurrentProcess; // rax
  NTSTATUS v17; // ebx
  __int64 (__fastcall *v18)(_OWORD *, char *); // rax
  int v19; // eax
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
  *((_QWORD *)this + 63) = LibraryW;
  if ( LibraryW )
  {
    ProcAddress = GetProcAddress(LibraryW, "DwmIndirectCreate");
    v9 = (HMODULE)*((_QWORD *)this + 63);
    *((_QWORD *)this + 64) = ProcAddress;
    *((_QWORD *)this + 65) = GetProcAddress(v9, "DwmIndirectSetDebugFlag");
  }
  if ( !*((_QWORD *)this + 64) )
  {
    v10 = -2147024809;
    SectionPageProtection = 278;
LABEL_5:
    v11 = v10;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v11, SectionPageProtection);
    return (unsigned int)v10;
  }
  if ( *((_QWORD *)this + 54) )
  {
    HIDWORD(v25) = -Height;
  }
  else
  {
    HIDWORD(v25) = Height;
    MaximumSize.QuadPart = 4 * Width * Height;
    v15 = NtCreateSection(&SectionHandle, 6u, 0LL, &MaximumSize, 4u, 0x8000000u, 0LL);
    if ( v15 < 0 )
    {
      v10 = v15 | 0x10000000;
      SectionPageProtection = 303;
      goto LABEL_5;
    }
    ViewSize = 0LL;
    SectionOffset.QuadPart = 0LL;
    *((_QWORD *)this + 54) = SectionHandle;
    CurrentProcess = GetCurrentProcess();
    v17 = NtMapViewOfSection(
            *((HANDLE *)this + 54),
            CurrentProcess,
            (PVOID *)this + 55,
            0LL,
            0LL,
            &SectionOffset,
            &ViewSize,
            ViewUnmap,
            0,
            4u);
    if ( v17 < 0 )
    {
      v10 = v17 | 0x10000000;
      SectionPageProtection = 321;
      goto LABEL_5;
    }
  }
  SetLastError(0);
  v12 = GetCurrentProcess();
  v13 = GetCurrentProcess();
  if ( !DuplicateHandle(v13, *((HANDLE *)this + 54), v12, &TargetHandle, 0, 0, 2u) )
  {
    LastError = GetLastError();
    v10 = LastError;
    if ( LastError > 0 )
      v10 = (unsigned __int16)LastError | 0x80070000;
    SectionPageProtection = 336;
    if ( v10 >= 0 )
      v10 = -2003304445;
    goto LABEL_5;
  }
  *(_QWORD *)&v24 = TargetHandle;
  *(_QWORD *)&v25 = (char *)a3 + 136;
  v18 = (__int64 (__fastcall *)(_OWORD *, char *))*((_QWORD *)this + 64);
  DWORD2(v25) = Width;
  v26[0] = v24;
  v26[1] = v25;
  v19 = v18(v26, (char *)this + 528);
  v10 = v19;
  if ( v19 < 0 )
  {
    SectionPageProtection = 345;
    v11 = v19;
    goto LABEL_21;
  }
  (***((void (__fastcall ****)(_QWORD, GUID *, char *))this + 66))(
    *((_QWORD *)this + 66),
    &IID_IDWMRemotingIndirectEx,
    (char *)this + 536);
  return (unsigned int)v10;
}
