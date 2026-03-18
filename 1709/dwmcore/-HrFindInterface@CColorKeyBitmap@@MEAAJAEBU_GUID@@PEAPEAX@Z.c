/*
 * XREFs of ?HrFindInterface@CColorKeyBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801D17D0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CD2DBitmapCache@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011B290 (-HrFindInterface@CD2DBitmapCache@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CColorKeyBitmap::HrFindInterface(CColorKeyBitmap *this, const struct _GUID *a2, void **a3)
{
  unsigned int v4; // ecx
  __int64 v5; // rcx
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx

  v4 = -2147024809;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v5 )
    {
      v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
        v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
      if ( v7 )
        return (unsigned int)CD2DBitmapCache::HrFindInterface(this, a2, a3);
      v6 = (unsigned __int64)this + 88;
    }
    else
    {
      v6 = (unsigned __int64)this + 144;
    }
    *a3 = (void *)(v6 & -(__int64)(this != 0LL));
    return 0;
  }
  return v4;
}
