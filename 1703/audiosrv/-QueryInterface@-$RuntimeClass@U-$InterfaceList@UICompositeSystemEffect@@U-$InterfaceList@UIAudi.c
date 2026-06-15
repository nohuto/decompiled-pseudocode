/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800138E0
 * Callers:
 *     ?Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BB0 (-Initialize@CCompositeSystemEffect@@UEAAJPEAUIMMDevice@@U_GUID@@HW4__MIDL___MIDL_itf_audioengine.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800587B0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$Interfa_ea_1800587B0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800587C0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$Interfa_ea_1800587C0.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UICompositeSystemEffect@@U?$InterfaceList@UIAudioProcessingObject@@U?$InterfaceList@UIAudioSystemEffects2@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800587D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UICompositeSystemEffect@@U-$Interfa_ea_1800587D0.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004D04C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@UIAudioPr.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ICompositeSystemEffect,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v5; // r10
  unsigned int Data1; // edx
  void (*v7)(void); // rax
  const struct _GUID *v9; // rcx
  __int64 v10; // r9
  __int64 v11; // r10
  int CanCastTo; // eax

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  v5 = a1;
  Data1 = a2->Data1;
  if ( __PAIR64__(*(_DWORD *)&a2->Data2, Data1) == __PAIR64__(
                                                     *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                     0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
    v7 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
    goto LABEL_8;
  }
  if ( Data1 == 1611209239
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee.Data4[4]
    || InlineIsEqualGUID(a2, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10) )
  {
    *(_QWORD *)a3 = v5;
LABEL_7:
    v7 = *(void (**)(void))(**(_QWORD **)a3 + 8LL);
LABEL_8:
    v7();
    return v3;
  }
  if ( InlineIsEqualGUID(v9, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56) )
  {
    *(_QWORD *)a3 = v11;
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
                  v11 + 8,
                  v10);
  }
  v3 = CanCastTo;
  if ( CanCastTo >= 0 )
    goto LABEL_7;
  return v3;
}
