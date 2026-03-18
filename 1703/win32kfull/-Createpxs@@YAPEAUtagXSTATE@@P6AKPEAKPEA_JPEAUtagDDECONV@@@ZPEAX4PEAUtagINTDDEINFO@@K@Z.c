/*
 * XREFs of ?Createpxs@@YAPEAUtagXSTATE@@P6AKPEAKPEA_JPEAUtagDDECONV@@@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E43CC
 * Callers:
 *     ?AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z @ 0x1C01E42F4 (-AnticipatePost@@YAPEAXPEAUtagDDECONV@@P6AKPEAKPEA_J0@ZPEAX4PEAUtagINTDDEINFO@@K@Z.c)
 *     ?xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E49F4 (-xxxAdviseData@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z @ 0x1C01E4D90 (-xxxCopyAckIn@@YAKPEAKPEA_JPEAUtagDDECONV@@PEAPEAUtagINTDDEINFO@@@Z.c)
 *     ?xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5080 (-xxxExecuteAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1C01E5440 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     <none>
 */

struct tagXSTATE *__fastcall Createpxs(
        unsigned int (*a1)(unsigned int *, __int64 *, struct tagDDECONV *),
        void *a2,
        void *a3,
        struct tagINTDDEINFO *a4,
        unsigned int a5)
{
  void *v7; // rdi
  struct tagXSTATE *result; // rax

  v7 = a3;
  LOBYTE(a3) = 11;
  result = (struct tagXSTATE *)HMAllocObject(gptiCurrent, 0LL, a3, 72LL);
  if ( result )
  {
    *((_QWORD *)result + 3) = 0LL;
    *((_QWORD *)result + 4) = a1;
    *((_QWORD *)result + 5) = a2;
    *((_QWORD *)result + 6) = v7;
    *((_QWORD *)result + 7) = a4;
    *((_DWORD *)result + 16) = a5;
  }
  else
  {
    if ( a4 )
      Win32FreePool(a4);
    return 0LL;
  }
  return result;
}
