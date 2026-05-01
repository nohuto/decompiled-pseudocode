/*
 * XREFs of ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$0BD@@WRL@Microsoft@@$00$00$0A@UIBuffer@Streams@Storage@Windows@@U?$CloakedIid@UIBufferByteAccess@Streams@Storage@Windows@@@23@U?$CloakedIid@UIMarshal@@@23@VFtmBase@23@@Details@WRL@Microsoft@@UEAA@XZ @ 0x1800F20C8
 * Callers:
 *     ??1?$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@@MEAA@XZ @ 0x1800F2058 (--1-$CBuffer_Impl@P6AXPEAX@ZUDefaultMarshaler@Streams@Storage@Windows@@@Streams@Storage@Windows@.c)
 *     ??_E?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktop@Multitasking@ComposableShell@Internal@Windows@@V?$VirtualDesktopNotificationBase@UIVirtualDesktopNotification@@@@UIVirtualDesktopInternal@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x1801294E0 (--_E-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UIVirtualDesktop@Multitasking@Composa.c)
 *     ??_GCApplicationFrameWrapper@@UEAAPEAXI@Z @ 0x1801295B0 (--_GCApplicationFrameWrapper@@UEAAPEAXI@Z.c)
 *     ??_EAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1801A7FB0 (--_EAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1?$RuntimeClass@U?$RuntimeClassFlags@$02@WRL@Microsoft@@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIApplicationViewChangeListener@@UIAppViewListener@56789@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1801A87DC (--1-$RuntimeClass@U-$RuntimeClassFlags@$02@WRL@Microsoft@@UITaskDataListener@DataEngine@TaskFlow.c)
 *     ??_EAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z @ 0x1801A87F0 (--_EAppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??1VirtualDesktop@@UEAA@XZ @ 0x180261D3C (--1VirtualDesktop@@UEAA@XZ.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<19>,1,1,0,Windows::Storage::Streams::IBuffer,Microsoft::WRL::CloakedIid<Windows::Storage::Streams::IBufferByteAccess>,Microsoft::WRL::CloakedIid<IMarshal>,Microsoft::WRL::FtmBase>(
        __int64 a1,
        volatile int *a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
      2 * v3,
      a2);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 56));
}
