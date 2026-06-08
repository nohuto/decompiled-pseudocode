/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C000AC38
 * Callers:
 *     Display_xSD @ 0x1C0002508 (Display_xSD.c)
 *     Display_CSD @ 0x1C000A0F0 (Display_CSD.c)
 *     Display_TSS @ 0x1C000A6D0 (Display_TSS.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0004CB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_Ds(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        const char *a7)
{
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v11; // rdx
  const char *v12; // rcx
  int v14; // [rsp+20h] [rbp-38h]

  v7 = (__int64)a7;
  v8 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 2) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u )
  {
    if ( a7 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( a7[v11] );
    }
    v12 = a7;
    if ( !a7 )
      v12 = "NULL";
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      a4,
      &a6,
      4LL,
      v12);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v14) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids, v14, &a6);
}
