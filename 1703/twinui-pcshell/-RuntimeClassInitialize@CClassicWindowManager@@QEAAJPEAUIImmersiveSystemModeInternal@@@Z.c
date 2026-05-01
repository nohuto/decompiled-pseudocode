/*
 * XREFs of ?RuntimeClassInitialize@CClassicWindowManager@@QEAAJPEAUIImmersiveSystemModeInternal@@@Z @ 0x1800345AC
 * Callers:
 *     ?CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z @ 0x18003787C (-CClassicWindowManager_CreateInstance@@YAJPEAUIImmersiveSystemModeInternal@@AEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ @ 0x180023DD8 (-InitApartmentId@CObjectWithThreadUseDetection@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowManager::RuntimeClassInitialize(
        CClassicWindowManager *this,
        struct IImmersiveSystemModeInternal *a2)
{
  int inited; // ebx
  HWND ShellWindow; // rbx
  __int64 v6; // rcx

  inited = CObjectWithThreadUseDetection::InitApartmentId((CClassicWindowManager *)((char *)this + 120));
  if ( inited >= 0 )
  {
    ShellWindow = GetShellWindow();
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    LODWORD(ShellWindow) = -((*(unsigned __int8 (__fastcall **)(char *, HWND, __int64, __int64, _QWORD))(*((_QWORD *)this + 7) + 24LL))(
                               (char *)this + 56,
                               ShellWindow,
                               1LL,
                               1LL,
                               0LL) == 0);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    inited = (unsigned int)ShellWindow & 0x8007139F;
    if ( inited >= 0 && *((struct IImmersiveSystemModeInternal **)this + 31) != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IImmersiveSystemModeInternal *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = *((_QWORD *)this + 31);
      *((_QWORD *)this + 31) = a2;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
  }
  return (unsigned int)inited;
}
