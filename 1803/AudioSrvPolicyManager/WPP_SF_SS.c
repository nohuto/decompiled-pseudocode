/*
 * XREFs of WPP_SF_Ss @ 0x18001A044
 * Callers:
 *     ?OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z @ 0x18001F2B0 (-OnApplicationStateChanged@CApplicationManager@@QEAAJPEAUApplicationStateChangedContext@@@Z.c)
 * Callees:
 *     <none>
 */

ULONG __fastcall WPP_SF_Ss(TRACEHANDLE LoggerHandle, __int64 a2, __int64 a3, const wchar_t *a4, const char *a5)
{
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 v9; // rcx
  const char *v10; // rdx
  const wchar_t *v11; // rax

  v6 = -1LL;
  if ( a5 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( a5[v7] );
    v8 = v7 + 1;
  }
  else
  {
    v8 = 5LL;
  }
  if ( a4 )
  {
    do
      ++v6;
    while ( a4[v6] );
    v9 = v6 + 1;
  }
  else
  {
    v9 = 5LL;
  }
  v10 = "NULL";
  if ( a5 )
    v10 = a5;
  v11 = L"NULL";
  if ( a4 )
    v11 = a4;
  return TraceMessage(
           LoggerHandle,
           0x2Bu,
           &WPP_864cab9c06643a40d396dbf4a6ced3de_Traceguids,
           0x3Cu,
           v11,
           2 * v9,
           v10,
           v8,
           0LL);
}
