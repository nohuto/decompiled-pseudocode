/*
 * XREFs of _lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_ @ 0x1801C0740
 * Callers:
 *     ??_G?$CTaskWrapper@V_lambda_3debc4ca9d8e656fb3713c45e37949b6_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x1801C0F10 (--_G-$CTaskWrapper@V_lambda_3debc4ca9d8e656fb3713c45e37949b6_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z @ 0x1801C34A0 (-LaunchPeoplePane@PeoplePaneViewManager@@UEAAJPEBG0@Z.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$5 @ 0x1801C3A4E (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$5.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$12 @ 0x1801C3AA2 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$12.c)
 * Callees:
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ @ 0x1801C0938 (--1PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAA@XZ.c)
 */

void __fastcall lambda_ebd42d67d4ed24c24d65003e6952ebf6_::__lambda_ebd42d67d4ed24c24d65003e6952ebf6_(__int64 a1)
{
  CommonPeopleTelemetry::PeoplePaneAppLaunch::~PeoplePaneAppLaunch((CommonPeopleTelemetry::PeoplePaneAppLaunch *)(a1 + 72));
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 40);
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(a1 + 8);
}
