/*
 * XREFs of ?HrFindInterface@COffScreenRenderTarget@@MEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18016FD60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall COffScreenRenderTarget::HrFindInterface(
        COffScreenRenderTarget *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 result; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rcx
  __int64 v7; // rax

  result = 2147942487LL;
  if ( a3 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
    if ( !v5 )
    {
      v6 = (unsigned __int64)this + 64;
LABEL_10:
      *a3 = (void *)(v6 & -(__int64)(this != 0LL));
      return 0LL;
    }
    v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4.Data1 )
      v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_41f2e53e_f3fa_4c1d_b486_f0c73a31c2d4.Data4;
    if ( !v7 )
    {
      v6 = (unsigned __int64)this + 168;
      goto LABEL_10;
    }
    return 2147500034LL;
  }
  return result;
}
