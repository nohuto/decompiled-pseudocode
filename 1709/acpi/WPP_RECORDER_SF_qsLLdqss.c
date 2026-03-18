/*
 * XREFs of WPP_RECORDER_SF_qsLLdqss @ 0x1C001DE80
 * Callers:
 *     ACPIDevicePowerDpc @ 0x1C0006370 (ACPIDevicePowerDpc.c)
 *     ACPIIsPowerRequestBlocked @ 0x1C0028654 (ACPIIsPowerRequestBlocked.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
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
        __int64 a12,
        __int64 a13)
{
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rbp
  const char *v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  const char *v25; // rcx
  int v26; // [rsp+20h] [rbp-B8h]
  int v27[4]; // [rsp+B0h] [rbp-28h] BYREF

  v13 = -1LL;
  v14 = a13;
  v16 = a12;
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
      while ( *(_BYTE *)(v23 + a12) );
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
      &WPP_865309cb09b9397d2632e54924735df7_Traceguids,
      48LL,
      &a6,
      8LL,
      v25);
  }
  if ( v14 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( *(_BYTE *)(v14 + v18) );
  }
  if ( v16 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( *(_BYTE *)(v19 + v16) );
  }
  if ( v17 )
  {
    do
      ++v13;
    while ( v17[v13] );
    v20 = v13 + 1;
  }
  else
  {
    v20 = 5LL;
    v17 = "NULL";
  }
  LOWORD(v26) = 48;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_865309cb09b9397d2632e54924735df7_Traceguids,
           v26,
           &a6,
           8LL,
           v17,
           v20,
           &a8,
           4LL,
           &a9,
           4LL,
           v27);
}
