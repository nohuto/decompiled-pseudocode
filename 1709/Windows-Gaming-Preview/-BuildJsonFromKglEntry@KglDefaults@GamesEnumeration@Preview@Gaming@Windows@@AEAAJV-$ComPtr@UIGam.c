/*
 * XREFs of ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A79C
 * Callers:
 *     ?CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGameConfig@ExecutionModel@@KPEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x18003A580 (-CheckKGLForGameFromGameConfig@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@QEAAJPEAUGam.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E30 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18000860C (-GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z.c)
 *     ?JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z @ 0x180015874 (-JsonDocumentFromGameConfigValues@@YAJK_KK_N11KPEBGPEAPEAUHSTRING__@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800428B0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::KglDefaults::BuildJsonFromKglEntry(
        _BOOL8 a1,
        _QWORD *a2,
        HSTRING *a3)
{
  unsigned __int16 v4; // si
  unsigned int v5; // r13d
  int v6; // r14d
  bool v7; // r15
  char v8; // r12
  int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // rcx
  void (*v12)(void); // rax
  int v14; // eax
  DWORD ActiveProcessorCount; // eax
  int GameProfileFromRawData; // eax
  __int64 v17; // rdx
  __int64 v18; // rdx
  HSTRING *v19; // rbx
  __int64 v20; // rcx
  bool v21; // [rsp+58h] [rbp-39h]
  unsigned __int16 v22; // [rsp+5Ch] [rbp-35h] BYREF
  unsigned int v23; // [rsp+60h] [rbp-31h] BYREF
  _BYTE v24[12]; // [rsp+64h] [rbp-2Dh] BYREF
  __int16 v25; // [rsp+70h] [rbp-21h] BYREF
  PCNZWCH sourceString; // [rsp+78h] [rbp-19h]
  char v27[8]; // [rsp+80h] [rbp-11h] BYREF
  unsigned __int16 *v28; // [rsp+88h] [rbp-9h]
  __int64 v29; // [rsp+90h] [rbp-1h]
  __int64 v30; // [rsp+98h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  _BOOL8 v32; // [rsp+F8h] [rbp+67h] BYREF
  _QWORD *v33; // [rsp+100h] [rbp+6Fh]
  HSTRING *v34; // [rsp+108h] [rbp+77h]
  bool v35; // [rsp+110h] [rbp+7Fh] BYREF

  v34 = a3;
  v33 = a2;
  v32 = a1;
  v30 = -2LL;
  v4 = 0;
  sourceString = 0LL;
  v5 = 0;
  v23 = 0;
  v6 = 0;
  memset(v24, 0, sizeof(v24));
  v7 = 0;
  LOBYTE(v32) = 0;
  v8 = 0;
  v35 = 0;
  v21 = 0;
  v9 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int16 *))(*(_QWORD *)*a2 + 48LL))(*a2, &v22);
  if ( v9 < 0 )
  {
    v10 = 260LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v10,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v9);
    v11 = *a2;
    if ( !*a2 )
      return (unsigned int)v9;
    *a2 = 0LL;
LABEL_5:
    v12 = *(void (**)(void))(*(_QWORD *)v11 + 16LL);
LABEL_6:
    v12();
    return (unsigned int)v9;
  }
  if ( v22 )
  {
    while ( 1 )
    {
      v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int16 *, char *))(*(_QWORD *)*a2 + 64LL))(*a2, v4, &v25, v27);
      v9 = v14;
      if ( v14 < 0 )
        break;
      switch ( v25 )
      {
        case 320:
          v21 = (_DWORD)v28 != 0;
          break;
        case 321:
          ActiveProcessorCount = GetActiveProcessorCount(0xFFFFu);
          if ( !ActiveProcessorCount )
          {
            v17 = 28LL;
            goto LABEL_29;
          }
          v23 = -1;
          *(_QWORD *)&v24[4] = -1LL;
          if ( (v29 & 3) != 0 )
          {
            v17 = 36LL;
            goto LABEL_29;
          }
          if ( (unsigned __int16)(*v28 - 1) > 1u )
          {
            v17 = 44LL;
            goto LABEL_29;
          }
          if ( 4LL * v28[1] != (unsigned int)v29 - 4LL )
          {
            v17 = 46LL;
LABEL_29:
            v9 = -2147024809;
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v17,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\autogameprofile.cpp",
              (const char *)0x80070057LL);
LABEL_30:
            wil::details::in1diag3::Return_Hr_NoOriginate(
              retaddr,
              (void *)0x117,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
              (const char *)(unsigned int)v9);
            v18 = *a2;
            if ( !*a2 )
              return (unsigned int)v9;
            *a2 = 0LL;
            v12 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
            goto LABEL_6;
          }
          GameProfileFromRawData = AutoGameProfile::GetGameProfileFromRawData(
                                     (AutoGameProfile *)*v28,
                                     (int)v29 - 4,
                                     v28 + 2,
                                     (const unsigned __int8 *)ActiveProcessorCount,
                                     (int *)&v23,
                                     (unsigned int *)&v24[4],
                                     (unsigned __int64 *)v24,
                                     (unsigned int *)&v32,
                                     &v35);
          v9 = GameProfileFromRawData;
          if ( GameProfileFromRawData < 0 )
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x30,
              (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\autogameprofile.cpp",
              (const char *)(unsigned int)GameProfileFromRawData);
          if ( v9 < 0 )
            goto LABEL_30;
          break;
        case 322:
          sourceString = v28;
          v5 = v29;
          break;
      }
      if ( ++v4 >= v22 )
      {
        v6 = *(_DWORD *)v24;
        v7 = v32;
        v8 = v35;
        goto LABEL_35;
      }
    }
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x10B,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\kgldefaults.cpp",
      (const char *)(unsigned int)v14);
    v11 = *a2;
    if ( !*a2 )
      return (unsigned int)v9;
    *a2 = 0LL;
    goto LABEL_5;
  }
LABEL_35:
  v19 = v34;
  WindowsDeleteString(*v34);
  *v19 = 0LL;
  v9 = JsonDocumentFromGameConfigValues(v23, *(HSTRING *)&v24[4], v6, v8, v7, v21, v5 >> 1, sourceString, v19);
  if ( v9 < 0 )
  {
    v10 = 302LL;
    goto LABEL_3;
  }
  v20 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return 0LL;
}
