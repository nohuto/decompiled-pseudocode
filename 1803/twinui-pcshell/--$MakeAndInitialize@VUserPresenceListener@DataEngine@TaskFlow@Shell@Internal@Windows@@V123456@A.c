/*
 * XREFs of ??$MakeAndInitialize@VUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@V123456@AEAPEAUITaskDataArbiter@23456@@Details@WRL@Microsoft@@YAJPEAPEAVUserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAPEAUITaskDataArbiter@45678@@Z @ 0x1801A8FF4
 * Callers:
 *     ?Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDataArbiter@23456@PEAPEAUITaskDataListener@23456@@Z @ 0x1801A9650 (-Create@UserPresenceListenerFactory@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJPEAUITaskDa.c)
 * Callees:
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800986A8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ @ 0x1801A94D0 (--0UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITaskDataListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UIImmersiveSessionIdleNotification@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801A9A20 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UITas_ea_1801A9A20.c)
 *     ??4?$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@PEAUIWindow@WindowManagement@ApplicationModel@Internal@Windows@@@Z @ 0x18021B964 (--4-$com_ptr_t@UIWindow@WindowManagement@ApplicationModel@Internal@Windows@@Uerr_exception_polic.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataArbiter * &>(
        __int64 *a1,
        _QWORD *a2)
{
  unsigned int v2; // ebx
  Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *v5; // rax
  __int64 v6; // rdi
  volatile int *v7; // rdx
  signed __int64 v8; // rax
  signed __int64 v9; // rtt

  v2 = 0;
  *a1 = 0LL;
  v5 = (Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *)operator new(
                                                                                 0x60uLL,
                                                                                 (const struct std::nothrow_t *)&std::nothrow);
  if ( v5 )
  {
    v6 = Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::UserPresenceListener(v5);
    wil::com_ptr_t<Windows::Internal::ApplicationModel::WindowManagement::IWindow,wil::err_exception_policy>::operator=(
      v6 + 72,
      *a2);
    if ( v6 )
    {
      v8 = *(_QWORD *)(v6 + 64);
      while ( v8 >= 0 )
      {
        if ( (_DWORD)v8 != 0x7FFFFFFF )
        {
          v9 = v8;
          v8 = _InterlockedCompareExchange64((volatile signed __int64 *)(v6 + 64), v8 + 1, v8);
          if ( v9 != v8 )
            continue;
        }
        goto LABEL_10;
      }
      Microsoft::WRL::Details::StrongReference::IncrementStrongReference((Microsoft::WRL::Details *)(2 * v8 + 16), v7);
    }
LABEL_10:
    *a1 = v6;
    if ( v6 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::TaskFlow::DataEngine::ITaskDataListener,IImmersiveSessionIdleNotification,Microsoft::WRL::FtmBase>::Release(v6);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return v2;
}
