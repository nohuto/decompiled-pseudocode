/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C000218C
 * Callers:
 *     Display_TSS @ 0x1C00038C4 (Display_TSS.c)
 *     Display_xSD @ 0x1C0003B0C (Display_xSD.c)
 *     Display_CSD @ 0x1C0003FB0 (Display_CSD.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C000C6F0 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // rdx
  const char *v13; // rcx
  int v15; // [rsp+20h] [rbp-38h]

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
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = "NULL";
    if ( a7 )
      v13 = a7;
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids,
      a4,
      &a6,
      4LL,
      v13,
      v12,
      0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( *(_BYTE *)(v7 + v8) );
  }
  LOWORD(v15) = a4;
  return WppAutoLogTrace(a1, 5LL, 2LL, &WPP_f3dde4da55a431de83bb5897e5f40075_Traceguids, v15, &a6);
}
