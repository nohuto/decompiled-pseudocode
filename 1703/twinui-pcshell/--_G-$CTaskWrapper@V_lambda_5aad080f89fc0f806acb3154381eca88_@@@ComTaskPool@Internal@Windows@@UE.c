/*
 * XREFs of ??_G?$CTaskWrapper@V_lambda_5aad080f89fc0f806acb3154381eca88_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1800B0D80
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800AB6EC (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AE724 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper<_lambda_5aad080f89fc0f806acb3154381eca88_>::`scalar deleting destructor'(
        _QWORD *Block,
        char a2)
{
  char *v2; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx

  v2 = (char *)(Block + 4);
  Block[4] = &QuickConnectTelemetry::ExperienceManager_CheckAndPopulateContact::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(Block + 4);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v2);
  v5 = Block[3];
  if ( v5 )
  {
    Block[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = Block[2];
  if ( v6 )
  {
    Block[2] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  *((_DWORD *)Block + 3) = -1073741823;
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
