/*
 * XREFs of WPP_RECORDER_SF_qsdqss @ 0x1C0008ED0
 * Callers:
 *     ACPIBusIrpQueryDeviceRelations @ 0x1C00713C0 (ACPIBusIrpQueryDeviceRelations.c)
 *     ACPIBusIrpQueryId @ 0x1C0071520 (ACPIBusIrpQueryId.c)
 *     ACPIDockIrpQueryDeviceRelations @ 0x1C00732C0 (ACPIDockIrpQueryDeviceRelations.c)
 *     ACPIDockIrpQueryID @ 0x1C00736B0 (ACPIDockIrpQueryID.c)
 *     ACPIInternalDeviceQueryDeviceRelations @ 0x1C007CAB0 (ACPIInternalDeviceQueryDeviceRelations.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00041D0 (_guard_dispatch_icall_nop.c)
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
  __int64 v17; // r9
  __int64 v18; // r9
  const char *v19; // r11
  __int64 v20; // r8
  __int64 v21; // r8
  const char *v22; // r10
  __int64 v23; // rdx
  __int64 v24; // rdx
  const char *v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rbx
  int v31; // [rsp+20h] [rbp-88h]

  v11 = a11;
  v12 = -1LL;
  v13 = a10;
  v15 = a7;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x10) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    if ( a7 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a7[v23] );
      v24 = v23 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    v25 = a7;
    if ( !a7 )
      v25 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      a4,
      &a6,
      8LL,
      v25,
      v24,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v11 )
  {
    v26 = -1LL;
    do
      ++v26;
    while ( v11[v26] );
  }
  if ( !v11 )
    v11 = "NULL";
  if ( v13 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v13[v27] );
    v28 = v27 + 1;
  }
  else
  {
    v28 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  if ( v15 )
  {
    do
      ++v12;
    while ( v15[v12] );
    v29 = v12 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  LOWORD(v31) = a4;
  return WppAutoLogTrace(a1, 2LL, 5LL, a5, v31, &a6, 8LL, v15, v29, &a8, 4LL, &a9, 8LL, v13, v28, v11);
}
