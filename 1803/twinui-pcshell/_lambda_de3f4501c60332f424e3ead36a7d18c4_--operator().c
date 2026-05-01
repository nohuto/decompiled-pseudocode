/*
 * XREFs of _lambda_de3f4501c60332f424e3ead36a7d18c4_::operator() @ 0x180071554
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_de3f4501c60332f424e3ead36a7d18c4___::Run @ 0x1800717D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_de3f4501c60332f424e3ead36a7d18c4___--Run.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AFF4 (-InternalRelease@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x18006B7BC (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18006E21C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x18006E800 (-ContinueOnCurrentThread@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_Tlg.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800720F8 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180072194 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall lambda_de3f4501c60332f424e3ead36a7d18c4_::operator()(Microsoft::WRL::WeakRef *this)
{
  int v2; // ebx
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v4; // rbp
  HSTRING *v5; // rcx
  int v7; // eax
  _BYTE v8[80]; // [rsp+30h] [rbp-58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  struct IInspectable *v10; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (Microsoft::WRL::WeakRef *)((char *)this + 32),
    (wil::ActivityThreadWatcher *)v8);
  v2 = *((_DWORD *)this + 6);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xFF,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v2,
      -2);
    goto LABEL_9;
  }
  ExperienceManagerUtils::AsStrong<IInspectable>(&v10, this);
  if ( v10 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
    v4 = StringRawBuffer;
    v5 = (HSTRING *)*((_QWORD *)this + 1);
    if ( !v5[22]
      || (v7 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v5, v5 + 22, StringRawBuffer),
          v2 = v7,
          v7 == -2144927148)
      || v7 == -2147009295
      || v7 == -2147023812 )
    {
      v2 = CSingleViewShellExperience::LaunchCore(
             *((CSingleViewShellExperience **)this + 1),
             (HSTRING *)(*((_QWORD *)this + 1) + 8LL),
             v4);
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 1) + 88LL) + 104LL))(
      *(_QWORD *)(*((_QWORD *)this + 1) + 88LL),
      *((_QWORD *)this + 1),
      (unsigned int)v2);
    if ( v2 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x11B,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v2,
        -2);
      goto LABEL_8;
    }
    wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)this + 32);
  }
  v2 = 0;
LABEL_8:
  Microsoft::WRL::ComPtr<IInspectable>::InternalRelease((UAPViewWrapper **)&v10);
LABEL_9:
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v8);
  return (unsigned int)v2;
}
