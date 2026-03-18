/*
 * XREFs of PopEnlargeHiberFile @ 0x14057B3F8
 * Callers:
 *     PopTransitionToSleep @ 0x14040BE50 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x14057B45C (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(*(_QWORD *)qword_14036C8F8 + 5584LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5);
  if ( v3 >= 0 && a1 )
    *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  return (unsigned int)v3;
}
