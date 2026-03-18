/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DInk@@VCInk@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001D34
 * Callers:
 *     ?GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180001780 (-GetBounds@CInk@@UEBAJPEAVCContentBounder@@PEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPoint.c)
 *     ?GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z @ 0x18016F944 (-GetD2DInk@CInk@@QEAAJPEAVID2DContext@@PEAPEAUID2D1Ink@@PEAPEAUID2D1InkStyle@@@Z.c)
 * Callees:
 *     ?CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z @ 0x180001BAC (-CreateResource@CInk@@QEAAJPEAVID2DContext@@PEAPEAVCD2DInk@@@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18001C59C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::FindOrCreateResourceNoRef(
        struct IDeviceResourceNotify *a1,
        struct ID2DContext *a2,
        struct CD2DInk **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // r14
  char v5; // r12
  __int64 v6; // r9
  int DefaultDevice; // eax
  int v10; // eax
  struct CD2DInk *v11; // r10
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  struct CD2DInk *v18; // r8
  struct CD2DInk *v19; // rcx
  int v21; // eax
  int v22; // eax
  int v23; // r9d
  unsigned int v24; // [rsp+20h] [rbp-10h]
  struct CD2DInk *v25; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v26; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v25 = 0LL;
  v5 = 0;
  v6 = 0LL;
  v26 = 0LL;
  if ( *((_DWORD *)a1 + 10) )
  {
    while ( a2 && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v6) + 24LL) + 24LL) )
    {
      v6 = (unsigned int)(v6 + 1);
      if ( (unsigned int)v6 >= *((_DWORD *)a1 + 10) )
        goto LABEL_2;
    }
    v18 = *(struct CD2DInk **)(*((_QWORD *)a1 + 2) + 8 * v6);
    v25 = v18;
    if ( v18 )
      goto LABEL_19;
  }
LABEL_2:
  if ( !a2 )
  {
    DefaultDevice = FindDefaultDevice((const struct _GUID *)a1 + 4, &v26);
    v3 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
      v4 = v26;
LABEL_42:
      v19 = v25;
      goto LABEL_20;
    }
    v4 = v26;
    a2 = v26;
  }
  v10 = CInk::CreateResource(*((CInk **)a1 + 1), a2, &v25);
  v3 = v10;
  if ( v10 < 0 )
  {
    v24 = 90;
    v23 = v10;
    goto LABEL_41;
  }
  v11 = v25;
  v12 = (unsigned int)v25;
  v26 = a1;
  v13 = *((unsigned int *)v25 + 20);
  v14 = v13 + 1;
  if ( (int)v13 + 1 >= (unsigned int)v13 )
    v12 = v13 + 1;
  v3 = v14 < (unsigned int)v13 ? 0x80070216 : 0;
  if ( v14 < (unsigned int)v13 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v12 > *((_DWORD *)v25 + 19) )
  {
    v21 = DynArrayImpl<0>::AddMultipleAndSet((char *)v25 + 56, 8LL, 1LL, &v26);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v25 + 7) + 8 * v13) = v26;
    *((_DWORD *)v11 + 20) = v12;
  }
  if ( v3 < 0 )
  {
    v24 = 92;
    goto LABEL_39;
  }
  v15 = *((unsigned int *)a1 + 10);
  v5 = 1;
  v16 = (unsigned int)v25;
  v17 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v16 = v15 + 1;
  v3 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( v17 < (unsigned int)v15 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v16 > *((_DWORD *)a1 + 9) )
  {
    v22 = DynArrayImpl<0>::AddMultipleAndSet((char *)a1 + 16, 8LL, 1LL, &v25);
    v3 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v15) = v25;
    *((_DWORD *)a1 + 10) = v16;
  }
  if ( v3 < 0 )
  {
    v24 = 95;
LABEL_39:
    v23 = v3;
LABEL_41:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v24);
    goto LABEL_42;
  }
  v18 = v25;
LABEL_19:
  v19 = 0LL;
  *a3 = v18;
  v25 = 0LL;
LABEL_20:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v5 )
    {
      if ( !v19 )
        goto LABEL_23;
      CD2DResource::RemoveResourceNotifier((struct CD2DInk *)((char *)v19 + 16), a1);
      v19 = v25;
    }
  }
  if ( v19 )
    (*(void (__fastcall **)(struct CD2DInk *))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_23:
  ReleaseInterfaceNoNULL<ID2DContext>(v4);
  return (unsigned int)v3;
}
