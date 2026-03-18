/*
 * XREFs of ?HrFindInterface@CHwTextureRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078580
 * Callers:
 *     ?QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800789A0 (-QueryInterface@CHwTextureRenderTarget@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180078DDC (-InternalQueryInterface@CMILCOMBase@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwTextureRenderTarget::HrFindInterface(
        CHwTextureRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  unsigned int v5; // r8d
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // rdx

  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e2c19993_15cc_4ac8_b717_659a782bb2e3.Data4;
  v5 = 0;
  if ( !v4 )
  {
    v12 = (unsigned __int64)this + 56;
    goto LABEL_21;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
  if ( !v6 )
  {
    v12 = (unsigned __int64)this + 64;
    goto LABEL_21;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  if ( !v7 )
  {
    v12 = (unsigned __int64)this + 72;
    goto LABEL_21;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
  if ( !v8 )
  {
    v12 = (unsigned __int64)this + 80;
LABEL_21:
    v9 = (char *)(v12 & -(__int64)(this != (CHwTextureRenderTarget *)160));
LABEL_22:
    *a3 = v9;
    return v5;
  }
  v9 = (char *)this - 160;
  v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data1 )
    v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_b73b1159_a295_4c76_bb56_c18e282ae007.Data4;
  if ( !v10 )
    goto LABEL_22;
  v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( !v11 )
    goto LABEL_22;
  return (unsigned int)-2147467262;
}
