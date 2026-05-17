/*
 * XREFs of sub_180105B94 @ 0x180105B94
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1801057D0 @ 0x1801057D0 (sub_1801057D0.c)
 *     sub_180105950 @ 0x180105950 (sub_180105950.c)
 */

__int64 __fastcall sub_180105B94(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int *v7; // rcx

  v5 = sub_1801057D0((const void **)a1);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    v7 = *(int **)a1;
    if ( **(_DWORD **)a1 == -1073741571 )
    {
      RtlReportException((__int64)v7, *(_QWORD *)(a1 + 8), 3u);
    }
    else
    {
      if ( *v7 <= -1073740022 || *v7 > -1073740018 && *v7 != -1073740016 )
      {
        sub_180105950();
        __debugbreak();
      }
      return (unsigned int)-1;
    }
  }
  return v6;
}
