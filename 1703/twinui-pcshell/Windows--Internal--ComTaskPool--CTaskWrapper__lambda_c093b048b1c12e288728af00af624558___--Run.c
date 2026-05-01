/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801858C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800260FC (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ?ContinueOnCurrentThread@?$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA?AVActivityThreadWatcher@2@XZ @ 0x180069684 (-ContinueOnCurrentThread@-$ActivityBase@VViewManagerInteropLogging@@$0A@$0A@$04U_TlgReflectorTag.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180180A68 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x180183CB8 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18018BE38 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  const char *v2; // r9
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v4; // r14
  HSTRING *v5; // rcx
  int v6; // eax
  int v7; // edi
  __int64 v8; // rcx
  HANDLE ProcessHeap; // rax
  _BYTE v10[16]; // [rsp+30h] [rbp-50h] BYREF
  LPVOID lpMem; // [rsp+40h] [rbp-40h]
  char v12; // [rsp+48h] [rbp-38h]
  _BYTE v13[24]; // [rsp+50h] [rbp-30h] BYREF
  int v14; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v16; // [rsp+A0h] [rbp+20h] BYREF

  v1 = a1 + 16;
  wil::ActivityBase<ViewManagerInteropLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ContinueOnCurrentThread(
    (struct wil::details::IFailureCallback *)(a1 + 48),
    (wil::ActivityThreadWatcher *)v10);
  v2 = (const char *)*(unsigned int *)(v1 + 24);
  if ( (int)v2 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v16, (_QWORD *)v1);
    if ( v16 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v1 + 16), 0LL);
      v4 = StringRawBuffer;
      v5 = *(HSTRING **)(v1 + 8);
      if ( !v5[22]
        || (v6 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v5, v5 + 22, StringRawBuffer),
            v7 = v6,
            v6 == -2144927148)
        || v6 == -2147009295 )
      {
        v7 = CSingleViewShellExperience::LaunchCore(
               *(CSingleViewShellExperience **)(v1 + 8),
               (HSTRING *)(*(_QWORD *)(v1 + 8) + 8LL),
               v4);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v1 + 8) + 88LL) + 104LL))(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 88LL),
        *(_QWORD *)(v1 + 8),
        (unsigned int)v7);
      if ( v7 >= 0 )
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v1 + 32);
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x11D,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v7);
      v8 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x102,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      v2);
  }
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v13);
  if ( v12 )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, lpMem);
  }
}
