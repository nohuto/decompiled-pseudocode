/*
 * XREFs of ?QueryInterface@CBitmapRealization@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180036BF0
 * Callers:
 *     ?ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z @ 0x18000A658 (-ResetAdvancedDirectFlipState@CCompositionSurfaceInfo@@AEAAXPEAVCBitmapRealization@@@Z.c)
 *     ?ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z @ 0x1800C3F38 (-ProcessRestoreContent@CCompositionSurfaceManager@@QEAAJPEAVIRenderTargetDisplay@@@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5A30 (-QueryInterface@CBitmapRealization@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5A40 (-QueryInterface@CBitmapRealization@@WGI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CBitmapRealization@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5A50 (-QueryInterface@CBitmapRealization@@WHA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CBitmapRealization::QueryInterface(CBitmapRealization *this, const struct _GUID *a2, void **a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CBitmapRealization *__hidden, const struct _GUID *, void **); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx

  if ( a3 )
  {
    v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
      v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
    if ( v4 )
    {
      v5 = *(__int64 (__fastcall **)(CBitmapRealization *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
      if ( v5 == CBitmapRealization::HrFindInterface )
      {
        v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_db178a3c_d733_4570_9513_5392d717955f.Data1 )
          v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_db178a3c_d733_4570_9513_5392d717955f.Data4;
        if ( v6 )
        {
          v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data1 )
            v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_475af409_d8b1_4ca5_8177_4562f6260b68.Data4;
          if ( v7 )
          {
            v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data1 )
              v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c5a4a15d_a7cd_44bc_8a15_7199ecad6671.Data4;
            if ( v8 )
            {
              *a3 = 0LL;
              v9 = -2147467263;
            }
            else
            {
              v9 = 0;
              *a3 = (char *)this + 16;
            }
          }
          else
          {
            v9 = 0;
            *a3 = (char *)this + 112;
          }
        }
        else
        {
          v9 = 0;
          *a3 = (char *)this + 104;
        }
      }
      else
      {
        v9 = v5(this, a2, a3);
      }
      if ( v9 < 0 )
      {
        *a3 = 0LL;
        return (unsigned int)v9;
      }
    }
    else
    {
      *a3 = this;
      v9 = 0;
    }
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v9;
  }
  return 2147942487LL;
}
