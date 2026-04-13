/*
 * XREFs of _Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType_::_1_::dtor$0 @ 0x1800B8D0F
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ @ 0x1800133A0 (--1-$shared_ptr@VPublishSystemStateService@Actions@CreativeFramework@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::AllTriggersExecutedForTriggerType_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 176) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 176) &= ~1u;
    return std::shared_ptr<CreativeFramework::Actions::PublishSystemStateService>::~shared_ptr<CreativeFramework::Actions::PublishSystemStateService>(a2 + 88);
  }
  return result;
}
