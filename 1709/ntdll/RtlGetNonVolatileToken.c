/*
 * XREFs of RtlGetNonVolatileToken @ 0x1800F4BD0
 * Callers:
 *     <none>
 * Callees:
 *     ZwQueryVirtualMemory @ 0x1800A0520 (ZwQueryVirtualMemory.c)
 */

__int64 __fastcall RtlGetNonVolatileToken(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  char v5; // [rsp+3Ch] [rbp-1Ch]

  result = ZwQueryVirtualMemory();
  if ( (int)result >= 0 )
  {
    if ( (v5 & 0x20) != 0 )
    {
      *a3 = 3LL;
      return 0LL;
    }
    else
    {
      return 3221225485LL;
    }
  }
  return result;
}
