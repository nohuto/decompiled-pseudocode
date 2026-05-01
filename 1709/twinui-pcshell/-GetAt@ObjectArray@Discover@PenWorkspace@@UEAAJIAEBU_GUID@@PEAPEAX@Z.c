/*
 * XREFs of ?GetAt@ObjectArray@Discover@PenWorkspace@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x1800E6330
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PenWorkspace::Discover::ObjectArray::GetAt(
        PenWorkspace::Discover::ObjectArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall ***v5)(_QWORD, const struct _GUID *, void **); // rcx

  *a4 = 0LL;
  if ( a2 >= (unsigned __int64)((__int64)(*((_QWORD *)this + 3) - *((_QWORD *)this + 2)) >> 3) )
    return 2147942487LL;
  v5 = *(__int64 (__fastcall ****)(_QWORD, const struct _GUID *, void **))(*((_QWORD *)this + 2) + 8LL * a2);
  return (**v5)(v5, a3, a4);
}
