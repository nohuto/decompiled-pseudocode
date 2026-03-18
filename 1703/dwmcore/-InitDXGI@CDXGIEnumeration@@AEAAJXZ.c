/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x1800460F0
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C89A0 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18008F260 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800B52F4 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x1800CE0F0 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z @ 0x1800CE274 (-ReportCompositionError@CDwmEventManager@DwmCoreAsimov@@QEAAXPEBG0J@Z.c)
 *     ?GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800CE6DC (-GetManager@CDwmEventManager@DwmCoreAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDXGIEnumeration::InitDXGI(CDXGIEnumeration *this)
{
  unsigned int v2; // esi
  HRESULT v3; // eax
  int v4; // ebx
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
  const struct _TlgProvider_t *v22; // rcx
  DwmCoreAsimov::CDwmEventManager *Manager; // rax
  unsigned int v24; // [rsp+20h] [rbp-50h]
  struct CDXGIAdapterLimited *v25; // [rsp+30h] [rbp-40h] BYREF
  struct IDXGIAdapter *v26; // [rsp+38h] [rbp-38h] BYREF
  __int64 v27; // [rsp+40h] [rbp-30h] BYREF
  __int64 v28; // [rsp+48h] [rbp-28h] BYREF
  __int64 v29; // [rsp+50h] [rbp-20h] BYREF
  __int64 v30; // [rsp+58h] [rbp-18h] BYREF
  __int64 v31; // [rsp+60h] [rbp-10h] BYREF
  int v32; // [rsp+A8h] [rbp+38h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v2 = 0;
  v30 = 0LL;
  v25 = 0LL;
  v31 = 0LL;
  v26 = 0LL;
  v34 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 293;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v27);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 299;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v28);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 302;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v29);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 305;
    goto LABEL_64;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v30);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 311;
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
    v24 = 319;
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
    v24 = 326;
LABEL_46:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v32 = v4;
LABEL_50:
    v20 = v4;
    goto LABEL_65;
  }
  v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
         ppFactory,
         EventW,
         (char *)this + 104);
  v32 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v24 = 328;
LABEL_64:
    v20 = v3;
LABEL_65:
    MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, v20, v24);
    goto LABEL_35;
  }
LABEL_9:
  v8 = v32;
  while ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v34) != -2005270526 )
  {
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v34)(
           v34,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v26);
    v32 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v24 = 337;
      goto LABEL_64;
    }
    v3 = CDXGIAdapterLimited::Create(v26, v2, &v25);
    v32 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v24 = 341;
      goto LABEL_64;
    }
    v9 = *((unsigned int *)this + 22);
    v10 = v9 + 1;
    if ( (int)v9 + 1 >= (unsigned int)v9 )
      v8 = v9 + 1;
    v4 = v10 < (unsigned int)v9 ? 0x80070216 : 0;
    if ( v10 < (unsigned int)v9 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)this + 21) )
    {
      v11 = DynArrayImpl<0>::AddMultipleAndSet((char *)this + 64, 8LL, 1LL, &v25);
      v4 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v9) = v25;
      *((_DWORD *)this + 22) = v8;
    }
    v32 = v4;
    if ( v4 < 0 )
    {
      v24 = 343;
      goto LABEL_50;
    }
    ReleaseInterface<IBitmapLock>(&v26);
    if ( v34 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v34 + 16LL))(v34);
      v34 = 0LL;
    }
    ReleaseInterface<IBitmapLock>(&v31);
    v25 = 0LL;
    ++v2;
  }
  if ( v2 )
  {
    v12 = v27;
    *((_QWORD *)this + 3) = v27;
    if ( v12 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v13 = v28;
    *((_QWORD *)this + 4) = v28;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
    v14 = v29;
    *((_QWORD *)this + 5) = v29;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v15 = v30;
    *((_QWORD *)this + 6) = v30;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    v16 = ppFactory;
    *((_QWORD *)this + 2) = ppFactory;
    if ( v16 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v16 + 8LL))(v16);
LABEL_35:
    if ( v4 >= 0 )
      goto LABEL_36;
    goto LABEL_57;
  }
  v4 = -2003304291;
  v32 = -2003304291;
  MilInstrumentationCheckHR(0x14u, &dword_1801F3C7C, 1u, -2003304291, 0x164u);
LABEL_57:
  TranslateDXGIorD3DErrorInContext((unsigned int)v4, 5LL, &v32);
  Manager = DwmCoreAsimov::CDwmEventManager::GetManager(v22);
  v4 = v32;
  DwmCoreAsimov::CDwmEventManager::ReportCompositionError(Manager, L"InitDXGI", L"InitDXGI failed.", v32);
LABEL_36:
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)ppFactory);
  ReleaseInterfaceNoNULL<CD2DPencil>(v27);
  ReleaseInterfaceNoNULL<CD2DPencil>(v28);
  ReleaseInterfaceNoNULL<CD2DPencil>(v29);
  ReleaseInterfaceNoNULL<CD2DPencil>(v30);
  if ( v26 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v26->lpVtbl->Release)(v26);
  if ( v31 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v31 + 16LL))(v31);
  return (unsigned int)v4;
}
