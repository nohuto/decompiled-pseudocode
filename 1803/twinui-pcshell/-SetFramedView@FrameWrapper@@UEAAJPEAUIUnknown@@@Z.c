/*
 * XREFs of ?SetFramedView@FrameWrapper@@UEAAJPEAUIUnknown@@@Z @ 0x180133910
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UINtUserViewWrapper@@@?$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UINtUserViewWrapper@@@WRL@Microsoft@@@Details@12@@Z @ 0x1800F7918 (--$As@UINtUserViewWrapper@@@-$ComPtr@UIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@W.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1800FEE7C (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?ReconcileFramedView@FrameWrapper@@AEAAJXZ @ 0x18013362C (-ReconcileFramedView@FrameWrapper@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall FrameWrapper::SetFramedView(FrameWrapper *this, struct IUnknown *a2)
{
  _QWORD *v4; // rsi
  int v5; // eax
  unsigned int LastError; // ebx
  int v7; // eax
  __int64 v8; // rdx
  const char *v9; // r9
  int v10; // eax
  __int64 v11; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+20h]
  unsigned int v14; // [rsp+60h] [rbp+28h] BYREF
  __int64 v15; // [rsp+68h] [rbp+30h] BYREF
  __int64 v16; // [rsp+70h] [rbp+38h] BYREF
  __int64 v17; // [rsp+78h] [rbp+40h] BYREF

  v4 = (_QWORD *)((char *)this + 40);
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 5);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_8ab3bd56_9b4a_45da_b2fc_9b9d331c012e,
         v4);
  LastError = v5;
  if ( v5 >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
    v7 = (*(__int64 (__fastcall **)(FrameWrapper *, __int64 *))(*(_QWORD *)this + 32LL))(this, &v15);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 260LL;
LABEL_7:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
        (const char *)(unsigned int)v7);
LABEL_17:
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v15);
      return LastError;
    }
    v7 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v17);
    LastError = v7;
    if ( v7 < 0 )
    {
      v8 = 262LL;
      goto LABEL_7;
    }
    if ( !(unsigned int)GetWindowBand(v17, &v14) )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0x108,
                    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
                    v9);
      goto LABEL_17;
    }
    v16 = 0LL;
    v10 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::ViewManagerInterop::IViewWrapper>::As<INtUserViewWrapper>(
            v4,
            &v16);
    LastError = v10;
    if ( v10 >= 0 )
    {
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v16 + 40LL))(v16, v14);
      LastError = v10;
      if ( v10 >= 0 )
      {
        FrameWrapper::ReconcileFramedView((FrameWrapper *)((char *)this - 32));
        LastError = 0;
        goto LABEL_16;
      }
      v11 = 267LL;
    }
    else
    {
      v11 = 266LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
      (const char *)(unsigned int)v10);
LABEL_16:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v16);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xFC,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\framefactory.cpp",
    (const char *)(unsigned int)v5);
  return LastError;
}
