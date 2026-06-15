/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18001EE00
 * Callers:
 *     ??$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Details@WRL@Microsoft@@YAJPEAPEAUIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUID@@@Z @ 0x18001E2B0 (--$MakeAndInitialize@VCAPOWrapperClient@@UIAudioProcessingObject@@AEAPEBGAEAW4APO_TYPE@@AEBU_GUI.c)
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001F220 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037760 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037770 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037780 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180037790 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x18000D0D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient@@UIAudioProcessingObject@@UIAudioSystemEffects2@@UIAPOAuxiliaryInputConfiguration@@UIAudioProcessingObjectInternal@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001F480 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAPOWrapperClient.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::QueryInterface(CAPOWrapperClient *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int Data1; // ecx
  char *v8; // rdx
  int v9; // eax
  __int64 (*v10)(void); // rax
  __int64 result; // rax
  void *v12; // rdx
  const struct _GUID *v13; // rcx
  void *v14; // r10
  __int64 v15; // r10

  v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data1 )
    v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768.Data4;
  if ( v5 || *((_DWORD *)this + 16) )
  {
    v6 = 0;
    *a3 = 0LL;
    Data1 = a2->Data1;
    if ( *(_QWORD *)&a2->Data1 == __PAIR64__(*(unsigned int *)&GUID_00000000_0000_0000_c000_000000000046.Data2, 0)
      && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
      && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
    {
      *a3 = this;
      v10 = *(__int64 (**)(void))(*(_QWORD *)this + 8LL);
    }
    else
    {
      if ( Data1 == 1221972245
        && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data2
        && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4
        && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_48d5d115_0037_423d_a1d7_f4be39ae9dd6.Data4[4] )
      {
        *a3 = this;
      }
      else
      {
        v8 = (char *)this + 8;
        if ( Data1 == -41997527
          && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data2
          && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4
          && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10.Data4[4] )
        {
          *a3 = v8;
          v9 = 0;
        }
        else
        {
          v12 = v8 + 8;
          if ( Data1 == -1157719598
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4[4] )
          {
            *a3 = v12;
            v9 = 0;
          }
          else if ( InlineIsEqualGUID(a2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768) )
          {
            *a3 = v14;
            v9 = 0;
          }
          else if ( InlineIsEqualGUID(v13, &GUID_69e1f79f_6eae_4517_be9f_13aa90e30014) )
          {
            *a3 = (void *)(v15 + 8);
            v9 = 0;
          }
          else
          {
            v9 = -2147467262;
          }
        }
        v6 = v9;
        if ( v9 < 0 )
          return v6;
      }
      v10 = *(__int64 (**)(void))(*(_QWORD *)*a3 + 8LL);
      if ( v10 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::AddRef )
      {
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IAPOWrapperClient,IAudioProcessingObject,IAudioSystemEffects2,IAPOAuxiliaryInputConfiguration,IAudioProcessingObjectInternal>::AddRef();
        return v6;
      }
    }
    v10();
    return v6;
  }
  result = 2147500034LL;
  *a3 = 0LL;
  return result;
}
