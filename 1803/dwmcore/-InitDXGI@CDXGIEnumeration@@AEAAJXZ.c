/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800CA7EC
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800CA5A8 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x180021410 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18007968C (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800CA6B8 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  signed int v4; // ebx
  int SystemMetrics; // eax
  DWORD v6; // ecx
  HANDLE EventW; // rax
  unsigned int v8; // r14d
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  void *v16; // rcx
  __int64 RemoteSessionOcclusionEvent; // rax
  signed int LastError; // eax
  int v20; // r9d
  signed int v21; // eax
  unsigned int v22; // [rsp+20h] [rbp-50h]
  struct CDXGIAdapterLimited *v23; // [rsp+30h] [rbp-40h] BYREF
  struct IDXGIAdapter *v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  __int64 v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+58h] [rbp-18h] BYREF
  __int64 v29; // [rsp+60h] [rbp-10h] BYREF
  int v30; // [rsp+A8h] [rbp+38h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v2 = 0;
  v28 = 0LL;
  v23 = 0LL;
  v29 = 0LL;
  v24 = 0LL;
  v32 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v30 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v22 = 293;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v25);
  v30 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v22 = 299;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v26);
  v30 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v22 = 302;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v27);
  v30 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v22 = 305;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v28);
  v30 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v22 = 311;
    goto LABEL_64;
  }
  SystemMetrics = GetSystemMetrics(4096);
  v6 = SystemMetrics != 0;
  *((_DWORD *)this + 27) = v6;
  if ( SystemMetrics )
  {
    SetLastError(0);
    RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
    *((_QWORD *)this + 12) = RemoteSessionOcclusionEvent;
    if ( RemoteSessionOcclusionEvent )
      goto LABEL_9;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v22 = 319;
    goto LABEL_46;
  }
  SetLastError(v6);
  EventW = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 12) = EventW;
  if ( !EventW )
  {
    v21 = GetLastError();
    v4 = v21;
    if ( v21 > 0 )
      v4 = (unsigned __int16)v21 | 0x80070000;
    v22 = 326;
LABEL_46:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v30 = v4;
LABEL_50:
    v20 = v4;
    goto LABEL_65;
  }
  v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
         ppFactory,
         EventW,
         (char *)this + 104);
  v30 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v22 = 328;
LABEL_64:
    v20 = v3;
LABEL_65:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, v20, v22);
    goto LABEL_35;
  }
LABEL_9:
  v8 = v30;
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v32) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v32)(
           v32,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v24);
    v30 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v22 = 337;
      goto LABEL_64;
    }
    v3 = CDXGIAdapterLimited::Create(v24, v2, &v23);
    v30 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v22 = 341;
      goto LABEL_64;
    }
    v9 = *((unsigned int *)this + 22);
    v10 = v9 + 1;
    if ( (int)v9 + 1 >= (unsigned int)v9 )
      v8 = v9 + 1;
    v4 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
    if ( v10 < (unsigned int)v9 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)this + 21) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v23);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9) = v23;
      *((_DWORD *)this + 22) = v8;
    }
    v30 = v4;
    if ( v4 < 0 )
    {
      v22 = 343;
      goto LABEL_50;
    }
    ReleaseInterface<IBitmapLock>((__int64 *)&v24);
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      v32 = 0LL;
    }
    ReleaseInterface<IBitmapLock>(&v29);
    v23 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v12 = v25;
    *((_QWORD *)this + 3) = v25;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = v26;
    *((_QWORD *)this + 4) = v26;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = v27;
    *((_QWORD *)this + 5) = v27;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = v28;
    *((_QWORD *)this + 6) = v28;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = ppFactory;
    *((_QWORD *)this + 2) = ppFactory;
    if ( v16 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 8LL))(v16);
LABEL_35:
    if ( v4 >= 0 )
      goto LABEL_36;
    goto LABEL_55;
  }
  v4 = -2003304291;
  v30 = -2003304291;
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802773D0, 1u, -2003304291, 0x164u);
LABEL_55:
  TranslateDXGIorD3DErrorInContext(v4, 5, &v30);
  v4 = v30;
LABEL_36:
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)ppFactory);
  ReleaseInterfaceNoNULL<IWICBitmap>(v25);
  ReleaseInterfaceNoNULL<IWICBitmap>(v26);
  ReleaseInterfaceNoNULL<IWICBitmap>(v27);
  ReleaseInterfaceNoNULL<IWICBitmap>(v28);
  if ( v24 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v24->lpVtbl->Release)(v24);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  return (unsigned int)v4;
}
