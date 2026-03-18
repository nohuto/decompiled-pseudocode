/*
 * XREFs of ?EnsureHolographicCompositor@CHolographicClient@@AEAAJXZ @ 0x1801A7990
 * Callers:
 *     ?Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z @ 0x1801A7690 (-Create@CHolographicClient@@SAJPEAVCHolographicInteropTaskQueue@@PEAPEAV2@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ @ 0x180022D4C (-InternalRelease@-$ComPtr@UIDCompositionDirectInkPartner@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ @ 0x1801A7C6C (-LoadLibraryShellCompositor@CHolographicClient@@AEAAPEAUHINSTANCE__@@XZ.c)
 */

__int64 __fastcall CHolographicClient::EnsureHolographicCompositor(CHolographicClient *this)
{
  __int64 *v2; // rsi
  HMODULE LibraryShellCompositor; // rax
  FARPROC ProcAddress; // rbx
  int v5; // eax

  if ( *((int *)this + 42) >= 0 )
  {
    v2 = (__int64 *)((char *)this + 24);
    if ( !*((_QWORD *)this + 3) )
    {
      *((_DWORD *)this + 42) = -2147467259;
      LibraryShellCompositor = CHolographicClient::LoadLibraryShellCompositor(this);
      *((_QWORD *)this + 20) = LibraryShellCompositor;
      if ( LibraryShellCompositor )
      {
        ProcAddress = GetProcAddress(LibraryShellCompositor, "CreateCompositor");
        if ( ProcAddress )
        {
          Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease(v2);
          *((_DWORD *)this + 42) = ((__int64 (__fastcall *)(GUID *, __int64 *))ProcAddress)(
                                     &GUID_2f2db261_03ae_44e7_8c1c_0cc9cef8ba09,
                                     v2);
        }
      }
      if ( *((int *)this + 42) >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionDirectInkPartner>::InternalRelease((__int64 *)this + 4);
        v5 = (**(__int64 (__fastcall ***)(__int64, GUID *, char *))*v2)(
               *v2,
               &GUID_97234441_f8b8_4244_bbb3_f977d0eb60a5,
               (char *)this + 32);
        *((_DWORD *)this + 42) = v5;
        if ( v5 >= 0 )
          *((_DWORD *)this + 42) = (*(__int64 (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 4) + 32LL))(
                                     *((_QWORD *)this + 4),
                                     (char *)this + 16);
      }
    }
  }
  return *((unsigned int *)this + 42);
}
