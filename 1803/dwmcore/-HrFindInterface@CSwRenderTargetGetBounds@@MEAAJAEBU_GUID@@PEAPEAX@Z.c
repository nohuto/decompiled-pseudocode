/*
 * XREFs of ?HrFindInterface@CSwRenderTargetGetBounds@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800429A0
 * Callers:
 *     ?QueryInterface@CSwRenderTargetGetBounds@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180042730 (-QueryInterface@CSwRenderTargetGetBounds@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::HrFindInterface(
        CSwRenderTargetGetBounds *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_0784e14c_5fb4_422c_9f18_6109bbc92771.Data4;
    if ( !v5 )
      goto LABEL_13;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
    if ( !v6 )
      goto LABEL_13;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( v7 )
    {
      return (unsigned int)-2147467262;
    }
    else
    {
LABEL_13:
      *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
      return 0;
    }
  }
  return v4;
}
