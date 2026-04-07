/*
 * XREFs of ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18003FAE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmap::HrFindInterface(CBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
      if ( !v6 )
      {
        v7 = (unsigned __int64)this + 24;
LABEL_9:
        *a3 = (void *)(v7 & -(__int64)(this != 0LL));
        return 0;
      }
      v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v9 )
      {
        v10 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1 )
          v10 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data4;
        if ( v10 )
        {
          v11 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmap.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmap.Data1 )
            v11 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmap.Data4;
          if ( v11 )
          {
            v12 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapSource.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapSource.Data1 )
              v12 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapSource.Data4;
            if ( v12 )
              return (unsigned int)-2147467262;
          }
          v7 = (unsigned __int64)this + 40;
        }
        else
        {
          v7 = (unsigned __int64)this + 48;
        }
        goto LABEL_9;
      }
    }
    v7 = (unsigned __int64)this + 16;
    goto LABEL_9;
  }
  return v4;
}
