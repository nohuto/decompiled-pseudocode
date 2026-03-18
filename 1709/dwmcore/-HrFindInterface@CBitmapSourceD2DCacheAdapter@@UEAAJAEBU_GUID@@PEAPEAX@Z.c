/*
 * XREFs of ?HrFindInterface@CBitmapSourceD2DCacheAdapter@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800885D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapSourceD2DCacheAdapter::HrFindInterface(
        CBitmapSourceD2DCacheAdapter *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // r9d
  __int64 v5; // rcx
  __int64 v6; // rcx

  v4 = 0;
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_e3dc98f9_eabc_4e58_bacc_71f136bda5d3.Data4;
  if ( !v5 )
    goto LABEL_9;
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( v6 )
    return (unsigned int)-2147467262;
  else
LABEL_9:
    *a3 = (void *)(((unsigned __int64)this + 16) & -(__int64)(this != 0LL));
  return v4;
}
