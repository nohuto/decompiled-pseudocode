/*
 * XREFs of ?HrFindInterface@CBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036F40
 * Callers:
 *     ?HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B55E0 (-HrFindInterface@CDxHandleAdvancedDirectFlipBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801B7050 (-HrFindInterface@CDxHandleYUVBitmapRealization@@MEAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapRealization::HrFindInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int v7; // ecx
  char *v9; // rax
  char *v10; // rax
  char *v11; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
      if ( v6 )
      {
        *a3 = 0LL;
        return (unsigned int)-2147467263;
      }
      else
      {
        v11 = (char *)this + 16;
        v7 = 0;
        if ( !this )
          v11 = 0LL;
        *a3 = v11;
      }
      return v7;
    }
    else
    {
      v10 = (char *)this + 112;
      if ( !this )
        v10 = 0LL;
      *a3 = v10;
      return 0LL;
    }
  }
  else
  {
    v9 = (char *)this + 104;
    if ( !this )
      v9 = 0LL;
    *a3 = v9;
    return 0LL;
  }
}
