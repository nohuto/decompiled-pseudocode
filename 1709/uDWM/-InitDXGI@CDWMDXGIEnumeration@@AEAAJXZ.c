/*
 * XREFs of ?InitDXGI@CDWMDXGIEnumeration@@AEAAJXZ @ 0x180032E90
 * Callers:
 *     ?Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z @ 0x1800327A8 (-Create@CDWMDXGIEnumeration@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180020CC0 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z @ 0x1800332DC (-Create@CDWMDXGIAdapter@@SAJPEAUIDXGIAdapter@@IPEAPEAV1@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMDXGIEnumeration::InitDXGI(CDWMDXGIEnumeration *this)
{
  unsigned int v2; // r15d
  HRESULT v3; // eax
  int v4; // ebx
  unsigned int v5; // r12d
  unsigned int v6; // r13d
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // eax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  void *v15; // r10
  int v17; // r9d
  unsigned int v18; // [rsp+20h] [rbp-40h]
  __int64 v19; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h] BYREF
  struct IDXGIAdapter *v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+48h] [rbp-18h] BYREF
  struct CDWMDXGIAdapter *v23[2]; // [rsp+50h] [rbp-10h] BYREF
  void *ppFactory; // [rsp+98h] [rbp+38h] BYREF
  __int64 v25; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+48h] BYREF

  ppFactory = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v2 = 0;
  v19 = 0LL;
  v20 = 0LL;
  v23[0] = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  v3 = CreateDXGIFactory1(&GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0, &ppFactory);
  v4 = v3;
  if ( v3 < 0 )
  {
    v18 = 254;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_713f394e_92ca_47e7_ab81_1159c2791e54,
         &v25);
  v4 = v3;
  if ( v3 < 0 )
  {
    v18 = 260;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f,
         &v26);
  v4 = v3;
  if ( v3 < 0 )
  {
    v18 = 263;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_b14887d9_f537_4af5_b379_7d33031be773,
         &v19);
  v4 = v3;
  if ( v3 < 0 )
  {
    v18 = 266;
    goto LABEL_50;
  }
  v3 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppFactory)(
         ppFactory,
         &GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c,
         &v20);
  v4 = v3;
  if ( v3 < 0 )
  {
    v18 = 272;
LABEL_50:
    v17 = v3;
LABEL_53:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1800AA290, 1u, v17, v18);
LABEL_34:
    if ( ppFactory )
      (*(void (__fastcall **)(void *))(*(_QWORD *)ppFactory + 16LL))(ppFactory);
    v14 = v20;
    v13 = v19;
    v12 = v26;
    v11 = v25;
    goto LABEL_37;
  }
  v5 = (unsigned int)ppFactory;
  while ( 1 )
  {
    v6 = v5;
    if ( (*(unsigned int (__fastcall **)(void *, _QWORD, __int64 *))(*(_QWORD *)ppFactory + 96LL))(ppFactory, v2, &v22) == -2005270526 )
      break;
    v3 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct IDXGIAdapter **))v22)(
           v22,
           &GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0,
           &v21);
    v4 = v3;
    if ( v3 < 0 )
    {
      v18 = 280;
      goto LABEL_50;
    }
    v3 = CDWMDXGIAdapter::Create(v21, v2, v23);
    v4 = v3;
    if ( v3 < 0 )
    {
      v18 = 284;
      goto LABEL_50;
    }
    v8 = *((unsigned int *)this + 20);
    v9 = v8 + 1;
    v5 = v8 + 1;
    if ( (int)v8 + 1 < (unsigned int)v8 )
      v5 = v6;
    v4 = v9 < (unsigned int)v8 ? 0x80070216 : 0;
    if ( v9 < (unsigned int)v8 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0xB5u);
    }
    else if ( v5 > *((_DWORD *)this + 19) )
    {
      v10 = DynArrayImpl<0>::AddMultipleAndSet((__int64)this + 56, 8u, 1, v23);
      v4 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0xC0u);
    }
    else
    {
      *(struct CDWMDXGIAdapter **)(*((_QWORD *)this + 7) + 8 * v8) = v23[0];
      *((_DWORD *)this + 20) = v5;
    }
    if ( v4 < 0 )
    {
      v18 = 286;
LABEL_52:
      v17 = v4;
      goto LABEL_53;
    }
    if ( v21 )
    {
      ((void (__fastcall *)(struct IDXGIAdapter *))v21->lpVtbl->Release)(v21);
      v21 = 0LL;
    }
    if ( v22 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      v22 = 0LL;
    }
    v23[0] = 0LL;
    ++v2;
  }
  if ( !v2 )
  {
    v4 = -2003304291;
    v18 = 299;
    goto LABEL_52;
  }
  v11 = v25;
  *((_QWORD *)this + 3) = v25;
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v11 = v25;
  }
  v12 = v26;
  *((_QWORD *)this + 4) = v26;
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
    v11 = v25;
    v12 = v26;
  }
  v13 = v19;
  *((_QWORD *)this + 5) = v19;
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v13 + 8LL))(v13, v7, v12);
    v11 = v25;
    v12 = v26;
    v13 = v19;
  }
  v14 = v20;
  *((_QWORD *)this + 6) = v20;
  if ( v14 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
    v11 = v25;
    v12 = v26;
    v13 = v19;
    v14 = v20;
  }
  v15 = ppFactory;
  *((_QWORD *)this + 2) = ppFactory;
  if ( v15 )
  {
    (*(void (__fastcall **)(void *, __int64, __int64, __int64))(*(_QWORD *)v15 + 8LL))(v15, v14, v12, v13);
    goto LABEL_34;
  }
LABEL_37:
  if ( v11 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v11 + 16LL))(v11, v14, v12, v13);
    v12 = v26;
    v13 = v19;
    v14 = v20;
  }
  if ( v12 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 16LL))(v12, v14);
    v13 = v19;
    v14 = v20;
  }
  if ( v13 )
  {
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13 + 16LL))(v13, v14);
    v14 = v20;
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v21 )
    ((void (__fastcall *)(struct IDXGIAdapter *))v21->lpVtbl->Release)(v21);
  return (unsigned int)v4;
}
