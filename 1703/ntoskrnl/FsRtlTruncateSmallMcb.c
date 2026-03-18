/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x140261EA0
 * Callers:
 *     KiInterruptThunk @ 0x14018B700 (KiInterruptThunk.c)
 *     $$1 @ 0x14018B710 ($$1.c)
 *     $$2 @ 0x14018B720 ($$2.c)
 *     $$3 @ 0x14018B730 ($$3.c)
 *     $$4 @ 0x14018B740 ($$4.c)
 *     $$5 @ 0x14018B750 ($$5.c)
 *     $$6 @ 0x14018B760 ($$6.c)
 *     $$7 @ 0x14018B770 ($$7.c)
 *     $$8 @ 0x14018B780 ($$8.c)
 *     $$9 @ 0x14018B790 ($$9.c)
 *     $$a @ 0x14018B7A0 ($$a.c)
 *     $$b @ 0x14018B7B0 ($$b.c)
 *     $$c @ 0x14018B7C0 ($$c.c)
 *     $$d @ 0x14018B7D0 ($$d.c)
 *     $$e @ 0x14018B7E0 ($$e.c)
 *     $$f @ 0x14018B7F0 ($$f.c)
 * Callees:
 *     RtlpComputeEpilogueOffset @ 0x140177544 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x14018B640 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+61h] [rbp-67h]
  __int64 v6; // [rsp+A9h] [rbp-1Fh]
  __int64 v7; // [rsp+B1h] [rbp-17h]

  result = ((__int64)a2 >> 47) + 1;
  if ( (__int64)a2 >> 47 != -1 && result != 1 )
  {
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v7 = a3;
    v5 = __ROL8__(a2, a3);
    v6 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    return KiCustomAccessRoutine0(a2);
  }
  return result;
}
