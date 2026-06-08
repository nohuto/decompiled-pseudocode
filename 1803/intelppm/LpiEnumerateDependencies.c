/*
 * XREFs of LpiEnumerateDependencies @ 0x1C0034CDC
 * Callers:
 *     LpiEnumerateDependencies @ 0x1C0034CDC (LpiEnumerateDependencies.c)
 *     LpiTranslateCoordinatedIdleStates @ 0x1C00350D8 (LpiTranslateCoordinatedIdleStates.c)
 * Callees:
 *     GetDevExtFromIndex @ 0x1C0007B90 (GetDevExtFromIndex.c)
 *     WPP_RECORDER_SF_S @ 0x1C000B148 (WPP_RECORDER_SF_S.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C000B3EC (WPP_RECORDER_SF_Sd.c)
 *     LpiEnumerateDependencies @ 0x1C0034CDC (LpiEnumerateDependencies.c)
 */

__int64 __fastcall LpiEnumerateDependencies(
        _DWORD *a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        _DWORD *a6,
        _DWORD *a7,
        unsigned int *a8,
        _DWORD *a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // rbx
  _DWORD *v12; // r10
  int v14; // ecx
  __int64 v15; // r9
  unsigned int v16; // esi
  int v17; // edx
  unsigned int v18; // eax
  unsigned int v19; // r11d
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 DevExtFromIndex; // rax
  __int64 v24; // r8
  __int64 v25; // r11
  __int64 v26; // rdx
  __int64 v27; // r9
  int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // rdx
  unsigned int v33; // ebx
  __int64 v34; // rsi
  unsigned int v35; // eax
  const wchar_t *v36; // rax
  unsigned __int16 v37; // r9
  __int64 result; // rax
  __int64 v39; // [rsp+38h] [rbp-81h]
  unsigned int v40; // [rsp+68h] [rbp-51h] BYREF
  int v41; // [rsp+6Ch] [rbp-4Dh]
  int v42; // [rsp+70h] [rbp-49h]
  unsigned int v43; // [rsp+74h] [rbp-45h]
  __int64 v44; // [rsp+78h] [rbp-41h]
  unsigned int v45; // [rsp+80h] [rbp-39h] BYREF
  unsigned int v46; // [rsp+84h] [rbp-35h] BYREF
  _DWORD *v47; // [rsp+88h] [rbp-31h]
  __int64 v48; // [rsp+90h] [rbp-29h]
  __int64 v49; // [rsp+98h] [rbp-21h]
  __int64 v50; // [rsp+A0h] [rbp-19h]
  __int64 v51; // [rsp+A8h] [rbp-11h]
  __int64 v52; // [rsp+B0h] [rbp-9h]

  v11 = (__int64)a9;
  v12 = a1;
  v14 = 0;
  v15 = a2;
  v16 = 0;
  v17 = 0;
  v42 = 0;
  v18 = 0;
  v41 = 0;
  v19 = a3;
  LODWORD(v44) = 0;
  v20 = 5 * v15;
  v43 = 0;
  v49 = 5 * v15;
  v47 = a9;
  if ( v12[10 * v15 + 9] )
  {
    while ( 1 )
    {
      v21 = v18;
      v22 = *(_QWORD *)&v12[2 * v20 + 10];
      v41 = v17 + 1;
      DevExtFromIndex = GetDevExtFromIndex(*(_DWORD *)(v22 + 4 * v21));
      v24 = DevExtFromIndex;
      v48 = DevExtFromIndex;
      v25 = *(_QWORD *)(DevExtFromIndex + 512);
      v44 = v25;
      if ( !v25 )
        break;
      if ( a11 )
      {
        KeAddProcessorAffinityEx(a11, *(unsigned int *)(DevExtFromIndex + 56));
        v24 = v48;
        v25 = v44;
      }
      v26 = 0LL;
      v27 = 0LL;
      v40 = 0;
      if ( !*(_DWORD *)(v25 + 16) )
        goto LABEL_38;
      do
      {
        if ( *(_DWORD *)(v25 + 80 * v27 + 44) > a3 )
        {
          if ( a10 )
          {
            *(_BYTE *)(a10 + 4 * v26) = v27;
            *(_BYTE *)(a10 + 4LL * v40 + 1) = 1;
            *(_BYTE *)(a10 + 4LL * v40 + 2) = 1;
            *(_BYTE *)(a10 + 4LL * v40 + 3) = 1;
            LODWORD(v26) = v40;
          }
          v26 = (unsigned int)(v26 + 1);
          v40 = v26;
        }
        v27 = (unsigned int)(v27 + 1);
      }
      while ( (unsigned int)v27 < *(_DWORD *)(v25 + 16) );
      v12 = a1;
      if ( !(_DWORD)v26 )
      {
LABEL_38:
        WPP_RECORDER_SF_Sd(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v26,
          v24,
          0xEu,
          (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
          *(const wchar_t **)(v24 + 64),
          a3);
        return 3221225473LL;
      }
      if ( v11 )
      {
        v28 = *(_DWORD *)(v24 + 56);
        *(_QWORD *)(v11 + 8) = a10;
        a10 += 4 * v26;
        *(_DWORD *)v11 = v28;
        *(_DWORD *)(v11 + 4) = v26;
        v11 += 16LL;
        v47 = (_DWORD *)v11;
      }
      v20 = v49;
      if ( (unsigned int)v26 > v16 )
        v16 = v26;
      v14 = v26 + v42;
      LODWORD(v44) = v16;
      v17 = v41;
      v18 = v43 + 1;
      v42 = v14;
      v43 = v18;
      if ( v18 >= a1[2 * v49 + 9] )
      {
        v19 = a3;
        LODWORD(v15) = a2;
        goto LABEL_18;
      }
    }
    v36 = *(const wchar_t **)(DevExtFromIndex + 64);
    v37 = 13;
LABEL_40:
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      1u,
      v37,
      (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
      v36);
    return 3221225473LL;
  }
LABEL_18:
  v29 = 0LL;
  v43 = 0;
  if ( !*v12 )
  {
LABEL_51:
    if ( v17 )
    {
      *a6 = v17;
      *a7 = v14;
      *a8 = v16;
      return 0LL;
    }
    v37 = 16;
    v36 = *(const wchar_t **)&v12[2 * v49 + 4];
    goto LABEL_40;
  }
  while ( 1 )
  {
    if ( (_DWORD)v29 == (_DWORD)v15 )
      goto LABEL_47;
    v50 = (unsigned int)v29;
    v30 = 5 * v29;
    v52 = 5 * v29;
    if ( v12[10 * v29 + 8] == (_DWORD)v15 )
      break;
    v14 = v42;
LABEL_47:
    v29 = (unsigned int)(v29 + 1);
    v43 = v29;
    if ( (unsigned int)v29 >= *v12 )
      goto LABEL_51;
    v19 = a3;
  }
  v31 = *(_QWORD *)&v12[10 * v29 + 6];
  v51 = v31;
  if ( !v31 )
  {
    result = LpiEnumerateDependencies(
               (_DWORD)v12,
               v29,
               v19,
               a4,
               a5,
               (__int64)&v46,
               (__int64)&v40,
               (__int64)&v45,
               v11,
               a10,
               a11);
    if ( (int)result < 0 )
      return result;
    if ( v45 > v16 )
      v16 = v45;
    v17 = v46 + v41;
    v11 += 16LL * v46;
    v41 += v46;
    v14 = v40 + v42;
    v47 = (_DWORD *)v11;
    a10 += 4LL * v40;
    goto LABEL_37;
  }
  v41 = v17 + 1;
  v32 = 0LL;
  LODWORD(v48) = 0;
  v40 = 0;
  if ( !*(_DWORD *)(v31 + 16) )
    goto LABEL_50;
  v33 = v48;
  v34 = v50;
  do
  {
    if ( *(_DWORD *)(v31 + 80LL * v33 + 44) > v19 )
    {
      if ( a11 )
      {
        KeOrAffinityEx(a11, 224LL * (v33 + *(_DWORD *)(a4 + 4 * v34)) + a5 + 48, a11);
        LODWORD(v32) = v40;
        v31 = v51;
        v19 = a3;
      }
      if ( a10 )
      {
        *(_BYTE *)(a10 + 4LL * (unsigned int)v32) = v33 + *(_BYTE *)(a4 + 4 * v34);
        *(_BYTE *)(a10 + 4LL * v40 + 1) = 1;
        *(_BYTE *)(a10 + 4LL * v40 + 2) = 1;
        *(_BYTE *)(a10 + 4LL * v40 + 3) = 1;
        LODWORD(v32) = v40;
      }
      v32 = (unsigned int)(v32 + 1);
      v40 = v32;
    }
    ++v33;
  }
  while ( v33 < *(_DWORD *)(v31 + 16) );
  v11 = (__int64)v47;
  v16 = v44;
  if ( (_DWORD)v32 )
  {
    if ( v47 )
    {
      *v47 = -1;
      v35 = v40;
      *(_QWORD *)(v11 + 8) = a10;
      *(_DWORD *)(v11 + 4) = v35;
      v11 += 16LL;
      LODWORD(v32) = v40;
      v47 = (_DWORD *)v11;
      a10 += 4LL * v40;
    }
    if ( (unsigned int)v32 > v16 )
      v16 = v32;
    v14 = v32 + v42;
    v17 = v41;
LABEL_37:
    LODWORD(v29) = v43;
    v12 = a1;
    LODWORD(v15) = a2;
    v42 = v14;
    LODWORD(v44) = v16;
    goto LABEL_47;
  }
  v12 = a1;
  v30 = v52;
LABEL_50:
  LODWORD(v39) = v19;
  WPP_RECORDER_SF_Sd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v32,
    v31,
    0xFu,
    (__int64)&WPP_fd5514c76d4730a223eb6514052d63dc_Traceguids,
    *(const wchar_t **)&v12[2 * v30 + 4],
    v39);
  return 3221225473LL;
}
