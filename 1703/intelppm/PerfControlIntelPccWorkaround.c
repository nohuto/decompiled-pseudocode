/*
 * XREFs of PerfControlIntelPccWorkaround @ 0x1C0003FE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004AA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PerfControlIntelPccWorkaround(_QWORD *a1, __int64 a2, char a3, char a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp-18h]

  if ( a4 )
  {
    if ( a3 )
    {
      v5 = 0LL;
      *(_DWORD *)((char *)&v5 + 1) = (unsigned __int8)(a1[3] / 0xAuLL);
      return ((__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))qword_1C0016070)(
               *(unsigned int *)(*a1 + 80LL),
               409LL,
               -65536LL,
               v5);
    }
  }
  return result;
}
