/*
 * XREFs of ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003F380
 * Callers:
 *     ?PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x18003F090 (-PopulateValues@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18000860C (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     __security_check_cookie @ 0x180040F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::SystemDefaults::GetDefaultGameModeProfile(
        __int64 a1,
        _QWORD *a2,
        int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        unsigned int *a6,
        bool *a7)
{
  int v10; // eax
  unsigned int v11; // esi
  volatile signed __int32 *v12; // rdi
  DWORD ActiveProcessorCount; // eax
  int GameProfileFromRawData; // eax
  unsigned int v16; // [rsp+50h] [rbp-88h] BYREF
  __int64 v17; // [rsp+58h] [rbp-80h]
  _QWORD *v18; // [rsp+60h] [rbp-78h]
  _WORD v19[2]; // [rsp+68h] [rbp-70h] BYREF
  unsigned int v20[9]; // [rsp+6Ch] [rbp-6Ch] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+0h]

  v17 = -2LL;
  v18 = a2;
  v16 = 40;
  v10 = (*(__int64 (__fastcall **)(_QWORD, __int64, _WORD *, unsigned int *))(*(_QWORD *)*a2 + 80LL))(
          *a2,
          3LL,
          v19,
          &v16);
  v11 = v10;
  if ( v10 >= 0 )
  {
    if ( v16 > 0x28 )
    {
      v11 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xCE,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
        (const char *)0x8000FFFFLL);
      v12 = (volatile signed __int32 *)a2[1];
      if ( v12 )
      {
        if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
          if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
            goto LABEL_13;
        }
      }
      return v11;
    }
    ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
    GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                               (AutoGameProfile *)v19[0],
                               v16 - 4,
                               (unsigned __int16 *)v20,
                               (const unsigned __int8 *)ActiveProcessorCount,
                               a3,
                               a4,
                               a5,
                               a6,
                               a7);
    v11 = GameProfileFromRawData;
    if ( GameProfileFromRawData < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xD8,
        (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
        (const char *)(unsigned int)GameProfileFromRawData);
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xCC,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\systemdefaults.cpp",
      (const char *)(unsigned int)v10);
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
LABEL_13:
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return v11;
}
