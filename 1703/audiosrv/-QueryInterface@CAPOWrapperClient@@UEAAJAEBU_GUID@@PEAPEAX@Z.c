/*
 * XREFs of ?QueryInterface@CAPOWrapperClient@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800133A0
 * Callers:
 *     ?InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180013500 (-InitializeSystemEffectsInterfaceOOP@CAPOWrapperClient@@UEAAJPEAUIMMDevice@@PEAU_GUID@@U3@HW4__M.c)
 *     ?QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058A80 (-QueryInterface@CAPOWrapperClient@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058A90 (-QueryInterface@CAPOWrapperClient@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058AA0 (-QueryInterface@CAPOWrapperClient@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180058AB0 (-QueryInterface@CAPOWrapperClient@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180008C40 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$InterfaceList@UIAudioProcessingObjectInternal@@VNil@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18004D04C (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$InterfaceList@UIAudioPr.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAPOWrapperClient::QueryInterface(CAPOWrapperClient *this, const struct _GUID *a2, void **a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  unsigned int Data1; // ecx
  char *v8; // rdx
  __int64 (__fastcall *v9)(); // rax
  __int64 result; // rax
  void *v11; // rdx
  int CanCastTo; // eax
  __int64 v13; // r9
  char *v14; // r10

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
      v9 = *(__int64 (__fastcall **)())(*(_QWORD *)this + 8LL);
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
        }
        else
        {
          v11 = v8 + 8;
          if ( Data1 == -1157719598
            && *(_DWORD *)&a2->Data2 == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data2
            && *(_DWORD *)a2->Data4 == *(_DWORD *)GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4
            && *(_DWORD *)&a2->Data4[4] == *(_DWORD *)&GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56.Data4[4] )
          {
            *a3 = v11;
            CanCastTo = 0;
          }
          else if ( InlineIsEqualGUID(a2, &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768) )
          {
            *a3 = v14;
            CanCastTo = 0;
          }
          else
          {
            CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>,1,0>::CanCastTo(
                          v14 + 8,
                          v13);
          }
          v6 = CanCastTo;
          if ( CanCastTo < 0 )
            return v6;
        }
      }
      v9 = *(__int64 (__fastcall **)())(*(_QWORD *)*a3 + 8LL);
      if ( v9 == Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IAPOWrapperClient,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObject,Microsoft::WRL::Details::InterfaceList<IAudioSystemEffects2,Microsoft::WRL::Details::InterfaceList<IAPOAuxiliaryInputConfiguration,Microsoft::WRL::Details::InterfaceList<IAudioProcessingObjectInternal,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef )
      {
        _InterlockedIncrement((volatile signed __int32 *)*a3 + 11);
        return v6;
      }
    }
    v9();
    return v6;
  }
  result = 2147500034LL;
  *a3 = 0LL;
  return result;
}
