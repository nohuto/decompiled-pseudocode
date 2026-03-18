/*
 * XREFs of Bulk_TransferData_DetermineTransferMechanism @ 0x1C002EF10
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C002D78C (Bulk_RetrieveNextStage.c)
 * Callees:
 *     TR_AcquireDoubleBuffer @ 0x1C001F864 (TR_AcquireDoubleBuffer.c)
 *     TR_IsUrbUsingChainedMdl @ 0x1C0020E84 (TR_IsUrbUsingChainedMdl.c)
 */

void __fastcall Bulk_TransferData_DetermineTransferMechanism(__int64 a1)
{
  unsigned int v1; // edx
  int v2; // ebx
  __int64 v3; // r8
  __int64 v5; // rcx
  unsigned int v6; // eax
  unsigned int v7; // edx
  __int64 v8; // r8
  _QWORD *v9; // rax

  v1 = *(_DWORD *)(a1 + 104);
  v2 = 0;
  v3 = *(_QWORD *)(a1 + 56);
  if ( v1 )
  {
    v5 = *(_QWORD *)(a1 + 48);
    v6 = *(unsigned __int16 *)(v5 + 2);
    if ( v6 > 0x38 && v6 <= 0x3A )
      goto LABEL_10;
    if ( *(_BYTE *)(v3 + 320) && v1 <= 8 )
    {
      v2 = 1;
      goto LABEL_11;
    }
    if ( TR_IsUrbUsingChainedMdl(v5)
      || v7 > *(_DWORD *)(v8 + 24)
      || (v9 = TR_AcquireDoubleBuffer(v8), *(_QWORD *)(a1 + 96) = v9, v2 = 2, !v9) )
    {
LABEL_10:
      v2 = 3;
    }
  }
LABEL_11:
  *(_DWORD *)(a1 + 76) = v2;
}
