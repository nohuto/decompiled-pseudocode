/*
 * XREFs of CmpRollbackLightWeightTransaction @ 0x1405688D0
 * Callers:
 *     NtRollbackRegistryTransaction @ 0x1405687A8 (NtRollbackRegistryTransaction.c)
 *     CmpCloseLightWeightTransaction @ 0x1405688B0 (CmpCloseLightWeightTransaction.c)
 *     CmpAbortRollbackPacket @ 0x1405F2D18 (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ExBlockOnAddressPushLock @ 0x1400BD710 (ExBlockOnAddressPushLock.c)
 *     CmpAbortLightWeightTransaction @ 0x140568928 (CmpAbortLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackLightWeightTransaction(__int64 a1)
{
  signed __int32 v2; // eax
  unsigned int v3; // ebx
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v2 = _InterlockedCompareExchange((volatile signed __int32 *)a1, 3, 0);
  LODWORD(v5) = v2;
  if ( v2 == 1 )
  {
    if ( _InterlockedCompareExchange((volatile signed __int32 *)a1, 4, 1) != 1 )
      return (unsigned int)-1072103421;
    v3 = 0;
    LODWORD(v5) = 4;
    ExBlockOnAddressPushLock((volatile __int64 *)(a1 + 8), (_QWORD *)a1, &v5, 4uLL, 0LL);
    goto LABEL_3;
  }
  v3 = 0;
  if ( !v2 )
  {
LABEL_3:
    CmpAbortLightWeightTransaction(a1);
    return v3;
  }
  v3 = -1072103421;
  if ( v2 == 3 )
    return (unsigned int)-1072103403;
  return v3;
}
