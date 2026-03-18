/*
 * XREFs of ?CreateNewD2DCommandListForHeatMap@CPrimitiveGroup@@AEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAPEAVCD2DCommandList@@@Z @ 0x18019ED60
 * Callers:
 *     ?GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext@@PEAVCPolygon@@PEAPEAUID2D1PrivateCompositorCommandList@@@Z @ 0x18019F008 (-GetClippedD2D1CommandListForContext@CPrimitiveGroup@@QEAAJPEAVID2DContextOwner@@PEAVID2DContext.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z @ 0x1800705D0 (-RemoveResourceNotifier@CD2DResource@@UEAAJPEBVIDeviceResourceNotify@@@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CPrimitiveGroup::CreateNewD2DCommandListForHeatMap(
        CPrimitiveGroup *this,
        struct ID2DContextOwner *a2,
        struct ID2DContext *a3,
        struct CD2DCommandList **a4)
{
  __int64 v4; // rax
  char v7; // r14
  int v8; // eax
  int v9; // ebx
  struct ID2DContextOwner *v10; // r10
  unsigned int v11; // eax
  unsigned int v12; // edx
  int v13; // eax
  unsigned int v14; // eax
  unsigned int v15; // edx
  int v16; // eax
  struct CD2DCommandList *v17; // rax
  int v18; // r9d
  unsigned int v20; // [rsp+20h] [rbp-40h]
  char *v21; // [rsp+90h] [rbp+30h] BYREF
  struct ID2DContextOwner *v22; // [rsp+98h] [rbp+38h] BYREF

  v22 = a2;
  v4 = *(_QWORD *)a3;
  *a4 = 0LL;
  v22 = 0LL;
  v7 = 0;
  v8 = (*(__int64 (__fastcall **)(struct ID2DContext *, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, struct ID2DContextOwner **))(v4 + 232))(
         a3,
         *((_QWORD *)this + 84),
         *((_QWORD *)this + 85),
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         0LL,
         &v22);
  v9 = v8;
  if ( v8 < 0 )
  {
    v20 = 956;
    v18 = v8;
    goto LABEL_21;
  }
  v10 = v22;
  v21 = (char *)this + 56;
  v11 = *((_DWORD *)v22 + 20);
  v12 = v11 + 1;
  v9 = v11 + 1 < v11 ? 0x80070216 : 0;
  if ( v11 + 1 < v11 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v12 > *((_DWORD *)v22 + 19) )
  {
    v13 = DynArrayImpl<0>::AddMultipleAndSet((__int64)v22 + 56, 8u, 1, &v21);
    v9 = v13;
    if ( v13 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)v22 + 7) + 8LL * v11) = v21;
    *((_DWORD *)v10 + 20) = v12;
  }
  if ( v9 < 0 )
  {
    v20 = 958;
    goto LABEL_18;
  }
  v14 = *((_DWORD *)this + 34);
  v7 = 1;
  v15 = v14 + 1;
  v9 = v14 + 1 < v14 ? 0x80070216 : 0;
  if ( v14 + 1 < v14 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0xB5u);
  }
  else if ( v15 > *((_DWORD *)this + 33) )
  {
    v16 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 112, 8u, 1, &v22);
    v9 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v16, 0xC0u);
  }
  else
  {
    *(_QWORD *)(*((_QWORD *)this + 14) + 8LL * v14) = v22;
    *((_DWORD *)this + 34) = v15;
  }
  if ( v9 < 0 )
  {
    v20 = 961;
LABEL_18:
    v18 = v9;
LABEL_21:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, v20);
    goto LABEL_22;
  }
  v17 = v22;
  v22 = 0LL;
  *a4 = v17;
LABEL_22:
  if ( v9 < 0 && v7 )
    CD2DResource::RemoveResourceNotifier(
      (struct ID2DContextOwner *)((char *)v22 + 16),
      (CPrimitiveGroup *)((char *)this + 56));
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v22);
  return (unsigned int)v9;
}
