/*
 * XREFs of ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1802142E0
 * Callers:
 *     <none>
 * Callees:
 *     ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049680 (-HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall CDxHandleAdvancedDirectFlipBitmapRealization::HrFindInterface(
        CDxHandleAdvancedDirectFlipBitmapRealization *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v4; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_302508ed_c63d_40f8_af07_af5881d2df95.Data4;
    if ( v4 )
    {
      return CBitmapRealization::HrFindInterface(this, a2, a3);
    }
    else
    {
      *a3 = (void *)(((unsigned __int64)this + 408) & -(__int64)(this != 0LL));
      return 0LL;
    }
  }
  return result;
}
