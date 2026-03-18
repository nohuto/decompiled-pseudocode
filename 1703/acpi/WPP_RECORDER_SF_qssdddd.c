/*
 * XREFs of WPP_RECORDER_SF_qssdddd @ 0x1C0058928
 * Callers:
 *     ACPIThermalRereadTemperature @ 0x1C00584BC (ACPIThermalRereadTemperature.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_qssdddd(__int64 a1, _DWORD a2, _DWORD a3, _DWORD a4, __int64 a5, ...)
{
  const char *v5; // rdi
  __int64 v6; // rbx
  const char *v7; // rsi
  __int64 v9; // r8
  __int64 v10; // rcx
  const char *v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+20h] [rbp-98h]
  __int64 v17; // [rsp+E8h] [rbp+30h] BYREF
  va_list va; // [rsp+E8h] [rbp+30h]
  const char *v19; // [rsp+F0h] [rbp+38h]
  const char *v20; // [rsp+F8h] [rbp+40h]
  __int64 v21; // [rsp+100h] [rbp+48h] BYREF
  va_list va1; // [rsp+100h] [rbp+48h]
  __int64 v23; // [rsp+108h] [rbp+50h] BYREF
  va_list va2; // [rsp+108h] [rbp+50h]
  va_list va3; // [rsp+110h] [rbp+58h] BYREF

  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  v19 = va_arg(va1, const char *);
  v20 = va_arg(va1, const char *);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v5 = v20;
  v6 = -1LL;
  v7 = v19;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v20 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v20[v9] );
    }
    if ( v19 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v19[v10] );
    }
    v11 = v19;
    if ( !v19 )
      v11 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_e8a71974e51b30e49c3e0986e671468e_Traceguids,
      18LL,
      (__int64 *)va,
      8LL,
      v11);
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
  if ( v7 )
  {
    do
      ++v6;
    while ( v7[v6] );
    v14 = v6 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  LOWORD(v16) = 18;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_e8a71974e51b30e49c3e0986e671468e_Traceguids,
           v16,
           (__int64 *)va,
           8LL,
           v7,
           v14,
           v5,
           v13,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           va3);
}
