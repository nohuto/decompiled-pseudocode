/*
 * XREFs of ?CalcWindowPosition@CJumpViewExperienceManager@@CAJUtagRECT@@UtagPOINT@@HHW4HorizontalAlignment@Xaml@UI@Windows@@W4VerticalAlignment@567@AEAU2@@Z @ 0x1800BECA0
 * Callers:
 *     ?EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800BE618 (-EnsureWindowPosition@CJumpViewExperienceManager@@AEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
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
  int v9; // ecx
  int v11; // r10d
  int v12; // ecx
  int v13; // eax
  int v14; // edx
  _DWORD *v15; // r9
  int v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // r8d
  int v24; // ecx
  int v25; // r8d
  int v26; // eax
  int v27; // edx
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // edx
  int v33; // ecx
  __int64 v35; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v37; // [rsp+38h] [rbp+10h]

  v37 = a2;
  v9 = a6;
  if ( a6 == 1 )
  {
    v9 = 0;
    v11 = HIDWORD(a2) - a4 / 2;
  }
  else
  {
    v11 = HIDWORD(a2);
  }
  if ( v9 )
  {
    if ( v9 != 2 )
    {
      v35 = 750LL;
      goto LABEL_51;
    }
    v18 = a1[3];
    v19 = v18;
    if ( v11 < v18 )
      v19 = v11;
    if ( v19 - a4 <= a1[1] )
    {
      v20 = a1[1];
    }
    else
    {
      if ( v11 < v18 )
        v18 = v11;
      v20 = v18 - a4;
    }
    v15 = a7;
    v21 = v20 + a4;
    a7[1] = v20;
    v22 = a1[3];
    if ( v21 < v22 )
      v22 = v21;
    a7[3] = v22;
  }
  else
  {
    v12 = a1[1];
    v13 = v12;
    v14 = a1[3];
    if ( v11 > v12 )
      v13 = v11;
    if ( a4 + v13 < v14 )
    {
      if ( v11 > v12 )
        v12 = v11;
      v14 = v12 + a4;
    }
    v15 = a7;
    a7[3] = v14;
    v16 = v14 - a4;
    v17 = a1[1];
    if ( v16 > v17 )
      v17 = v16;
    a7[1] = v17;
  }
  v23 = a5;
  v24 = v37;
  if ( a5 == 1 )
  {
    v23 = 0;
    v24 = a3 / -2 + v37;
  }
  if ( !v23 )
  {
    v25 = *a1;
    v26 = *a1;
    v27 = a1[2];
    if ( v24 > *a1 )
      v26 = v24;
    if ( a3 + v26 < v27 )
    {
      if ( v24 > v25 )
        v25 = v24;
      v27 = v25 + a3;
    }
    v15[2] = v27;
    v28 = v27 - a3;
    v29 = *a1;
    if ( v28 > *a1 )
      v29 = v28;
    *v15 = v29;
    return 0LL;
  }
  if ( v23 == 2 )
  {
    v30 = a1[2];
    v31 = v30;
    if ( v24 < v30 )
      v31 = v24;
    if ( v31 - a3 <= *a1 )
    {
      v32 = *a1;
    }
    else
    {
      if ( v24 < v30 )
        v30 = v24;
      v32 = v30 - a3;
    }
    *v15 = v32;
    v33 = a1[2];
    if ( v32 + a3 < v33 )
      v33 = v32 + a3;
    v15[2] = v33;
    return 0LL;
  }
  v35 = 772LL;
LABEL_51:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v35,
    (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\jumpviewexperiencemanager.cpp",
    (const char *)0x80004001LL);
  return 2147500033LL;
}
