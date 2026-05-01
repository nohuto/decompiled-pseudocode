/*
 * XREFs of ?Release@?$CRefCountedObject@UPendingActivationData@WindowEventDispatcher@@@@UEAAKXZ @ 0x1801D8170
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

__int64 __fastcall CRefCountedObject<WindowEventDispatcher::PendingActivationData>::Release(void *a1)
{
  unsigned __int32 v2; // edi
  HSTRING v3; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 10);
  if ( !v2 && a1 )
  {
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)a1 + 4);
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)a1 + 3);
    v3 = (HSTRING)*((_QWORD *)a1 + 2);
    if ( v3 )
      WindowsDeleteString(v3);
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  }
  return v2;
}
