/*
 * XREFs of ??1?$ComPtr@VTargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180024E14
 * Callers:
 *     _Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics::GetTriggeredItemsForStateAsync_::_1_::dtor$4 @ 0x1800B81EB (_Windows--Services--TargetedContent--Internal--TargetedContentTriggerManagerStatics_ea_1800B81EB.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800B4D50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>::~ComPtr<Windows::Services::TargetedContent::Internal::TargetedContentTriggerManagerStatics>(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rcx
  int v3; // ebx

  result = (__int64)a1;
  v2 = *a1;
  if ( v2 )
  {
    *(_QWORD *)result = 0LL;
    result = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 76));
    if ( (_DWORD)result )
    {
      if ( (*(_BYTE *)(v2 + 96) & 4) == 0 && (_DWORD)result == 1 )
        goto LABEL_8;
    }
    else
    {
      v3 = *(_DWORD *)(v2 + 96) >> 2;
      result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 56LL))(v2, 1LL);
      if ( (v3 & 1) != 0 && Microsoft::WRL::Details::ModuleBase::module_ )
LABEL_8:
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return result;
}
