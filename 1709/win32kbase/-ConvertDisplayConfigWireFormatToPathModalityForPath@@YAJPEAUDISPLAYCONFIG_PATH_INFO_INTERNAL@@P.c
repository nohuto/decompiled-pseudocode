/*
 * XREFs of ?ConvertDisplayConfigWireFormatToPathModalityForPath@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@PEAUD3DKMT_PATHMODALITY_DESCRIPTOR@@@Z @ 0x1C00F58B4
 * Callers:
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@@IIHPEAUD3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00F53A0 (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO_INTERNAL@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertDisplayConfigWireFormatToPathModalityForPath(
        struct DISPLAYCONFIG_PATH_INFO_INTERNAL *a1,
        struct D3DKMT_PATHMODALITY_DESCRIPTOR *a2)
{
  __int64 v2; // r8
  int v4; // eax
  __int64 v5; // rax
  __int64 v6; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // eax

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
    v9 = (unsigned int)(v8 - 1);
    if ( (_DWORD)v9 )
    {
      v9 = (unsigned int)(v9 - 1);
      if ( !(_DWORD)v9 )
      {
        v2 = *((_DWORD *)a2 + 51) & 0xFFF03FFF | ((_DWORD)v2 << 14);
        *((_DWORD *)a2 + 51) = v2;
        goto LABEL_26;
      }
      v9 = (unsigned int)(v9 - 1);
      if ( (_DWORD)v9 )
      {
        if ( (_DWORD)v9 != 1 )
        {
          v5 = WdLogNewEntry5_WdError(v9, a2, v2);
          v6 = *((int *)a1 + 44);
          goto LABEL_9;
        }
        v10 = *((_DWORD *)a2 + 51) & 0x3FFFFFF;
        v2 = (unsigned int)((_DWORD)v2 << 26);
      }
      else
      {
        v10 = *((_DWORD *)a2 + 51) & 0xFC0FFFFF;
        v2 = (unsigned int)((_DWORD)v2 << 20);
      }
    }
    else
    {
      v10 = *((_DWORD *)a2 + 51) & 0xFFFFC0FF;
      v2 = (unsigned int)((_DWORD)v2 << 8);
    }
    *((_DWORD *)a2 + 51) = v2 | v10;
  }
  else
  {
    v9 = (4 * (_DWORD)v2) | *((_DWORD *)a2 + 51) & 0xFFFFFF03;
    *((_DWORD *)a2 + 51) = v9;
  }
LABEL_26:
  v11 = *((_DWORD *)a1 + 46);
  if ( v11 && v11 != 12 && (v11 <= 29 || v11 > 31) )
  {
    v5 = WdLogNewEntry5_WdError(v9, a2, v2);
    v6 = *((unsigned int *)a1 + 46);
    goto LABEL_9;
  }
  *((_DWORD *)a2 + 52) = v11;
  return 0LL;
}
