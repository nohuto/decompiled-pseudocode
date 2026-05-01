/*
 * XREFs of ?Stop@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x1801A8DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801A8C58 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DocumentsCollection@@@wil@@CAX_NW4Re.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener::Stop(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *this)
{
  int v2; // eax
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 24) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 11) + 96LL))(*((_QWORD *)this + 11));
    if ( v2 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        68LL,
        (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
        (const char *)(unsigned int)v2);
    *((_DWORD *)this + 24) = 0;
  }
  v3 = (*(__int64 (__fastcall **)(_QWORD, Windows::Internal::Shell::TaskFlow::DataEngine::AppViewListener *))(**((_QWORD **)this + 10) + 56LL))(
         *((_QWORD *)this + 10),
         this);
  if ( v3 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      72LL,
      (__int64)"pcshell\\twinui\\taskflowbroker\\lib\\appviewlistener.cpp",
      (const char *)(unsigned int)v3);
  wil::Feature<__WilFeatureTraits_Feature_DocumentsCollection>::ReportUsageToService(v5, v4, v6);
  return 0LL;
}
