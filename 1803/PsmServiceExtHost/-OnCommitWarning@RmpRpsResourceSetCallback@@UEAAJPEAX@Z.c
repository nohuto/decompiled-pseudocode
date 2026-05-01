/*
 * XREFs of ?OnCommitWarning@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x18004D820
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpsResourceSetCallback::OnCommitWarning(RmpRpsResourceSetCallback *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 1) + 40LL))(*((_QWORD *)this + 1), a2);
}
