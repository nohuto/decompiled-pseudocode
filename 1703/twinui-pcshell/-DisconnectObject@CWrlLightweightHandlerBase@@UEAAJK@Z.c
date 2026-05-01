/*
 * XREFs of ?DisconnectObject@CWrlLightweightHandlerBase@@UEAAJK@Z @ 0x1801934A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180193914 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::DisconnectObject(CWrlLightweightHandlerBase *this, unsigned int a2)
{
  __int64 *v4; // rax
  const struct _GUID *v5; // rdx
  int StdMarshaler; // ebx
  __int64 v7; // rcx
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v9);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v5, (void **)v4);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 64LL))(v9, a2);
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)StdMarshaler;
}
