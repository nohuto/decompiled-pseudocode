/*
 * XREFs of sub_1800397BC @ 0x1800397BC
 * Callers:
 *     sub_180011E90 @ 0x180011E90 (sub_180011E90.c)
 *     sub_180039848 @ 0x180039848 (sub_180039848.c)
 *     sub_180088E9C @ 0x180088E9C (sub_180088E9C.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall sub_1800397BC(__int64 a1, unsigned int a2)
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
  RtlEnterCriticalSection(&CriticalSection);
  for ( i = (_UNKNOWN **)off_180155610; i != &off_180155610; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(_QWORD, int *, void *))i[2])(a2, &v5, i[3]);
  return RtlLeaveCriticalSection(&CriticalSection);
}
