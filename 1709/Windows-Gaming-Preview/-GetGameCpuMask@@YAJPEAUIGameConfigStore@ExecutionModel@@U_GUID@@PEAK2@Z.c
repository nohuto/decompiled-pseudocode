/*
 * XREFs of ?GetGameCpuMask@@YAJPEAUIGameConfigStore@ExecutionModel@@U_GUID@@PEAK2@Z @ 0x180014C60
 * Callers:
 *     ?_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x1800373A8 (-_LoadPropertyValues@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJX.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetGameCpuMask(
        struct ExecutionModel::IGameConfigStore *a1,
        struct _GUID *a2,
        unsigned int *a3,
        unsigned int *a4)
{
  signed int LastError; // eax
  unsigned int v9; // ebx
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 (__fastcall *v13)(struct ExecutionModel::IGameConfigStore *, __int128 *, __int64, __int64 *, int *); // rax
  int v14; // eax
  int v15; // [rsp+30h] [rbp-28h] BYREF
  __int64 v16; // [rsp+38h] [rbp-20h] BYREF
  __int128 v17; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v16 = 0LL;
  if ( !GetActiveProcessorCount(0xFFFFu) )
  {
    LastError = GetLastError();
    v9 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v9 = LastError;
    if ( (v9 & 0x80000000) != 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x153,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
        (const char *)v9);
    return v9;
  }
  v11 = *(_QWORD *)a1;
  v12 = (__int128)*a2;
  v15 = 8;
  v13 = *(__int64 (__fastcall **)(struct ExecutionModel::IGameConfigStore *, __int128 *, __int64, __int64 *, int *))(v11 + 64);
  v17 = v12;
  v14 = v13(a1, &v17, 18LL, &v16, &v15);
  v9 = v14;
  if ( v14 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x157,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gameconfigutils.cpp",
      (const char *)(unsigned int)v14);
    return v9;
  }
  *a3 = v16;
  *a4 = HIDWORD(v16);
  return 0LL;
}
