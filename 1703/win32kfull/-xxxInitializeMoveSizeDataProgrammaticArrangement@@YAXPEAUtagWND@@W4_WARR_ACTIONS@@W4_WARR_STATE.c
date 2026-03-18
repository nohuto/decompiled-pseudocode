/*
 * XREFs of ?xxxInitializeMoveSizeDataProgrammaticArrangement@@YAXPEAUtagWND@@W4_WARR_ACTIONS@@W4_WARR_STATES@@W4_WINDOW_ARRANGEMENT_SCENARIO@@PEAU_MOVESIZEDATA@@PEAJ@Z @ 0x1C01F31C8
 * Callers:
 *     xxxArrangeWindow @ 0x1C01F62C4 (xxxArrangeWindow.c)
 *     xxxEndSetWindowArrangement @ 0x1C01F6D98 (xxxEndSetWindowArrangement.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0055C44 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     _GetProp @ 0x1C00624E0 (_GetProp.c)
 *     xxxInitializeMoveSizeData @ 0x1C01F76A4 (xxxInitializeMoveSizeData.c)
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
  int v7; // r10d
  unsigned int v11; // eax
  __int128 v12; // xmm0
  unsigned __int16 v13; // r8
  int v14; // eax
  unsigned int v15; // ecx
  __int64 v16; // r9
  __int64 result; // rax
  int v18; // ecx
  unsigned int v19; // [rsp+78h] [rbp+10h]

  v6 = 0;
  v7 = a4;
  v11 = *(_DWORD *)(a5 + 180) & 0xFFFF7FFF;
  *(_QWORD *)a5 = a1;
  *(_DWORD *)(a5 + 180) = v11 | 0x30000;
  if ( a3 == 5 )
    v12 = *(_OWORD *)GetProp(a1, atomCheckpointProp, 1);
  else
    v12 = *(_OWORD *)(a1 + 128);
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
    v15 = 3;
    v13 = WORD2(v12) + 2;
  }
  else if ( (unsigned int)(a2 - 4) > 3 )
  {
    v13 = v19;
    v15 = v19;
  }
  else
  {
    if ( !a3 || a3 == 3 )
    {
      if ( (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 0 )
        v14 = *(_DWORD *)(gpsi + 1896LL);
      else
        v14 = *(_DWORD *)(gpsi + 2284LL);
      v13 = WORD2(v12) + v14 - 1;
    }
    else
    {
      v13 = WORD2(v12) + 2;
    }
    v15 = 9;
  }
  v16 = (unsigned __int16)(v12 + (DWORD2(v12) - (int)v12) / 2) | (v13 << 16);
  *a6 = v16;
  result = xxxInitializeMoveSizeData(a1, a5, v15, v16, v6);
  if ( a2 == 3 )
  {
    *(_DWORD *)(a5 + 180) |= 0x400u;
  }
  else if ( a2 > 3 )
  {
    if ( a2 <= 5 )
    {
      result = (unsigned __int8)(*(_BYTE *)(a5 + 180) ^ ((*(_DWORD *)(a5 + 180) | 0x800u) >> 5)) & 0x80;
      v18 = result ^ (*(_DWORD *)(a5 + 180) | 0x800);
      *(_DWORD *)(a5 + 180) = v18;
      if ( (v18 & 0x200000) != 0 && a3 == 4 )
        *(_DWORD *)(a5 + 224) = 4;
      if ( (v6 & 4) != 0 )
      {
        *(_DWORD *)(a5 + 152) = 0;
        *(_DWORD *)(a5 + 156) = 0;
      }
    }
    else if ( a2 <= 7 )
    {
      result = (*(_DWORD *)(a5 + 180) | 0xC00) ^ (*(_BYTE *)(a5 + 180) ^ (unsigned __int8)((*(_DWORD *)(a5 + 180) | 0xC00u) >> 5)) & 0x80u;
      *(_DWORD *)(a5 + 180) = result;
    }
  }
  return result;
}
