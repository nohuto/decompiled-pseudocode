/*
 * XREFs of TppWorkerpInnerExceptionFilter @ 0x18010B1B4
 * Callers:
 *     TppWorkerThread @ 0x18000CFC0 (TppWorkerThread.c)
 * Callees:
 *     RtlReportException @ 0x1800DC780 (RtlReportException.c)
 *     TppExceptionFilter @ 0x18010ADF0 (TppExceptionFilter.c)
 *     TppTerminateProcess @ 0x18010AF70 (TppTerminateProcess.c)
 */

__int64 __fastcall TppWorkerpInnerExceptionFilter(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int *v7; // rcx

  v5 = TppExceptionFilter((const void **)a1);
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
        TppTerminateProcess();
        __debugbreak();
      }
      return (unsigned int)-1;
    }
  }
  return v6;
}
