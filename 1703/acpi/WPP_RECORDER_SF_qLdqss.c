/*
 * XREFs of WPP_RECORDER_SF_qLdqss @ 0x1C000E05C
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase1 @ 0x1C000A270 (ACPIDevicePowerProcessPhase1DeviceSubPhase1.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase3 @ 0x1C0020B40 (ACPIDevicePowerProcessPhase1DeviceSubPhase3.c)
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase2 @ 0x1C002A120 (ACPIDevicePowerProcessPhase1DeviceSubPhase2.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  const char *v13; // rsi
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  const char *v24; // rax
  int v25; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = -1LL;
  v13 = a10;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a11 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a11[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a11;
    if ( !a11 )
      v21 = "NULL";
    if ( a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a10[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a10;
    if ( !a10 )
      v24 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
      a4,
      &a6,
      8LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v24,
      v23,
      v21,
      v20,
      0LL);
  }
  if ( v11 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( v11[v16] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    do
      ++v12;
    while ( v13[v12] );
    v17 = v12 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
           v25,
           &a6,
           8LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v13,
           v17,
           v11);
}
