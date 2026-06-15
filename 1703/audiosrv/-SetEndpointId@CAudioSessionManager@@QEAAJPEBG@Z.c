/*
 * XREFs of ?SetEndpointId@CAudioSessionManager@@QEAAJPEBG@Z @ 0x1800213B4
 * Callers:
 *     ?GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x18001E600 (-GetAudioSessionManagerInternal@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManag.c)
 * Callees:
 *     ??$?4UIMMDevice@@@?$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV?$CComPtr@UIMMDevice@@@1@@Z @ 0x180004410 (--$-4UIMMDevice@@@-$CComPtr@UIMMEndpointInternal@@@ATL@@QEAAPEAUIMMEndpointInternal@@AEBV-$CComP.c)
 *     ?SetString@?$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z @ 0x18002346C (-SetString@-$CSimpleStringT@G$0A@@ATL@@QEAAXPEBGH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSessionManager::SetEndpointId(CAudioSessionManager *this, const unsigned __int16 *a2)
{
  const unsigned __int16 *v2; // rdi
  CAudioSessionManager *v3; // rsi
  char *v4; // rcx
  __int64 v5; // rax
  int v6; // edi
  int *v8; // rbx
  struct IUnknown *v9[2]; // [rsp+20h] [rbp-38h] BYREF
  ATL::CAtlException *v10; // [rsp+30h] [rbp-28h] BYREF
  struct IUnknown *v13; // [rsp+78h] [rbp+20h] BYREF

  v9[1] = (struct IUnknown *)-2LL;
  v2 = a2;
  v3 = this;
  v9[0] = 0LL;
  v13 = 0LL;
  try
  {
    v4 = (char *)this + 240;
    if ( a2 )
    {
      v5 = -1LL;
      do
        ++v5;
      while ( a2[v5] );
    }
    else
    {
      LODWORD(v5) = 0;
    }
    ATL::CSimpleStringT<unsigned short,0>::SetString(v4, a2, (unsigned int)v5);
  }
  catch ( ATL::CAtlException *v10 )
  {
    v8 = (int *)v10;
    if ( *(_DWORD *)v10 == -1073741571 )
      _o__resetstkoflw();
    v6 = *v8;
    if ( *v8 < 0 )
      goto LABEL_18;
    v3 = this;
    v2 = a2;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, const unsigned __int16 *, struct IUnknown **))(**(_QWORD **)&g_DeviceEnumerator
                                                                                       + 40LL))(
         *(_QWORD *)&g_DeviceEnumerator,
         v2,
         v9);
  if ( v6 >= 0 )
  {
    ATL::CComPtr<IMMEndpointInternal>::operator=<IMMDevice>(&v13, v9);
    if ( v13 )
    {
      v6 = ((__int64 (__fastcall *)(struct IUnknown *, char *))v13->lpVtbl[2].Release)(v13, (char *)v3 + 248);
      if ( v6 >= 0 )
        goto LABEL_9;
    }
    else
    {
      v6 = -2147024809;
    }
  }
LABEL_18:
  AudSrvTraceLoggingErrorHelper("CAudioSessionManager::SetEndpointId", 0x619u, v6);
LABEL_9:
  if ( v13 )
    ((void (__fastcall *)(struct IUnknown *))v13->lpVtbl->Release)(v13);
  if ( v9[0] )
    ((void (__fastcall *)(struct IUnknown *))v9[0]->lpVtbl->Release)(v9[0]);
  return (unsigned int)v6;
}
