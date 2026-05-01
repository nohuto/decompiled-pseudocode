/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18002FB6C
 * Callers:
 *     ?CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180030DD4 (-CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800245AC (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     _Init_thread_footer @ 0x1801E2048 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801E20A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::RuntimeClassInitialize(
        CImmersiveWindowManager *this,
        struct IIAMServiceProvider *a2)
{
  int v4; // esi
  __int64 v5; // rcx

  if ( dword_1802BADCC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802BADCC);
    if ( dword_1802BADCC == -1 )
    {
      qword_1802BA480 = 0LL;
      xmmword_1802BA470 = IID_IApplicationActivationHistory;
      qword_1802BA488 = 0LL;
      qword_1802BA4A0 = 0LL;
      qword_1802BA4A8 = 0LL;
      xmmword_1802BA490 = (__int128)IID_IImmersiveWindowManager;
      Init_thread_footer(&dword_1802BADCC);
    }
  }
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveWindowManager *)((char *)this + 80),
         (__int64)&xmmword_1802BA470,
         2uLL);
  if ( v4 >= 0 && *((struct IIAMServiceProvider **)this + 33) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 33);
    *((_QWORD *)this + 33) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
