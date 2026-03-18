/*
 * XREFs of ViGenericDriverEntry @ 0x1407804F0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDriverEntry(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 (__fastcall *a3)(ULONG_PTR, __int64, _QWORD))
{
  _QWORD *v3; // r9
  __int64 (__fastcall *v4)(ULONG_PTR, __int64, _QWORD); // rax

  v3 = *(_QWORD **)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v3 || (v4 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD))*v3) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, (ULONG_PTR)v3, 0LL);
  if ( pXdvDriverEntry )
  {
    a3 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD))*v3;
    v4 = (__int64 (__fastcall *)(ULONG_PTR, __int64, _QWORD))pXdvDriverEntry;
  }
  return v4(BugCheckParameter2, a2, a3);
}
