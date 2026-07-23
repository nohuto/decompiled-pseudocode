/*
 * XREFs of sub_180105B94 @ 0x180105B94
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 * Callees:
 *     RtlReportException @ 0x1800DD400 (RtlReportException.c)
 *     sub_1801057D0 @ 0x1801057D0 (sub_1801057D0.c)
 *     sub_180105950 @ 0x180105950 (sub_180105950.c)
 */

__int64 __fastcall sub_180105B94(_EXCEPTION_POINTERS *a1, __int64 a2, _DWORD *a3)
{
  LONG v5; // eax
  unsigned __int32 v6; // ebx
  EXCEPTION_RECORD *ExceptionRecord; // rcx

  v5 = sub_1801057D0(a1);
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
        sub_180105950((NTSTATUS **)a1);
        __debugbreak();
      }
      return (unsigned __int32)-1;
    }
  }
  return v6;
}
