/*
 * XREFs of ?HrFindInterface@CSecondarySysmemBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18017A4A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSecondarySysmemBitmap::HrFindInterface(
        CSecondarySysmemBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( !v5 )
      goto LABEL_8;
    v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data1 )
      v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a2d1d2e5_dfc4_4554_9cc3_d47bcc235f80.Data4;
    if ( v6 )
    {
      v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( !v8 )
        goto LABEL_15;
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
      if ( v9 )
      {
        v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data1 )
          v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_72edf2eb_d126_4bb1_a478_a87a5053de33.Data4;
        if ( v10 )
        {
          *a3 = 0LL;
          return (unsigned int)-2147467263;
        }
        v7 = (unsigned __int64)this + 104;
      }
      else
      {
LABEL_15:
        v7 = (unsigned __int64)this + 96;
      }
    }
    else
    {
LABEL_8:
      v7 = (unsigned __int64)this + 16;
    }
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
