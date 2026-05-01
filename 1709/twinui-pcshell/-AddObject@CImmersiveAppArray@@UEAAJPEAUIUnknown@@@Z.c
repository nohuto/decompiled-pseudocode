/*
 * XREFs of ?AddObject@CImmersiveAppArray@@UEAAJPEAUIUnknown@@@Z @ 0x18002DB50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CImmersiveAppArray::AddObject(CImmersiveAppArray *this, struct IUnknown *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct IUnknown *))(**((_QWORD **)this + 2) + 40LL))(
           *((_QWORD *)this + 2),
           a2);
}
