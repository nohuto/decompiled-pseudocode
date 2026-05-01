/*
 * XREFs of ?QueryService@CImmersiveApp@@UEAAJAEBU_GUID@@0PEAPEAX@Z @ 0x180055BD0
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScreen@Activation@ApplicationModel@Windows@@U4@VFtmBase@23@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800606E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UISplashScr.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::QueryService(
        CImmersiveApp *this,
        const struct _GUID *a2,
        const struct _GUID *a3,
        void **a4)
{
  unsigned int Service; // ebx
  IUnknown *v8; // rcx
  IUnknown *punk[3]; // [rsp+20h] [rbp-18h] BYREF

  punk[1] = (IUnknown *)-2LL;
  *a4 = 0LL;
  if ( *(_OWORD *)a2 == *(_OWORD *)&GUID_0e0da070_2224_4934_8090_041f7ff223eb )
  {
    return (unsigned int)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::QueryInterface(
                           *((_QWORD *)this + 32),
                           a3,
                           a4);
  }
  else
  {
    punk[0] = 0LL;
    (*(void (__fastcall **)(char *, GUID *, IUnknown **))(*((_QWORD *)this - 23) + 32LL))(
      (char *)this - 184,
      &GUID_00000000_0000_0000_c000_000000000046,
      punk);
    Service = IUnknown_QueryService(punk[0], a2, a3, a4);
    v8 = punk[0];
    if ( punk[0] )
    {
      punk[0] = 0LL;
      ((void (__fastcall *)(IUnknown *))v8->lpVtbl->Release)(v8);
    }
  }
  return Service;
}
