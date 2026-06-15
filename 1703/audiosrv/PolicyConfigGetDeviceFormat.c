/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180032B30
 * Callers:
 *     <none>
 * Callees:
 *     MIDL_user_allocate @ 0x180013D20 (MIDL_user_allocate.c)
 *     ?GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z @ 0x180033870 (-GetDeviceFormat@CPolicyConfig@@UEAAJPEBGHPEAPEAUtWAVEFORMATEX@@@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004B5C4 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memcpy_0 @ 0x180057FA0 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, const unsigned __int16 *a2, __int64 a3, _QWORD *a4)
{
  int (*v5)(CPolicyConfig *__hidden, const unsigned __int16 *, int, struct tWAVEFORMATEX **); // rax
  int DeviceFormat; // eax
  int v7; // ebx
  void *v8; // rax
  void *Src; // [rsp+48h] [rbp+10h] BYREF

  *a4 = 0LL;
  Src = 0LL;
  v5 = *(int (**)(CPolicyConfig *__hidden, const unsigned __int16 *, int, struct tWAVEFORMATEX **))(*(_QWORD *)g_PolicyConfig
                                                                                                  + 32LL);
  if ( v5 == CPolicyConfig::GetDeviceFormat )
    DeviceFormat = CPolicyConfig::GetDeviceFormat(g_PolicyConfig, a2, a3, (struct tWAVEFORMATEX **)&Src);
  else
    DeviceFormat = ((__int64 (__fastcall *)(CPolicyConfig *, const unsigned __int16 *, __int64, void **))v5)(
                     g_PolicyConfig,
                     a2,
                     a3,
                     &Src);
  v7 = DeviceFormat;
  if ( DeviceFormat >= 0 )
  {
    v8 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v8;
    if ( v8 )
      memcpy_0(v8, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v7 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 0x19D7u, v7);
  return (unsigned int)v7;
}
