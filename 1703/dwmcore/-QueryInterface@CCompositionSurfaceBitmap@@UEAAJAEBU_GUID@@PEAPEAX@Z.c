/*
 * XREFs of ?QueryInterface@CCompositionSurfaceBitmap@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037660
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5830 (-QueryInterface@CCompositionSurfaceBitmap@@WDI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5840 (-QueryInterface@CCompositionSurfaceBitmap@@WEA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5850 (-QueryInterface@CCompositionSurfaceBitmap@@WFA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCompositionSurfaceBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D5860 (-QueryInterface@CCompositionSurfaceBitmap@@WFI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ @ 0x180036B40 (-AddRef@CBitmapOfDeviceBitmaps@@UEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::QueryInterface(
        CCompositionSurfaceBitmap *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 (__fastcall *v5)(CCompositionSurfaceBitmap *__hidden, const struct _GUID *, void **); // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ebx
  void (*v13)(void); // rax
  __int64 v14; // rax

  if ( !a3 )
    return 2147942487LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4;
  if ( v4 )
  {
    v5 = *(__int64 (__fastcall **)(CCompositionSurfaceBitmap *__hidden, const struct _GUID *, void **))(*(_QWORD *)this + 32LL);
    if ( v5 == CCompositionSurfaceBitmap::HrFindInterface )
    {
      v6 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1;
      if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data1 )
        v6 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_ebe69942_4a7c_454d_8732_fe7d07ca4821.Data4;
      if ( v6 )
      {
        v7 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1;
        if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data1 )
          v7 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_780cea64_08cc_45b3_922c_e1bd3c5bc552.Data4;
        if ( v7 )
        {
          v8 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1;
          if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data1 )
            v8 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_67fcaecd_5506_4a6d_aec4_0c0dc0c6e64d.Data4;
          if ( v8 )
          {
            v9 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1;
            if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data1 )
              v9 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_5d3514b2_d61f_44e2_ac76_abb094163fc2.Data4;
            if ( v9 )
            {
              v14 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1;
              if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data1 )
                v14 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_c155b649_2c5b_416a_b836_bbda56b2ec26.Data4;
              if ( v14 )
              {
                *a3 = 0LL;
                v11 = -2147467263;
              }
              else
              {
                v11 = 0;
                *a3 = (char *)this + 80;
              }
            }
            else
            {
              v10 = *((_QWORD *)this + 58);
              if ( v10 && *(_DWORD *)(v10 + 104) > 1u )
              {
                v11 = 0;
                *a3 = (char *)this + 56;
              }
              else
              {
                *a3 = 0LL;
                v11 = -2147467262;
              }
            }
          }
          else
          {
            v11 = 0;
            *a3 = (char *)this + 64;
          }
        }
        else
        {
          v11 = 0;
          *a3 = (char *)this + 64;
        }
      }
      else
      {
        v11 = 0;
        *a3 = (char *)this + 64;
      }
    }
    else
    {
      v11 = v5(this, a2, a3);
    }
    if ( v11 < 0 )
    {
      *a3 = 0LL;
      return (unsigned int)v11;
    }
  }
  else
  {
    *a3 = this;
    v11 = 0;
  }
  v13 = *(void (**)(void))(*(_QWORD *)*a3 + 8LL);
  if ( (char *)v13 == (char *)CBitmapOfDeviceBitmaps::AddRef )
    CBitmapOfDeviceBitmaps::AddRef((CBitmapOfDeviceBitmaps *)*a3);
  else
    v13();
  return (unsigned int)v11;
}
