/*
 * XREFs of sub_18002D32C @ 0x18002D32C
 * Callers:
 *     sub_18002D1D8 @ 0x18002D1D8 (sub_18002D1D8.c)
 *     sub_180046AE0 @ 0x180046AE0 (sub_180046AE0.c)
 *     sub_180082EDC @ 0x180082EDC (sub_180082EDC.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x18009E4A0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall sub_18002D32C(__int64 a1, unsigned int a2)
{
  _UNKNOWN **i; // rbx
  int v5; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+28h] [rbp-30h]
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  int v9; // [rsp+40h] [rbp-18h]

  v5 = 0;
  v6 = a1 + 72;
  v7 = a1 + 88;
  v8 = *(_QWORD *)(a1 + 48);
  v9 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection(&stru_1801564C0);
  for ( i = (_UNKNOWN **)off_180156618; i != &off_180156618; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(_QWORD, int *, void *))i[2])(a2, &v5, i[3]);
  return RtlLeaveCriticalSection(&stru_1801564C0);
}
