/*
 * XREFs of ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@00HH00@Z @ 0x1800A7410
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z @ 0x1800A7118 (-Reactivate@CShoulderTapExperienceManager@@AEAAJPEAUHSTRING__@@00HH00E@Z.c)
 *     ?Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z @ 0x180182128 (-Show@CSingleViewShellExperience@@QEAAJW4ShowOptions@1@@Z.c)
 */

__int64 __fastcall CShoulderTapExperienceManager::ShoulderTap(
        HSTRING *this,
        HSTRING a2,
        HSTRING a3,
        HSTRING a4,
        unsigned int a5,
        unsigned int a6,
        HSTRING string,
        HSTRING a8)
{
  HSTRING *v12; // rdi
  HSTRING *v13; // rdi
  HSTRING *v14; // rdi
  HSTRING *v15; // rdi
  HSTRING *v16; // rdi
  int v17; // ebx
  __int64 v18; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  if ( *((_DWORD *)this + 20) )
  {
    v17 = CShoulderTapExperienceManager::Reactivate(
            (CShoulderTapExperienceManager *)this,
            a2,
            a3,
            a4,
            a5,
            a6,
            string,
            a8,
            0);
    if ( v17 < 0 )
    {
      v18 = 166LL;
      goto LABEL_19;
    }
  }
  else
  {
    v12 = this + 33;
    if ( !a2 || a2 != *v12 )
    {
      WindowsDeleteString(*v12);
      *v12 = 0LL;
      WindowsDuplicateString(a2, v12);
    }
    v13 = this + 34;
    if ( !a3 || a3 != *v13 )
    {
      WindowsDeleteString(*v13);
      *v13 = 0LL;
      WindowsDuplicateString(a3, this + 34);
    }
    v14 = this + 35;
    if ( !a4 || a4 != *v14 )
    {
      WindowsDeleteString(*v14);
      *v14 = 0LL;
      WindowsDuplicateString(a4, this + 35);
    }
    v15 = this + 37;
    *((_DWORD *)this + 72) = a5;
    *((_DWORD *)this + 73) = a6;
    if ( !string || string != *v15 )
    {
      WindowsDeleteString(*v15);
      *v15 = 0LL;
      WindowsDuplicateString(string, this + 37);
    }
    v16 = this + 38;
    if ( !a8 || a8 != *v16 )
    {
      WindowsDeleteString(*v16);
      *v16 = 0LL;
      WindowsDuplicateString(a8, this + 38);
    }
    v17 = CSingleViewShellExperience::Show(this + 5, 0LL);
    if ( v17 < 0 )
    {
      v18 = 162LL;
LABEL_19:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)v18,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\shouldertapexperiencemanager.cpp",
        (const char *)(unsigned int)v17);
      return (unsigned int)v17;
    }
  }
  return 0LL;
}
