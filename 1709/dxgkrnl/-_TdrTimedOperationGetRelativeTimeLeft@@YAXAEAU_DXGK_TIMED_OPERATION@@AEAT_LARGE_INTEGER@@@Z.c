/*
 * XREFs of ?_TdrTimedOperationGetRelativeTimeLeft@@YAXAEAU_DXGK_TIMED_OPERATION@@AEAT_LARGE_INTEGER@@@Z @ 0x1C002722C
 * Callers:
 *     TdrTimedOperationDelay @ 0x1C0027440 (TdrTimedOperationDelay.c)
 *     TdrTimedOperationWaitForSingleObject @ 0x1C01A8120 (TdrTimedOperationWaitForSingleObject.c)
 * Callees:
 *     <none>
 */

void __fastcall _TdrTimedOperationGetRelativeTimeLeft(struct _DXGK_TIMED_OPERATION *a1, union _LARGE_INTEGER *a2)
{
  __int64 v3; // rax
  LONGLONG v4; // rbx
  __int64 TimeIncrement; // rcx
  LONGLONG v6; // rax

  v3 = MEMORY[0xFFFFF78000000320];
  if ( a1->StartTick.QuadPart > MEMORY[0xFFFFF78000000320] )
    a1->StartTick.QuadPart = MEMORY[0xFFFFF78000000320];
  v4 = a1->StartTick.QuadPart + a1->Timeout.QuadPart - v3;
  TimeIncrement = KeQueryTimeIncrement();
  v6 = 0LL;
  if ( v4 >= 0 )
    v6 = v4;
  a2->QuadPart = -(v6 * TimeIncrement);
}
