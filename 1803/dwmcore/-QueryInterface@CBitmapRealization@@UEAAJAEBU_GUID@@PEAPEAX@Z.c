/*
 * XREFs of ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180049930
 * Callers:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x180008EC4 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE820 (-QueryInterface@CBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE830 (-QueryInterface@CBitmapRealization@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800DE840 (-QueryInterface@CBitmapRealization@@WJA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::QueryInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CBitmapRealization *, const struct _GUID *, void **); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  char *v11; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CBitmapRealization *, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
    if ( v5 == CBitmapRealization::HrFindInterface )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_18a0a88e_19aa_4455_b0cf_98cbea89863b.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
        if ( v7 )
        {
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
          if ( v8 )
          {
            v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
              v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
            if ( v9 )
            {
              v10 = -2147467263;
              v11 = 0LL;
            }
            else
            {
              v10 = 0;
              v11 = (char *)this + 16;
            }
            *a3 = v11;
          }
          else
          {
            v10 = 0;
            *a3 = (char *)this + 88;
          }
        }
        else
        {
          v10 = 0;
          *a3 = (char *)this + 144;
        }
      }
      else
      {
        v10 = 0;
        *a3 = (char *)this + 144;
      }
    }
    else
    {
      v10 = v5(this, a2, a3);
    }
    if ( v10 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v10;
    }
  }
  else
  {
    *a3 = this;
    v10 = 0;
  }
  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  return (unsigned int)v10;
}
