/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x1801685C0
 * Callers:
 *     ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180168800 (-GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x180168908 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x180046690 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180168418 (-CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z.c)
 *     ?FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z @ 0x180191CD4 (-FindDefaultDevice@@YAJPEAPEAVID2DContext@@@Z.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DInk **a3)
{
  signed int v3; // ebx
  struct ID2DContext *v4; // r14
  char v5; // r12
  __int64 v6; // r9
  struct CD2DInk *v9; // r8
  signed int DefaultDevice; // eax
  int v11; // eax
  struct CD2DInk *v12; // r10
  unsigned int v13; // edx
  __int64 v14; // rcx
  unsigned int v15; // eax
  signed int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // edx
  unsigned int v19; // eax
  signed int v20; // eax
  DWORD v21; // r9d
  unsigned int v23; // [rsp+20h] [rbp-10h]
  struct CD2DInk *v24; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v25; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v24 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v25 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( a2 && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v6) + 24LL) + 24LL) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
        goto LABEL_7;
    }
    v9 = *(struct CD2DInk **)(*((_QWORD *)a1 + 2) + 8 * v6);
    v24 = v9;
    if ( v9 )
    {
LABEL_33:
      v24 = 0LL;
      *a3 = v9;
      goto LABEL_37;
    }
  }
LABEL_7:
  if ( a2 )
  {
LABEL_10:
    v11 = CInk::CreateResource(*((CInk **)a1 + 1), a2, &v24);
    v3 = v11;
    if ( v11 < 0 )
    {
      v23 = 83;
      v21 = v11;
      goto LABEL_36;
    }
    v12 = v24;
    v13 = (unsigned int)v24;
    v25 = a1;
    v14 = *((unsigned int *)v24 + 20);
    v15 = v14 + 1;
    if ( (int)v14 + 1 >= (unsigned int)v14 )
      v13 = v14 + 1;
    v3 = v15 < (unsigned int)v14 ? 0x80070216 : 0;
    if ( v15 < (unsigned int)v14 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
    }
    else if ( v13 > *((_DWORD *)v24 + 19) )
    {
      v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24 + 56, 8u, 1, &v25);
      v3 = v16;
      if ( v16 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v16, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v24 + 7) + 8 * v14) = v25;
      *((_DWORD *)v12 + 20) = v13;
    }
    if ( v3 < 0 )
    {
      v23 = 85;
      goto LABEL_31;
    }
    v17 = *((unsigned int *)a1 + 10);
    v5 = 1;
    v18 = (unsigned int)v24;
    v19 = v17 + 1;
    if ( (int)v17 + 1 >= (unsigned int)v17 )
      v18 = v17 + 1;
    v3 = v19 < (unsigned int)v17 ? 0x80070216 : 0;
    if ( v19 < (unsigned int)v17 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v3, 0xB5u);
    }
    else if ( v18 > *((_DWORD *)a1 + 9) )
    {
      v20 = DynArrayImpl<0>::AddMultipleAndSet((__int64)a1 + 16, 8u, 1, &v24);
      v3 = v20;
      if ( v20 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v20, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v17) = v24;
      *((_DWORD *)a1 + 10) = v18;
    }
    if ( v3 < 0 )
    {
      v23 = 88;
LABEL_31:
      v21 = v3;
LABEL_36:
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v21, v23);
      goto LABEL_37;
    }
    v9 = v24;
    goto LABEL_33;
  }
  DefaultDevice = FindDefaultDevice(&v25);
  v3 = DefaultDevice;
  if ( DefaultDevice >= 0 )
  {
    v4 = v25;
    a2 = v25;
    goto LABEL_10;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DefaultDevice, 0x4Fu);
  v4 = v25;
LABEL_37:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( v24 )
        CD2DResource::RemoveResourceNotifier((struct CD2DInk *)((char *)v24 + 16), a1);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v24);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v4);
  return (unsigned int)v3;
}
