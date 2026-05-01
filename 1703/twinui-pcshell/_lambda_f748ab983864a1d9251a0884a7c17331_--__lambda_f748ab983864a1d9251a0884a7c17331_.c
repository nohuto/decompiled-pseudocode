/*
 * XREFs of _lambda_f748ab983864a1d9251a0884a7c17331_::__lambda_f748ab983864a1d9251a0884a7c17331_ @ 0x1800E85A8
 * Callers:
 *     _PeoplePaneViewManager::LaunchPeoplePane_::_1_::dtor$7 @ 0x18019DA8A (_PeoplePaneViewManager--LaunchPeoplePane_--_1_--dtor$7.c)
 * Callees:
 *     ??1?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A164C (--1-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800A3298 (-Destroy@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 */

void __fastcall lambda_f748ab983864a1d9251a0884a7c17331_::__lambda_f748ab983864a1d9251a0884a7c17331_(_QWORD *a1)
{
  __int64 v1; // rbx
  void *v3; // rcx

  v1 = (__int64)(a1 + 5);
  a1[5] = &CommonPeopleTelemetry::PeoplePaneAppLaunch::`vftable';
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(a1 + 5);
  wil::ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CommonPeopleTelemetryLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v1);
  v3 = (void *)a1[1];
  if ( v3 )
  {
    CoTaskMemFree(v3);
    a1[1] = 0LL;
  }
  a1[2] = 0LL;
  a1[3] = 0LL;
}
