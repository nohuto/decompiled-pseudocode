/*
 * XREFs of ?HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180013640
 * Callers:
 *     ?QueryInterface@CCompressedSourceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800134E0 (-QueryInterface@CCompressedSourceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompressedSourceBitmap::HrFindInterface(
        CCompressedSourceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned int v10; // ecx
  __int64 result; // rax
  char *v12; // r9
  __int64 v13; // rax
  char *v14; // r9
  char *v15; // rax
  char *v16; // rax
  __int64 v17; // rax
  char *v18; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
  if ( !v4 )
  {
    if ( this )
      v14 = (char *)this + 248;
    else
      v14 = 0LL;
    *a3 = v14;
    return 0LL;
  }
  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data4;
  if ( !v5 )
  {
    v15 = (char *)this + 240;
    if ( !this )
      v15 = 0LL;
    *a3 = v15;
    return 0LL;
  }
  v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data1 )
    v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_d82bbf04_48b7_4100_86b5_a6e5bb0e3213.Data4;
  if ( !v6 )
  {
    v10 = 0;
    if ( this )
    {
      v12 = (char *)this + 16;
LABEL_24:
      *a3 = v12;
      return v10;
    }
    goto LABEL_37;
  }
  v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data1 )
    v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_14d094dc_1246_4784_b811_74305a3ecec8.Data4;
  if ( !v7 )
  {
    v10 = 0;
    if ( this )
    {
      result = 0LL;
      *a3 = (char *)this + 24;
      return result;
    }
LABEL_37:
    v12 = 0LL;
    goto LABEL_24;
  }
  v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
    v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
  if ( !v8 )
  {
    v16 = (char *)this + 16;
    v10 = 0;
    if ( !this )
      v16 = 0LL;
    *a3 = v16;
    return v10;
  }
  v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data1 )
    v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_7d331c5d_1dc7_4bf7_8791_00fd3fe381c8.Data4;
  if ( !v9 )
  {
    v10 = 0;
    if ( this )
    {
      result = 0LL;
      *a3 = (char *)this + 48;
      return result;
    }
    goto LABEL_37;
  }
  v13 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmap.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmap.Data1 )
    v13 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmap.Data4;
  if ( v13 )
  {
    v17 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICBitmapSource.Data1 )
      v17 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICBitmapSource.Data4;
    if ( v17 )
    {
      return (unsigned int)-2147467262;
    }
    else
    {
      v18 = (char *)this + 40;
      v10 = 0;
      if ( !this )
        v18 = 0LL;
      *a3 = v18;
    }
    return v10;
  }
  v10 = 0;
  if ( !this )
    goto LABEL_37;
  result = 0LL;
  *a3 = (char *)this + 40;
  return result;
}
