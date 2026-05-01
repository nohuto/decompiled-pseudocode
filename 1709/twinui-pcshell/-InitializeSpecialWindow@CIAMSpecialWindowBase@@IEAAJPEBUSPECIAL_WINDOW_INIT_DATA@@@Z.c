/*
 * XREFs of ?InitializeSpecialWindow@CIAMSpecialWindowBase@@IEAAJPEBUSPECIAL_WINDOW_INIT_DATA@@@Z @ 0x18002E1AC
 * Callers:
 *     ?CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x18002E4F8 (-CIAMSpecialWindow_CreateInstance@@YAJQEBUSPECIAL_WINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     ?RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ @ 0x18002E798 (-RuntimeClassInitialize@CFallbackWindow@@QEAAJXZ.c)
 * Callees:
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CIAMSpecialWindowBase::InitializeSpecialWindow(
        CIAMSpecialWindowBase *this,
        const struct SPECIAL_WINDOW_INIT_DATA *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rdi
  __int64 v6; // rcx
  __int64 WindowInBand; // rax
  signed int LastError; // eax
  signed int v9; // ecx
  WNDCLASSEXW v11; // [rsp+70h] [rbp-58h] BYREF

  v2 = 0;
  *((_DWORD *)this + 6) = *((_DWORD *)a2 + 4);
  v4 = *((_QWORD *)a2 + 1);
  if ( *((_QWORD *)this + 4) != v4 )
  {
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
    v6 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = v4;
    if ( v6 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v11.cbSize = 80;
  memset(&v11.style, 0, 0x4CuLL);
  v11.style = 512;
  v11.lpfnWndProc = (WNDPROC)CIAMSpecialWindowBase::s_SpecialMsgWndProc;
  v11.lpszClassName = *(LPCWSTR *)a2;
  v11.hInstance = &_ImageBase;
  v11.cbWndExtra = 8;
  RegisterClassExW(&v11);
  WindowInBand = CreateWindowInBand(
                   136314880LL,
                   v11.lpszClassName,
                   0LL,
                   0x80000000LL,
                   0,
                   0,
                   0,
                   0,
                   0LL,
                   0LL,
                   &_ImageBase,
                   this,
                   *((_DWORD *)a2 + 4));
  *((_QWORD *)this + 2) = WindowInBand;
  if ( !WindowInBand )
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = LastError;
    if ( v9 >= 0 )
      return (unsigned int)-2147467259;
    return (unsigned int)v9;
  }
  return v2;
}
