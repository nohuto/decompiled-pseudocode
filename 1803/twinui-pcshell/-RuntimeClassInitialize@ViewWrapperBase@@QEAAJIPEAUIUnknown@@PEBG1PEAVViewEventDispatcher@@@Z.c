/*
 * XREFs of ?RuntimeClassInitialize@ViewWrapperBase@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18004EB20
 * Callers:
 *     ?RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z @ 0x18005AEB8 (-RuntimeClassInitialize@UAPViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1PEAVViewEventDispatcher@@@Z.c)
 *     ?RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Z @ 0x1801E2648 (-RuntimeClassInitialize@LegacyViewWrapper@@QEAAJIPEAUIUnknown@@PEBG1W4ViewLifetimePolicy@1@PEAVV.c)
 * Callees:
 *     ?GetHostIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_K@Z @ 0x180055AB0 (-GetHostIdForView@ViewManagerBridge@@UEAAJPEAUIUnknown@@PEA_K@Z.c)
 *     ?SetCallback@WindowReadyState@@QEAAXV?$function@$$A6AX_N@Z@std@@@Z @ 0x18005B584 (-SetCallback@WindowReadyState@@QEAAXV-$function@$$A6AX_N@Z@std@@@Z.c)
 *     ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z @ 0x18006D738 (--4-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@PEAUIUnknown@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z @ 0x180087690 (-_InitializeHelper@String@Internal@Windows@@AEAAJPEBG@Z.c)
 *     ??4?$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z @ 0x180091078 (--4-$ComPtr@VViewEventDispatcher@@@WRL@Microsoft@@QEAAAEAV012@PEAVViewEventDispatcher@@@Z.c)
 *     ??$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z @ 0x1800957C0 (--$ViewWrapperCreated@AEAIAEAPEBGAEAPEBG@ViewManagerInteropTraceLogging@@SAXAEAIAEAPEBG1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ViewWrapperBase::RuntimeClassInitialize(
        ViewWrapperBase *this,
        int a2,
        struct IUnknown *a3,
        const unsigned __int16 *a4,
        unsigned __int16 *a5,
        struct ViewEventDispatcher *a6)
{
  struct IUnknown **v6; // rbx
  struct IUnknown *v9; // rdx
  unsigned __int64 *v10; // r8
  ViewManagerBridge *v11; // rcx
  __int64 (__fastcall *v12)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned __int64 *); // rax
  int v13; // eax
  int v14; // ebx
  int v15; // edi
  __int64 v17; // rdx
  _QWORD v18[8]; // [rsp+20h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+28h]
  int v20; // [rsp+98h] [rbp+38h] BYREF
  const unsigned __int16 *v21; // [rsp+A8h] [rbp+48h] BYREF

  v21 = a4;
  v20 = a2;
  *((_DWORD *)this + 37) = a2;
  v6 = (struct IUnknown **)((char *)this + 192);
  Microsoft::WRL::ComPtr<IUnknown>::operator=((char *)this + 192, a3);
  Microsoft::WRL::ComPtr<ViewEventDispatcher>::operator=((char *)this + 168, a6);
  v9 = *v6;
  if ( *v6 )
  {
    v10 = (unsigned __int64 *)((char *)this + 176);
    v11 = *(ViewManagerBridge **)(*((_QWORD *)this + 21) + 520LL);
    v12 = *(__int64 (__fastcall **)(ViewManagerBridge *__hidden, struct IUnknown *, unsigned __int64 *))(*(_QWORD *)v11 + 288LL);
    v13 = v12 == ViewManagerBridge::GetHostIdForView
        ? ViewManagerBridge::GetHostIdForView(v11, v9, v10)
        : v12(v11, v9, v10);
    v14 = v13;
    if ( v13 < 0 )
    {
      v17 = 86LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
        (const char *)(unsigned int)v14,
        v18[0]);
      return (unsigned int)v14;
    }
  }
  v18[1] = this;
  v18[0] = off_1803230C0;
  v18[7] = v18;
  WindowReadyState::SetCallback((char *)this + 352, v18);
  v14 = -2147467261;
  if ( a4 )
    v15 = Windows::Internal::String::_InitializeHelper((ViewWrapperBase *)((char *)this + 152), a4);
  else
    v15 = -2147467261;
  if ( v15 >= 0 )
  {
    if ( a5 )
      v14 = Windows::Internal::String::_InitializeHelper((ViewWrapperBase *)((char *)this + 160), a5);
    if ( v14 >= 0 )
    {
      ViewManagerInteropTraceLogging::ViewWrapperCreated<unsigned int &,unsigned short const * &,unsigned short const * &>(
        &v20,
        &v21,
        &a5);
      return 0LL;
    }
    v17 = 99LL;
    goto LABEL_16;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x62,
    (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\viewwrapperbase.cpp",
    (const char *)(unsigned int)v15,
    v18[0]);
  return (unsigned int)v15;
}
