/*
 * XREFs of ?UpdateBackdropBlurFlag@CVisual@@AEAAXXZ @ 0x18008663C
 * Callers:
 *     ?SetContent@CVisual@@MEAAJPEAVCContent@@@Z @ 0x180088B00 (-SetContent@CVisual@@MEAAJPEAVCContent@@@Z.c)
 * Callees:
 *     ?IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800393B0 (-IsOfType@CMaskBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z @ 0x180039790 (-EnsureBrushGraph@CMaskBrush@@MEAAJ_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800846C0 (-IsOfType@CRenderData@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18008BF10 (-IsOfType@CColorBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800AF020 (-IsOfType@CAtlasedRectsGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800C0260 (-IsOfType@CPrimitiveGroupLayerClip@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Remove@?$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z @ 0x1800C5964 (-Remove@-$DynArray@PEAVCVisual@@$0A@@@QEAAHAEBQEAVCVisual@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CVisual::UpdateBackdropBlurFlag(CVisual *this)
{
  char v2; // bl
  __int64 v3; // rcx
  __int64 (__fastcall *v4)(__int64, __int64); // rax
  char v5; // al
  CMaskBrush *v6; // rsi
  bool (__fastcall *v7)(__int64, int); // rax
  char v8; // al
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(CMaskBrush *, char); // rax
  __int64 v11; // rax
  __int64 v12; // r10
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  CVisual *v17; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  v3 = *((_QWORD *)this + 30);
  if ( v3 )
  {
    v4 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 48LL);
    if ( v4 == CColorBrush::IsOfType )
    {
      v5 = CColorBrush::IsOfType(v3, 81LL);
    }
    else if ( (char *)v4 == (char *)CMaskBrush::IsOfType )
    {
      v5 = CMaskBrush::IsOfType(v3, 81);
    }
    else if ( (char *)v4 == (char *)CRenderData::IsOfType )
    {
      v5 = CRenderData::IsOfType(v3, 81);
    }
    else if ( v4 == CAtlasedRectsGroup::IsOfType )
    {
      v5 = CAtlasedRectsGroup::IsOfType(v3, 81LL);
    }
    else
    {
      v5 = v4 == CPrimitiveGroupLayerClip::IsOfType ? CPrimitiveGroupLayerClip::IsOfType(v3, 81LL) : v4(v3, 81LL);
    }
    if ( v5 )
    {
      v6 = (CMaskBrush *)*((_QWORD *)this + 30);
      v7 = *(bool (__fastcall **)(__int64, int))(*(_QWORD *)v6 + 48LL);
      if ( (char *)v7 == (char *)CColorBrush::IsOfType )
        v8 = CColorBrush::IsOfType(v6, 89LL);
      else
        v8 = v7 == CMaskBrush::IsOfType ? CMaskBrush::IsOfType((__int64)v6, 89) : v7((__int64)v6, 89);
      if ( v8 )
        goto LABEL_27;
      LOBYTE(v9) = 1;
      v10 = *(__int64 (__fastcall **)(CMaskBrush *, char))(*(_QWORD *)v6 + 256LL);
      if ( v10 == CMaskBrush::EnsureBrushGraph )
        CMaskBrush::EnsureBrushGraph(v6, 1);
      else
        v10(v6, v9);
      v11 = *((_QWORD *)v6 + 8);
      if ( v11 )
      {
        v2 = *(_BYTE *)(v11 + 353);
        if ( *(_BYTE *)(v11 + 354) )
LABEL_27:
          v2 = 1;
      }
    }
  }
  if ( v2 != ((*((_BYTE *)this + 90) & 0x40) != 0) )
  {
    v17 = this;
    if ( v2 )
    {
      v12 = *((_QWORD *)this + 2);
      v13 = (unsigned int)v17;
      v14 = *(unsigned int *)(v12 + 1112);
      v15 = v14 + 1;
      if ( (int)v14 + 1 >= (unsigned int)v14 )
        v13 = v14 + 1;
      if ( v15 < (unsigned int)v14 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15 < (unsigned int)v14 ? 0x80070216 : 0, 0xB5u);
      }
      else if ( v13 > *(_DWORD *)(v12 + 1108) )
      {
        v16 = DynArrayImpl<0>::AddMultipleAndSet(v12 + 1088, 8u, 1, &v17);
        if ( v16 < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
      }
      else
      {
        *(_QWORD *)(*(_QWORD *)(v12 + 1088) + 8 * v14) = v17;
        *(_DWORD *)(v12 + 1112) = v13;
      }
    }
    else
    {
      DynArray<CVisual *,0>::Remove(*((_QWORD *)this + 2) + 1088LL, &v17);
    }
    *((_BYTE *)this + 90) &= ~0x40u;
    *((_BYTE *)this + 90) |= (v2 & 1) << 6;
  }
}
