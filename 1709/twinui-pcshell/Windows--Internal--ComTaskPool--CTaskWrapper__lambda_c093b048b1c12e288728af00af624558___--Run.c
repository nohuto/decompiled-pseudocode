/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run @ 0x1801D4700
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x18002686C (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x18006FB2C (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800D1720 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x1801CFFE8 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801DAC3C (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c093b048b1c12e288728af00af624558___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  const char *v3; // r9
  const unsigned __int16 *StringRawBuffer; // rax
  const unsigned __int16 *v5; // r14
  HSTRING *v6; // rcx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rcx
  HANDLE ProcessHeap; // rax
  LPVOID v11[4]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v12; // [rsp+50h] [rbp-30h] BYREF
  __int64 v13; // [rsp+60h] [rbp-20h]
  int v14; // [rsp+68h] [rbp-18h]
  __int64 v15; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v17; // [rsp+A0h] [rbp+20h] BYREF

  v1 = a1 + 16;
  v2 = *(_QWORD *)(a1 + 96);
  if ( *(_DWORD *)v2 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v11,
      (struct wil::details::IFailureCallback *)(a1 + 48),
      (const struct wil::details::StoredCallContextInfo *)(v2 + 40));
  }
  else
  {
    memset(v11, 0, sizeof(v11));
    v12 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
  }
  v3 = (const char *)*(unsigned int *)(v1 + 24);
  if ( (int)v3 >= 0 )
  {
    ExperienceManagerUtils::AsStrong<IInspectable>(&v17, (_QWORD *)v1);
    if ( v17 )
    {
      StringRawBuffer = WindowsGetStringRawBuffer(*(HSTRING *)(v1 + 16), 0LL);
      v5 = StringRawBuffer;
      v6 = *(HSTRING **)(v1 + 8);
      if ( !v6[22]
        || (v7 = CSingleViewShellExperience::LaunchCore((CSingleViewShellExperience *)v6, v6 + 22, StringRawBuffer),
            v8 = v7,
            v7 == -2144927148)
        || v7 == -2147009295 )
      {
        v8 = CSingleViewShellExperience::LaunchCore(
               *(CSingleViewShellExperience **)(v1 + 8),
               (HSTRING *)(*(_QWORD *)(v1 + 8) + 8LL),
               v5);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v1 + 8) + 88LL) + 104LL))(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 88LL),
        *(_QWORD *)(v1 + 8),
        (unsigned int)v8);
      if ( v8 >= 0 )
        wil::ActivityBase<SingleViewExperienceLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v1 + 32);
      else
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x11D,
          (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v8);
      v9 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x102,
      (__int64)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      v3);
  }
  if ( v14 )
    wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)&v12);
  if ( LOBYTE(v11[3]) )
  {
    ProcessHeap = GetProcessHeap();
    HeapFree(ProcessHeap, 0, v11[2]);
  }
}
