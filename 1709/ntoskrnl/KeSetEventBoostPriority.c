/*
 * XREFs of KeSetEventBoostPriority @ 0x140205130
 * Callers:
 *     NtSetEventBoostPriority @ 0x140758168 (NtSetEventBoostPriority.c)
 * Callees:
 *     KeSetEventBoostPriorityEx @ 0x140100F90 (KeSetEventBoostPriorityEx.c)
 */

void __fastcall KeSetEventBoostPriority(__int64 a1, char *a2)
{
  char *v2; // rax
  char v3; // [rsp+48h] [rbp+10h] BYREF

  v2 = &v3;
  if ( a2 )
    v2 = a2;
  KeSetEventBoostPriorityEx(a1, v2, 0LL, 0LL, 0);
}
