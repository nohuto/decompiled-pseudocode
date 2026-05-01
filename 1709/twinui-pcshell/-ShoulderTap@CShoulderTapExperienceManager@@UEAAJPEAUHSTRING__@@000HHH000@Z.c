/*
 * XREFs of ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x1800B4810
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x1800B3714 (-Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ.c)
 *     ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x1800B37F4 (-ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z @ 0x1800B4194 (-Reactivate@CShoulderTapExperienceManager@@AEAAJ_N@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x1801D18D0 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 */

__int64 __fastcall CShoulderTapExperienceManager::ShoulderTap(
        HSTRING *this,
        HSTRING string,
        HSTRING a3,
        HSTRING a4,
        HSTRING a5,
        int a6,
        int a7,
        int a8,
        HSTRING a9,
        HSTRING a10,
        HSTRING stringa)
{
  const unsigned __int16 *StringRawBuffer; // rdi
  _DWORD *v18; // rcx
  ShoulderTapExperienceManagerTelemetry *v19; // rcx
  HSTRING *v20; // rdi
  HSTRING *v21; // rdi
  HSTRING *v22; // rdi
  HSTRING *v23; // rdi
  HSTRING *v24; // rdi
  HSTRING *v25; // rdi
  HSTRING *v26; // rdi
  int v27; // ebx
  __int64 v28; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  const unsigned __int16 *v31; // [rsp+B8h] [rbp+50h]
  const unsigned __int16 *stringb; // [rsp+C0h] [rbp+58h]

  StringRawBuffer = WindowsGetStringRawBuffer(stringa, 0LL);
  stringb = WindowsGetStringRawBuffer(a10, 0LL);
  v31 = WindowsGetStringRawBuffer(a3, 0LL);
  v18 = (_DWORD *)*((_QWORD *)ShoulderTapExperienceManagerTelemetry::Instance() + 1);
  if ( v18 && *v18 )
  {
    ShoulderTapExperienceManagerTelemetry::Instance();
    ShoulderTapExperienceManagerTelemetry::ShoulderTap_(v19, v31, stringb, StringRawBuffer, a6, a7, a8);
  }
  v20 = this + 32;
  if ( !string || string != *v20 )
  {
    WindowsDeleteString(*v20);
    *v20 = 0LL;
    WindowsDuplicateString(string, this + 32);
  }
  v21 = this + 33;
  if ( !a3 || a3 != *v21 )
  {
    WindowsDeleteString(*v21);
    *v21 = 0LL;
    WindowsDuplicateString(a3, this + 33);
  }
  v22 = this + 34;
  if ( !a4 || a4 != *v22 )
  {
    WindowsDeleteString(*v22);
    *v22 = 0LL;
    WindowsDuplicateString(a4, this + 34);
  }
  v23 = this + 35;
  if ( !a5 || a5 != *v23 )
  {
    WindowsDeleteString(*v23);
    *v23 = 0LL;
    WindowsDuplicateString(a5, this + 35);
  }
  v24 = this + 38;
  *((_DWORD *)this + 72) = a6;
  *((_DWORD *)this + 73) = a7;
  *((_DWORD *)this + 74) = a8;
  if ( !a9 || a9 != *v24 )
  {
    WindowsDeleteString(*v24);
    *v24 = 0LL;
    WindowsDuplicateString(a9, this + 38);
  }
  v25 = this + 39;
  if ( !a10 || a10 != *v25 )
  {
    WindowsDeleteString(*v25);
    *v25 = 0LL;
    WindowsDuplicateString(a10, this + 39);
  }
  v26 = this + 40;
  if ( !stringa || stringa != *v26 )
  {
    WindowsDeleteString(*v26);
    *v26 = 0LL;
    WindowsDuplicateString(stringa, this + 40);
  }
  if ( *((_DWORD *)this + 20) )
  {
    v27 = CShoulderTapExperienceManager::Reactivate((CShoulderTapExperienceManager *)this, 0);
    if ( v27 < 0 )
    {
      v28 = 219LL;
      goto LABEL_28;
    }
  }
  else
  {
    v27 = CSingleViewShellExperience::Show(this + 5, 1LL);
    if ( v27 < 0 )
    {
      v28 = 215LL;
LABEL_28:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v28,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v27);
      return (unsigned int)v27;
    }
  }
  return 0LL;
}
