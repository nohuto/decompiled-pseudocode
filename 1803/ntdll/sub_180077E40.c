/*
 * XREFs of sub_180077E40 @ 0x180077E40
 * Callers:
 *     <none>
 * Callees:
 *     sub_180077D2C @ 0x180077D2C (sub_180077D2C.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180077E40(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned int v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a3 )
    *a3 = 0LL;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64 *))(a1 + 16))(*(_QWORD *)a1, 26LL, &v9);
  if ( (int)result >= 0 )
  {
    if ( !v9 )
      return 0LL;
    result = sub_180077D2C(a1, v9 + 12, (__int64)&v8, 4LL);
    if ( (int)result >= 0 )
    {
      v7 = v8;
      if ( !v8 )
        return 0LL;
      *a2 = v8 + 12LL;
      if ( a3 )
        *a3 = v7 + 28;
      return (unsigned int)result;
    }
  }
  return result;
}
