/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a___::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a_____lambda_903271a3a8fd35b15ad2f56780cfef6a___ @ 0x18013539C
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_903271a3a8fd35b15ad2f56780cfef6a___ @ 0x180135CF4 (Windows--Internal--ComTaskPool--QueueTask__lambda_903271a3a8fd35b15ad2f56780cfef6a___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x1800F6634 (--0-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProvide_ea_1800F6634.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a___::CTaskWrapper__lambda_903271a3a8fd35b15ad2f56780cfef6a_____lambda_903271a3a8fd35b15ad2f56780cfef6a___(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v4; // rdx

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>((__int64)a1);
  *a1 = off_180326CF8;
  a1[2] = 0LL;
  if ( a1 + 2 != a2 )
  {
    a1[2] = *a2;
    *a2 = 0LL;
  }
  v4 = a2 + 2;
  a1[3] = a2[1];
  a1[4] = 0LL;
  if ( a1 + 4 != a2 + 2 )
  {
    a1[4] = *v4;
    *v4 = 0LL;
  }
  a1[5] = a2[3];
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 6));
  a1[6] = &CFramePresentationTelemetry::UnpresentWindow::`vftable';
  return a1;
}
