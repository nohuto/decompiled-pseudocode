/*
 * XREFs of sub_180055BBC @ 0x180055BBC
 * Callers:
 *     sub_1800559B0 @ 0x1800559B0 (sub_1800559B0.c)
 *     sub_180055BBC @ 0x180055BBC (sub_180055BBC.c)
 *     sub_18007AE58 @ 0x18007AE58 (sub_18007AE58.c)
 * Callees:
 *     sub_180055BBC @ 0x180055BBC (sub_180055BBC.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180055BBC(__int64 *a1, __int64 (__fastcall *a2)(__int64 *))
{
  __int64 result; // rax
  _QWORD *v5; // rsi
  __int64 *i; // rsi
  _QWORD *v7; // rbx

  result = *a1;
  if ( (*(_DWORD *)(*a1 - 56) & 0x800) == 0 )
  {
    *(_BYTE *)(result - 55) |= 8u;
    v5 = (_QWORD *)a1[5];
    if ( v5 )
    {
      v7 = (_QWORD *)a1[5];
      do
      {
        v7 = (_QWORD *)*v7;
        result = sub_180055BBC(v7[1], a2);
      }
      while ( v7 != v5 );
    }
    for ( i = (__int64 *)a1[1]; i != a1; i = (__int64 *)i[1] )
    {
      result = a2(i - 20);
      *((_BYTE *)i - 55) |= 8u;
    }
  }
  return result;
}
