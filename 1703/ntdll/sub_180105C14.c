/*
 * XREFs of sub_180105C14 @ 0x180105C14
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1801057D0 @ 0x1801057D0 (sub_1801057D0.c)
 *     sub_180105950 @ 0x180105950 (sub_180105950.c)
 */

__int64 __fastcall sub_180105C14(__int64 a1, _DWORD *a2)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = sub_1801057D0((const void **)a1);
    if ( v2 == 1 )
    {
      if ( **(_DWORD **)a1 != -1073741571 )
      {
        sub_180105950();
        __debugbreak();
      }
      RtlReportException(*(_QWORD *)a1, *(_QWORD *)(a1 + 8), 3u);
    }
  }
  return v2;
}
