/*
 * XREFs of ?DrvProcessSetDisplayConfigParameters@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IIPEAUtagDESKTOP@@PEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00F6F68
 * Callers:
 *     DrvProcessDxgkDisplayCallout @ 0x1C00FA1C4 (DrvProcessDxgkDisplayCallout.c)
 * Callees:
 *     DrvQueryDisplayConfig @ 0x1C000D270 (DrvQueryDisplayConfig.c)
 *     DrvGetDisplayConfigBufferSizes @ 0x1C000D3A0 (DrvGetDisplayConfigBufferSizes.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     xxxUserSetDisplayConfig @ 0x1C0062EA0 (xxxUserSetDisplayConfig.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 */

__int64 __fastcall DrvProcessSetDisplayConfigParameters(
        struct DISPLAYCONFIG_PATH_INFO *a1,
        __int64 a2,
        struct DISPLAYCONFIG_MODE_INFO *a3,
        unsigned int a4,
        enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *a5,
        struct tagDESKTOP *a6,
        unsigned __int8 *a7,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a8)
{
  __int64 v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  struct DISPLAYCONFIG_PATH_INFO *v12; // rbx
  __int64 v13; // r12
  __int64 result; // rax
  _QWORD *v15; // rax
  struct tagDESKTOP *v16; // rcx
  _QWORD *v17; // rax
  struct tagDESKTOP *v18; // rcx
  unsigned int v19; // esi
  unsigned int v20; // r15d
  int v21; // ecx
  unsigned int v22; // eax
  _DWORD *v23; // rax
  int v24; // esi
  unsigned int v25; // esi
  _DWORD *v26; // r9
  unsigned int v27; // esi
  unsigned int v28; // edx
  int v29; // r14d
  char *v30; // rax
  unsigned int v31; // r8d
  int v32; // r14d
  __int16 v33; // ax
  __int16 v34; // ax
  int v35; // eax
  int v36; // eax
  struct DISPLAYCONFIG_MODE_INFO *v37; // r9
  __int64 v38; // r8
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v39; // [rsp+28h] [rbp-71h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v40; // [rsp+28h] [rbp-71h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v41; // [rsp+30h] [rbp-69h]
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY *v42; // [rsp+30h] [rbp-69h]
  unsigned int v43; // [rsp+68h] [rbp-31h] BYREF
  int v44; // [rsp+6Ch] [rbp-2Dh] BYREF
  unsigned int v45; // [rsp+70h] [rbp-29h]
  int v46; // [rsp+74h] [rbp-25h]
  unsigned int v47; // [rsp+78h] [rbp-21h]
  int v48; // [rsp+7Ch] [rbp-1Dh] BYREF
  unsigned int v49; // [rsp+80h] [rbp-19h] BYREF
  unsigned int v50; // [rsp+84h] [rbp-15h]
  void *v51; // [rsp+88h] [rbp-11h]
  _DWORD *v52; // [rsp+90h] [rbp-9h]
  int v54; // [rsp+F0h] [rbp+57h]

  v54 = a2;
  v8 = (unsigned int)a5;
  v48 = -1;
  v9 = a4;
  v10 = (unsigned int)a2;
  v51 = 0LL;
  v12 = 0LL;
  v46 = (unsigned __int16)a5 & 0x8000;
  v13 = 0LL;
  if ( ((unsigned __int8)a5 & 0xF) != 0 )
  {
    if ( ((unsigned __int8)a5 & 0x30) == 0 )
    {
      LODWORD(v41) = 0;
      LODWORD(v39) = (_DWORD)a5;
      return xxxUserSetDisplayConfig(a2, a1, a4, a3, v39, v41, (__int64)a6, 0, 0LL, a7, (__int64)a8);
    }
    v15 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, a3);
    v16 = a6;
    v15[3] = v8;
    v15[4] = v16;
    goto LABEL_5;
  }
  if ( !a1 )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdAssertion(0LL, a2);
    v17[7] = a6;
    v17[3] = v10;
    v17[4] = a3;
    v17[5] = v9;
    v17[6] = v8;
    WdLogEvent5_WdAssertion(v17);
    return 3221225485LL;
  }
  if ( !a3 && a4 )
  {
    v15 = (_QWORD *)WdLogNewEntry5_WdError(a1, a2, 0LL);
    v18 = a6;
    v15[3] = v9;
    v15[4] = v8;
    v15[5] = v18;
LABEL_5:
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
  LODWORD(a5) = 0;
  v43 = 0;
  v19 = (v8 & 0x20F) != 0 ? 4 : 2;
  v50 = v19;
  result = DrvGetDisplayConfigBufferSizes(v19, (__int64)&a5, (__int64)&v43);
  if ( (int)result < 0 )
    return result;
  v20 = (unsigned int)a5;
  v47 = (unsigned int)a5;
  v21 = v10 + (_DWORD)a5;
  v45 = v43;
  v22 = v9 + v43;
  LODWORD(a5) = v21;
  v43 += v9;
  if ( v21 )
  {
    v12 = (struct DISPLAYCONFIG_PATH_INFO *)PALLOCMEM2((unsigned int)(72 * v21), 1936876615LL, 1);
    if ( !v12 )
      return 3221225495LL;
    v21 = (int)a5;
    v22 = v43;
  }
  if ( v22 )
  {
    v51 = PALLOCMEM2(v22 << 6, 1936876615LL, 1);
    v13 = (__int64)v51;
    if ( !v51 )
    {
      if ( v12 )
        Win32FreePool((__int64)v12);
      return 3221225495LL;
    }
    v21 = (int)a5;
    v22 = v43;
  }
  v49 = v22;
  v44 = v21;
  v23 = (_DWORD *)((unsigned __int64)&v48 & -(__int64)((v19 & 4) != 0));
  v52 = v23;
  while ( 1 )
  {
    v24 = DrvQueryDisplayConfig(v19, &v44, (__int64)v12, (__int64)&v49, v13, v23);
    if ( v24 < 0 )
      break;
    if ( v44 != v47 )
    {
      v24 = -1071774893;
      break;
    }
    v25 = 0;
    if ( (_DWORD)v10 )
    {
      while ( v25 < v20 )
      {
        v26 = (_DWORD *)((char *)v12 + 72 * v25);
        if ( *v26 == *(_DWORD *)a1 && *((_DWORD *)v12 + 18 * v25 + 1) == *((_DWORD *)a1 + 1) )
        {
          if ( v25 < (int)a5 - 1 )
            memmove((char *)v12 + 72 * v25, v26 + 18, 72LL * ((unsigned int)a5 - v25 - 1));
          --v20;
        }
        else
        {
          ++v25;
        }
      }
      memmove((char *)v12 + 72 * v20, a1, 72LL * (unsigned int)v10);
    }
    v27 = v45;
    if ( (_DWORD)v9 )
      memmove((void *)(v13 + ((unsigned __int64)v45 << 6)), a3, (unsigned __int64)(unsigned int)v9 << 6);
    if ( (v8 & 0x10) != 0 )
    {
      v28 = 0;
      if ( !(_DWORD)a5 )
        goto LABEL_60;
      v29 = v46;
      do
      {
        v30 = (char *)v12 + 72 * v28;
        if ( v29 )
          *((_DWORD *)v30 + 3) |= 0xFFFF0000;
        else
          *((_DWORD *)v30 + 3) = -1;
        *((_DWORD *)v30 + 8) = -1;
        *(_QWORD *)(v30 + 44) = 128LL;
        ++v28;
        *((_DWORD *)v30 + 10) = 1;
        *((_DWORD *)v30 + 14) = 1;
        *((_DWORD *)v30 + 13) = 0;
      }
      while ( v28 < (unsigned int)a5 );
    }
    else
    {
      v31 = v20;
      if ( v20 >= (unsigned int)a5 )
        goto LABEL_60;
      v32 = v46;
      do
      {
        if ( v32 )
        {
          v33 = *((_WORD *)v12 + 36 * v31 + 7);
          if ( v33 != -1 )
            *((_WORD *)v12 + 36 * v31 + 7) = v27 + v33;
          v34 = *((_WORD *)v12 + 36 * v31 + 17);
          if ( v34 != -1 )
            *((_WORD *)v12 + 36 * v31 + 17) = v27 + v34;
          if ( (unsigned __int16)*((_DWORD *)v12 + 18 * v31 + 8) != 0xFFFF )
            *((_WORD *)v12 + 36 * v31 + 16) += v27;
        }
        else
        {
          v35 = *((_DWORD *)v12 + 18 * v31 + 3);
          if ( v35 != -1 )
            *((_DWORD *)v12 + 18 * v31 + 3) = v27 + v35;
          v36 = *((_DWORD *)v12 + 18 * v31 + 8);
          if ( v36 != -1 )
            *((_DWORD *)v12 + 18 * v31 + 8) = v27 + v36;
        }
        ++v31;
      }
      while ( v31 < (unsigned int)a5 );
      v13 = (__int64)v51;
    }
    LODWORD(v9) = a4;
LABEL_60:
    v37 = (struct DISPLAYCONFIG_MODE_INFO *)v13;
    v38 = v43;
    if ( (v8 & 0x10) != 0 )
    {
      v37 = 0LL;
      v38 = 0LL;
    }
    LODWORD(v42) = 0;
    LODWORD(v40) = v8;
    v24 = xxxUserSetDisplayConfig(v54 + v20, v12, v38, v37, v40, v42, (__int64)a6, 0, 0LL, a7, (__int64)a8);
    if ( v24 != -1073741772 || (v8 & 0x10) == 0 )
      break;
    LODWORD(v10) = v54;
    v19 = v50;
    LODWORD(v8) = v8 & 0xFFFFEDCF | 0x1220;
    v23 = v52;
    v20 = v47;
  }
  if ( v12 )
    Win32FreePool((__int64)v12);
  if ( v13 )
    Win32FreePool(v13);
  return (unsigned int)v24;
}
