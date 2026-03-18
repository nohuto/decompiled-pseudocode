/*
 * XREFs of WPP_RECORDER_SF_sd @ 0x1C012E4B8
 * Callers:
 *     ?InitializeInputSensors@@YAJXZ @ 0x1C012E15C (-InitializeInputSensors@@YAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_sd(_DWORD a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, const char *a6, ...)
{
  __int64 v6; // rbp
  __int64 v7; // rbx
  const char *v8; // rdi
  __int64 v10; // rdx
  __int64 v11; // rdx
  const char *v12; // rcx
  __int64 v13; // rbx
  int v15; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, a6);
  v6 = gBaseLog;
  v7 = -1LL;
  v8 = a6;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a6 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( a6[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = a6;
    if ( !a6 )
      v12 = "NULL";
    ((void (__fastcall *)(struct _DEVICE_OBJECT *, __int64, void *, _QWORD, const char *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids,
      a4,
      v12,
      v11,
      va,
      4LL,
      0LL);
  }
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v13 = v7 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !a6 )
    v8 = "NULL";
  LOWORD(v15) = a4;
  return WppAutoLogTrace(v6, 2LL, 2LL, &WPP_d4fd6595d53e3e8daa2bb4a528c81212_Traceguids, v15, v8, v13, va);
}
