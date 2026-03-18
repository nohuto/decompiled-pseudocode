/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x1801702E0
 * Callers:
 *     ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180170540 (-GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z @ 0x180170618 (-GetDirectInkPartner@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkPartner@@@Z.c)
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18017073C (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18001C59C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x180170108 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DGenericInk **a3)
{
  int v3; // ebx
  CD3DDeviceLevel1 *v4; // r14
  char v5; // r12
  __int64 v6; // r9
  struct CD2DGenericInk *v9; // r8
  int DefaultDevice; // eax
  int v11; // eax
  struct CD2DGenericInk *v12; // r10
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  int v20; // eax
  int v21; // r9d
  struct CD2DGenericInk *v22; // rcx
  unsigned int v24; // [rsp+20h] [rbp-10h]
  struct CD2DGenericInk *v25; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v26; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v26 = 0LL;
  if ( !*((_DWORD *)a1 + 10) )
    goto LABEL_7;
  while ( a2 && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v6) + 24LL) + 24LL) )
  {
    v6 = (unsigned int)(v6 + 1);
    if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
      goto LABEL_7;
  }
  v9 = *(struct CD2DGenericInk **)(*((_QWORD *)a1 + 2) + 8 * v6);
  v25 = v9;
  if ( !v9 )
  {
LABEL_7:
    if ( !a2 )
    {
      DefaultDevice = FindDefaultDevice((const struct _GUID *)a1 + 4, &v26);
      v3 = DefaultDevice;
      if ( DefaultDevice < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
        v4 = v26;
LABEL_37:
        v22 = v25;
        goto LABEL_38;
      }
      v4 = v26;
      a2 = v26;
    }
    v11 = CGenericInk::CreateResource(*((CGenericInk **)a1 + 1), a2, &v25);
    v3 = v11;
    if ( v11 < 0 )
    {
      v24 = 90;
      v21 = v11;
      goto LABEL_36;
    }
    v12 = v25;
    v13 = (unsigned int)v25;
    v26 = a1;
    v14 = *((unsigned int *)v25 + 20);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v13 = v14 + 1;
    v3 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
    if ( v15 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v13 > *((_DWORD *)v25 + 19) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v25 + 56, 8u, 1, &v26);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v25 + 7) + 8 * v14) = v26;
      *((_DWORD *)v12 + 20) = v13;
    }
    if ( v3 < 0 )
    {
      v24 = 92;
      goto LABEL_31;
    }
    v17 = *((unsigned int *)a1 + 10);
    v5 = 1;
    v18 = (unsigned int)v25;
    v19 = v17 + 1;
    if ( (int)v17 + 1 >= (unsigned int)v17 )
      v18 = v17 + 1;
    v3 = v19 < (unsigned int)v17 ? 0x80070216 : 0;
    if ( v19 < (unsigned int)v17 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v18 > *((_DWORD *)a1 + 9) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v25);
      v3 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v17) = v25;
      *((_DWORD *)a1 + 10) = v18;
    }
    if ( v3 < 0 )
    {
      v24 = 95;
LABEL_31:
      v21 = v3;
LABEL_36:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, v24);
      goto LABEL_37;
    }
    v9 = v25;
  }
  v22 = 0LL;
  *a3 = v9;
  v25 = 0LL;
LABEL_38:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v22 )
        goto LABEL_44;
      CD2DResource::RemoveResourceNotifier((struct CD2DGenericInk *)((char *)v22 + 16), a1);
      v22 = v25;
    }
  }
  if ( v22 )
    (*(void (__fastcall **)(struct CD2DGenericInk *))(*(_QWORD *)v22 + 16LL))(v22);
LABEL_44:
  ReleaseInterfaceNoNULL<ID2DContext>(v4);
  return (unsigned int)v3;
}
