/*
 * XREFs of ?HrFindInterface@CBitmapOfDeviceBitmaps@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B1FC0
 * Callers:
 *     ?QueryInterface@CBitmapOfDeviceBitmaps@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B23D0 (-QueryInterface@CBitmapOfDeviceBitmaps@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180056670 (-HrFindInterface@CBitmap@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CBitmapOfDeviceBitmaps::HrFindInterface(
        CBitmapOfDeviceBitmaps *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( v4 )
    {
      return CBitmap::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 224) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
