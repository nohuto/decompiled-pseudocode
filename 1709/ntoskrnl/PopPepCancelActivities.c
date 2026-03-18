/*
 * XREFs of PopPepCancelActivities @ 0x14001B074
 * Callers:
 *     PopPepTriggerActivity @ 0x14001C0BC (PopPepTriggerActivity.c)
 * Callees:
 *     PopPepCancelActivityRange @ 0x14001B00C (PopPepCancelActivityRange.c)
 */

int *__fastcall PopPepCancelActivities(__int64 a1, __int64 a2, int a3)
{
  int *result; // rax
  volatile signed __int32 *v5; // rbx
  __int64 v6; // rdi

  result = (int *)*((unsigned int *)&unk_1402B5384 + 34 * a3);
  if ( (_DWORD)result )
  {
    if ( (_DWORD)result == 1 )
    {
      v5 = (volatile signed __int32 *)(a1 + 120);
      v6 = a1 + 72;
      PopPepCancelActivityRange(a1 + 72, a3, 0, 0, (volatile signed __int32 *)(a1 + 120));
      return PopPepCancelActivityRange(v6, a3, 4, 5, v5);
    }
    else if ( (_DWORD)result == 2 )
    {
      return PopPepCancelActivityRange(a2 + 56, a3, 0, 5, (volatile signed __int32 *)(a2 + 104));
    }
  }
  return result;
}
