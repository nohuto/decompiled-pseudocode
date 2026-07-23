/*
 * XREFs of sub_180108A18 @ 0x180108A18
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 * Callees:
 *     RtlReportException @ 0x1800D6920 (RtlReportException.c)
 *     sub_1801085E0 @ 0x1801085E0 (sub_1801085E0.c)
 *     sub_180108760 @ 0x180108760 (sub_180108760.c)
 */

__int64 __fastcall sub_180108A18(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG v5; // eax
  unsigned __int32 v6; // ebx
  EXCEPTION_RECORD *ExceptionRecord; // rcx

  v5 = sub_1801085E0(a1);
  v6 = v5;
  if ( !v5 )
    *a3 = 1;
  if ( v5 == 1 )
  {
    ExceptionRecord = a1->ExceptionRecord;
    if ( a1->ExceptionRecord->ExceptionCode == -1073741571 )
    {
      RtlReportException(ExceptionRecord, a1->ContextRecord, 3u);
    }
    else
    {
      if ( (int)ExceptionRecord->ExceptionCode <= -1073740022
        || (int)ExceptionRecord->ExceptionCode > -1073740018 && ExceptionRecord->ExceptionCode != -1073740016 )
      {
        sub_180108760((NTSTATUS **)a1);
        __debugbreak();
      }
      return (unsigned __int32)-1;
    }
  }
  return v6;
}
