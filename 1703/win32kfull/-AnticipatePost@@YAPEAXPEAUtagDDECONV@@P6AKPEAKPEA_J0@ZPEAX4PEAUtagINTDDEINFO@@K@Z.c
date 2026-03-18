/*
 * XREFs of ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E42F4
 * Callers:
 *     ?xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4880 (-xxxAdvise@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E49F4 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E4F70 (-xxxExecute@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5208 (-xxxPoke@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5440 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5738 (-xxxUnexpectedClientPost@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     xxxDDETrackSendHook @ 0x1C01E5EA4 (xxxDDETrackSendHook.c)
 * Callees:
 *     ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E43CC (-Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 */

void *__fastcall AnticipatePost(
        struct tagDDECONV *a1,
        unsigned int (*a2)(unsigned int *, __int64 *, struct tagDDECONV *),
        void *a3,
        void *a4,
        struct tagINTDDEINFO *a5,
        unsigned int a6)
{
  struct tagXSTATE *v7; // rdi
  void *result; // rax
  char *v9; // [rsp+30h] [rbp-10h] BYREF
  struct tagXSTATE *v10; // [rsp+38h] [rbp-8h]

  v7 = Createpxs(a2, a3, a4, a5, a6);
  result = 0LL;
  if ( v7 )
  {
    *((_QWORD *)v7 + 2) = *((_QWORD *)a1 + 2);
    v10 = v7;
    if ( *((_QWORD *)a1 + 7) )
      v9 = (char *)(*((_QWORD *)a1 + 8) + 24LL);
    else
      v9 = (char *)a1 + 56;
    HMAssignmentLock(&v9);
    v9 = (char *)a1 + 64;
    v10 = v7;
    HMAssignmentLock(&v9);
    return *(void **)v7;
  }
  return result;
}
