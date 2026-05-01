/*
 * XREFs of ?HandleFlashDetection@TabletModePositioner@@AEAAJPEAUIAppLayoutOperation@@@Z @ 0x1802C7880
 * Callers:
 *     ?ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z @ 0x1802C40FC (-ApplyLayoutOperationHelper@TabletModePositioner@@AEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ @ 0x18000AF60 (-InternalRelease@-$ComPtr@UIApplicationView@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18003BAEC (-InternalRelease@-$ComPtr@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180046D20 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf_____lambda_df999f07d52093701c0c38e9d5359aaf___ @ 0x1802C3378 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_df999f07d5209.c)
 */

__int64 __fastcall TabletModePositioner::HandleFlashDetection(
        CWinRTApplicationView **this,
        struct IAppLayoutOperation *a2)
{
  CWinRTApplicationView **v2; // r15
  struct IAppLayoutOperation **v5; // r14
  int v6; // eax
  int v7; // ebx
  void **v8; // rax
  void *v9; // rbx
  __int64 v10; // rcx
  DWORD CurrentThreadId; // eax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+30h]
  CWinRTApplicationView *v14; // [rsp+70h] [rbp+38h] BYREF
  struct IAppLayoutOperation *v15; // [rsp+78h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+48h] BYREF
  void *v17; // [rsp+88h] [rbp+50h] BYREF

  v2 = this + 36;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this + 36);
  v5 = this + 35;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 35);
  v14 = 0LL;
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  v6 = (*(__int64 (__fastcall **)(struct IAppLayoutOperation *, CWinRTApplicationView **))(*(_QWORD *)a2 + 120LL))(
         a2,
         &v14);
  v7 = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x934,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
      (const char *)(unsigned int)v6);
    goto LABEL_16;
  }
  if ( !v14 )
  {
LABEL_15:
    v7 = 0;
    goto LABEL_16;
  }
  v15 = (struct IAppLayoutOperation *)this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
  v15 = (struct IAppLayoutOperation *)this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v2);
  v8 = (void **)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_df999f07d52093701c0c38e9d5359aaf_____lambda_df999f07d52093701c0c38e9d5359aaf___(
                  &v16,
                  &v15);
  v9 = *v8;
  *v8 = 0LL;
  v10 = v16;
  v17 = v9;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
  CurrentThreadId = GetCurrentThreadId();
  v7 = Windows::Internal::ComTaskPool::RunTask(
         2u,
         0,
         CurrentThreadId,
         0x96u,
         (struct Windows::Internal::IComPoolTask *)v9,
         v2);
  Microsoft::WRL::ComPtr<Windows::Internal::IComPoolTask>::InternalRelease(&v17);
  if ( v15 )
    (*(void (__fastcall **)(struct IAppLayoutOperation *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v7 >= 0 )
  {
    if ( *v5 != a2 )
    {
      v15 = a2;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
      v15 = *v5;
      *v5 = a2;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
    }
    if ( this )
      (*((void (__fastcall **)(CWinRTApplicationView **))*this + 2))(this);
    goto LABEL_15;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x93B,
    (__int64)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioner.cpp",
    (const char *)(unsigned int)v7);
  if ( this )
    (*((void (__fastcall **)(CWinRTApplicationView **))*this + 2))(this);
LABEL_16:
  Microsoft::WRL::ComPtr<IApplicationView>::InternalRelease(&v14);
  return (unsigned int)v7;
}
