/*
 * XREFs of PfpVirtualQuery @ 0x14057883C
 * Callers:
 *     PfQuerySuperfetchInformation @ 0x14052B3F0 (PfQuerySuperfetchInformation.c)
 * Callees:
 *     memmove @ 0x140192A40 (memmove.c)
 *     MmQueryVirtualMemory @ 0x14051B090 (MmQueryVirtualMemory.c)
 *     ExRaiseDatatypeMisalignment @ 0x14071ED60 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PfpVirtualQuery(__int64 a1, char a2, _DWORD *a3)
{
  unsigned __int64 v4; // rax
  int v5; // eax
  __int64 result; // rax
  int v7; // [rsp+40h] [rbp-28h] BYREF
  int v8; // [rsp+44h] [rbp-24h]
  unsigned __int64 v9; // [rsp+48h] [rbp-20h]
  unsigned __int64 v10; // [rsp+50h] [rbp-18h]
  ULONG_PTR v11; // [rsp+58h] [rbp-10h]

  if ( *(_DWORD *)(a1 + 24) != 32 )
    return 3221225990LL;
  if ( a2 )
  {
    v4 = *(_QWORD *)(a1 + 16);
    if ( (v4 & 7) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( v4 + 32 > 0x7FFFFFFF0000LL || v4 + 32 < v4 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v7, *(const void **)(a1 + 16), *(unsigned int *)(a1 + 24));
  if ( v7 != 1 )
    return 3221225485LL;
  v5 = 2;
  if ( (v8 & 1) != 0 && (v8 & 2) != 0 )
    return 3221225485LL;
  if ( (v8 & 0xFFFFFFFC) != 0 )
    return 3221225485LL;
  if ( (v8 & 1) == 0 )
    v5 = (v8 & 2) != 0;
  result = MmQueryVirtualMemory(v11, 0LL, 4, v9, v10, 0LL, v5);
  if ( (int)result >= 0 )
    *a3 = 32;
  return result;
}
