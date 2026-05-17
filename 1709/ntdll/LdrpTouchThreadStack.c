/*
 * XREFs of LdrpTouchThreadStack @ 0x180085424
 * Callers:
 *     _LdrpInitialize @ 0x180078E70 (_LdrpInitialize.c)
 * Callees:
 *     LdrpGenericExceptionFilter @ 0x180002B68 (LdrpGenericExceptionFilter.c)
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall LdrpTouchThreadStack(unsigned __int64 a1)
{
  struct _TEB *v2; // rdi
  __int64 result; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // [rsp+30h] [rbp-48h]
  _QWORD v7[8]; // [rsp+38h] [rbp-40h] BYREF
  __int64 v8; // [rsp+88h] [rbp+10h] BYREF

  v2 = NtCurrentTeb();
  result = ZwQueryVirtualMemory(-1LL, v2->NtTib.StackLimit, 0LL, v7, 48LL, &v8);
  if ( (int)result >= 0 )
  {
    v4 = v7[1] + 12288LL;
    v5 = (unsigned __int64)v2->NtTib.StackBase - 4096;
    v6 = v5;
    if ( v5 > a1 && v5 - a1 > v4 )
      v4 = v5 - a1;
    while ( v5 >= v4 )
    {
      v5 = v6 - 4096;
      v6 -= 4096LL;
    }
    return 0LL;
  }
  return result;
}
