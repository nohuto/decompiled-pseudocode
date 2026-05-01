/*
 * XREFs of ?_UpdateThumbnailWindow@SwitchItemCollection@@AEAAJPEAUIApplicationView@@@Z @ 0x18027A5A0
 * Callers:
 *     ?OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x180279D30 (-OnApplicationViewChanged@SwitchItemCollection@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CH.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z @ 0x180279808 (--4-$ObservableProperty@PEAUHWND__@@@@QEAAAEBQEAUHWND__@@AEBQEAU1@@Z.c)
 *     ?_FindExistingItem@SwitchItemCollection@@AEAA?AV?$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUIApplicationView@@@Z @ 0x18027A38C (-_FindExistingItem@SwitchItemCollection@@AEAA-AV-$ComPtr@UIObservableItem@@@WRL@Microsoft@@PEAUI.c)
 */

__int64 __fastcall SwitchItemCollection::_UpdateThumbnailWindow(
        SwitchItemCollection *this,
        struct IApplicationView *a2)
{
  CWinRTApplicationView *v3; // rbx
  unsigned int v4; // ebx
  int v5; // eax
  __int64 v6; // rdx
  _QWORD *v7; // rax
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF
  CWinRTApplicationView *v12; // [rsp+58h] [rbp+20h] BYREF

  SwitchItemCollection::_FindExistingItem((__int64)this, &v12, (__int64)a2);
  v3 = v12;
  if ( v12 )
  {
    v11 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    v5 = (**(__int64 (__fastcall ***)(CWinRTApplicationView *, GUID *, __int64 *))v3)(
           v3,
           &GUID_c0944116_18f0_4c1c_a1a4_224296b2d4fc,
           &v11);
    v4 = v5;
    if ( v5 >= 0 )
    {
      v5 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 72LL))(a2, v9);
      v4 = v5;
      if ( v5 >= 0 )
      {
        v7 = (_QWORD *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
        ObservableProperty<HWND__ *>::operator=(v7, v9);
        v4 = 0;
        goto LABEL_9;
      }
      v6 = 285LL;
    }
    else
    {
      v6 = 282LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v6,
      (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
      (const char *)(unsigned int)v5);
LABEL_9:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v11);
    goto LABEL_10;
  }
  v4 = -2147418113;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x117,
    (__int64)"pcshell\\twinui\\multitaskingview\\lib\\switchitemcollection.cpp",
    (const char *)0x8000FFFFLL);
LABEL_10:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v12);
  return v4;
}
