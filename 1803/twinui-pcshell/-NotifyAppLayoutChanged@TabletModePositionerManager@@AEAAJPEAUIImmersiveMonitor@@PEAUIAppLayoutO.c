/*
 * XREFs of ?NotifyAppLayoutChanged@TabletModePositionerManager@@AEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1802C2B38
 * Callers:
 *     ?PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAUIAppLayoutOperation@@@Z @ 0x1802C2F60 (-PerMonitorPositionerLayoutChanged@TabletModePositionerManager@@UEAAJPEAUIImmersiveMonitor@@PEAU.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ?InternalRelease@?$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ @ 0x18001D61C (-InternalRelease@-$ComPtr@UIObjectArray@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z @ 0x18030A064 (-GetCallbackArray@CGITRegistrationList@@QEAAJPEAPEAUIObjectArray@@@Z.c)
 */

__int64 __fastcall TabletModePositionerManager::NotifyAppLayoutChanged(
        TabletModePositionerManager *this,
        struct IImmersiveMonitor *a2,
        struct IAppLayoutOperation *a3)
{
  int CallbackArray; // eax
  int v7; // ebx
  struct IObjectArray *v8; // r14
  void *v9; // rdi
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  DWORD CurrentThreadId; // eax
  void *v14; // [rsp+30h] [rbp-20h] BYREF
  struct IObjectArray *v15; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  struct IObjectArray *v18; // [rsp+80h] [rbp+30h] BYREF
  struct IAppLayoutOperation *v19; // [rsp+98h] [rbp+48h] BYREF

  v18 = 0LL;
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v18);
  CallbackArray = CGITRegistrationList::GetCallbackArray((TabletModePositionerManager *)((char *)this + 112), &v18);
  v7 = CallbackArray;
  if ( CallbackArray >= 0 )
  {
    v19 = a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v19);
    v8 = v18;
    v15 = v18;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
    v16[0] = (__int64)a3;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v16);
    v9 = 0LL;
    v16[1] = (__int64)a2;
    v10 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)v10);
      *v11 = off_180347218;
      v11[2] = 0LL;
      if ( v11 + 2 != &v15 )
      {
        v15 = 0LL;
        v11[2] = v8;
      }
      v11[3] = 0LL;
      if ( v11 + 3 != v16 )
      {
        v16[0] = 0LL;
        v11[3] = a3;
      }
      v11[4] = a2;
      v9 = v11;
    }
    v14 = v9;
    CurrentThreadId = GetCurrentThreadId();
    v7 = Windows::Internal::ComTaskPool::RunTask(
           2u,
           0,
           CurrentThreadId,
           0,
           (struct Windows::Internal::IComPoolTask *)v9,
           0LL);
    Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v14);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v16);
    Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v15);
    if ( v7 >= 0 )
      v7 = 0;
    else
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBE,
        (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
        (const char *)(unsigned int)v7);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB4,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositionermanager.cpp",
      (const char *)(unsigned int)CallbackArray);
  }
  Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)&v18);
  return (unsigned int)v7;
}
