/*
 * XREFs of ReduceArrangedRectangleByFrameMargin @ 0x1C01AB288
 * Callers:
 *     ?PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z @ 0x1C01D8AAC (-PreserveShellArrangementDuringTopBottomSize@@YAHPEBU_MOVESIZEDATA@@@Z.c)
 *     MigrateRectMonitors @ 0x1C01DCF04 (MigrateRectMonitors.c)
 * Callees:
 *     GetWindowExtendedMargin @ 0x1C00CA8F0 (GetWindowExtendedMargin.c)
 */

__int64 __fastcall ReduceArrangedRectangleByFrameMargin(__int64 a1, _DWORD *a2, int *a3)
{
  __int64 result; // rax
  char v7; // r8
  int v8; // edx
  int v9; // ecx
  int v10; // ecx
  unsigned __int16 v11; // [rsp+48h] [rbp+20h] BYREF
  unsigned __int16 v12; // [rsp+4Ah] [rbp+22h]
  unsigned __int16 v13; // [rsp+4Eh] [rbp+26h]

  result = GetWindowExtendedMargin(a1, (__int64)&v11);
  if ( (_DWORD)result )
  {
    v7 = *(_BYTE *)(a1 + 305);
    if ( (v7 & 1) != 0 && (v8 = *a3 + v11, v8 == *a2) )
    {
      *a3 = v8;
    }
    else
    {
      if ( (v7 & 2) == 0 )
        return result;
      result = v12;
      v9 = a3[2] - v12;
      if ( v9 != a2[2] )
        return result;
      a3[2] = v9;
    }
    if ( (*(_BYTE *)(a1 + 305) & 1) != 0 )
      a3[2] -= v12;
    else
      *a3 += v11;
    result = v13;
    v10 = a3[3] - v13;
    if ( v10 == a2[3] )
      a3[3] = v10;
  }
  return result;
}
