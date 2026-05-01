/*
 * XREFs of ?CreateWrapperForRecoveredView@@YAJPEAUMsgString@@URecoveredViewInfo@@URecoveredWindowForViewWrapper@@PEAVViewEventDispatcher@@PEAPEAUIViewWrapperInternal@@@Z @ 0x1801CA1CC
 * Callers:
 *     _lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_::operator() @ 0x1801C8DDC (_lambda_3c0ad9012c3cc8ca9a86eb2ff6eeaf64_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18006D640 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MsgStringGetData@@YAPEBGPEAUMsgString@@@Z @ 0x1800961B0 (-MsgStringGetData@@YAPEBGPEAUMsgString@@@Z.c)
 *     ??$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4ViewLifetimePolicy@1@PEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3$$QEAW4ViewLifetimePolicy@LegacyViewWrapper@@$$QEAPEAVViewEventDispatcher@@@Z @ 0x1801C6B6C (--$MakeAndInitialize@VLegacyViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGW4View.c)
 *     ??$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVViewEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIViewWrapperInternal@@AEAI$$QEAPEAUIUnknown@@$$QEAPEBG3AEAPEAVViewEventDispatcher@@@Z @ 0x1801C6EBC (--$MakeAndInitialize@VUAPViewWrapper@@UIViewWrapperInternal@@AEAIPEAUIUnknown@@PEBGPEBGAEAPEAVVi.c)
 *     ?IsLegacyApp@@YAJPEBGPEA_N@Z @ 0x1801CBAF4 (-IsLegacyApp@@YAJPEBGPEA_N@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 CreateWrapperForRecoveredView(struct MsgString *a1, __int64 a2, __int64 a3, ...)
{
  unsigned __int16 *v5; // r14
  CallerIdentity *Data; // rax
  int v7; // eax
  unsigned int v8; // ebx
  struct IUnknown *v9; // rax
  unsigned __int64 v10; // rdx
  CWinRTApplicationView *v11; // r9
  int v12; // eax
  __int64 v13; // rdx
  UAPViewWrapper *v15; // [rsp+40h] [rbp-30h] BYREF
  int v16[2]; // [rsp+48h] [rbp-28h] BYREF
  struct IUnknown *v17; // [rsp+50h] [rbp-20h] BYREF
  const unsigned __int16 *v18[3]; // [rsp+58h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  ViewManagerBridge **v20; // [rsp+B8h] [rbp+48h] BYREF
  va_list va; // [rsp+B8h] [rbp+48h]
  unsigned __int16 *v22; // [rsp+C0h] [rbp+50h] BYREF
  va_list va1; // [rsp+C0h] [rbp+50h]
  va_list va2; // [rsp+C8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, ViewManagerBridge **);
  va_copy(va2, va1);
  v22 = va_arg(va2, unsigned __int16 *);
  v18[1] = (const unsigned __int16 *)-2LL;
  v5 = v22;
  *(_QWORD *)v22 = 0LL;
  Data = (CallerIdentity *)MsgStringGetData(a1);
  v7 = IsLegacyApp(Data, (bool *)va1);
  v8 = v7;
  if ( v7 >= 0 )
  {
    v15 = 0LL;
    v9 = (struct IUnknown *)MsgStringGetData(a1);
    v11 = *(CWinRTApplicationView **)a2;
    if ( (_BYTE)v22 )
    {
      LODWORD(v22) = 0;
      *(_QWORD *)v16 = off_180322D20[v10 & -(__int64)(v10 < 4)];
      v17 = v9;
      v18[0] = (const unsigned __int16 *)v11;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<LegacyViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,enum LegacyViewWrapper::ViewLifetimePolicy,ViewEventDispatcher *>(
              &v15,
              (unsigned int *)(a2 + 8),
              v18,
              (__int64 *)&v17,
              v16,
              (unsigned __int16 **)va1,
              (ViewManagerBridge ***)va);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 2902LL;
LABEL_6:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v13,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)v12);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
        goto LABEL_10;
      }
    }
    else
    {
      v22 = off_180322D20[v10 & -(__int64)(v10 < 4)];
      v18[0] = (const unsigned __int16 *)v9;
      v17 = (struct IUnknown *)v11;
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
      v12 = Microsoft::WRL::Details::MakeAndInitialize<UAPViewWrapper,IViewWrapperInternal,unsigned int &,IUnknown *,unsigned short const *,unsigned short const *,ViewEventDispatcher * &>(
              &v15,
              (int *)(a2 + 8),
              &v17,
              v18,
              (unsigned __int16 **)va1,
              (ViewManagerBridge ***)va);
      v8 = v12;
      if ( v12 < 0 )
      {
        v13 = 2912LL;
        goto LABEL_6;
      }
    }
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v15);
    *(_QWORD *)v5 = v15;
    Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)&v15);
    v8 = 0;
    goto LABEL_10;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xB4A,
    (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
    (const char *)(unsigned int)v7);
LABEL_10:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((CWinRTApplicationView **)a2);
  return v8;
}
