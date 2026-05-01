/*
 * XREFs of ?add_AppMemoryUsageIncreased@CMemoryManager@System@Windows@@UEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@3@PEAUEventRegistrationToken@@@Z @ 0x1800035E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddInternal@?$EventSource@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@AEAAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@PEAXPEAUEventRegistrationToken@@@Z @ 0x180002500 (-AddInternal@-$EventSource@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U-$InvokeMode.c)
 *     ??$CreateGitHelper@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@Details@Internal@Windows@@YAJPEAU?$IEventHandler@PEAUIInspectable@@@Foundation@2@PEAPEAU342@@Z @ 0x180002690 (--$CreateGitHelper@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@VGitPtr@Internal@3@@D.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$IEventHandler@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180003EF0 (-Release@-$RuntimeClass@U-$InterfaceList@U-$IEventHandler@PEAUIInspectable@@@Foundation@Windows@.c)
 *     ?Init@CMemoryManager@System@Windows@@CAJXZ @ 0x180003F80 (-Init@CMemoryManager@System@Windows@@CAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::System::CMemoryManager::add_AppMemoryUsageIncreased(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  int v6; // edi
  __int64 v7; // rcx
  void (*v8)(void); // rax
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  result = Windows::System::CMemoryManager::Init();
  if ( (int)result >= 0 )
  {
    if ( a2 )
    {
      v9 = 0LL;
      v6 = Windows::Internal::Details::CreateGitHelper<Windows::Foundation::IEventHandler<IInspectable *>,Windows::Internal::GitPtr>(
             a2,
             &v9);
      if ( v6 < 0 )
        goto LABEL_6;
      if ( v9 )
      {
        v6 = Microsoft::WRL::EventSource<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::InvokeModeOptions<-2>>::AddInternal(
               (RTL_SRWLOCK *)&Windows::System::CMemoryManager::s_levelIncreasedEvent,
               v9,
               *(_QWORD *)(*(_QWORD *)a2 + 24LL),
               a3);
LABEL_6:
        v7 = v9;
        if ( v9 )
        {
          v9 = 0LL;
          v8 = *(void (**)(void))(*(_QWORD *)v7 + 16LL);
          if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IEventHandler<IInspectable *>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
          else
            v8();
        }
        return (unsigned int)v6;
      }
      return (unsigned int)-2147024809;
    }
    else
    {
      return (unsigned int)-2147024809;
    }
  }
  return result;
}
