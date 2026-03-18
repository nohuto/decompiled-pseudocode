/*
 * XREFs of ViGenericAddDevice @ 0x140780330
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericAddDevice(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3)
{
  ULONG_PTR v3; // r9
  __int64 (__fastcall *v4)(ULONG_PTR, __int64, __int64); // rax

  v3 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v3 || (v4 = *(__int64 (__fastcall **)(ULONG_PTR, __int64, __int64))(v3 + 24)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, v3, 0LL);
  if ( pXdvAddDevice )
  {
    a3 = *(_QWORD *)(v3 + 24);
    v4 = (__int64 (__fastcall *)(ULONG_PTR, __int64, __int64))pXdvAddDevice;
  }
  return v4(BugCheckParameter2, a2, a3);
}
