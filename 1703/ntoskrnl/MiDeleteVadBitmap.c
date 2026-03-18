/*
 * XREFs of MiDeleteVadBitmap @ 0x140499A8C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 * Callees:
 *     PsGetHostSilo @ 0x14001ED90 (PsGetHostSilo.c)
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     MiDeletePagablePteRange @ 0x140062D20 (MiDeletePagablePteRange.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     MiUpdateChargedWsles @ 0x14020E2AC (MiUpdateChargedWsles.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 */

_UNKNOWN **__fastcall MiDeleteVadBitmap(_QWORD *BugCheckParameter2)
{
  _UNKNOWN **result; // rax
  ULONG_PTR v2; // r9
  unsigned int *v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 ProcessPartition; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // r14
  unsigned int *v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v2 = BugCheckParameter2[114];
  if ( v2 )
    KeBugCheckEx(0x1Au, 0x3455uLL, (ULONG_PTR)BugCheckParameter2, v2, 0LL);
  v4 = (unsigned int *)BugCheckParameter2[162];
  if ( v4 )
  {
    v5 = v4[32];
    v6 = MiDeletePagablePteRange((__int64)BugCheckParameter2, qword_14036C5C8, qword_14036C5C8 + 276840447);
    ProcessPartition = MiGetProcessPartition((__int64)BugCheckParameter2);
    v8 = 0LL;
    v9 = v4[35] + v5;
    v10 = ProcessPartition;
    v11 = v4 + 101;
    v12 = 2LL;
    do
    {
      v13 = *v11++;
      v8 += v13;
      --v12;
    }
    while ( v12 );
    v14 = v8 + v9;
    if ( v14 )
      MiReturnFullProcessCharges((__int64)BugCheckParameter2, v14);
    v15 = v14 - v6;
    if ( v15 )
      MiReturnCommit(v10, v15);
    result = (_UNKNOWN **)PsGetHostSilo();
    if ( BugCheckParameter2[191] )
    {
      MiUpdateChargedWsles((__int64)(BugCheckParameter2 + 160));
      return (_UNKNOWN **)MiReturnFullProcessCommitment(BugCheckParameter2);
    }
  }
  return result;
}
