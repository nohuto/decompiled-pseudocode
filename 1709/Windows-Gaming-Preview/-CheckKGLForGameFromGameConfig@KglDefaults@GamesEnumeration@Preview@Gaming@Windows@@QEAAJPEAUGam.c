/*
 * XREFs of ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003A580
 * Callers:
 *     ?GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x180036E34 (-GetKglDefaultsAsJson@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@QEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A79C (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z @ 0x18003AC3C (-Return_Win32@in1diag3@details@wil@@YAJPEAXIPEBDK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::CheckKGLForGameFromGameConfig(
        RTL_SRWLOCK *this,
        struct ExecutionModel::GameConfig *a2,
        __int64 a3,
        struct Microsoft::WRL::Wrappers::HString *a4)
{
  DWORD v7; // eax
  int v8; // eax
  int v9; // esi
  int v10; // edi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rcx
  DWORD LastError; // eax
  __int64 v19; // [rsp+20h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+28h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+18h]

  v20[1] = -2LL;
  v7 = WaitForSingleObject(hHandle, 0x1F4u);
  if ( !v7 )
  {
    v20[2] = this + 2;
    AcquireSRWLockShared(this + 2);
    v19 = 0LL;
    v8 = (*(__int64 (__fastcall **)(PVOID, struct ExecutionModel::GameConfig *, __int64 *))(*(_QWORD *)this[1].Ptr + 64LL))(
           this[1].Ptr,
           a2,
           &v19);
    v9 = v8;
    v10 = -2147023728;
    if ( v8 == -2147023728 )
    {
      v11 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      ReleaseSRWLockShared(this + 2);
LABEL_20:
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xD0,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)(unsigned int)v10);
      return (unsigned int)v10;
    }
    if ( v8 >= 0 )
    {
      v13 = v19;
      v20[0] = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
      v14 = Windows::Gaming::Preview::GamesEnumeration::KglDefaults::BuildJsonFromKglEntry(v13, v20, a4);
      v10 = v14;
      if ( v14 >= 0 )
      {
        v16 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        ReleaseSRWLockShared(this + 2);
        v10 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0xF0,
          (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
          (const char *)(unsigned int)v14);
        v15 = v19;
        if ( v19 )
        {
          v19 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ReleaseSRWLockShared(this + 2);
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xEE,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
        (const char *)(unsigned int)v8);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      ReleaseSRWLockShared(this + 2);
      v10 = v9;
    }
    if ( v10 < 0 )
      goto LABEL_20;
    return this[1].Ptr == 0LL ? 0x80004003 : 0;
  }
  if ( v7 == -1 )
  {
    LastError = GetLastError();
    if ( LastError )
      return wil::details::in1diag3::Return_Win32(
               retaddr,
               (void *)0xD4,
               (unsigned int)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
               (const char *)LastError,
               v19);
    return this[1].Ptr == 0LL ? 0x80004003 : 0;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD8,
    (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
    (const char *)0x800705B4LL);
  return 2147943860LL;
}
