/*
 * XREFs of ?HrFindInterface@CCompressedSourceBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801AAC40
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056670 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CCompressedSourceBitmap::HrFindInterface(
        CCompressedSourceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&IID_IWICDecoderBitmapSource.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)IID_IWICDecoderBitmapSource.Data4;
    if ( v5 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_1db401c9_4c11_45e6_9351_8060065ab3f6.Data4;
      if ( v7 )
        return (unsigned int)CBitmap::HrFindInterface(this, a2, a3);
      v6 = (unsigned __int64)this + 224;
    }
    else
    {
      v6 = (unsigned __int64)this + 232;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
