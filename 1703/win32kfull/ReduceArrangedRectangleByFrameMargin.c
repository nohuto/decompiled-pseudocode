/*
 * XREFs of ReduceArrangedRectangleByFrameMargin @ 0x1C01A3E74
 * Callers:
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01F0D04 (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     MigrateRectMonitors @ 0x1C01F5BCC (MigrateRectMonitors.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00FC110 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall ReduceArrangedRectangleByFrameMargin(__int64 a1, _DWORD *a2, int *a3)
{
  __int64 result; // rax
  char v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // [rsp+48h] [rbp+20h] BYREF

  result = GetWindowExtendedMargin(a1, &v11);
  if ( (_DWORD)result )
  {
    v7 = *(_BYTE *)(a1 + 305);
    if ( (v7 & 1) != 0 && (v8 = *a3 + (unsigned __int16)v11, v8 == *a2) )
    {
      *a3 = v8;
    }
    else
    {
      if ( (v7 & 2) == 0 )
        return result;
      result = WORD1(v11);
      v9 = a3[2] - WORD1(v11);
      if ( v9 != a2[2] )
        return result;
      a3[2] = v9;
    }
    if ( (*(_BYTE *)(a1 + 305) & 1) != 0 )
      a3[2] -= WORD1(v11);
    else
      *a3 += (unsigned __int16)v11;
    result = HIWORD(v11);
    v10 = a3[3] - HIWORD(v11);
    if ( v10 == a2[3] )
      a3[3] = v10;
  }
  return result;
}
