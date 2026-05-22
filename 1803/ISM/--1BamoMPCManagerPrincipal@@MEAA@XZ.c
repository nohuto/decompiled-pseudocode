/*
 * XREFs of ??1BamoMPCManagerPrincipal@@MEAA@XZ @ 0x1800230EC
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$0 @ 0x1800E4339 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$0.c)
 *     _ControllerNavigationManager::ControllerNavigationManager_::_1_::dtor$0 @ 0x1800E4906 (_ControllerNavigationManager--ControllerNavigationManager_--_1_--dtor$0.c)
 *     _MPCManager::MPCManager_::_1_::dtor$0 @ 0x1800E64BE (_MPCManager--MPCManager_--_1_--dtor$0.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall BamoMPCManagerPrincipal::~BamoMPCManagerPrincipal(
        BamoMPCManagerPrincipal *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  volatile signed __int32 *v4; // rcx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 4);
  if ( v4 )
  {
    v5 = _InterlockedDecrement(v4 + 2);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x33,
        (__int64)"internal\\mincore\\priv_sdk\\inc\\bamoimplobject.inl",
        a4);
      JUMPOUT(0x18002313DLL);
    }
    if ( !v5 )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 16LL))(v4);
  }
}
