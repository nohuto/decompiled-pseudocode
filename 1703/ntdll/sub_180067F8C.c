/*
 * XREFs of sub_180067F8C @ 0x180067F8C
 * Callers:
 *     sub_180067670 @ 0x180067670 (sub_180067670.c)
 *     sub_180067730 @ 0x180067730 (sub_180067730.c)
 *     sub_180067A7C @ 0x180067A7C (sub_180067A7C.c)
 *     sub_180067F80 @ 0x180067F80 (sub_180067F80.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 *     sub_180068230 @ 0x180068230 (sub_180068230.c)
 *     sub_1800D565C @ 0x1800D565C (sub_1800D565C.c)
 * Callees:
 *     sub_180068160 @ 0x180068160 (sub_180068160.c)
 *     sub_1800681C0 @ 0x1800681C0 (sub_1800681C0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180067F8C(__int64 *a1, int a2, int a3, __int64 a4)
{
  __int64 (__fastcall *v4)(int, int, int, int, PSIZE_T); // rax
  __int64 v6; // r10
  __int64 result; // rax
  ULONG_PTR v8; // [rsp+40h] [rbp+8h] BYREF

  v4 = (__int64 (__fastcall *)(int, int, int, int, PSIZE_T))a1[1];
  v6 = *a1;
  if ( (char *)v4 == (char *)sub_180068160 )
  {
    result = sub_180068160(v6);
  }
  else if ( v4 == sub_1800681C0 )
  {
    result = sub_1800681C0(v6, a2, a3, a4, &v8);
  }
  else
  {
    result = ((__int64 (__fastcall *)(__int64))v4)(v6);
  }
  if ( (int)result >= 0 )
    return a4 != v8 ? 0x8000000D : 0;
  return result;
}
