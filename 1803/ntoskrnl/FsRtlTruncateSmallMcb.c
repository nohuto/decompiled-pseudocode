/*
 * XREFs of FsRtlTruncateSmallMcb @ 0x1402C1180
 * Callers:
 *     KiInterruptThunk @ 0x1401B50B0 (KiInterruptThunk.c)
 *     $$1 @ 0x1401B50C0 ($$1.c)
 *     $$2 @ 0x1401B50D0 ($$2.c)
 *     $$3 @ 0x1401B50E0 ($$3.c)
 *     $$4 @ 0x1401B50F0 ($$4.c)
 *     $$5 @ 0x1401B5100 ($$5.c)
 *     $$6 @ 0x1401B5110 ($$6.c)
 *     $$7 @ 0x1401B5120 ($$7.c)
 *     $$8 @ 0x1401B5130 ($$8.c)
 *     $$9 @ 0x1401B5140 ($$9.c)
 *     $$a @ 0x1401B5150 ($$a.c)
 *     $$b @ 0x1401B5160 ($$b.c)
 *     $$c @ 0x1401B5170 ($$c.c)
 *     $$d @ 0x1401B5180 ($$d.c)
 *     $$e @ 0x1401B5190 ($$e.c)
 *     $$f @ 0x1401B51A0 ($$f.c)
 * Callees:
 *     RtlpComputeEpilogueOffset @ 0x1401A1520 (RtlpComputeEpilogueOffset.c)
 *     KiCustomAccessRoutine0 @ 0x1401B4FF0 (KiCustomAccessRoutine0.c)
 */

__int64 __fastcall FsRtlTruncateSmallMcb(__int64 a1, unsigned int *a2, __int64 a3, unsigned __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // [rsp+61h] [rbp-77h]
  __int64 v6; // [rsp+A9h] [rbp-2Fh]
  __int64 v7; // [rsp+B1h] [rbp-27h]

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
