/*
 * XREFs of ?Launch@CSingleViewShellExperience@@QEAAJXZ @ 0x18006C144
 * Callers:
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x18006BC78 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 *     ?Launch@CToastCenterExperienceManager@@AEAAJXZ @ 0x180163330 (-Launch@CToastCenterExperienceManager@@AEAAJXZ.c)
 *     ?Prelaunch@CStartExperienceManager@@UEAAJE@Z @ 0x180173E50 (-Prelaunch@CStartExperienceManager@@UEAAJE@Z.c)
 *     ?Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z @ 0x1801840B0 (-Launch@ShellExperienceView@Cortana@TwinUI@@UEAAJPEAUHSTRING__@@@Z.c)
 * Callees:
 *     ?Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z @ 0x18001A298 (-Set@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEAUHSTRING__@@@Z.c)
 *     ?BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069978 (-BoostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x180069ADC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ??1Launch@SingleViewExperienceTelemetry@@QEAA@XZ @ 0x180071360 (--1Launch@SingleViewExperienceTelemetry@@QEAA@XZ.c)
 *     ??$?0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U?$integral_constant@D$0A@@wistd@@$$QEAPEBG1AEBQEAUHWND__@@@Z @ 0x180071388 (--$-0PEBGPEBGAEBQEAUHWND__@@@Launch@SingleViewExperienceTelemetry@@AEAA@U-$integral_constant@D$0.c)
 *     _lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_ @ 0x180071640 (_lambda_de3f4501c60332f424e3ead36a7d18c4_--__lambda_de3f4501c60332f424e3ead36a7d18c4_.c)
 *     _lambda_de3f4501c60332f424e3ead36a7d18c4_::_lambda_de3f4501c60332f424e3ead36a7d18c4_ @ 0x1800716A4 (_lambda_de3f4501c60332f424e3ead36a7d18c4_--_lambda_de3f4501c60332f424e3ead36a7d18c4_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_de3f4501c60332f424e3ead36a7d18c4___ @ 0x1800721B8 (Windows--Internal--ComTaskPool--QueueTask__lambda_de3f4501c60332f424e3ead36a7d18c4___.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1800787A4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x180098368 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800983C8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CSingleViewShellExperience::Launch(CSingleViewShellExperience *this)
{
  __int64 v2; // rdx
  ExperienceManagerUtils *v3; // rcx
  HWND v4; // rax
  int v5; // edx
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // esi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  void (__fastcall *v15)(__int64); // rax
  int v17; // [rsp+28h] [rbp-E0h]
  HSTRING string; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h]
  int v20[2]; // [rsp+48h] [rbp-C0h] BYREF
  PCWSTR StringRawBuffer; // [rsp+50h] [rbp-B8h] BYREF
  PCWSTR v22; // [rsp+58h] [rbp-B0h] BYREF
  HSTRING v23; // [rsp+60h] [rbp-A8h] BYREF
  _QWORD v24[2]; // [rsp+68h] [rbp-A0h] BYREF
  int v25[80]; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v26[352]; // [rsp+1B8h] [rbp+B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+330h] [rbp+228h]

  v24[1] = -2LL;
  v2 = 4LL;
  if ( dword_180438E68 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180438E68);
    if ( dword_180438E68 == -1 )
    {
      dword_180438E6C = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
      Init_thread_footer(&dword_180438E68);
    }
  }
  v3 = (ExperienceManagerUtils *)*((_QWORD *)this + 3);
  if ( v3 )
    v4 = ExperienceManagerUtils::WindowFromViewWrapper(
           v3,
           (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)v2);
  else
    v4 = 0LL;
  *(_QWORD *)v20 = v4;
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 2), 0LL);
  v22 = WindowsGetStringRawBuffer(*((HSTRING *)this + 1), 0LL);
  SingleViewExperienceTelemetry::Launch::Launch(
    (unsigned int)v25,
    v5,
    (unsigned int)&v22,
    (unsigned int)&StringRawBuffer,
    (__int64)v20);
  v23 = *(HSTRING *)this;
  string = 0LL;
  v6 = Microsoft::WRL::Wrappers::HString::Set(&string, &v23);
  v9 = v6;
  LODWORD(v19) = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xF4,
      (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
      (const char *)(unsigned int)v6,
      v17);
  }
  else
  {
    CSingleViewShellExperience::BoostPriority((__int64)this, 0LL, v7, v8);
    v10 = *((_QWORD *)this + 12);
    v24[0] = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    v11 = lambda_de3f4501c60332f424e3ead36a7d18c4_::_lambda_de3f4501c60332f424e3ead36a7d18c4_(v26, v24, this, &string);
    v9 = Windows::Internal::ComTaskPool::QueueTask__lambda_de3f4501c60332f424e3ead36a7d18c4___(v13, v12, v14, v11);
    lambda_de3f4501c60332f424e3ead36a7d18c4_::__lambda_de3f4501c60332f424e3ead36a7d18c4_(v26);
    if ( v9 < 0 )
    {
      CSingleViewShellExperience::UnboostPriority((__int64)this, 0);
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x126,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)(unsigned int)v9,
        (int)v25);
    }
    if ( v10 )
    {
      v15 = *(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL);
      if ( (char *)v15 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(v10);
      else
        v15(v10);
    }
  }
  WindowsDeleteString(string);
  string = 0LL;
  SingleViewExperienceTelemetry::Launch::~Launch((SingleViewExperienceTelemetry::Launch *)v25);
  return (unsigned int)v9;
}
