/*
 * XREFs of ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x18003284C
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180018BB0 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180018494 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x1800184EC (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x180030C18 (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioSessionManager::SetEndpointId(CAudioSessionManager *this, char *a2)
{
  char *v2; // rdi
  CAudioSessionManager *v3; // rsi
  const void **v4; // rcx
  __int64 v5; // rax
  int v6; // edi
  struct IUnknown *v7; // rcx
  int *v9; // rbx
  struct IUnknown *v10; // [rsp+20h] [rbp-38h] BYREF
  struct IUnknown *v11[2]; // [rsp+28h] [rbp-30h] BYREF
  ATL::CAtlException *v12; // [rsp+38h] [rbp-20h] BYREF
  struct IUnknown *v15; // [rsp+78h] [rbp+20h] BYREF

  v11[1] = (struct IUnknown *)-2LL;
  v2 = a2;
  v3 = this;
  v10 = 0LL;
  v15 = 0LL;
  v11[0] = 0LL;
  try
  {
    v4 = (const void **)((char *)this + 304);
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( *(_WORD *)&a2[2 * v5] );
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v4, a2, (unsigned int)v5);
  }
  catch ( ATL::CAtlException *v12 )
  {
    v9 = (int *)v12;
    if ( *(_DWORD *)v12 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v9;
    if ( *v9 < 0 )
      goto LABEL_24;
    v3 = this;
    v2 = a2;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, char *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         &v10);
  if ( v6 >= 0 )
  {
    ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(v11, &v10);
    if ( !v11[0] )
    {
LABEL_23:
      v6 = -2147024809;
      goto LABEL_24;
    }
    v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v11[0]->lpVtbl[2].Release)(v11[0], (char *)v3 + 312);
    if ( v6 >= 0 )
    {
      v7 = v15;
      if ( v15 != v10 )
      {
        ATL::AtlComQIPtrAssign(&v15, v10, &GUID_1be09788_6894_4089_8586_9a2a6c265ac5);
        v7 = v15;
      }
      if ( v7 )
      {
        v6 = ((__int64 (__fastcall *)(struct IUnknown *, __int64))v7->lpVtbl[1].QueryInterface)(v7, (__int64)v3 + 324);
        if ( v6 >= 0 )
          goto LABEL_13;
        goto LABEL_24;
      }
      goto LABEL_23;
    }
  }
LABEL_24:
  AudSrvTraceLoggingErrorHelper("CAudioSessionManager::SetEndpointId", 0x683u, v6);
LABEL_13:
  if ( v11[0] )
    ((void (__fastcall *)(struct IUnknown *))v11[0]->lpVtbl->Release)(v11[0]);
  if ( v15 )
    ((void (__fastcall *)(struct IUnknown *))v15->lpVtbl->Release)(v15);
  if ( v10 )
    ((void (__fastcall *)(struct IUnknown *))v10->lpVtbl->Release)(v10);
  return (unsigned int)v6;
}
