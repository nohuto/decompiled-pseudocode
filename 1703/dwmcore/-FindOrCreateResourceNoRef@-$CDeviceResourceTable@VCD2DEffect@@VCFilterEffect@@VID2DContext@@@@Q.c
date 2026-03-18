/*
 * XREFs of ?FindOrCreateResourceNoRef@?$CDeviceResourceTable@VCD2DEffect@@VCFilterEffect@@VID2DContext@@@@QEAAJPEAVID2DContext@@PEAPEAVCD2DEffect@@@Z @ 0x180001FB4
 * Callers:
 *     ?GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@PEAPEAUID2D1Effect@@@Z @ 0x180002E54 (-GetD2DEffectNoRef@CFilterEffect@@QEAAJPEAUID2D1Bitmap1@@PEAVID2DContext@@PEAVID2DContextOwner@@.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z @ 0x18000213C (--$ReleaseInterfaceNoNULL@VID2DContext@@@@YAXPEAVID2DContext@@@Z.c)
 *     ?FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z @ 0x18001C59C (-FindDefaultDevice@@YAJAEBU_GUID@@PEAPEAVID2DContext@@@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDeviceResourceTable<CD2DEffect,CFilterEffect,ID2DContext>::FindOrCreateResourceNoRef(
        struct _GUID *a1,
        struct ID2DContext *a2,
        struct ID2DContext **a3)
{
  int v3; // ebx
  struct ID2DContext *v4; // r14
  char v6; // r12
  __int64 v7; // rdx
  struct ID2DContext *v10; // rdx
  struct ID2DContext *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  struct ID2DContext *v16; // r10
  unsigned int v17; // edx
  __int64 v18; // rcx
  unsigned int v19; // eax
  __int64 v20; // rcx
  unsigned int v21; // edx
  unsigned int v22; // eax
  int DefaultDevice; // eax
  int v24; // eax
  int v25; // eax
  struct ID2DContext *v26; // [rsp+60h] [rbp+30h] BYREF
  struct ID2DContext *v27; // [rsp+78h] [rbp+48h] BYREF

  v3 = 0;
  v4 = 0LL;
  v26 = 0LL;
  v6 = 0;
  v27 = 0LL;
  v7 = 0LL;
  if ( *(_DWORD *)a1[2].Data4 )
  {
    while ( a2
         && a2 != *(struct ID2DContext **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8 * v7) + 24LL) + 24LL) )
    {
      v7 = (unsigned int)(v7 + 1);
      if ( (unsigned int)v7 >= *(_DWORD *)a1[2].Data4 )
        goto LABEL_10;
    }
    v10 = *(struct ID2DContext **)(*(_QWORD *)&a1[1].Data1 + 8 * v7);
    v26 = v10;
    if ( v10 )
      goto LABEL_5;
  }
LABEL_10:
  if ( !a2 )
  {
    DefaultDevice = FindDefaultDevice(a1 + 4, &v27);
    v3 = DefaultDevice;
    if ( DefaultDevice < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DefaultDevice, 0x56u);
      v4 = v27;
LABEL_43:
      v11 = v26;
      goto LABEL_6;
    }
    v4 = v27;
    a2 = v27;
  }
  v13 = *(_QWORD *)a2;
  v14 = *(_QWORD *)a1->Data4;
  v27 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct ID2DContext *, __int64, struct ID2DContext **))(v13 + 288))(
          a2,
          v14 + 176,
          &v27);
  v3 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x328u);
    if ( v27 )
      (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v27 + 16LL))(v27);
  }
  else
  {
    v26 = v27;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Au);
    goto LABEL_43;
  }
  v16 = v26;
  v17 = (unsigned int)v26;
  v27 = (struct ID2DContext *)a1;
  v18 = *((unsigned int *)v26 + 20);
  v19 = v18 + 1;
  if ( (int)v18 + 1 >= (unsigned int)v18 )
    v17 = v18 + 1;
  v3 = v19 < (unsigned int)v18 ? 0x80070216 : 0;
  if ( v19 < (unsigned int)v18 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v17 > *((_DWORD *)v26 + 19) )
  {
    v24 = DynArrayImpl<0>::AddMultipleAndSet((char *)v26 + 56, 8LL, 1LL, &v27);
    v3 = v24;
    if ( v24 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v26 + 7) + 8 * v18) = v27;
    *((_DWORD *)v16 + 20) = v17;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Cu);
    goto LABEL_43;
  }
  v20 = *(unsigned int *)a1[2].Data4;
  v6 = 1;
  v21 = (unsigned int)v26;
  v22 = v20 + 1;
  if ( (int)v20 + 1 >= (unsigned int)v20 )
    v21 = v20 + 1;
  v3 = v22 < (unsigned int)v20 ? 0x80070216 : 0;
  if ( v22 < (unsigned int)v20 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB5u);
  }
  else if ( v21 > *(_DWORD *)&a1[2].Data2 )
  {
    v25 = DynArrayImpl<0>::AddMultipleAndSet(&a1[1], 8LL, 1LL, &v26);
    v3 = v25;
    if ( v25 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)&a1[1].Data1 + 8 * v20) = v26;
    *(_DWORD *)a1[2].Data4 = v21;
  }
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x5Fu);
    goto LABEL_43;
  }
  v10 = v26;
LABEL_5:
  v11 = 0LL;
  *a3 = v10;
  v26 = 0LL;
LABEL_6:
  if ( v3 < 0 )
  {
    *a3 = 0LL;
    if ( v6 )
    {
      if ( !v11 )
        goto LABEL_9;
      CD2DResource::RemoveResourceNotifier(
        (struct ID2DContext *)((char *)v11 + 16),
        (const struct IDeviceResourceNotify *)a1);
      v11 = v26;
    }
  }
  if ( v11 )
    (*(void (__fastcall **)(struct ID2DContext *))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_9:
  ReleaseInterfaceNoNULL<ID2DContext>(v4);
  return (unsigned int)v3;
}
