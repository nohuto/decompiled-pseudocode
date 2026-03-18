/*
 * XREFs of ?ConvertDisplayConfigToPathModality@@YAJIPEAUDISPLAYCONFIG_PATH_INFO@@IPEAUDISPLAYCONFIG_MODE_INFO@@IPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F47D8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0056E00 (DrvSetDisplayConfig.c)
 *     DrvFunctionalizeDisplayConfig @ 0x1C00F9EA4 (DrvFunctionalizeDisplayConfig.c)
 * Callees:
 *     ??8@YA_NAEBU_LUID@@0@Z @ 0x1C0068A68 (--8@YA_NAEBU_LUID@@0@Z.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F41A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 */

__int64 __fastcall ConvertDisplayConfigToPathModality(
        __int64 a1,
        struct DISPLAYCONFIG_PATH_INFO *a2,
        __int64 a3,
        struct DISPLAYCONFIG_MODE_INFO *a4,
        __int16 a5,
        struct _D3DKMT_GETPATHSMODALITY *a6,
        int *a7)
{
  unsigned int v9; // r13d
  unsigned int v10; // r14d
  unsigned int v11; // esi
  unsigned int i; // ebp
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned int v15; // r8d
  __int64 v16; // r11
  unsigned int v17; // r10d
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // rax

  v9 = a3;
  v10 = a1;
  v11 = 0;
  for ( i = 0; i < v10; a2 = (struct DISPLAYCONFIG_PATH_INFO *)((char *)a2 + 72) )
  {
    if ( (*((_DWORD *)a2 + 17) & 1) != 0 )
    {
      if ( v11 >= *((unsigned __int16 *)a6 + 11) )
      {
        v20 = WdLogNewEntry5_WdError(a1, 0LL, a3);
        *(_QWORD *)(v20 + 24) = *((unsigned __int16 *)a6 + 11);
        WdLogEvent5_WdError(v20);
        return 3221225507LL;
      }
      result = ConvertDisplayConfigPathIntoExistingPathModalityAtIdx(a2, v11, i, v9, a4, a5, 1, a6, a7);
      if ( (int)result < 0 )
        return result;
      ++v11;
    }
    ++i;
  }
  LOWORD(v14) = *((_WORD *)a6 + 10);
  v15 = 0;
  if ( (_WORD)v14 )
  {
    while ( 1 )
    {
      v16 = 264LL * v15;
      if ( (*(_QWORD *)((_BYTE *)a6 + v16 + 48) & 0x4000000000000LL) == 0 )
      {
        v17 = v15;
        if ( v15 < (unsigned __int16)v14 )
          break;
      }
LABEL_20:
      v14 = *((unsigned __int16 *)a6 + 10);
      if ( ++v15 >= v14 )
        return 0LL;
    }
    while ( 1 )
    {
      v18 = 264LL * v17;
      v19 = *(_QWORD *)((char *)a6 + v18 + 48);
      if ( (v19 & 0x4000000000000LL) == 0 )
      {
        if ( a5 < 0 )
        {
          if ( *(_DWORD *)((char *)a6 + v16 + 192) != *(_DWORD *)((char *)a6 + v18 + 192)
            || *(_DWORD *)((char *)a6 + v16 + 196) != *(_DWORD *)((char *)a6 + v18 + 196) )
          {
            goto LABEL_19;
          }
        }
        else if ( *(_DWORD *)((char *)a6 + v16 + 72) != *(_DWORD *)((char *)a6 + v18 + 72)
               || !operator==(
                     (struct _D3DKMT_GETPATHSMODALITY *)((char *)a6 + v16 + 64),
                     (struct _D3DKMT_GETPATHSMODALITY *)((char *)a6 + v18 + 64)) )
        {
          goto LABEL_19;
        }
        *(_DWORD *)((char *)a6 + v18 + 280) = v15 | 0xFE510000;
        *(_QWORD *)((char *)a6 + v18 + 48) = v19 | 0x4000000000000LL;
      }
LABEL_19:
      if ( ++v17 >= *((unsigned __int16 *)a6 + 10) )
        goto LABEL_20;
    }
  }
  return 0LL;
}
