/*
 * XREFs of ?OnDismiss@CQuickConnectExperienceManager@@UEAAJXZ @ 0x1800AC690
 * Callers:
 *     ?OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800AD1E0 (-OnEventQueued@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800AD280 (-OnSetForegroundFailed@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1800260C4 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z @ 0x1800AF978 (--$ExperienceManager_OnDismiss@AEAU_GUID@@@QuickConnectTelemetry@@SAXAEAU_GUID@@@Z.c)
 *     ?DestroyView@CSingleViewShellExperience@@QEAAJXZ @ 0x1801815C8 (-DestroyView@CSingleViewShellExperience@@QEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CQuickConnectExperienceManager::OnDismiss(CQuickConnectExperienceManager *this)
{
  unsigned int v2; // eax
  __int64 v3; // rdx
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // rcx
  __int64 v8; // rcx
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 6) )
    return 0LL;
  if ( !*((_BYTE *)this + 400) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 49) + 24LL))(
           *((_QWORD *)this + 49),
           0xFFFFLL);
    wil::details::in1diag3::Log_Hr(
      retaddr,
      (void *)0x22F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)v2);
  }
  if ( *((_QWORD *)this + 38) )
  {
    v12 = 0LL;
    if ( (***((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 38))(
           *((_QWORD *)this + 38),
           &GUID_cb2ddc0d_d9ed_46c2_955a_d9eb426a8595,
           &v12) >= 0 )
    {
      LOBYTE(v3) = 1;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 56LL))(v12, v3);
      v5 = v4;
      if ( v4 < 0 )
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x23D,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v4);
        v6 = v12;
        if ( v12 )
        {
          v12 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        }
        return v5;
      }
    }
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
  }
  QuickConnectTelemetry::ExperienceManager_OnDismiss<_GUID &>((char *)this + 288);
  v9 = CSingleViewShellExperience::DestroyView((CQuickConnectExperienceManager *)((char *)this + 64));
  v10 = v9;
  if ( v9 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x242,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)(unsigned int)v9);
  return v10;
}
