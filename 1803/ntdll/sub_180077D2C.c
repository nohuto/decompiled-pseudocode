/*
 * XREFs of sub_180077D2C @ 0x180077D2C
 * Callers:
 *     sub_180077824 @ 0x180077824 (sub_180077824.c)
 *     sub_180077C10 @ 0x180077C10 (sub_180077C10.c)
 *     sub_180077C20 @ 0x180077C20 (sub_180077C20.c)
 *     sub_180077E40 @ 0x180077E40 (sub_180077E40.c)
 *     sub_1800CA8A0 @ 0x1800CA8A0 (sub_1800CA8A0.c)
 *     sub_1800CAA40 @ 0x1800CAA40 (sub_1800CAA40.c)
 *     sub_1800CAA70 @ 0x1800CAA70 (sub_1800CAA70.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180077D2C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // [rsp+40h] [rbp+8h]

  result = (*(__int64 (__fastcall **)(_QWORD))(a1 + 8))(*(_QWORD *)a1);
  if ( (int)result >= 0 )
    return a4 != v6 ? 0x8000000D : 0;
  return result;
}
