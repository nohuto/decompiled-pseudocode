/*
 * XREFs of ?ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x18012A690
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180128B4C (--$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@-$ComPtr@UIApplicationFrame.c)
 */

__int64 __fastcall CApplicationFrameWrapper::ReconnectTitleBar(CApplicationFrameWrapper *this)
{
  int v1; // eax
  unsigned int v2; // ebx
  __int64 v3; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = Microsoft::WRL::ComPtr<IApplicationFrame>::As<Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs>(
         (_QWORD *)this + 12,
         &v6);
  v2 = v1;
  if ( v1 >= 0 )
  {
    v1 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 64LL))(v6);
    v2 = v1;
    if ( v1 >= 0 )
    {
      v2 = 0;
      goto LABEL_7;
    }
    v3 = 352LL;
  }
  else
  {
    v3 = 351LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v3,
    (__int64)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)v1);
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v6);
  return v2;
}
