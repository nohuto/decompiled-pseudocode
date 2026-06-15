/*
 * XREFs of ?GetStreamingResourceManager@CAudioDeviceGraph@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x14000E9D0
 * Callers:
 *     ?GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004C20 (-GetStreamingResourceManager@CSystemAudioDeviceSharedBase@@UEAAJPEAPEAUIAudioStreamingResourceRe.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x140002D00 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingResourceReg.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140002D60 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudioStreamingReso.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140004910 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphStreamingResourceManager@@@Z @ 0x140016A40 (--$MakeAndInitialize@VGraphStreamingResourceManager@@V1@@Details@WRL@Microsoft@@YAJPEAPEAVGraphS.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDeviceGraph::GetStreamingResourceManager(
        CAudioDeviceGraph *this,
        struct IAudioStreamingResourceRegistration **a2)
{
  _QWORD *v4; // rbx
  int v5; // edi
  volatile signed __int32 *v7; // r14
  __int64 (__fastcall *v8)(__int64, GUID *, _QWORD *); // rax
  int Interface; // eax
  __int64 (__fastcall *v10)(volatile signed __int32 *); // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]
  volatile signed __int32 *v13; // [rsp+50h] [rbp+8h] BYREF

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 216);
  v12 = 0;
  ATL::CCritSecLock::Lock(&lpCriticalSection);
  v4 = (_QWORD *)((char *)this + 352);
  *a2 = 0LL;
  if ( *v4 )
    goto LABEL_2;
  v13 = 0LL;
  *v4 = 0LL;
  v5 = Microsoft::WRL::Details::MakeAndInitialize<GraphStreamingResourceManager,GraphStreamingResourceManager>(&v13);
  if ( v5 >= 0 )
  {
    v7 = v13;
    v8 = **(__int64 (__fastcall ***)(__int64, GUID *, _QWORD *))v13;
    if ( (char *)v8 == (char *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface )
      Interface = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
                    (__int64)v13,
                    &GUID_be7a4789_2891_49b3_923e_dc97de058472,
                    v4);
    else
      Interface = v8((__int64)v13, &GUID_be7a4789_2891_49b3_923e_dc97de058472, v4);
    v5 = Interface;
    v10 = *(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 16LL);
    if ( v10 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v7);
    else
      v10(v7);
  }
  if ( v5 >= 0 )
  {
LABEL_2:
    *a2 = (struct IAudioStreamingResourceRegistration *)*v4;
    if ( *v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 8LL))(*v4);
    v5 = 0;
  }
  if ( v12 )
    LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v5;
}
