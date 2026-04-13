/*
 * XREFs of ?get_Size@?$Vector@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@U?$DefaultEqualityPredicate@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2Collections@Foundation@5@U?$DefaultLifetimeTraits@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@@2785@U?$VectorOptions@PEAVTargetedContentTriggerInternal@Internal@TargetedContent@Services@Windows@@$0A@$00$0A@@2785@@Internal@Collections@Foundation@Windows@@UEAAJPEAI@Z @ 0x1800179D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::Vector<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *>,Windows::Foundation::Collections::Internal::VectorOptions<Windows::Services::TargetedContent::Internal::TargetedContentTriggerInternal *,0,1,0>>::get_Size(
        __int64 a1,
        _DWORD *a2)
{
  RTL_SRWLOCK *v2; // rbx

  *a2 = 0;
  v2 = (RTL_SRWLOCK *)(a1 + 120);
  if ( *(_DWORD *)(a1 + 112) == 1 )
  {
    if ( SLODWORD(v2->Ptr) >= 0 )
      ++LODWORD(v2->Ptr);
  }
  else
  {
    AcquireSRWLockShared((PSRWLOCK)(a1 + 120));
  }
  *a2 = *(_DWORD *)(a1 + 80);
  if ( *(_DWORD *)(a1 + 112) == 1 )
    --LODWORD(v2->Ptr);
  else
    ReleaseSRWLockShared(v2);
  return 0LL;
}
