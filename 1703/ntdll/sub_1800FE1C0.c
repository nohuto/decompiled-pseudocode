/*
 * XREFs of sub_1800FE1C0 @ 0x1800FE1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall sub_1800FE1C0(PRTL_RUN_ONCE a1, PVOID a2, PVOID *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  if ( RtlRunOnceExecuteOnce(&RunOnce, (PRTL_RUN_ONCE_INIT_FN)InitFn, 0LL, 0LL) >= 0 )
  {
    v5 = (_QWORD *)sub_1800093FC(0x18uLL, 0);
    if ( v5 )
    {
      *v5 = 0LL;
      v5[1] = 0LL;
      v5[2] = 0LL;
      v4 = 1;
      *a3 = v5;
    }
  }
  return v4;
}
