/*
 * XREFs of CmpRollbackTransactionArray @ 0x1406F9C2C
 * Callers:
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmpParseKey @ 0x14059EF70 (CmpParseKey.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140103810 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     CmpRollbackLightWeightTransaction @ 0x14054BB90 (CmpRollbackLightWeightTransaction.c)
 *     CmpTransDereferenceTransaction @ 0x14054C8AC (CmpTransDereferenceTransaction.c)
 *     CmpRetryBackOff @ 0x1406F9BF4 (CmpRetryBackOff.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PVOID *a2, __int64 a3, _DWORD *a4)
{
  int v4; // ebp
  PVOID *v8; // rsi
  __int64 v9; // r15
  PVOID v10; // rbx
  struct _KENLISTMENT *v11; // rcx
  int v12; // edi

  v4 = 0;
  if ( a1 )
  {
    v8 = a2;
    v9 = a1;
    do
    {
      v10 = *v8;
      v11 = (struct _KENLISTMENT *)*v8;
      if ( ((unsigned __int8)*v8 & 1) != 0 )
      {
        v12 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFEuLL));
        CmpTransDereferenceTransaction((__int64)v10);
      }
      else
      {
        v12 = TmRollbackEnlistment(v11, 0LL);
        ObfDereferenceObject(*v8);
      }
      if ( v12 < 0 && v4 >= 0 && (((v12 + 1072103405) & 0xFFFFFFFC) != 0 || v12 == -1072103404) )
        v4 = v12;
      ++v8;
      --v9;
    }
    while ( v9 );
  }
  if ( a1 )
    ExFreePoolWithTag(a2, 0x36344D43u);
  CmpRetryBackOff(a4);
  return (unsigned int)v4;
}
