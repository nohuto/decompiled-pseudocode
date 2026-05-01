/*
 * XREFs of ??1?$ComPtr@VCJumpViewExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800BF338
 * Callers:
 *     _JumpViewExperienceManagerFactory::GetExperienceManager_::_1_::dtor$2 @ 0x1801EB8AF (_JumpViewExperienceManagerFactory--GetExperienceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperienceManager@Experience@Shell@Internal@Windows@@UIImmersiveMonitorNotification@@UIClosable@Foundation@8@UIActiveZBandNotificationForMonitor@@UIImmersiveWindowMessageNotification@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800BF400 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIJumpViewExperien.c)
 */

int __fastcall Microsoft::WRL::ComPtr<CJumpViewExperienceManager>::~ComPtr<CJumpViewExperienceManager>(
        CJumpViewExperienceManager **a1)
{
  CJumpViewExperienceManager *v1; // rax

  v1 = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    LODWORD(v1) = Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IJumpViewExperienceManager,IImmersiveMonitorNotification,Windows::Foundation::IClosable,IActiveZBandNotificationForMonitor,IImmersiveWindowMessageNotification>::Release(v1);
  }
  return (int)v1;
}
