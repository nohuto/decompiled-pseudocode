/*
 * XREFs of ViGenericDriverStartIo @ 0x140780550
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDriverStartIo(__int64 a1, __int64 a2)
{
  ULONG_PTR v2; // r8
  ULONG_PTR v3; // r9
  __int64 (__fastcall *v4)(__int64, __int64, ULONG_PTR); // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 48) + 64LL);
  if ( !v3 || (v4 = *(__int64 (__fastcall **)(__int64, __int64, ULONG_PTR))(v3 + 8)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, v2, v3, 0LL);
  if ( pXdvDriverStartIo )
  {
    v2 = *(_QWORD *)(v3 + 8);
    v4 = (__int64 (__fastcall *)(__int64, __int64, ULONG_PTR))pXdvDriverStartIo;
  }
  return v4(a1, a2, v2);
}
