/*
 * XREFs of ??1?$ComPtr@VCCortanaConversationExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18009E040
 * Callers:
 *     _CortanaConversationExperienceManagerFactory::GetExperienceManager_::_1_::dtor$2 @ 0x1801EAD03 (_CortanaConversationExperienceManagerFactory--GetExperienceManager_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversationExperienceManager@Experience@Shell@Internal@Windows@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009DDD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UICortanaConversat.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CCortanaConversationExperienceManager>::~ComPtr<CCortanaConversationExperienceManager>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
