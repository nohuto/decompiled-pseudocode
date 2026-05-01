/*
 * XREFs of ?LaunchCompleted@CSingleViewShellExperience@@QEAAXXZ @ 0x1801D040C
 * Callers:
 *     ?OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180097FD0 (-OnEventQueued@CActionCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING_.c)
 *     ?OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800B6FB0 (-OnEventQueued@CStartExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAU.c)
 *     ?LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ @ 0x1800CF270 (-LaunchCompleted@ShellExperienceView@Cortana@TwinUI@@UEAAJXZ.c)
 * Callees:
 *     ?UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z @ 0x1801D33BC (-UnboostPriority@CSingleViewShellExperience@@AEAAXW4PriorityBoostReason@1@@Z.c)
 *     ?StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z @ 0x1801D5D0C (-StartActivity@LaunchCompleted@SingleViewExperienceTelemetry@@QEAAXPEBG0@Z.c)
 *     ?Stop@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801D9404 (-Stop@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvider.c)
 *     ??1?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801D9C14 (--1-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderTyp.c)
 *     ?Destroy@?$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1801D9D24 (-Destroy@-$ActivityBase@VSingleViewExperienceLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvi.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CSingleViewShellExperience::LaunchCompleted(HSTRING *this)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  const unsigned __int16 *v3; // rbx
  _QWORD v4[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v5; // [rsp+50h] [rbp-B0h]
  int *v6; // [rsp+58h] [rbp-A8h]
  int *v7; // [rsp+60h] [rbp-A0h]
  int v8; // [rsp+68h] [rbp-98h] BYREF
  char v9; // [rsp+6Ch] [rbp-94h]
  int v10; // [rsp+90h] [rbp-70h] BYREF
  const char *v11; // [rsp+98h] [rbp-68h]
  __int64 v12; // [rsp+A0h] [rbp-60h]
  char v13; // [rsp+A8h] [rbp-58h]
  __int64 v14; // [rsp+B0h] [rbp-50h]
  _BYTE v15[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v16; // [rsp+148h] [rbp+48h]
  __int64 v17; // [rsp+150h] [rbp+50h]
  __int64 v18; // [rsp+158h] [rbp+58h]
  __int64 v19; // [rsp+160h] [rbp+60h]

  StringRawBuffer = WindowsGetStringRawBuffer(this[2], 0LL);
  v3 = WindowsGetStringRawBuffer(this[1], 0LL);
  v4[1] = 0LL;
  v4[2] = v4;
  v4[3] = 0LL;
  v5 = 0;
  v6 = &v10;
  v7 = &v8;
  v8 = 0;
  v9 = 0;
  v13 = 0;
  v10 = 0;
  v11 = "LaunchCompleted";
  v12 = 0LL;
  v14 = 1LL;
  v16 = 0LL;
  v17 = 0LL;
  memset(v15, 0, sizeof(v15));
  v18 = 0LL;
  v19 = 0LL;
  v4[0] = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  SingleViewExperienceTelemetry::LaunchCompleted::StartActivity(
    (SingleViewExperienceTelemetry::LaunchCompleted *)v4,
    v3,
    StringRawBuffer);
  CSingleViewShellExperience::UnboostPriority(this, 0LL);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v4);
  v4[0] = &SingleViewExperienceTelemetry::LaunchCompleted::`vftable';
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v4);
  wil::ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<SingleViewExperienceLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>(v4);
}
