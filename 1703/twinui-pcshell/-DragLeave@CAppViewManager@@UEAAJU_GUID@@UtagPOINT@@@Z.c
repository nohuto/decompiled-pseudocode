/*
 * XREFs of ?DragLeave@CAppViewManager@@UEAAJU_GUID@@UtagPOINT@@@Z @ 0x18003E8F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ??$Start@AEAU_GUID@@AEAUtagPOINT@@@DragLeave@CAppViewManagerTelemetry@@SA?AV01@AEAU_GUID@@AEAUtagPOINT@@@Z @ 0x1800440F8 (--$Start@AEAU_GUID@@AEAUtagPOINT@@@DragLeave@CAppViewManagerTelemetry@@SA-AV01@AEAU_GUID@@AEAUta.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 */

__int64 __fastcall CAppViewManager::DragLeave(CAppViewManager *this, struct _GUID *a2, struct tagPOINT a3)
{
  struct tagPOINT v4; // [rsp+20h] [rbp-168h] BYREF
  _QWORD v5[40]; // [rsp+30h] [rbp-158h] BYREF

  v4 = a3;
  CAppViewManagerTelemetry::DragLeave::Start<_GUID &,tagPOINT &>((CAppViewManagerTelemetry::DragLeave *)v5, a2, &v4);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v5, 0);
  v5[0] = &CAppViewManagerTelemetry::DragLeave::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  return 0LL;
}
