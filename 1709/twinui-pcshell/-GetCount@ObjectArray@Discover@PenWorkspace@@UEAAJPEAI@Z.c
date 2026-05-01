/*
 * XREFs of ?GetCount@ObjectArray@Discover@PenWorkspace@@UEAAJPEAI@Z @ 0x1800E6370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenWorkspace::Discover::ObjectArray::GetCount(
        PenWorkspace::Discover::ObjectArray *this,
        unsigned int *a2)
{
  *a2 = (__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3;
  return 0LL;
}
