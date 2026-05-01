/*
 * XREFs of ?GetAt@CImmersiveAppArray@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18002D7F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CImmersiveAppArray::GetAt(CImmersiveAppArray *this, __int64 a2, const struct _GUID *a3, void **a4)
{
  return (*(__int64 (__fastcall **)(_QWORD, __int64, const struct _GUID *, void **))(**((_QWORD **)this + 2) + 32LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
