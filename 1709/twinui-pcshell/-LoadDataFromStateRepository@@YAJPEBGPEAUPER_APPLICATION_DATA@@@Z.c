/*
 * XREFs of ?LoadDataFromStateRepository@@YAJPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x180006EF0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a730ada88cbae26163c74f230d1e84ab___::Run @ 0x18001C3D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_a730ada88cbae26163c74f230d1e84ab___--Run.c)
 * Callees:
 *     ?GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHSTRING__@@@Z @ 0x180006E10 (-GetLocalizedDisplayNameForApp@@YAJPEAUIApplication@StateRepository@Internal@Windows@@PEAPEAUHST.c)
 *     ??$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationStatics@StateRepository@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEBG@Z @ 0x180018D20 (--$GetActivationFactory@UIApplicationStatics@StateRepository@Internal@Windows@@@wil@@YA-AV-$com_.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180027560 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180027778 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall LoadDataFromStateRepository(PCNZWCH sourceString, HSTRING *a2)
{
  __int64 v4; // rsi
  __int64 v5; // r14
  int v6; // eax
  int LocalizedDisplayNameForApp; // eax
  unsigned __int64 String; // r9
  unsigned __int64 v9; // rax
  UINT32 v10; // esi
  int v11; // eax
  const char *v12; // r9
  __int64 result; // rax
  int v14; // [rsp+20h] [rbp-78h]
  _BYTE v15[8]; // [rsp+30h] [rbp-68h] BYREF
  struct Windows::Internal::StateRepository::IApplication *v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v18[2]; // [rsp+48h] [rbp-50h] BYREF
  _BYTE v19[32]; // [rsp+58h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v18[1] = -2LL;
  v18[0] = sourceString;
  try
  {
    wil::GetActivationFactory<Windows::Internal::StateRepository::IApplicationStatics>(&v17);
    v4 = v17;
    v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(v19, v18);
    v16 = 0LL;
    v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct Windows::Internal::StateRepository::IApplication **))(*(_QWORD *)v4 + 240LL))(
           v4,
           0LL,
           *(_QWORD *)(v5 + 24),
           &v16);
    if ( v6 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x56,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v6,
        v14);
    WindowsDeleteString(*a2);
    *a2 = 0LL;
    LocalizedDisplayNameForApp = GetLocalizedDisplayNameForApp(v16, a2);
    if ( LocalizedDisplayNameForApp < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x58,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)LocalizedDisplayNameForApp,
        v14);
      String = 0LL;
      if ( sourceString )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( sourceString[v9] );
        v10 = -1;
        if ( v9 <= 0xFFFFFFFF )
          v10 = v9;
        String = v9 > 0xFFFFFFFF ? 0x80070216 : 0;
        if ( v9 <= 0xFFFFFFFF )
        {
          WindowsDeleteString(*a2);
          *a2 = 0LL;
          String = (unsigned int)WindowsCreateString(sourceString, v10, a2);
        }
      }
      if ( (String & 0x80000000) != 0LL )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x5B,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)String,
          v14);
    }
    v11 = (*(__int64 (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *, _BYTE *))(*(_QWORD *)v16 + 1096LL))(
            v16,
            v15);
    if ( v11 >= 0 )
      *((_BYTE *)a2 + 26) = v15[0] != 0;
    else
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5F,
        (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v11,
        v14);
    if ( v16 )
      (*(void (__fastcall **)(struct Windows::Internal::StateRepository::IApplication *))(*(_QWORD *)v16 + 16LL))(v16);
    if ( v17 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x66,
                           (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                           v12);
  }
  return result;
}
