/*
 * XREFs of PopEnlargeHiberFile @ 0x1405F04FC
 * Callers:
 *     PopTransitionToSleep @ 0x140476910 (PopTransitionToSleep.c)
 * Callees:
 *     PopResizeHiberFile @ 0x1405F0590 (PopResizeHiberFile.c)
 */

__int64 __fastcall PopEnlargeHiberFile(bool *a1)
{
  __int64 v2; // rbx
  int v3; // r9d
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  __int64 v6; // [rsp+40h] [rbp+18h] BYREF

  qword_1403AADC8 = qword_1403AA190;
  v2 = *(_QWORD *)(*(_QWORD *)qword_1403CBD88 + 6864LL) << 12;
  v3 = PopResizeHiberFile(v2, &v5, &v6);
  if ( v3 >= 0 )
  {
    qword_1403AADD8 = v5;
    qword_1403AADE0 = v6;
    qword_1403AADD0 = v2;
    if ( a1 )
      *a1 = (unsigned int)(100 * v2 / v5) < 0x28;
  }
  return (unsigned int)v3;
}
