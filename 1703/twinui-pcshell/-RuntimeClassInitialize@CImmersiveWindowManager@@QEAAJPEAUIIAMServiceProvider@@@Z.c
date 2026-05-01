/*
 * XREFs of ?RuntimeClassInitialize@CImmersiveWindowManager@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18002E370
 * Callers:
 *     ?CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x18002F608 (-CImmWindowManager_CreateInstance@@YAJPEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x180023C8C (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     _Init_thread_footer @ 0x180193FE8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180194048 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveWindowManager::RuntimeClassInitialize(
        CImmersiveWindowManager *this,
        struct IIAMServiceProvider *a2)
{
  int v4; // esi
  __int64 v5; // rcx

  if ( dword_180244FDC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180244FDC);
    if ( dword_180244FDC == -1 )
    {
      qword_180244890 = 0LL;
      xmmword_180244880 = IID_IApplicationActivationHistory;
      qword_180244898 = 0LL;
      qword_1802448B0 = 0LL;
      qword_1802448B8 = 0LL;
      xmmword_1802448A0 = (__int128)IID_IImmersiveWindowManager;
      Init_thread_footer(&dword_180244FDC);
    }
  }
  v4 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveWindowManager *)((char *)this + 56),
         (__int64)&xmmword_180244880,
         2uLL);
  if ( v4 >= 0 && *((struct IIAMServiceProvider **)this + 26) != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IIAMServiceProvider *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *((_QWORD *)this + 26);
    *((_QWORD *)this + 26) = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
