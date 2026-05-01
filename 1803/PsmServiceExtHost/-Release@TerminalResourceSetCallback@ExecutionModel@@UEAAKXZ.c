/*
 * XREFs of ?Release@TerminalResourceSetCallback@ExecutionModel@@UEAAKXZ @ 0x18005CA30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18003E448 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180041D40 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ExecutionModel::TerminalResourceSetCallback::Release(
        ExecutionModel::TerminalResourceSetCallback *this)
{
  unsigned __int32 v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 6);
  if ( !v2 && this )
  {
    *(_QWORD *)this = &ExecutionModel::TerminalResourceSetCallback::`vftable';
    v3 = *((_QWORD *)this + 2);
    if ( v3 )
      TpReleaseWork(v3);
    v4 = *((_QWORD *)this + 1);
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    operator delete(this);
  }
  return v2;
}
