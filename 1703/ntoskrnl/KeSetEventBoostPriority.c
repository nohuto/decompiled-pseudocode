/*
 * XREFs of KeSetEventBoostPriority @ 0x1401FED70
 * Callers:
 *     NtSetEventBoostPriority @ 0x140718964 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 */

void __fastcall KeSetEventBoostPriority(__int64 a1, __int64 *a2)
{
  __int64 *v2; // rax
  char v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)&v3;
  if ( a2 )
    v2 = a2;
  KeSetEventBoostPriorityEx(a1, v2, 0LL, 0LL, 0);
}
