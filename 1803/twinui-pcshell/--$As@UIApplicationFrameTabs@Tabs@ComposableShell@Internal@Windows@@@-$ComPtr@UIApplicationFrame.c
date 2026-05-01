/*
 * XREFs of ??$As@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIApplicationFrameTabs@Tabs@ComposableShell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180128B4C
 * Callers:
 *     ?ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x18012A690 (-ReconnectTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?RecreateTitleBar@CApplicationFrameWrapper@@UEAAJXZ @ 0x18012A710 (-RecreateTitleBar@CApplicationFrameWrapper@@UEAAJXZ.c)
 *     ?get_Tab@CApplicationFrameWrapper@@UEAAJPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18012C0F0 (-get_Tab@CApplicationFrameWrapper@@UEAAJPEAPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@.c)
 *     ?put_Tab@CApplicationFrameWrapper@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z @ 0x18012C180 (-put_Tab@CApplicationFrameWrapper@@UEAAJPEAUIShellTab@Tabs@ComposableShell@Internal@Windows@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<IApplicationFrame>::As<Windows::Internal::ComposableShell::Tabs::IApplicationFrameTabs>(
        _QWORD *a1,
        __int64 *a2)
{
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a2);
  return (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*a1)(
           *a1,
           &GUID_b2affdc1_e58c_4235_bef5_5b42da417e92,
           a2);
}
