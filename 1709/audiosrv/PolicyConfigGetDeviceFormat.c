/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180089780
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x18001F580 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  int v5; // ebx
  void *v6; // rax
  void *Src; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  Src = 0LL;
  v5 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, __int64, void **))(*(_QWORD *)g_PolicyConfig + 32LL))(
         g_PolicyConfig,
         a2,
         a3,
         &Src);
  if ( v5 >= 0 )
  {
    v6 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v6;
    if ( v6 )
      memcpy_0(v6, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v5 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 6635, v5);
  return (unsigned int)v5;
}
