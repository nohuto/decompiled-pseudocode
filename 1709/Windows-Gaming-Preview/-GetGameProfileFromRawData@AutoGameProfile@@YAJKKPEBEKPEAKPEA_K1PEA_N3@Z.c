/*
 * XREFs of ?GetGameProfileFromRawData@AutoGameProfile@@YAJKKPEBEKPEAKPEA_K1PEA_N3@Z @ 0x18000860C
 * Callers:
 *     ?BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$ComPtr@UIGameEntry@KnownGameList@@@WRL@Microsoft@@PEAVHString@Wrappers@78@@Z @ 0x18003A79C (-BuildJsonFromKglEntry@KglDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$ComPtr@UIGam.c)
 *     ?GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV?$shared_ptr@UIGameConfigStore@ExecutionModel@@@std@@PEAKPEA_K1PEA_N3@Z @ 0x18003F380 (-GetDefaultGameModeProfile@SystemDefaults@GamesEnumeration@Preview@Gaming@Windows@@AEAAJV-$share.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002DB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall AutoGameProfile::GetGameProfileFromRawData(
        AutoGameProfile *this,
        unsigned int a2,
        unsigned __int16 *a3,
        const unsigned __int8 *a4,
        int *a5,
        unsigned int *a6,
        unsigned __int64 *a7,
        unsigned int *a8,
        bool *a9)
{
  int v9; // eax
  unsigned __int16 *v10; // rdi
  int v11; // r11d
  __int64 v12; // rdx
  unsigned int v14; // r10d
  int v15; // esi
  __int64 v16; // rcx
  char v17; // bl
  unsigned int v18; // r13d
  unsigned int v19; // edx
  int v20; // r9d
  unsigned int v21; // r9d
  unsigned int v22; // eax
  unsigned int v23; // r11d
  int v24; // edx
  bool v25; // zf
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  int v29; // [rsp+60h] [rbp+8h]
  char v30; // [rsp+68h] [rbp+10h]
  int v31; // [rsp+78h] [rbp+20h]

  v31 = (int)a4;
  v29 = (int)this;
  v9 = (int)a4;
  v10 = a3;
  v11 = (int)this;
  if ( (a2 & 3) != 0 )
  {
    v12 = 56LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\autogameprofile.cpp",
      (const char *)0x80070057LL);
    return 2147942487LL;
  }
  if ( !a3 )
  {
    v12 = 57LL;
    goto LABEL_3;
  }
  if ( !a5 )
  {
    v12 = 58LL;
    goto LABEL_3;
  }
  if ( !a6 )
  {
    v12 = 59LL;
    goto LABEL_3;
  }
  if ( !a7 )
  {
    v12 = 60LL;
    goto LABEL_3;
  }
  if ( !a8 )
  {
    v12 = 61LL;
    goto LABEL_3;
  }
  if ( !a9 )
  {
    v12 = 62LL;
    goto LABEL_3;
  }
  if ( !(_DWORD)a4 )
  {
    v12 = 63LL;
    goto LABEL_3;
  }
  *a5 = 0;
  *(_QWORD *)a6 = 0LL;
  *(_DWORD *)a7 = 0;
  v14 = a2 >> 2;
  *(_BYTE *)a8 = 0;
  *a9 = 0;
  if ( !(a2 >> 2) )
  {
    v12 = 74LL;
    goto LABEL_3;
  }
  v30 = 0;
  v15 = 0;
  v16 = 0LL;
  v17 = 0;
  v18 = 0;
  do
  {
    v19 = *(_DWORD *)v10;
    v20 = *(_DWORD *)v10 >> 28;
    if ( v20 == 12 )
    {
      if ( (v19 & 0xFE00000) >= 0xC800000
        || (v21 = (v19 >> 14) & 0x7F, v21 >= 0x64)
        || (v22 = (v19 >> 7) & 0x7F, v22 >= 0x64)
        || (v23 = *(_DWORD *)v10 & 0x7F, v23 >= 0x64)
        || v21 + v23 + v22 > 0x64 )
      {
        v12 = 96LL;
        goto LABEL_3;
      }
      v17 = v30;
      v15 = v23 | (2 * (*(_DWORD *)v10 & 0x3F80 | (2 * ((2 * (*(_DWORD *)v10 & 0xFE00000)) | *(_DWORD *)v10 & 0x1FC000))));
      v11 = v29;
      goto LABEL_52;
    }
    if ( v11 == 2 )
    {
      v24 = (v19 >> 21) & 0x3F;
      v25 = v24 == 63;
    }
    else
    {
      v24 = (v19 >> 20) & 0x7F;
      v25 = v24 == 127;
    }
    if ( v25 )
    {
      *a9 = 1;
      v16 = -1LL;
    }
    if ( v24 == v9 )
    {
      if ( v11 == 2 )
      {
        *(_DWORD *)a7 = v10[1] & 0x1F;
        *a9 = 1;
      }
      if ( ((v20 - 2) & 0xFFFFFFFB) == 0 )
      {
        *(_BYTE *)a8 = 1;
        *a9 = 1;
      }
      if ( ((v20 - 4) & 0xFFFFFFFD) != 0 )
      {
        if ( (v20 & 0xFFFFFFFD) != 0 && v20 == 8 )
        {
          v16 = -1LL;
          goto LABEL_52;
        }
LABEL_53:
        v9 = v31;
        goto LABEL_54;
      }
      if ( v16 == -1 )
        *a9 = 1;
      v26 = 0LL;
      if ( v16 != -1 )
        v26 = v16;
      if ( (*(_DWORD *)v10 & 0x8000000) != 0 )
      {
        v17 = 1;
        v30 = 1;
        v16 = (v26 << 16) | *v10;
        *a9 = 1;
        goto LABEL_53;
      }
      if ( v11 == 2 )
        v27 = *v10;
      else
        v27 = *(unsigned int *)v10 & ((-(__int64)(v17 != 0) & 0xFFFFFFFFFFF10000uLL) + 0xFFFFF);
      v16 = v26 | v27;
LABEL_52:
      *a9 = 1;
      goto LABEL_53;
    }
LABEL_54:
    ++v18;
    v10 += 2;
  }
  while ( v18 < v14 );
  if ( *a9 )
  {
    *a5 = v15;
    *(_QWORD *)a6 = v16;
  }
  return 0LL;
}
