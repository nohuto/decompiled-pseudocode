/*
 * XREFs of ?Destroy@CApplicationFrameWrapper@@UEAAJXZ @ 0x18004B030
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CApplicationFrameWrapper::Destroy(CApplicationFrameWrapper *this)
{
  RTL_SRWLOCK *v2; // rcx
  __int64 v3; // rcx

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = CApplicationManagerUtility::g_pIAMGlobals;
  *((_BYTE *)this + 40) = 1;
  ReleaseSRWLockExclusive(v2);
  (*(void (__fastcall **)(_QWORD, CApplicationFrameWrapper *))(**((_QWORD **)this + 13) + 96LL))(
    *((_QWORD *)this + 13),
    this);
  v3 = *((_QWORD *)this + 13);
  if ( v3 )
  {
    *((_QWORD *)this + 13) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return 0LL;
}
