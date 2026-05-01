/*
 * XREFs of ?PerformDelayedInitialization@XamlExplorerHostShellComponent@@UEAAJXZ @ 0x1801F8E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009FFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18009FFC0.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___ @ 0x1801F72A0 (Windows--Internal--ComTaskPool--QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1801F9134 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TaskViewWarmLaunch@@@wil@@CAX_NW4Rep.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall XamlExplorerHostShellComponent::PerformDelayedInitialization(XamlExplorerHostShellComponent *this)
{
  volatile int *v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char *v5; // r10
  __int64 v6; // rbx
  int v7; // r11d
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 v10; // rax
  signed __int64 v11; // rtt
  char *v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  char *v15; // [rsp+58h] [rbp+10h]

  wil::Feature<__WilFeatureTraits_Feature_TaskViewWarmLaunch>::ReportUsageToService(this);
  v5 = (char *)this - 48;
  v6 = (__int64)v5;
  v15 = v5;
  v7 = 0x7FFFFFFF;
  if ( v5 )
  {
    v8 = *((_QWORD *)v5 + 22);
    while ( 1 )
    {
      v3 = (unsigned __int64)v8 >> 63;
      if ( v8 < 0 )
        break;
      if ( (_DWORD)v8 != 0x7FFFFFFF )
      {
        v3 = v8 + 1;
        v9 = v8;
        v8 = _InterlockedCompareExchange64((volatile signed __int64 *)v5 + 22, v8 + 1, v8);
        if ( v9 != v8 )
          continue;
      }
      goto LABEL_8;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v2);
LABEL_8:
    v6 = (__int64)v15;
  }
  v13 = v5;
  v14 = v6;
  if ( v6 )
  {
    v10 = *(_QWORD *)(v6 + 176);
    while ( 1 )
    {
      v3 = (unsigned __int64)v10 >> 63;
      if ( v10 < 0 )
        break;
      if ( (_DWORD)v10 != v7 )
      {
        v3 = v10 + 1;
        v11 = v10;
        v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 176), v10 + 1, v10);
        if ( v11 != v10 )
          continue;
      }
      goto LABEL_16;
    }
    Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v10 + 16), v2);
LABEL_16:
    v6 = (__int64)v15;
  }
  Windows::Internal::ComTaskPool::QueueTaskWithDelay__lambda_426bb45a896c97a0e7f03d36232edfea___(
    v3,
    (__int64)v2,
    v4,
    &v13);
  if ( v14 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(v14);
  if ( v6 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(v6);
  return 0LL;
}
