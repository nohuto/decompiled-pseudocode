/*
 * XREFs of ?TryInvokeBack@CImmersiveApp@@UEAAJPEAUIAsyncCallback@@@Z @ 0x1800526D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ @ 0x1800582C4 (-IsApplicationWindowGhost@CImmersiveWindowCollection@CImmersiveApp@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveApp::TryInvokeBack(CImmersiveApp *this, struct IAsyncCallback *a2)
{
  unsigned int v4; // ebx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( CImmersiveApp::CImmersiveWindowCollection::IsApplicationWindowGhost((CImmersiveApp *)((char *)this + 152)) )
  {
    v4 = -2147019873;
  }
  else
  {
    v4 = -2147023728;
    if ( *((_QWORD *)this + 39) )
      v4 = (*(__int64 (__fastcall **)(_QWORD, struct IAsyncCallback *))(***((_QWORD ***)this + 38) + 80LL))(
             **((_QWORD **)this + 38),
             a2);
  }
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  return v4;
}
