/*
 * XREFs of ??$AsWeak@UIDWMStoryboardListener@@@WRL@Microsoft@@YAJPEAUIDWMStoryboardListener@@PEAVWeakRef@01@@Z @ 0x180188350
 * Callers:
 *     ?SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z @ 0x180188AC0 (-SubscribeToWNF@CCortanaWNFService@Cortana@TwinUI@@UEAAJPEAVICortanaWNFNotification@23@_N@Z.c)
 *     ?RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BED7C (-RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x180307E30 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardListener@@@Z @ 0x180309188 (-RuntimeClassInitialize@DummyWindow@CExperienceManagerAnimationHelper@@QEAAJPEAUIDWMStoryboardLi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::AsWeak<IDWMStoryboardListener>(
        __int64 (__fastcall ***a1)(_QWORD, GUID *, __int64 *),
        __int64 *a2)
{
  __int64 (__fastcall **v2)(_QWORD, GUID *, __int64 *); // rax
  int v4; // ebx
  int v5; // eax
  volatile int *v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(__int64, volatile int *); // rax
  __int64 (__fastcall *v10)(__int64, volatile int *); // rax
  __int64 v11; // rcx
  volatile int *v13; // [rsp+40h] [rbp+20h] BYREF
  __int64 v14; // [rsp+50h] [rbp+30h] BYREF

  v2 = *a1;
  v14 = 0LL;
  v4 = (*v2)(a1, &GUID_00000038_0000_0000_c000_000000000046, &v14);
  if ( v4 >= 0 )
  {
    v13 = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, volatile int **))(*(_QWORD *)v14 + 24LL))(v14, &v13);
    v6 = v13;
    v4 = v5;
    if ( v5 >= 0 )
    {
      v7 = (__int64)v13;
      if ( v13 )
      {
        (*(void (__fastcall **)(volatile int *))(*(_QWORD *)v13 + 8LL))(v13);
        v6 = v13;
      }
      v8 = *a2;
      *a2 = v7;
      if ( v8 )
      {
        v9 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v8 + 16LL);
        if ( v9 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
          Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
            v8,
            v6);
        else
          v9(v8, v6);
        v6 = v13;
      }
      v4 = 0;
    }
    if ( v6 )
    {
      v13 = 0LL;
      v10 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v6 + 16LL);
      if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          (__int64)v6,
          v6);
      else
        ((void (__fastcall *)(volatile int *))v10)(v6);
    }
  }
  v11 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return (unsigned int)v4;
}
