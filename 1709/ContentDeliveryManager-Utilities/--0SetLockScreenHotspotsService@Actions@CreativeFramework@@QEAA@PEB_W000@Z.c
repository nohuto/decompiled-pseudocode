/*
 * XREFs of ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x180083D84
 * Callers:
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180084910 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x180002708 (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002FB0 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18003DB90 (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x18005B3D8 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x180083BA0 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        wchar_t *a2,
        wchar_t *a3,
        wchar_t *a4,
        const wchar_t *lpString1)
{
  __int64 v7; // rdi
  PSID *v8; // r12
  LPCWSTR *v9; // r15
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  wchar_t **v14; // rdx
  int CurrentUserSidString; // eax
  WCHAR *v16; // r14
  DWORD LastError; // ebx
  const char *v18; // r9
  PSID v19; // r15
  PSID v20; // r14
  DWORD v21; // ebx
  PSID Sid; // [rsp+40h] [rbp-10h] BYREF
  char v24; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

  v7 = (__int64)this;
  *(_QWORD *)this = &CreativeFramework::Actions::SetLockScreenHotspotsService::`vftable';
  v8 = (PSID *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  v9 = (LPCWSTR *)((char *)this + 16);
  *((_QWORD *)this + 2) = 0LL;
  v10 = (_QWORD *)((char *)this + 24);
  v10[3] = 7LL;
  v10[2] = 0LL;
  *(_WORD *)v10 = 0;
  if ( *a2 )
  {
    v11 = -1LL;
    do
      ++v11;
    while ( a2[v11] );
  }
  else
  {
    v11 = 0LL;
  }
  std::wstring::assign(v10, (char *)a2, v11);
  *(_QWORD *)(v7 + 80) = 7LL;
  *(_QWORD *)(v7 + 72) = 0LL;
  *(_WORD *)(v7 + 56) = 0;
  if ( *a3 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((_QWORD *)(v7 + 56), (char *)a3, v12);
  *(_QWORD *)(v7 + 112) = 7LL;
  *(_QWORD *)(v7 + 104) = 0LL;
  *(_WORD *)(v7 + 88) = 0;
  if ( *a4 )
  {
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
  }
  else
  {
    v13 = 0LL;
  }
  std::wstring::assign((_QWORD *)(v7 + 88), (char *)a4, v13);
  *(_BYTE *)(v7 + 124) = 1;
  if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"true", -1, 1) == 2 )
    *(_DWORD *)(v7 + 120) = 1;
  Sid = 0LL;
  v24 = 1;
  CurrentUserSidString = CreativeFramework::Actions::GetCurrentUserSidString((CreativeFramework::Actions *)&Sid, v14);
  if ( CurrentUserSidString < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)CurrentUserSidString);
  if ( v24 )
  {
    v16 = (WCHAR *)*v9;
    if ( *v9 )
    {
      LastError = GetLastError();
      CoTaskMemFree(v16);
      SetLastError(LastError);
    }
    *v9 = (LPCWSTR)Sid;
  }
  Sid = 0LL;
  v24 = 1;
  if ( !ConvertStringSidToSidW(*v9, &Sid) )
    wil::details::in1diag3::_Throw_GetLastError(
      retaddr,
      (void *)0x3F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      v18);
  if ( v24 )
  {
    v19 = Sid;
    v20 = *v8;
    if ( *v8 )
    {
      v21 = GetLastError();
      LocalFree(v20);
      SetLastError(v21);
    }
    *v8 = v19;
  }
  if ( !IsValidSid(*v8) )
  {
    v7 = 2147549183LL;
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)0x8000FFFFLL);
  }
  return v7;
}
