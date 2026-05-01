/*
 * XREFs of ??_ECCortanaConversationExperienceManager@@UEAAPEAXI@Z @ 0x180159680
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Notifications@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F00D8 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIWpnToastActivator@Noti.c)
 *     ??1CSingleViewShellExperience@@QEAA@XZ @ 0x180306D10 (--1CSingleViewShellExperience@@QEAA@XZ.c)
 */

CCortanaConversationExperienceManager *__fastcall CCortanaConversationExperienceManager::`vector deleting destructor'(
        CCortanaConversationExperienceManager *this,
        char a2)
{
  volatile int *v4; // rdx

  CSingleViewShellExperience::~CSingleViewShellExperience((CCortanaConversationExperienceManager *)((char *)this + 72));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Notifications::IWpnToastActivator,Microsoft::WRL::FtmBase>(
    (__int64)this,
    v4);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x110);
  return this;
}
