/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6_____lambda_3debc4ca9d8e656fb3713c45e37949b6___ @ 0x1801BEE44
 * Callers:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___ @ 0x1801BF790 (Windows--Internal--ComTaskPool--QueueTask__lambda_3debc4ca9d8e656fb3713c45e37949b6___.c)
 * Callees:
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180010B98 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@UIComPoolTask@Internal@Windows@@@WRL@M.c)
 *     ??0?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@@Z @ 0x18016A768 (--0-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6___::CTaskWrapper__lambda_3debc4ca9d8e656fb3713c45e37949b6_____lambda_3debc4ca9d8e656fb3713c45e37949b6___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rax

  Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>(a1);
  *(_QWORD *)a1 = off_180331880;
  *(_QWORD *)(a1 + 16) = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 16);
  *(_QWORD *)(a1 + 40) = *(_QWORD *)(a2 + 24);
  v4 = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 24) = 0LL;
  *(_QWORD *)(a2 + 16) = 0LL;
  *(_BYTE *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 24) = v4;
  *(_BYTE *)(a2 + 32) = 1;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(a2 + 56);
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  *(_QWORD *)(a2 + 56) = 0LL;
  *(_QWORD *)(a2 + 48) = 0LL;
  *(_BYTE *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 56) = v5;
  *(_BYTE *)(a2 + 64) = 1;
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)(a1 + 88));
  *(_QWORD *)(a1 + 88) = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  return a1;
}
