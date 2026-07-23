/*
 * XREFs of NotificationFunction @ 0x1801060E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall NotificationFunction(int a1, __int64 a2, PVOID a3)
{
  if ( a1 == 1 )
    sub_180105FE8(a2);
  else
    sub_1801061C4(a2, a2, a3);
}
