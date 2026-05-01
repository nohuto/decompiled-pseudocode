/*
 * XREFs of ?GetAt@CGITCallbackArray@@EEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x18030A020
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGITCallbackArray::GetAt(
        CGITCallbackArray *this,
        unsigned int a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 result; // rax
  __int64 v5; // rcx

  *a4 = 0LL;
  result = (unsigned __int64)a2 >= *((_QWORD *)this + 3) ? 0x80070057 : 0;
  if ( (unsigned __int64)a2 < *((_QWORD *)this + 3) )
  {
    v5 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
    return (*(__int64 (__fastcall **)(__int64, const struct _GUID *, void **))(*(_QWORD *)v5 + 24LL))(v5, a3, a4);
  }
  return result;
}
