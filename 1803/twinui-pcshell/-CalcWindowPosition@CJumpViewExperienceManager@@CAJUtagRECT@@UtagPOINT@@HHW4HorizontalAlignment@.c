/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x180176204
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180176800 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CJumpViewExperienceManager::CalcWindowPosition(
        int *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  int v10; // r10d
  int v11; // eax
  int v12; // edx
  int v13; // eax
  int v14; // ecx
  _DWORD *v15; // r9
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // r8d
  int v24; // eax
  int v25; // ecx
  int v26; // ecx
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  __int64 v32; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v34; // [rsp+38h] [rbp+10h]

  v34 = a2;
  if ( a6 == 1 )
    v10 = HIDWORD(a2) - a4 / 2;
  else
    v10 = HIDWORD(a2);
  v11 = 0;
  if ( a6 != 1 )
    v11 = a6;
  if ( v11 )
  {
    if ( v11 != 2 )
    {
      v32 = 743LL;
      goto LABEL_56;
    }
    v17 = a1[3];
    v18 = a1[3];
    if ( v10 < v17 )
      v18 = v10;
    if ( v18 - a4 <= a1[1] )
    {
      v19 = a1[1];
    }
    else
    {
      if ( v10 < v17 )
        v17 = v10;
      v19 = v17 - a4;
    }
    v15 = a7;
    v20 = v19 + a4;
    a7[1] = v19;
    if ( v19 + a4 >= a1[3] )
      v20 = a1[3];
    a7[3] = v20;
  }
  else
  {
    v12 = a1[1];
    v13 = v12;
    v14 = a1[3];
    if ( v10 > v12 )
      v13 = v10;
    if ( a4 + v13 < v14 )
    {
      if ( v10 > v12 )
        v12 = v10;
      v14 = v12 + a4;
    }
    v15 = a7;
    a7[3] = v14;
    v16 = v14 - a4;
    if ( v16 <= a1[1] )
      v16 = a1[1];
    a7[1] = v16;
  }
  if ( a5 == 1 )
    v21 = a3 / -2 + v34;
  else
    v21 = v34;
  v22 = 0;
  if ( a5 != 1 )
    v22 = a5;
  if ( !v22 )
  {
    v23 = *a1;
    v24 = *a1;
    v25 = a1[2];
    if ( v21 > *a1 )
      v24 = v21;
    if ( a3 + v24 < v25 )
    {
      if ( v21 > v23 )
        v23 = v21;
      v25 = v23 + a3;
    }
    v15[2] = v25;
    v26 = v25 - a3;
    if ( v26 <= *a1 )
      v26 = *a1;
    *v15 = v26;
    return 0LL;
  }
  if ( v22 == 2 )
  {
    v27 = a1[2];
    v28 = v27;
    if ( v21 < v27 )
      v28 = v21;
    if ( v28 - a3 <= *a1 )
    {
      v29 = *a1;
    }
    else
    {
      if ( v21 < v27 )
        v27 = v21;
      v29 = v27 - a3;
    }
    v30 = v29 + a3;
    *v15 = v29;
    if ( v29 + a3 >= a1[2] )
      v30 = a1[2];
    v15[2] = v30;
    return 0LL;
  }
  v32 = 765LL;
LABEL_56:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v32,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
