/*
 * XREFs of ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001E6C0
 * Callers:
 *     ??$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4FormatChangePosition@@AEAW4AUDIO_DIRECTION@@AEAIAEAPEBU_GUID@@@Z @ 0x18001E4E0 (--$MakeAndInitialize@VCCompositeSystemEffect@@UICompositeSystemEffect@@AEAW4APO_TYPE@@AEAW4Forma.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037300 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180037300.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037310 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180037310.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037320 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$_ea_180037320.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E750 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemE.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        __int64 a3)
{
  unsigned int v3; // ebx
  unsigned int Data1; // edx
  void (*v6)(void); // rax
  const struct _GUID *v8; // rcx
  __int64 v9; // r10
  int v10; // eax
  const struct _GUID *v11; // rcx
  __int64 v12; // r10
  __int64 v13; // r10

  v3 = 0;
  *(_QWORD *)a3 = 0LL;
  Data1 = a2->Data1;
  if ( __PAIR64__(*(_DWORD *)&a2->Data2, Data1) == __PAIR64__(
                                                     *(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2,
                                                     0)
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
    v6 = *(void (**)(void))(*(_QWORD *)a1 + 8LL);
    goto LABEL_10;
  }
  if ( Data1 == 1611209239
    && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee.Data2
    && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee.Data4
    && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_60091a17_6288_4f0a_a649_7b8e9028d2ee.Data4[4] )
  {
    *(_QWORD *)a3 = a1;
  }
  else
  {
    if ( InlineIsEqualGUID(a2, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10) )
    {
      *(_QWORD *)a3 = v9;
      v10 = 0;
    }
    else if ( InlineIsEqualGUID(v8, &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56) )
    {
      *(_QWORD *)a3 = v12;
      v10 = 0;
    }
    else if ( InlineIsEqualGUID(v11, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014) )
    {
      *(_QWORD *)a3 = v13 + 8;
      v10 = 0;
    }
    else
    {
      v10 = -2147467262;
    }
    v3 = v10;
    if ( v10 < 0 )
      return v3;
  }
  v6 = *(void (**)(void))(**(_QWORD **)a3 + 8LL);
  if ( (char *)v6 != (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::AddRef )
  {
LABEL_10:
    v6();
    return v3;
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::AddRef();
  return v3;
}
