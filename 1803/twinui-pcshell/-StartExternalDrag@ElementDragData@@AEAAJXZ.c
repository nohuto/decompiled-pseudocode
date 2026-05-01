/*
 * XREFs of ?StartExternalDrag@ElementDragData@@AEAAJXZ @ 0x1802A5B44
 * Callers:
 *     ?DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z @ 0x1802A4A8C (-DragOver@ElementDragData@@AEAAXAEBVMultitaskingViewPointerInputArgs@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18028C50C (--0-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?Stop@?$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18028CEFC (-Stop@-$ActivityBase@VWindowManagementLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType.c)
 *     ??$As@UIMultitaskingViewDragSource@@@?$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIMultitaskingViewDragSource@@@WRL@Microsoft@@@Details@12@@Z @ 0x1802A3E78 (--$As@UIMultitaskingViewDragSource@@@-$ComPtr@UIMultitaskingViewElement@@@WRL@Microsoft@@QEBAJV-.c)
 *     DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___ @ 0x1802A3EB4 (DragCallbackHelpers--CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___.c)
 *     ??1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ @ 0x1802A468C (--1ExternalDragDetected@MultitaskingViewTelemetry@@QEAA@XZ.c)
 *     ?StartActivity@ExternalDragDetected@MultitaskingViewTelemetry@@QEAAXXZ @ 0x1802A5778 (-StartActivity@ExternalDragDetected@MultitaskingViewTelemetry@@QEAAXXZ.c)
 */

__int64 __fastcall ElementDragData::StartExternalDrag(ElementDragData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax
  __int64 v5; // rdx
  HWND v6; // rax
  __int64 v7; // rcx
  HWND v8; // rax
  __int64 v10; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v11; // [rsp+28h] [rbp-D8h] BYREF
  ElementDragData *v12; // [rsp+30h] [rbp-D0h] BYREF
  ElementDragData *v13; // [rsp+38h] [rbp-C8h] BYREF
  struct tagPOINT v14; // [rsp+40h] [rbp-C0h] BYREF
  struct tagPOINT Points; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[40]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1B8h] [rbp+B8h]

  wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v16,
    (__int64)"ExternalDragDetected");
  v16[0] = &MultitaskingViewTelemetry::ExternalDragDetected::`vftable';
  MultitaskingViewTelemetry::ExternalDragDetected::StartActivity((MultitaskingViewTelemetry::ExternalDragDetected *)v16);
  v13 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v13);
  v12 = this;
  Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v12);
  v10 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  v2 = DragCallbackHelpers::CreateExternalDragCallback__lambda_d6de005f52295972498d6004bc7f9486___(
         (__int64)this,
         &v10,
         (__int64)&v12);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v11 = 0LL;
    *((_DWORD *)this + 124) = 2;
    v4 = Microsoft::WRL::ComPtr<IMultitaskingViewElement>::As<IMultitaskingViewDragSource>((_QWORD *)this + 4, &v11);
    v3 = v4;
    if ( v4 >= 0 )
    {
      (*(void (__fastcall **)(_QWORD, struct tagPOINT *))(**((_QWORD **)this + 6) + 32LL))(
        *((_QWORD *)this + 6),
        &Points);
      v6 = (HWND)(*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 328LL))(*((_QWORD *)this + 5));
      MapWindowPoints(v6, 0LL, &Points, 2u);
      v7 = *((_QWORD *)this + 5);
      v14 = *(struct tagPOINT *)((char *)this + 92);
      v8 = (HWND)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 328LL))(v7);
      MapWindowPoints(v8, 0LL, &v14, 1u);
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, v10);
      v3 = v4;
      if ( v4 >= 0 )
      {
        wil::ActivityBase<WindowManagementLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v16);
        v3 = 0;
        goto LABEL_9;
      }
      v5 = 428LL;
    }
    else
    {
      v5 = 421LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
      (const char *)(unsigned int)v4);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19D,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\dragdata.cpp",
    (const char *)(unsigned int)v2);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v10);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v13);
  MultitaskingViewTelemetry::ExternalDragDetected::~ExternalDragDetected((MultitaskingViewTelemetry::ExternalDragDetected *)v16);
  return v3;
}
