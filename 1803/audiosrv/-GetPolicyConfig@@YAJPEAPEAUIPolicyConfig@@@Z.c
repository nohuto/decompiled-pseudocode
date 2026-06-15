/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x18004A6E8
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x18004A9C4 (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800A25E0 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     ?QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18004A740 (-QueryInterface@CPolicyConfig@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18004A8B0 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  __int64 (__fastcall *v1)(CPolicyConfig *__hidden, const struct _GUID *, void **); // rax
  int Interface; // eax
  unsigned int v3; // ebx

  v1 = **(__int64 (__fastcall ***)(CPolicyConfig *__hidden, const struct _GUID *, void **))g_PolicyConfig;
  if ( v1 == CPolicyConfig::QueryInterface )
    Interface = CPolicyConfig::QueryInterface(g_PolicyConfig, &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5, (void **)a1);
  else
    Interface = v1(g_PolicyConfig, &GUID_b61b8d33_3fb5_46e8_ad0c_4753a8d148a5, (void **)a1);
  v3 = Interface;
  if ( Interface < 0 )
    AudSrvTraceLoggingErrorHelper("GetPolicyConfig", 0x1BC7u, Interface);
  return v3;
}
