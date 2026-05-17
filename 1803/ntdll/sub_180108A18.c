/*
 * XREFs of sub_180108A18 @ 0x180108A18
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     sub_1801085E0 @ 0x1801085E0 (sub_1801085E0.c)
 *     sub_180108760 @ 0x180108760 (sub_180108760.c)
 */

__int64 __fastcall sub_180108A18(__int64 *a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int *v7; // rcx

  v5 = sub_1801085E0(a1);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    v7 = (int *)*a1;
    if ( *(_DWORD *)*a1 == -1073741571 )
    {
      RtlReportException((__int64)v7, a1[1], 3u);
    }
    else
    {
      if ( *v7 <= -1073740022 || *v7 > -1073740018 && *v7 != -1073740016 )
      {
        sub_180108760();
        __debugbreak();
      }
      return (unsigned int)-1;
    }
  }
  return v6;
}
