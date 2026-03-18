/*
 * XREFs of WPP_RECORDER_SF_dqssdddd @ 0x1C0024978
 * Callers:
 *     ACPIThermalEvent @ 0x1C0058D00 (ACPIThermalEvent.c)
 *     ACPIThermalWorker @ 0x1C0092A10 (ACPIThermalWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_dqssdddd(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 a4, int a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  const char *v7; // rsi
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // [rsp+28h] [rbp-89h]
  __int64 v17; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va; // [rsp+100h] [rbp+4Fh]
  __int64 v19; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  const char *v21; // [rsp+110h] [rbp+5Fh]
  const char *v22; // [rsp+118h] [rbp+67h]
  va_list va2; // [rsp+120h] [rbp+6Fh] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v21 = va_arg(va2, const char *);
  v22 = va_arg(va2, const char *);
  v5 = v22;
  v6 = -1LL;
  v7 = v21;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v22 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v22[v14] );
    }
    if ( v21 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( v21[v15] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d1d96fc3929a3241f74feef30092b158_Traceguids,
      a4,
      (__int64 *)va,
      4LL,
      (__int64 *)va1);
  }
  if ( v5 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v5[v10] );
    v11 = v10 + 1;
  }
  else
  {
    v11 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v12 = v6 + 1;
  }
  else
  {
    v12 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_d1d96fc3929a3241f74feef30092b158_Traceguids,
           v16,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           8LL,
           v7,
           v12,
           v5,
           v11,
           va2);
}
