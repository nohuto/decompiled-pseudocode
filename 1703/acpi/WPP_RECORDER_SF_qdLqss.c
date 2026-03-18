/*
 * XREFs of WPP_RECORDER_SF_qdLqss @ 0x1C0046DA8
 * Callers:
 *     ACPIBusIrpQueryHardwareId @ 0x1C0083A7C (ACPIBusIrpQueryHardwareId.c)
 *     ACPIBusIrpQueryCompatibleId @ 0x1C0092148 (ACPIBusIrpQueryCompatibleId.c)
 *     ACPIBusIrpQueryDeviceId @ 0x1C0092480 (ACPIBusIrpQueryDeviceId.c)
 *     ACPIBusIrpQueryInstanceId @ 0x1C00935DC (ACPIBusIrpQueryInstanceId.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qdLqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        int a6,
        int a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rbx
  const char *v12; // rdi
  const char *v14; // rsi
  __int64 v16; // rdx
  __int64 v17; // rdx
  const char *v18; // r8
  __int64 v19; // rcx
  __int64 v20; // rcx
  const char *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rbx
  int v25; // [rsp+20h] [rbp-98h]
  int v26; // [rsp+90h] [rbp-28h] BYREF
  __int64 v27; // [rsp+98h] [rbp-20h] BYREF

  v27 = 0LL;
  v11 = -1LL;
  v12 = a11;
  v14 = a10;
  v26 = 2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a11[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a11;
    if ( !a11 )
      v18 = "NULL";
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = a10;
    if ( !a10 )
      v21 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, __int64 *, __int64, int *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
      a4,
      &v27,
      8LL,
      &v26,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v21,
      v20,
      v18,
      v17,
      0LL);
  }
  if ( v12 )
  {
    v22 = -1LL;
    do
      ++v22;
    while ( v12[v22] );
  }
  if ( !v12 )
    v12 = "NULL";
  if ( v14 )
  {
    do
      ++v11;
    while ( v14[v11] );
    v23 = v11 + 1;
  }
  else
  {
    v23 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(
           a1,
           2LL,
           5LL,
           &WPP_d090b5073bab31288d0accdb237e434e_Traceguids,
           v25,
           &v27,
           8LL,
           &v26,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v14,
           v23,
           v12);
}
