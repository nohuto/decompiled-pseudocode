/*
 * XREFs of ?InitDXGI@CDXGIEnumeration@@AEAAJXZ @ 0x18008BE44
 * Callers:
 *     ?CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z @ 0x1800C0360 (-CreateD3DObjects@CD3DModuleLoaderInternal@@AEAAJPEAPEAVCDXGIEnumeration@@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18001D1C0 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x180074898 (-Create@CDXGIAdapterLimited@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
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
  unsigned int v9; // r15d
  __int64 v10; // rcx
  unsigned int v11; // eax
  signed int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  void *v17; // rcx
  __int64 RemoteSessionOcclusionEvent; // rax
  signed int v20; // eax
  DWORD v21; // r9d
  signed int LastError; // eax
  unsigned int v23; // [rsp+20h] [rbp-50h]
  struct CDXGIAdapterLimited *v24; // [rsp+30h] [rbp-40h] BYREF
  struct IDXGIAdapter *v25; // [rsp+38h] [rbp-38h] BYREF
  __int64 v26; // [rsp+40h] [rbp-30h] BYREF
  __int64 v27; // [rsp+48h] [rbp-28h] BYREF
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  __int64 v29; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  int v31; // [rsp+A8h] [rbp+38h] BYREF
  void *ppFactory; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v2 = 0;
  v29 = 0LL;
  v24 = 0LL;
  v30 = 0LL;
  v25 = 0LL;
  v33 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v23 = 293;
    goto LABEL_61;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v26);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v23 = 299;
    goto LABEL_61;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v27);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v23 = 302;
    goto LABEL_61;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v28);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v23 = 305;
    goto LABEL_61;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v29);
  v31 = v3;
  v4 = v3;
  if ( v3 < 0 )
  {
    v23 = 311;
LABEL_61:
    v21 = v3;
LABEL_62:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, v21, v23);
    goto LABEL_35;
  }
  SystemMetrics = GetSystemMetrics(4096);
  v6 = SystemMetrics != 0;
  *((_DWORD *)this + 27) = v6;
  if ( !SystemMetrics )
  {
    SetLastError(v6);
    EventW = CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 12) = EventW;
    if ( EventW )
    {
      v3 = (*(__int64 (__fastcall **)(void *, HANDLE, char *))(*(_QWORD *)ppFactory + 176LL))(
             ppFactory,
             EventW,
             (char *)this + 104);
      v31 = v3;
      v4 = v3;
      if ( v3 >= 0 )
        goto LABEL_9;
      v23 = 328;
      goto LABEL_61;
    }
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    v23 = 326;
LABEL_42:
    if ( v4 >= 0 )
      v4 = -2003304445;
    v31 = v4;
LABEL_46:
    v21 = v4;
    goto LABEL_62;
  }
  SetLastError(0);
  RemoteSessionOcclusionEvent = DwmGetRemoteSessionOcclusionEvent();
  *((_QWORD *)this + 12) = RemoteSessionOcclusionEvent;
  if ( !RemoteSessionOcclusionEvent )
  {
    v20 = GetLastError();
    v4 = v20;
    if ( v20 > 0 )
      v4 = (unsigned __int16)v20 | 0x80070000;
    v23 = 319;
    goto LABEL_42;
  }
LABEL_9:
  v8 = v31;
  while ( 1 )
  {
    v9 = v8;
    if ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v33) == -2005270526 )
      break;
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v33)(
           v33,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v25);
    v31 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v23 = 337;
      goto LABEL_61;
    }
    v3 = CDXGIAdapterLimited::Create(v25, v2, &v24);
    v31 = v3;
    v4 = v3;
    if ( v3 < 0 )
    {
      v23 = 341;
      goto LABEL_61;
    }
    v10 = *((unsigned int *)this + 22);
    v11 = v10 + 1;
    v8 = v10 + 1;
    if ( (int)v10 + 1 < (unsigned int)v10 )
      v8 = v9;
    v4 = v11 < (unsigned int)v10 ? 0x80070216 : 0;
    if ( v11 < (unsigned int)v10 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v4, 0xB5u);
    }
    else if ( v8 > *((_DWORD *)this + 21) )
    {
      v12 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 64, 8u, 1, &v24);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xC0u);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)this + 8) + 8 * v10) = v24;
      *((_DWORD *)this + 22) = v8;
    }
    v31 = v4;
    if ( v4 < 0 )
    {
      v23 = 343;
      goto LABEL_46;
    }
    ReleaseInterface<IBitmapLock>((__int64 *)&v25);
    if ( v33 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
      v33 = 0LL;
    }
    ReleaseInterface<IBitmapLock>(&v30);
    v24 = 0LL;
    ++v2;
  }
  if ( !v2 )
  {
    v4 = -2003304291;
    v31 = -2003304291;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, &dword_180202590, 1u, 0x8898009D, 0x164u);
    goto LABEL_54;
  }
  v13 = v26;
  *((_QWORD *)this + 3) = v26;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
  v14 = v27;
  *((_QWORD *)this + 4) = v27;
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = v28;
  *((_QWORD *)this + 5) = v28;
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  v16 = v29;
  *((_QWORD *)this + 6) = v29;
  if ( v16 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
  v17 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v17 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 8LL))(v17);
LABEL_35:
  if ( v4 < 0 )
  {
LABEL_54:
    TranslateDXGIorD3DErrorInContext(v4, 5, &v31);
    v4 = v31;
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)ppFactory);
  ReleaseInterfaceNoNULL<CManipulationManager>(v26);
  ReleaseInterfaceNoNULL<CManipulationManager>(v27);
  ReleaseInterfaceNoNULL<CManipulationManager>(v28);
  ReleaseInterfaceNoNULL<CManipulationManager>(v29);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v25);
  ReleaseInterfaceNoNULL<CManipulationManager>(v30);
  return (unsigned int)v4;
}
