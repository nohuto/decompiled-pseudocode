/*
 * XREFs of sub_1800C9BC0 @ 0x1800C9BC0
 * Callers:
 *     LdrLoadEnclaveModule @ 0x1800C9990 (LdrLoadEnclaveModule.c)
 *     sub_1800CA0F0 @ 0x1800CA0F0 (sub_1800CA0F0.c)
 * Callees:
 *     RtlEqualUnicodeString @ 0x1800388A0 (RtlEqualUnicodeString.c)
 *     sub_180040E38 @ 0x180040E38 (sub_180040E38.c)
 */

__int64 __fastcall sub_1800C9BC0(
        _QWORD *a1,
        const void **a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7,
        __int64 a8)
{
  __int64 result; // rax
  _QWORD *v11; // rbx
  _QWORD *v12; // rcx
  __int64 v13[3]; // [rsp+40h] [rbp-18h] BYREF

  result = sub_180040E38(a2, a5, a3, a4, a6, v13, a8);
  if ( (int)result >= 0 )
  {
    v11 = (_QWORD *)v13[0];
    *(_QWORD *)(*(_QWORD *)(v13[0] + 176) + 168LL) = a1;
    v12 = (_QWORD *)a1[12];
    if ( (_QWORD *)*v12 != a1 + 11 )
      __fastfail(3u);
    *v11 = a1 + 11;
    v11[1] = v12;
    *v12 = v11;
    a1[12] = v11;
    if ( a7 )
      *a7 = v11;
    if ( RtlEqualUnicodeString((PUNICODE_STRING)a2, (PUNICODE_STRING)&stru_1801111F0, 1u) )
    {
      a1[14] = v11;
    }
    else if ( RtlEqualUnicodeString((PUNICODE_STRING)a2, (PUNICODE_STRING)&stru_1801111E0, 1u) )
    {
      a1[15] = v11;
    }
    return 0LL;
  }
  return result;
}
