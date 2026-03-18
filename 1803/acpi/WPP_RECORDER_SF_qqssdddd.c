/*
 * XREFs of WPP_RECORDER_SF_qqssdddd @ 0x1C003EF3C
 * Callers:
 *     ACPIThermalCancelRequest @ 0x1C003BDE0 (ACPIThermalCancelRequest.c)
 *     ACPIThermalCompletePendingIrps @ 0x1C003BF8C (ACPIThermalCompletePendingIrps.c)
 *     ACPIThermalDeviceControl @ 0x1C003C2C0 (ACPIThermalDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qqssdddd(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rdi
  const char *v6; // rsi
  __int64 v7; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+28h] [rbp-89h]
  __int64 v17; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va; // [rsp+100h] [rbp+4Fh]
  __int64 v19; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  const char *v21; // [rsp+110h] [rbp+5Fh]
  const char *v22; // [rsp+118h] [rbp+67h]
  __int64 v23; // [rsp+120h] [rbp+6Fh] BYREF
  va_list va2; // [rsp+120h] [rbp+6Fh]
  va_list va3; // [rsp+128h] [rbp+77h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v21 = va_arg(va2, const char *);
  v22 = va_arg(va2, const char *);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v5 = v22;
  v6 = v21;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v22 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v22[v10] );
    }
    if ( v21 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v21[v11] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_1b1165dd198a34919fb1e2a61779dbfc_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1);
  }
  if ( v5 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v5[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  if ( v6 )
  {
    do
      ++v7;
    while ( v6[v7] );
    v14 = v7 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v6 )
    v6 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_1b1165dd198a34919fb1e2a61779dbfc_Traceguids,
           v16,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v6,
           v14,
           v5,
           v13,
           (__int64 *)va2,
           4LL,
           va3);
}
