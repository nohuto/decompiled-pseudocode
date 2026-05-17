/*
 * XREFs of sub_1800FE1C0 @ 0x1800FE1C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800093FC @ 0x1800093FC (sub_1800093FC.c)
 *     RtlRunOnceExecuteOnce @ 0x18001B510 (RtlRunOnceExecuteOnce.c)
 */

__int64 __fastcall sub_1800FE1C0(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v4; // ebx
  _QWORD *v5; // rax

  v4 = 0;
  if ( (int)RtlRunOnceExecuteOnce(
              &qword_18015C300,
              (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, __int64 *))sub_180008C50,
              0LL,
              0LL) >= 0 )
  {
    v5 = (_QWORD *)sub_1800093FC(24LL, 0);
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
