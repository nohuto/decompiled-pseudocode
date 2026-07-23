/*
 * XREFs of sub_180108A98 @ 0x180108A98
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     sub_1801085E0 @ 0x1801085E0 (sub_1801085E0.c)
 *     sub_180108760 @ 0x180108760 (sub_180108760.c)
 */

__int64 __fastcall sub_180108A98(_EXCEPTION_POINTERS *a1, _DWORD *a2)
{
  unsigned __int32 v2; // ebx

  v2 = 0;
  if ( *a2 )
  {
    *a2 = 0;
  }
  else
  {
    v2 = sub_1801085E0(a1);
    if ( v2 == 1 )
    {
      if ( a1->ExceptionRecord->ExceptionCode != -1073741571 )
      {
        sub_180108760((NTSTATUS **)a1);
        __debugbreak();
      }
      RtlReportException(a1->ExceptionRecord, a1->ContextRecord, 3u);
    }
  }
  return v2;
}
