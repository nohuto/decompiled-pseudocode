/*
 * XREFs of ?HrFindInterface@CRenderTargetBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800471C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CRenderTargetBitmap::HrFindInterface(CRenderTargetBitmap *this, const struct _GUID *a2, void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
    if ( v5 )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
      if ( v6 )
        return 2147500034LL;
      v7 = (unsigned __int64)this + 112;
    }
    else
    {
      v7 = (unsigned __int64)this + 104;
    }
    *a3 = (void *)(v7 & -(__int64)(this != 0LL));
    return 0LL;
  }
  return result;
}
