/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x1C00288EC
 * Callers:
 *     ACPIBusIrpQueryId @ 0x1C0086AD0 (ACPIBusIrpQueryId.c)
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C008C7B0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C0094AB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C009E4A0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C009E890 (ACPIDockIrpQueryID.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
  __int64 v11; // rdi
  __int64 v12; // rbx
  const char *v13; // rsi
  const char *v15; // rbp
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v21; // r9
  __int64 v22; // r9
  const char *v23; // r11
  __int64 v24; // r8
  __int64 v25; // r8
  const char *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rdx
  const char *v29; // rcx
  int v30; // [rsp+20h] [rbp-88h]

  v11 = (__int64)a11;
  v12 = -1LL;
  v13 = a10;
  v15 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a11[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a11;
    if ( !a11 )
      v23 = "NULL";
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a10;
    if ( !a10 )
      v26 = "NULL";
    if ( a7 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( a7[v27] );
      v28 = v27 + 1;
    }
    else
    {
      v28 = 5LL;
    }
    v29 = a7;
    if ( !a7 )
      v29 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v29,
      v28,
      &a8,
      4LL,
      &a9,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
  }
  if ( v11 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v11 + v17) );
  }
  if ( v13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v13[v18] );
  }
  if ( !v13 )
    v13 = "NULL";
  if ( v15 )
  {
    do
      ++v12;
    while ( v15[v12] );
    v19 = v12 + 1;
  }
  else
  {
    v19 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  LOWORD(v30) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v30, &a6, 8LL, v15, v19, &a8, 4LL, &a9, 8LL, v13);
}
