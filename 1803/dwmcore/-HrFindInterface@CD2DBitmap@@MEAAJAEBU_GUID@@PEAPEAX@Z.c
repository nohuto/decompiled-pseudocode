/*
 * XREFs of ?HrFindInterface@CD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077610
 * Callers:
 *     ?QueryInterface@CD2DBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077570 (-QueryInterface@CD2DBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CSecondaryD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800836E0 (-HrFindInterface@CSecondaryD2DBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CD2DBitmap::HrFindInterface(CD2DBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_2ad9614d_1773_4f18_a5cb_cc0143d41bd5.Data4;
    if ( !v5 )
      goto LABEL_20;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v6 )
      goto LABEL_20;
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e74a57c2_9057_4aee_b39d_d01f51d2455f.Data4;
    if ( v7 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
      if ( v8 )
      {
        v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
          v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
        if ( v9 )
          return (unsigned int)-2147467262;
        v10 = (unsigned __int64)this + 16;
      }
      else
      {
        v10 = (unsigned __int64)this + 112;
      }
    }
    else
    {
LABEL_20:
      v10 = (unsigned __int64)this + 104;
    }
    *a3 = (void *)(v10 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
