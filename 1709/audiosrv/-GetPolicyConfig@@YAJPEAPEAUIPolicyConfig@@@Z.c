/*
 * XREFs of ?GetPolicyConfig@@YAJPEAPEAUIPolicyConfig@@@Z @ 0x1800846FC
 * Callers:
 *     ?GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z @ 0x180065F8C (-GetChannelCountFromDeviceFormat@CMeterControlBase@@QEAAJPEAI@Z.c)
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x1800690F0 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall GetPolicyConfig(struct IPolicyConfig **a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = (**(__int64 (__fastcall ***)(CPolicyConfig *, GUID *, struct IPolicyConfig **))g_PolicyConfig)(
         g_PolicyConfig,
         &GUID_5731289f_3e89_4209_86be_6599a8e05e67,
         a1);
  v2 = v1;
  if ( v1 < 0 )
    AudSrvTraceLoggingErrorHelper("GetPolicyConfig", 7085, v1);
  return v2;
}
