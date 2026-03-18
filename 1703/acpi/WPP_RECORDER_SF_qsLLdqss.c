/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x1C000CEF0
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C000C7A0 (ACPIDevicePowerDpc.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C000F924 (ACPIIsPowerRequestBlocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C750 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        int a10,
        char a11,
        const char *a12,
        __int64 a13)
{
  __int64 v13; // rsi
  __int64 v14; // rbx
  const char *v15; // rbp
  const char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // r10
  __int64 v23; // r9
  __int64 v24; // r8
  const char *v25; // rdx
  int v26; // [rsp+20h] [rbp-B8h]
  int v27[4]; // [rsp+B0h] [rbp-28h] BYREF

  v13 = a13;
  v14 = -1LL;
  v15 = a12;
  v17 = a7;
  v27[0] = AcpiPowerCurrentPagingPathTransitions;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( *(_BYTE *)(a13 + v22) );
    }
    if ( a12 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a12[v23] );
    }
    if ( a7 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a7[v24] );
    }
    v25 = a7;
    if ( !a7 )
      v25 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
      47LL,
      &a6,
      8LL,
      v25);
  }
  if ( v13 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v13 + v18) );
  }
  if ( v15 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( v15[v19] );
  }
  else
  {
    v15 = "NULL";
  }
  if ( v17 )
  {
    do
      ++v14;
    while ( v17[v14] );
    v20 = v14 + 1;
  }
  else
  {
    v20 = 5LL;
    v17 = "NULL";
  }
  LOWORD(v26) = 47;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_32a24c5e9860357aa59cb74721ebb774_Traceguids,
           v26,
           &a6,
           8LL,
           v17,
           v20,
           &a8,
           4LL,
           &a9,
           4LL,
           v27,
           4LL,
           &a11,
           8LL,
           v15);
}
