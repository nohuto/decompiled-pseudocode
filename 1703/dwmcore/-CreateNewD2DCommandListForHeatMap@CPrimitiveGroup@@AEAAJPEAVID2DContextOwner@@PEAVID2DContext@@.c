/*
 * XREFs of ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x180165FB8
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18000CBB8 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x18004BD30 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  __int64 v4; // rax
  char v7; // r15
  int v8; // eax
  int v9; // ebx
  struct ID2DContextOwner *v10; // r10
  unsigned int v11; // edx
  __int64 v12; // rcx
  unsigned int v13; // eax
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned int v17; // eax
  int v18; // eax
  struct ID2DContextOwner *v19; // rcx
  int v20; // r9d
  unsigned int v22; // [rsp+20h] [rbp-40h]
  char *v23; // [rsp+90h] [rbp+30h] BYREF
  struct ID2DContextOwner *v24; // [rsp+98h] [rbp+38h] BYREF

  v24 = a2;
  v4 = *(_QWORD *)a3;
  *a4 = 0LL;
  v24 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct ID2DContextOwner **))(v4 + 264))(
         a3,
         *((_QWORD *)this + 68),
         *((_QWORD *)this + 69),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         &v24);
  v9 = v8;
  if ( v8 < 0 )
  {
    v22 = 967;
    v20 = v8;
    goto LABEL_25;
  }
  v10 = v24;
  v11 = (unsigned int)v24;
  v23 = (char *)this + 56;
  v12 = *((unsigned int *)v24 + 20);
  v13 = v12 + 1;
  if ( (int)v12 + 1 >= (unsigned int)v12 )
    v11 = v12 + 1;
  v9 = v13 < (unsigned int)v12 ? 0x80070216 : 0;
  if ( v13 < (unsigned int)v12 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v11 > *((_DWORD *)v24 + 19) )
  {
    v14 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v24 + 56, 8u, 1, &v23);
    v9 = v14;
    if ( v14 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v24 + 7) + 8 * v12) = v23;
    *((_DWORD *)v10 + 20) = v11;
  }
  if ( v9 < 0 )
  {
    v22 = 969;
    goto LABEL_22;
  }
  v15 = *((unsigned int *)this + 34);
  v7 = 1;
  v16 = (unsigned int)v24;
  v17 = v15 + 1;
  if ( (int)v15 + 1 >= (unsigned int)v15 )
    v16 = v15 + 1;
  v9 = v17 < (unsigned int)v15 ? 0x80070216 : 0;
  if ( v17 < (unsigned int)v15 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v16 > *((_DWORD *)this + 33) )
  {
    v18 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8u, 1, &v24);
    v9 = v18;
    if ( v18 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8 * v15) = v24;
    *((_DWORD *)this + 34) = v16;
  }
  if ( v9 < 0 )
  {
    v22 = 972;
LABEL_22:
    v20 = v9;
LABEL_25:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, v22);
    v19 = v24;
    goto LABEL_26;
  }
  v19 = 0LL;
  *a4 = v24;
  v24 = 0LL;
LABEL_26:
  if ( v9 < 0 && v7 )
  {
    CD2DResource::RemoveResourceNotifier(
      (struct ID2DContextOwner *)((char *)v19 + 16),
      (CPrimitiveGroup *)((char *)this + 56));
    v19 = v24;
  }
  if ( v19 )
    (*(void (__fastcall **)(struct ID2DContextOwner *))(*(_QWORD *)v19 + 16LL))(v19);
  return (unsigned int)v9;
}
