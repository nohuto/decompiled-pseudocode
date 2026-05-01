/*
 * XREFs of _lambda_ca651380094f5bc4672f860ee3183d95_::__lambda_ca651380094f5bc4672f860ee3183d95_ @ 0x1801112AC
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$5 @ 0x1801EDA8E (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$5.c)
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$12 @ 0x1801EDB34 (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$12.c)
 * Callees:
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800ACE30 (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800AF8B0 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall lambda_ca651380094f5bc4672f860ee3183d95_::__lambda_ca651380094f5bc4672f860ee3183d95_(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rcx
  void *v4; // rcx

  v1 = (__int64)(a1 + 9);
  a1[9] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 9);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = (void *)a1[5];
  if ( v3 )
  {
    CoTaskMemFree(v3);
    a1[5] = 0LL;
  }
  a1[6] = 0LL;
  a1[7] = 0LL;
  v4 = (void *)a1[1];
  if ( v4 )
  {
    CoTaskMemFree(v4);
    a1[1] = 0LL;
  }
  a1[2] = 0LL;
  a1[3] = 0LL;
}
