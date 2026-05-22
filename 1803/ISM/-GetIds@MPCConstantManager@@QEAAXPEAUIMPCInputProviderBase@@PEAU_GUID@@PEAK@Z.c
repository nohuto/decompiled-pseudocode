/*
 * XREFs of ?GetIds@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@PEAU_GUID@@PEAK@Z @ 0x18004BC04
 * Callers:
 *     ??$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041468 (--$GetConstant@M@MPCConstantManager@@QEAAMPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x180041574 (--$GetConstant@K@MPCConstantManager@@QEAAKPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$char.c)
 *     ??$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z @ 0x1800418EC (--$GetConstant@_N@MPCConstantManager@@QEAA_NPEAUIMPCInputProviderBase@@AEBV-$basic_string@DU-$ch.c)
 *     ??$_Callback_once@V?$tuple@$$QEAV_lambda_286394bed54c76db5c0d94726973c3a4_@@AEAVexception_ptr@std@@@std@@U?$integer_sequence@_K$0A@@2@$00@std@@YAHPEAX0PEAPEAX@Z @ 0x180048000 (--$_Callback_once@V-$tuple@$$QEAV_lambda_286394bed54c76db5c0d94726973c3a4_@@AEAVexception_ptr@st.c)
 *     ?ChangeConstantForDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@4@@Z @ 0x18004BCBC (-ChangeConstantForDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$basic_str.c)
 *     ?AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@Z @ 0x18004BE04 (-AddAndPopulateDeviceType@MPCConstantManager@@QEAAXPEAUIMPCInputProviderBase@@AEBV-$map@V-$basic.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCConstantManager::GetIds(
        MPCConstantManager *this,
        struct IMPCInputProviderBase *a2,
        struct _GUID *a3,
        unsigned int *a4)
{
  int v6; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  MPCConstantManager *v8; // [rsp+40h] [rbp+8h] BYREF

  v8 = this;
  if ( a4 )
    *a4 = (*(__int64 (__fastcall **)(struct IMPCInputProviderBase *))(*(_QWORD *)a2 + 88LL))(a2);
  if ( a3 )
  {
    v6 = (**(__int64 (__fastcall ***)(struct IMPCInputProviderBase *, GUID *, MPCConstantManager **))a2)(
           a2,
           &GUID_603ffbaf_2fd6_4711_8c68_de56f864f999,
           &v8);
    if ( v6 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x162D,
        (__int64)"internal\\sdk\\inc\\wil\\ResultMacros.h",
        (const char *)(unsigned int)v6);
      JUMPOUT(0x18004BCBALL);
    }
    (*(void (__fastcall **)(MPCConstantManager *, struct _GUID *))(*(_QWORD *)v8 + 24LL))(v8, a3);
    if ( v8 )
      (*(void (__fastcall **)(MPCConstantManager *))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
