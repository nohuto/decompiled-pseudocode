/*
 * XREFs of CmpTransReferenceTransaction @ 0x14054C710
 * Callers:
 *     CmpTransSearchAddLightWeightTrans @ 0x14054C228 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCreateKeyBody @ 0x14054C380 (CmpCreateKeyBody.c)
 *     CmpTransSearchAddTrans @ 0x1405E145C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405E16EC (CmpTransInitializeTransaction.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 */

__int64 __fastcall CmpTransReferenceTransaction(__int64 a1)
{
  char v1; // bl
  struct _KTRANSACTION *v2; // rdi
  unsigned int v3; // ebx

  v1 = a1;
  v2 = (struct _KTRANSACTION *)(a1 & 0xFFFFFFFFFFFFFFFEuLL);
  ObfReferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
  if ( (v1 & 1) != 0 )
  {
    return v2->OutcomeEvent.Header.LockNV != 0 ? 0xC0190003 : 0;
  }
  else
  {
    v3 = 0;
    if ( !TmIsTransactionActive(v2) )
    {
      ObfDereferenceObject(v2);
      return (unsigned int)-1072103421;
    }
  }
  return v3;
}
