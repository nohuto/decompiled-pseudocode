/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x1C0026C28
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00830B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0083230 (ACPIBusIrpQueryId.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0092BF0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C009B4B0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C009B8A0 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  const char *v11; // rdi
  __int64 v12; // rbx
  const char *v13; // rsi
  const char *v15; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v22; // r9
  __int64 v23; // r9
  const char *v24; // r11
  __int64 v25; // r8
  __int64 v26; // r8
  const char *v27; // r10
  __int64 v28; // rcx
  __int64 v29; // rcx
  const char *v30; // rdx
  int v31; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = -1LL;
  v13 = a10;
  v15 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( a11[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = a11;
    if ( !a11 )
      v24 = "NULL";
    if ( a10 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( a10[v25] );
      v26 = v25 + 1;
    }
    else
    {
      v26 = 5LL;
    }
    v27 = a10;
    if ( !a10 )
      v27 = "NULL";
    if ( a7 )
    {
      v28 = -1LL;
      do
        ++v28;
      while ( a7[v28] );
      v29 = v28 + 1;
    }
    else
    {
      v29 = 5LL;
    }
    v30 = a7;
    if ( !a7 )
      v30 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v30,
      v29,
      &a8,
      4LL,
      &a9,
      8LL,
      v27,
      v26,
      v24,
      v23,
      0LL);
  }
  if ( v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( v11[v17] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v13[v18] );
    v19 = v18 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  if ( v15 )
  {
    do
      ++v12;
    while ( v15[v12] );
    v20 = v12 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  LOWORD(v31) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v31, &a6, 8LL, v15, v20, &a8, 4LL, &a9, 8LL, v13, v19, v11);
}
