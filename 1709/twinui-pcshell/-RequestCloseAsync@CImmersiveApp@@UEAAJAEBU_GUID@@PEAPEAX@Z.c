/*
 * XREFs of ?RequestCloseAsync@CImmersiveApp@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180054AE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::RequestCloseAsync(CImmersiveApp *this, const struct _GUID *a2, void **a3)
{
  int v6; // ebx
  __int64 (__fastcall ***v7)(_QWORD, const struct _GUID *, void **); // rcx
  __int64 (__fastcall ***v9)(_QWORD, const struct _GUID *, void **); // [rsp+40h] [rbp+8h] BYREF

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = 0LL;
  if ( *((_QWORD *)this + 41) )
    v6 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **)))(***((_QWORD ***)this + 40) + 88LL))(
           **((_QWORD **)this + 40),
           &v9);
  else
    v6 = -2147023728;
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v6 >= 0 )
    v6 = (**v9)(v9, a2, a3);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, const struct _GUID *, void **)))(*v7)[2])(v7);
  }
  return (unsigned int)v6;
}
