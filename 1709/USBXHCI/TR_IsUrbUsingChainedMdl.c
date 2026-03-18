/*
 * XREFs of TR_IsUrbUsingChainedMdl @ 0x1C00235C8
 * Callers:
 *     Control_MapTransfer @ 0x1C0024510 (Control_MapTransfer.c)
 *     Bulk_Stage_EstimateRequiredTrbs @ 0x1C003051C (Bulk_Stage_EstimateRequiredTrbs.c)
 *     Bulk_TransferData_DetermineTransferMechanism @ 0x1C003144C (Bulk_TransferData_DetermineTransferMechanism.c)
 * Callees:
 *     <none>
 */

bool __fastcall TR_IsUrbUsingChainedMdl(__int64 a1)
{
  unsigned int v1; // eax
  _QWORD *v2; // rax
  bool result; // al

  v1 = *(unsigned __int16 *)(a1 + 2);
  result = 0;
  if ( v1 <= 0x38 || v1 > 0x3A )
  {
    v2 = *(_QWORD **)(a1 + 48);
    if ( v2 )
    {
      if ( *v2 )
        return 1;
    }
  }
  return result;
}
