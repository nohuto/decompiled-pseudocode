/*
 * XREFs of ??$MakeAndInitialize@VNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@V123@PEAV23@@Details@WRL@Microsoft@@YAJPEAPEAVNotification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@$$QEAPEAV45@@Z @ 0x18016A4C8
 * Callers:
 *     ?BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ @ 0x18016B278 (-BlockImmediateReshow@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??0Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA@XZ @ 0x18016AAD8 (--0Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJPEAV23@@Z @ 0x18016CE80 (-RuntimeClassInitialize@Notification@DebounceDetection@CPeopleBarFlyoutExperienceManager@@QEAAJP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification,CPeopleBarFlyoutExperienceManager::DebounceDetection *>(
        CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification **a1,
        struct CPeopleBarFlyoutExperienceManager::DebounceDetection **a2)
{
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v4; // rax
  int v5; // edi
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v6; // rbx
  CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h]

  *a1 = 0LL;
  v4 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)operator new(
                                                                               0x40uLL,
                                                                               (const struct std::nothrow_t *)&std::nothrow);
  if ( v4 )
  {
    v6 = (CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *)CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::Notification(v4);
    v8 = v6;
    v9 = 0LL;
    v5 = CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification::RuntimeClassInitialize(v6, *a2);
    if ( v5 >= 0 )
    {
      if ( v6 )
        (*(void (__fastcall **)(CPeopleBarFlyoutExperienceManager::DebounceDetection::Notification *))(*(_QWORD *)v6 + 8LL))(v6);
      *a1 = v6;
      v5 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v8);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v5;
}
