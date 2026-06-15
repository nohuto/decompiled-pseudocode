/*
 * XREFs of ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000B720
 * Callers:
 *     ?GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@W4APO_TYPE@@W4SystemEffectPosition@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUICompositeSystemEffect@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180002760 (-GetInitializedSystemEffectInterface@CEndpointCharacteristics@@QEAAJPEAVSystemEffectDescriptor@@.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180065FE0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_180065FE0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180065FF0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_180065FF0.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICompositeSystemEffect@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180066000 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UICo_ea_180066000.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180005620 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ?SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z @ 0x180063378 (-SafeDecrementReferenceMultiThread@ATL@@YAKPEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

unsigned int __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,ICompositeSystemEffect,IAudioProcessingObject,IAudioSystemEffects2,IAudioProcessingObjectInternal>::Release(
        int *a1)
{
  unsigned int result; // eax
  unsigned int v3; // ebp
  void *(__fastcall *v4)(CCompositeSystemEffect *__hidden, unsigned int); // rax
  __int64 v5; // rcx
  char *v6; // rcx
  int v7; // esi
  __int64 v8; // rdi
  __int64 v9; // rdx
  void *v10; // rcx
  int v11; // edi
  void *v12; // rcx

  result = ATL::SafeDecrementReferenceMultiThread(a1 + 9);
  v3 = result;
  if ( !result )
  {
    if ( a1 )
    {
      v4 = *(void *(__fastcall **)(CCompositeSystemEffect *__hidden, unsigned int))(*(_QWORD *)a1 + 40LL);
      if ( v4 == CCompositeSystemEffect::`vector deleting destructor' )
      {
        v5 = *((_QWORD *)a1 + 13);
        if ( v5 )
        {
          *((_QWORD *)a1 + 13) = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
        }
        v6 = (char *)*((_QWORD *)a1 + 11);
        if ( v6 )
        {
          v7 = 0;
          if ( a1[24] > 0 )
          {
            v8 = 0LL;
            do
            {
              v6 = (char *)*((_QWORD *)a1 + 11);
              v9 = *(_QWORD *)&v6[v8];
              if ( v9 )
              {
                *(_QWORD *)&v6[v8] = 0LL;
                (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
                v6 = (char *)*((_QWORD *)a1 + 11);
              }
              ++v7;
              v8 += 8LL;
            }
            while ( v7 < a1[24] );
          }
          free(v6);
          *((_QWORD *)a1 + 11) = 0LL;
        }
        *((_QWORD *)a1 + 12) = 0LL;
        v10 = (void *)*((_QWORD *)a1 + 9);
        if ( v10 )
        {
          v11 = 0;
          if ( a1[20] > 0 )
          {
            do
              Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)(*((_QWORD *)a1 + 9) + 8LL * v11++));
            while ( v11 < a1[20] );
            v10 = (void *)*((_QWORD *)a1 + 9);
          }
          free(v10);
          *((_QWORD *)a1 + 9) = 0LL;
        }
        *((_QWORD *)a1 + 10) = 0LL;
        v12 = (void *)*((_QWORD *)a1 + 7);
        if ( v12 )
        {
          free(v12);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        *((_QWORD *)a1 + 8) = 0LL;
        a1[9] = -1073741823;
        operator delete(a1, (const struct std::nothrow_t *)0x70);
      }
      else
      {
        v4((CCompositeSystemEffect *)a1, 1u);
      }
    }
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    return v3;
  }
  return result;
}
