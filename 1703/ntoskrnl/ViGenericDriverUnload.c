/*
 * XREFs of ViGenericDriverUnload @ 0x1407805B0
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall ViGenericDriverUnload(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  ULONG_PTR v2; // r9
  __int64 (__fastcall *v3)(ULONG_PTR, __int64); // rax

  v2 = *(_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 48) + 64LL);
  if ( !v2 || (v3 = *(__int64 (__fastcall **)(ULONG_PTR, __int64))(v2 + 16)) == 0LL )
    KeBugCheckEx(0xC4u, 0x1013uLL, BugCheckParameter2, v2, 0LL);
  if ( pXdvDriverUnload )
  {
    a2 = *(_QWORD *)(v2 + 16);
    v3 = (__int64 (__fastcall *)(ULONG_PTR, __int64))pXdvDriverUnload;
  }
  return v3(BugCheckParameter2, a2);
}
