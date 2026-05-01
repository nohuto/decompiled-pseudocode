/*
 * XREFs of SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged @ 0x180309AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180072194 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z @ 0x180307A1C (-OnSessionIdleStateChanged@CSingleViewShellExperience@@QEAAJH@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SessionIdleCallback__lambda_5dd62f6e8324cfa711462c7c76a80ce5___::OnIdleStateChanged(
        __int64 a1,
        int a2)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  int v5; // eax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IInspectable *v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = a1 + 16;
  ExperienceManagerUtils::AsStrong<IInspectable>(&v9, (Microsoft::WRL::Details::WeakReferenceImpl **)(a1 + 16));
  v4 = 0;
  if ( v9 )
  {
    v5 = CSingleViewShellExperience::OnSessionIdleStateChanged(
           *(CSingleViewShellExperience **)(*(_QWORD *)(v3 + 8) + 8LL),
           a2);
    v6 = v5;
    if ( v5 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x55,
        (__int64)"shell\\twinui\\experiencemanagers\\corelib\\desktopsingleviewshellexperiencepersonality.cpp",
        (const char *)(unsigned int)v5);
    v4 = v6;
  }
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v9);
  return v4;
}
