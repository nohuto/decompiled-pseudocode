/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01DAB38
 * Callers:
 *     xxxArrangeWindow @ 0x1C01DD468 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01DDFF4 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     _GetProp @ 0x1C0076208 (_GetProp.c)
 *     GetDpiDependentMetric @ 0x1C00774BC (GetDpiDependentMetric.c)
 *     GetDpiForSystem @ 0x1C0077ED4 (GetDpiForSystem.c)
 *     xxxInitializeMoveSizeData @ 0x1C01DE8F8 (xxxInitializeMoveSizeData.c)
 */

__int64 __fastcall xxxInitializeMoveSizeDataProgrammaticArrangement(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _DWORD *a6)
{
  int v6; // ebp
  int v7; // r11d
  unsigned int v11; // eax
  __int128 v12; // xmm0
  __int64 v13; // rdx
  unsigned __int16 v14; // r8
  unsigned int DpiForSystem; // eax
  unsigned int v16; // ecx
  __int64 v17; // r9
  __int64 result; // rax
  int v19; // ecx
  unsigned int v20; // [rsp+78h] [rbp+10h]

  v6 = 0;
  v7 = a4;
  v11 = *(_DWORD *)(a5 + 196) & 0xFFFF7FFF;
  *(_QWORD *)(a5 + 16) = a1;
  *(_DWORD *)(a5 + 196) = v11 | 0x30000;
  if ( a3 == 5 )
    v12 = *(_OWORD *)GetProp(a1, atomCheckpointProp, 1);
  else
    v12 = *(_OWORD *)(a1 + 128);
  v13 = (unsigned int)((DWORD2(v12) - (int)v12) >> 31);
  if ( v7 )
  {
    if ( v7 == 1 )
      v6 = 6;
  }
  else
  {
    v6 = 18;
  }
  if ( a2 == 3 )
  {
    v16 = 3;
    v14 = WORD2(v12) + 2;
  }
  else if ( (unsigned int)(a2 - 4) > 3 )
  {
    v14 = v20;
    v16 = v20;
  }
  else
  {
    if ( !a3 || a3 == 3 )
    {
      LODWORD(v13) = (DWORD2(v12) - (int)v12) % 2;
      DpiForSystem = GetDpiForSystem(a1, v13);
      v14 = WORD2(v12) + GetDpiDependentMetric(2LL, DpiForSystem) - 1;
    }
    else
    {
      v14 = WORD2(v12) + 2;
    }
    v16 = 9;
  }
  v17 = (unsigned __int16)(v12 + (DWORD2(v12) - (int)v12) / 2) | (v14 << 16);
  *a6 = v17;
  result = xxxInitializeMoveSizeData(a1, a5, v16, v17, v6);
  if ( a2 == 3 )
  {
    *(_DWORD *)(a5 + 196) |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (unsigned __int8)(*(_BYTE *)(a5 + 196) ^ ((*(_DWORD *)(a5 + 196) | 0x800u) >> 5)) & 0x80;
      v19 = result ^ (*(_DWORD *)(a5 + 196) | 0x800);
      *(_DWORD *)(a5 + 196) = v19;
      if ( (v19 & 0x200000) != 0 && a3 == 4 )
        *(_DWORD *)(a5 + 240) = 4;
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(a5 + 168) = 0;
        *(_DWORD *)(a5 + 172) = 0;
      }
    }
    else if ( a2 <= 7 )
    {
      result = (*(_DWORD *)(a5 + 196) | 0xC00) ^ (*(_BYTE *)(a5 + 196) ^ (unsigned __int8)((*(_DWORD *)(a5 + 196) | 0xC00u) >> 5)) & 0x80u;
      *(_DWORD *)(a5 + 196) = result;
    }
  }
  return result;
}
