/*
 * XREFs of ?OnDeviceLocked@CortanaExperienceManagerNotification@@UEAAXXZ @ 0x1800A47C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@?$EventSource@U?$ITypedEventHandler@PEAVCortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$01@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVCortanaSharedExperienceManager@@$$T@Z @ 0x1800A7D54 (--$InvokeAll@PEAVCortanaSharedExperienceManager@@$$T@-$EventSource@U-$ITypedEventHandler@PEAVCor.c)
 */

void __fastcall CortanaExperienceManagerNotification::OnDeviceLocked(CortanaExperienceManagerNotification *this)
{
  __int64 v1; // rax

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    *(_BYTE *)(v1 + 513) = 1;
    Microsoft::WRL::EventSource<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,IInspectable *>,Microsoft::WRL::InvokeModeOptions<2>>::InvokeAll<CortanaSharedExperienceManager *,std::nullptr_t>(
      *((_QWORD *)this + 6) + 336LL,
      *((_QWORD *)this + 6));
  }
}
