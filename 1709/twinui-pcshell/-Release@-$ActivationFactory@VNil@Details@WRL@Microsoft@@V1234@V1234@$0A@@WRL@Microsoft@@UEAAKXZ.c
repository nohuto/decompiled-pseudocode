/*
 * XREFs of ?Release@?$ActivationFactory@VNil@Details@WRL@Microsoft@@V1234@V1234@$0A@@WRL@Microsoft@@UEAAKXZ @ 0x1801BB6A0
 * Callers:
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTrayInfoTipAppInfoProvider@SystemTray@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801BB3D0 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTrayInfoTipAppInfoProvider@SystemTr.c)
 *     ??$CreateActivationFactory@V?$SimpleSealedActivationFactory@VTrayInfoTipActivator@SystemTray@@$0A@@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x1801BBC00 (--$CreateActivationFactory@V-$SimpleSealedActivationFactory@VTrayInfoTipActivator@SystemTray@@$0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ActivationFactory<Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,0>::Release(
        __int64 a1)
{
  unsigned __int32 v1; // edi
  int v2; // ebx
  void (*v3)(void); // rax

  v1 = _InterlockedDecrement((volatile signed __int32 *)(a1 + 12));
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 32) & 4) == 0 && v1 == 1 )
    {
      v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
      goto LABEL_8;
    }
  }
  else
  {
    v2 = *(_DWORD *)(a1 + 32) >> 2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 56LL))(a1, 1LL);
    if ( (v2 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v3 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_8:
      v3();
    }
  }
  return v1;
}
