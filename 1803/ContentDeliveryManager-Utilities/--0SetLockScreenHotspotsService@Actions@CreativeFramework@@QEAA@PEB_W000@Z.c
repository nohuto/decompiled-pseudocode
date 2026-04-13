/*
 * XREFs of ??0SetLockScreenHotspotsService@Actions@CreativeFramework@@QEAA@PEB_W000@Z @ 0x18008F3B8
 * Callers:
 *     ?MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@4@@Z @ 0x180090080 (-MakeSetLockScreenHotspotsService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@A.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003310 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18004153C (-_Throw_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180062D20 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z @ 0x18008F1E8 (-GetCurrentUserSidString@Actions@CreativeFramework@@YAJPEAPEA_W@Z.c)
 */

// Hidden C++ exception states: #wind=8
CreativeFramework::Actions::SetLockScreenHotspotsService *__fastcall CreativeFramework::Actions::SetLockScreenHotspotsService::SetLockScreenHotspotsService(
        CreativeFramework::Actions::SetLockScreenHotspotsService *this,
        wchar_t *a2,
        wchar_t *LastError,
        wchar_t *a4,
        const wchar_t *lpString1)
{
  PSID *v8; // r12
  LPCWSTR *v9; // r15
  _QWORD *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // r8
  wchar_t **v14; // rdx
  int CurrentUserSidString; // eax
  WCHAR *v16; // r14
  BOOL v17; // eax
  const char *v18; // r9
  wil::details::in1diag3 *v19; // rcx
  PSID v20; // r15
  PSID v21; // r14
  DWORD v22; // ebx
  PSID Sid; // [rsp+40h] [rbp-10h] BYREF
  char v25; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]

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
  *((_QWORD *)this + 10) = 7LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_WORD *)this + 28) = 0;
  if ( *LastError )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( LastError[v12] );
  }
  else
  {
    v12 = 0LL;
  }
  std::wstring::assign((_QWORD *)this + 7, (char *)LastError, v12);
  *((_QWORD *)this + 14) = 7LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_WORD *)this + 44) = 0;
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
  std::wstring::assign((_QWORD *)this + 11, (char *)a4, v13);
  *((_BYTE *)this + 124) = 1;
  if ( lpString1 && CompareStringOrdinal(lpString1, -1, L"true", -1, 1) == 2 )
    *((_DWORD *)this + 30) = 1;
  Sid = 0LL;
  v25 = 1;
  CurrentUserSidString = CreativeFramework::Actions::GetCurrentUserSidString((CreativeFramework::Actions *)&Sid, v14);
  if ( CurrentUserSidString < 0 )
  {
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x3E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)(unsigned int)CurrentUserSidString);
LABEL_29:
    wil::details::in1diag3::_Throw_GetLastError(
      v19,
      (void *)0x3F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      v18);
    goto LABEL_30;
  }
  if ( v25 )
  {
    v16 = (WCHAR *)*v9;
    if ( *v9 )
    {
      LastError = (wchar_t *)GetLastError();
      CoTaskMemFree(v16);
      SetLastError((DWORD)LastError);
    }
    *v9 = (LPCWSTR)Sid;
  }
  Sid = 0LL;
  v25 = 1;
  v17 = ConvertStringSidToSidW(*v9, &Sid);
  v19 = retaddr;
  if ( !v17 )
    goto LABEL_29;
  if ( v25 )
  {
    v20 = Sid;
    v21 = *v8;
    if ( *v8 )
    {
      v22 = GetLastError();
      LocalFree(v21);
      SetLastError(v22);
    }
    *v8 = v20;
  }
  LastError = (wchar_t *)retaddr;
  if ( !IsValidSid(*v8) )
  {
LABEL_30:
    wil::details::in1diag3::Throw_Hr(
      (wil::details::in1diag3 *)LastError,
      (void *)0x40,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\setlockscreenhotspots.cpp",
      (const char *)0x8000FFFFLL);
    JUMPOUT(0x18008F5F6LL);
  }
  return this;
}
