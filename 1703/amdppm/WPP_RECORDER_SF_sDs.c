/*
 * XREFs of WPP_RECORDER_SF_sDs @ 0x1C00028E4
 * Callers:
 *     DisplayGenAddr @ 0x1C00043A0 (DisplayGenAddr.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000BFC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sDs(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        const char *a6,
        char a7,
        const char *a8)
{
  const char *v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rcx
  const char *v15; // rdx
  const char *v16; // r8
  __int64 v17; // rcx
  int v19; // [rsp+20h] [rbp-58h]

  v8 = "NULL";
  v9 = (__int64)a8;
  v10 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a8 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( a8[v12] );
    }
    if ( a6 )
    {
      v13 = -1LL;
      do
        ++v13;
      while ( a6[v13] );
      v14 = v13 + 1;
    }
    else
    {
      v14 = 5LL;
    }
    v15 = "NULL";
    v16 = "NULL";
    if ( a8 )
      v15 = a8;
    if ( a6 )
      v16 = a6;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      150LL,
      v16,
      v14,
      &a7,
      4LL,
      v15);
  }
  if ( v9 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_BYTE *)(v9 + v17) );
  }
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
  }
  if ( a6 )
    v8 = a6;
  LOWORD(v19) = 150;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids, v19, v8);
}
