/*
 * XREFs of ??$MapSectionHandleToMemory@UControlData@CSpatialCrossProcessBaseEndpoint@@@@YAJAEAPEAUControlData@CSpatialCrossProcessBaseEndpoint@@PEAXI@Z @ 0x14005AF7C
 * Callers:
 *     ?InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEAPEAX@Z @ 0x14005C458 (-InitializeCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAU_SECURITY_ATTRIBUTES@@PEBGIIIIPEA.c)
 *     ?MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z @ 0x14005C820 (-MapCPMemory@CSpatialCrossProcessBaseEndpoint@@IEAAJPEAX@Z.c)
 * Callees:
 *     ?AERTLockMemory@@YAJPEAX_K@Z @ 0x140046094 (-AERTLockMemory@@YAJPEAX_K@Z.c)
 *     ?SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z @ 0x14005ACB0 (-SpatialCPTraceLoggingWarningHelper@@YAXPEBDI0J@Z.c)
 */

signed int __fastcall MapSectionHandleToMemory<CSpatialCrossProcessBaseEndpoint::ControlData>(
        _QWORD *a1,
        void *a2,
        unsigned int a3)
{
  SIZE_T v3; // rdi
  void *v5; // rax
  signed int result; // eax
  __int64 v7; // rdx
  const char *v8; // rcx
  const char *v9; // r8

  v3 = a3;
  v5 = MapViewOfFile(a2, 0xF001Fu, 0, 0, a3);
  *a1 = v5;
  if ( v5 )
  {
    result = AERTLockMemory(v5, v3);
    if ( result < 0 )
    {
      SpatialCPTraceLoggingWarningHelper(v8, v7, v9, result);
      return 0;
    }
  }
  else
  {
    result = GetLastError();
    if ( result > 0 )
      return (unsigned __int16)result | 0x80070000;
  }
  return result;
}
