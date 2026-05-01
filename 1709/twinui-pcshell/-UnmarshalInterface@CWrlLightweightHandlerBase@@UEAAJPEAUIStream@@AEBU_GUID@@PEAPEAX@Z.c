/*
 * XREFs of ?UnmarshalInterface@CWrlLightweightHandlerBase@@UEAAJPEAUIStream@@AEBU_GUID@@PEAPEAX@Z @ 0x1801E18E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E1974 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::UnmarshalInterface(
        CWrlLightweightHandlerBase *this,
        struct IStream *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 *v8; // rax
  const struct _GUID *v9; // rdx
  int StdMarshaler; // ebx
  __int64 v11; // rcx
  __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v13 = 0LL;
  v8 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v13);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v9, (void **)v8);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(__int64, struct IStream *, const struct _GUID *, void **))(*(_QWORD *)v13 + 48LL))(
                     v13,
                     a2,
                     a3,
                     a4);
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)StdMarshaler;
}
