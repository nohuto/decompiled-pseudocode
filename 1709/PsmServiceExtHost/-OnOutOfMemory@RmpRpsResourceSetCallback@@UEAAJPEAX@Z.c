/*
 * XREFs of ?OnOutOfMemory@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x180030710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpsResourceSetCallback::OnOutOfMemory(RmpRpsResourceSetCallback *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 1) + 48LL))(*((_QWORD *)this + 1), a2);
}
