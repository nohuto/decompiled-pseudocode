/*
 * XREFs of ?GetOwnerWindow@CClassicWindowExternal@@UEAAJPEAPEAUHWND__@@@Z @ 0x1800342E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CClassicWindowExternal::GetOwnerWindow(CClassicWindowExternal *this, HWND *a2)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  *a2 = 0LL;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = -2147023728;
  if ( *(_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 96LL))(*((_QWORD *)this + 6)) )
  {
    v5 = (_QWORD *)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 6) + 96LL))(*((_QWORD *)this + 6));
    *a2 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 24LL))(*v5);
    v4 = 0;
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v4;
}
