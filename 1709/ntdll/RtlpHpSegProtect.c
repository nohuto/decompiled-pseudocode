/*
 * XREFs of RtlpHpSegProtect @ 0x180108950
 * Callers:
 *     RtlpHpHeapProtect @ 0x180102D14 (RtlpHpHeapProtect.c)
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpHpSegProtect(__int64 a1)
{
  char *v1; // rdi
  char *i; // rbx
  char *v4; // rsi
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp-40h]
  int v7; // [rsp+50h] [rbp-38h]
  char *v8; // [rsp+A0h] [rbp+18h]

  v1 = (char *)(a1 + 32);
  for ( i = *(char **)(a1 + 32); ; i = *(char **)i )
  {
    if ( i == v1 )
      return 0LL;
    v8 = i;
    v4 = &i[-*(_DWORD *)a1];
    if ( i < v4 )
      break;
LABEL_7:
    ;
  }
  while ( 1 )
  {
    result = ZwQueryVirtualMemory();
    if ( (int)result < 0 )
      return result;
    if ( v7 == 4096 )
    {
      result = ZwProtectVirtualMemory();
      if ( (int)result < 0 )
        return result;
    }
    v8 += v6;
    if ( v8 >= v4 )
      goto LABEL_7;
  }
}
