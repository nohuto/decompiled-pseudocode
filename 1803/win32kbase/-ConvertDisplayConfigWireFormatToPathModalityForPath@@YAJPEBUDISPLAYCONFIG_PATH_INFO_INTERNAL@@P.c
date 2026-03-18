/*
 * XREFs of ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00CC2C4
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@@II_N1PEAUD3DKMT_GETPATHSMODALITY@@PEA_N@Z @ 0x1C00CBD64 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEBUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigWireFormatToPathModalityForPath(
        const struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  __int64 v2; // r8
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // ecx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rcx
  unsigned int v12; // ecx
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  int v16; // eax

  v2 = 8LL;
  if ( (*(_BYTE *)a1 & 8) == 0 )
    return 0LL;
  v4 = *((_DWORD *)a1 + 45);
  switch ( v4 )
  {
    case 6:
      v2 = 1LL;
      break;
    case 8:
      v2 = 2LL;
      break;
    case 10:
      v2 = 4LL;
      break;
    default:
      if ( v4 != 12 )
      {
        v2 = 16LL;
        if ( v4 != 14 )
        {
          if ( v4 != 16 )
          {
            v5 = WdLogNewEntry5_WdError(a1, a2, 16LL);
            v6 = *((unsigned int *)a1 + 45);
LABEL_9:
            *(_QWORD *)(v5 + 24) = v6;
            WdLogEvent5_WdError(v5);
            return 3221225485LL;
          }
          v2 = 32LL;
        }
      }
      break;
  }
  v8 = *((_DWORD *)a1 + 44);
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v12 = *((_DWORD *)a2 + 51) & 0xFFFFC0FF;
      v2 = (unsigned int)((_DWORD)v2 << 8);
LABEL_24:
      v15 = (unsigned int)v2 | v12;
      goto LABEL_27;
    }
    v10 = v9 - 1;
    if ( v10 )
    {
      v11 = (unsigned int)(v10 - 1);
      if ( (_DWORD)v11 )
      {
        if ( (_DWORD)v11 != 1 )
        {
          v5 = WdLogNewEntry5_WdError(v11, a2, v2);
          v6 = *((int *)a1 + 44);
          goto LABEL_9;
        }
        v12 = *((_DWORD *)a2 + 51) & 0x3FFFFFF;
        v2 = (unsigned int)((_DWORD)v2 << 26);
      }
      else
      {
        v12 = *((_DWORD *)a2 + 51) & 0xFC0FFFFF;
        v2 = (unsigned int)((_DWORD)v2 << 20);
      }
      goto LABEL_24;
    }
    v13 = (_DWORD)v2 << 14;
    v14 = *((_DWORD *)a2 + 51) & 0xFFF03FFF;
  }
  else
  {
    v13 = *((_DWORD *)a2 + 51) & 0xFFFFFF03;
    v14 = 4 * v2;
  }
  v15 = v14 | v13;
LABEL_27:
  *((_DWORD *)a2 + 51) = v15;
  v16 = *((_DWORD *)a1 + 46);
  if ( v16 && v16 != 12 && (v16 <= 29 || v16 > 32) )
  {
    v5 = WdLogNewEntry5_WdError(v15, a2, v2);
    v6 = *((unsigned int *)a1 + 46);
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 52) = v16;
  return 0LL;
}
