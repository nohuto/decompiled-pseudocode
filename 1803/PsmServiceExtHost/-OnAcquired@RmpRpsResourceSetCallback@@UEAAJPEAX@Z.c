/*
 * XREFs of ?OnAcquired@RmpRpsResourceSetCallback@@UEAAJPEAX@Z @ 0x18004D800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpRpsResourceSetCallback::OnAcquired(RmpRpsResourceSetCallback *this, void *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)this + 1) + 32LL))(*((_QWORD *)this + 1), a2);
}
