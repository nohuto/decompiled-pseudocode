/*
 * XREFs of ?Throw_HrIfFalseMsg@in1diag3@details@wil@@YA_NPEAXIPEBDJ_N1ZZ @ 0x18003DBB0
 * Callers:
 *     ?GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA?AV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEBG_N@Z @ 0x18003F000 (-GetSubscriptionContext@SubscribedContentStore@CreativeFramework@@YA-AV-$map@V-$basic_string@GU-.c)
 * Callees:
 *     ?ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x180002E08 (-ReportFailure_HrMsg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

char wil::details::in1diag3::Throw_HrIfFalseMsg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        char a5,
        __int64 a6,
        const char *a7,
        ...)
{
  unsigned int v7; // edi
  unsigned int v9; // ebp
  __int64 v12; // [rsp+20h] [rbp-58h]
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v7 = (unsigned int)a4;
  v9 = (unsigned int)a2;
  if ( !a5 )
  {
    if ( wil::details::g_pfnOriginateCallback )
      wil::details::g_pfnOriginateCallback(0LL, (unsigned int)a4);
    wil::details::ReportFailure_HrMsg((__int64)this, v9, a3, (__int64)a4, v12, retaddr, 0, v7, a6, (char *)&a7);
  }
  return a5;
}
