/*
 * XREFs of ?GetUnmarshalClass@CWrlLightweightHandlerBase@@UEAAJAEBU_GUID@@PEAXK1KPEAU2@@Z @ 0x1801E13A0
 * Callers:
 *     <none>
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1801E1974 (-_GetStdMarshaler@CWrlLightweightHandlerBase@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CWrlLightweightHandlerBase::GetUnmarshalClass(
        CWrlLightweightHandlerBase *this,
        const struct _GUID *a2,
        void *a3,
        unsigned int a4,
        void *a5,
        unsigned int a6,
        struct _GUID *a7)
{
  GUID *v7; // rdi
  __int64 *v12; // rax
  const struct _GUID *v13; // rdx
  int StdMarshaler; // ebx
  struct _GUID *v15; // rcx

  v7 = a7;
  a7 = 0LL;
  *v7 = GUID_NULL;
  v12 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&a7);
  StdMarshaler = CWrlLightweightHandlerBase::_GetStdMarshaler(this, v13, (void **)v12);
  if ( StdMarshaler >= 0 )
    StdMarshaler = (*(__int64 (__fastcall **)(struct _GUID *, const struct _GUID *, void *, _QWORD, void *, unsigned int, GUID *))(*(_QWORD *)&a7->Data1 + 24LL))(
                     a7,
                     a2,
                     a3,
                     a4,
                     a5,
                     a6,
                     v7);
  v15 = a7;
  if ( a7 )
  {
    a7 = 0LL;
    (*(void (__fastcall **)(struct _GUID *))(*(_QWORD *)&v15->Data1 + 16LL))(v15);
  }
  return (unsigned int)StdMarshaler;
}
