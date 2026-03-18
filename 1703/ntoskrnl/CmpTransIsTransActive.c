/*
 * XREFs of CmpTransIsTransActive @ 0x1401DF9BC
 * Callers:
 *     CmpReportNotifyHelper @ 0x14048D130 (CmpReportNotifyHelper.c)
 * Callees:
 *     CmpTransGetTransPtr @ 0x140669568 (CmpTransGetTransPtr.c)
 */

__int64 __fastcall CmpTransIsTransActive(char a1)
{
  struct _KTRANSACTION *TransPtr; // rax

  if ( (a1 & 1) != 0 )
    return *(_DWORD *)CmpTransGetTransPtr() == 0;
  TransPtr = (struct _KTRANSACTION *)CmpTransGetTransPtr();
  return TmIsTransactionActive(TransPtr);
}
