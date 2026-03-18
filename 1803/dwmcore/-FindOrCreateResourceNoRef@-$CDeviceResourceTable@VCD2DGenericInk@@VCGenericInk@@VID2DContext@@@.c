/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DGenericInk@@VCGenericInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x18018F0E4
 * Callers:
 *     ?GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18018F330 (-GetBounds@CGenericInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStrokePartner@@@Z @ 0x18018F3FC (-GetDirectInkWetStroke@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAUIDCompositionDirectInkWetStroke.c)
 *     ?GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18018F48C (-GetPrimitiveBlend@CGenericInk@@QEBAJPEAW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z @ 0x18018EF40 (-CreateResource@CGenericInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DGenericInk@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x1801C8ABC (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DGenericInk,CGenericInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        CMILCOMBase **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // rsi
  char v5; // r12
  __int64 v6; // r9
  __int64 v9; // r8
  CMILCOMBase *v10; // rax
  int DefaultDevice; // eax
  int v12; // eax
  CMILCOMBase *v13; // r10
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  int v19; // eax
  int v20; // r9d
  unsigned int v22; // [rsp+20h] [rbp-10h]
  CMILCOMBase *v23; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v24; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v23 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v24 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( 1 )
    {
      v9 = *((_QWORD *)a1 + 2);
      if ( !a2 || a2 == *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(v9 + 8 * v6) + 24LL) + 24LL) )
        break;
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v10 = *(CMILCOMBase **)(v9 + 8 * v6);
    v23 = v10;
    if ( v10 )
    {
LABEL_29:
      v23 = 0LL;
      *a3 = v10;
      goto LABEL_33;
    }
  }
LABEL_7:
  if ( a2 )
  {
LABEL_10:
    v12 = CGenericInk::CreateResource(*((CGenericInk **)a1 + 1), a2, &v23);
    v3 = v12;
    if ( v12 < 0 )
    {
      v22 = 83;
      v20 = v12;
      goto LABEL_32;
    }
    v13 = v23;
    v24 = a1;
    v14 = *((_DWORD *)v23 + 20);
    v15 = v14 + 1;
    v3 = v14 + 1 < v14 ? 0x80070216 : 0;
    if ( v14 + 1 < v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v15 > *((_DWORD *)v23 + 19) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v23 + 56, 8u, 1, &v24);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v23 + 7) + 8LL * v14) = v24;
      *((_DWORD *)v13 + 20) = v15;
    }
    if ( v3 < 0 )
    {
      v22 = 85;
      goto LABEL_27;
    }
    v17 = *((_DWORD *)a1 + 10);
    v5 = 1;
    v18 = v17 + 1;
    v3 = v17 + 1 < v17 ? 0x80070216 : 0;
    if ( v17 + 1 < v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0xB5u);
    }
    else if ( v18 > *((_DWORD *)a1 + 9) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v23);
      v3 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8LL * v17) = v23;
      *((_DWORD *)a1 + 10) = v18;
    }
    if ( v3 < 0 )
    {
      v22 = 88;
LABEL_27:
      v20 = v3;
LABEL_32:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v22);
      goto LABEL_33;
    }
    v10 = v23;
    goto LABEL_29;
  }
  DefaultDevice = FindDefaultDevice(&v24);
  v3 = DefaultDevice;
  if ( DefaultDevice >= 0 )
  {
    v4 = v24;
    a2 = v24;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, DefaultDevice, 0x4Fu);
  v4 = v24;
LABEL_33:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v23 )
        goto LABEL_39;
      CD2DResource::RemoveResourceNotifier((CMILCOMBase *)((char *)v23 + 16), a1);
    }
  }
  if ( v23 )
    CMILCOMBase::InternalRelease(v23);
LABEL_39:
  if ( v4 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v4 + 16LL))(v4);
  return (unsigned int)v3;
}
