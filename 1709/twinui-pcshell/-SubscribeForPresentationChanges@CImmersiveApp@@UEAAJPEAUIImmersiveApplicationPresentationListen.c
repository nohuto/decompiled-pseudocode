/*
 * XREFs of ?SubscribeForPresentationChanges@CImmersiveApp@@UEAAJPEAUIImmersiveApplicationPresentationListener@@@Z @ 0x1800553E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::SubscribeForPresentationChanges(
        CImmersiveApp *this,
        struct IImmersiveApplicationPresentationListener *a2)
{
  RTL_SRWLOCK *v2; // rbx
  struct IImmersiveApplicationPresentationListener *v5; // rax
  unsigned int v6; // edi
  __int64 v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = (struct IImmersiveApplicationPresentationListener *)*((_QWORD *)this + 74);
  if ( v5 )
  {
    if ( v5 != a2 )
    {
      v6 = -2147024713;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x901,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\immapp.cpp",
        (const char *)0x800700B7LL);
      goto LABEL_8;
    }
  }
  else if ( a2 )
  {
    (*(void (__fastcall **)(struct IImmersiveApplicationPresentationListener *))(*(_QWORD *)a2 + 8LL))(a2);
    v7 = *((_QWORD *)this + 74);
    *((_QWORD *)this + 74) = a2;
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  v6 = 0;
LABEL_8:
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return v6;
}
