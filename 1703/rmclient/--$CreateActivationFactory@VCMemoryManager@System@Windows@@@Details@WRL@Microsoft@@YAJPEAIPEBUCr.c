/*
 * XREFs of ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001B90
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x180002A10 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001C30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@@Details@WRL@Microsoft@@YAJPEAPEAVCMem.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003A00 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$0N@@WRL@Microsoft@@U?$InterfaceList@UIMemoryManagerStatics2@System@Windows@@U?$InterfaceList@UIMemoryManagerStatics3@System@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@$00$0A@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180003A30 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$0N@@WRL@Microsoft@@U-$InterfaceList@UIMemory.c)
 *     _guard_dispatch_icall_nop @ 0x180008010 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
        _BYTE *a1,
        __int64 a2,
        const struct _GUID *a3,
        _QWORD *a4)
{
  int CanCastTo; // r14d
  int IsEqualGUID; // eax
  const struct _GUID *v10; // rcx
  __int64 v11; // r10
  __int64 result; // rax
  __int64 v13; // r8
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v14[0] = 0LL;
  CanCastTo = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager>(v14);
  if ( CanCastTo < 0 )
  {
    v11 = v14[0];
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a3, &GUID_00000035_0000_0000_c000_000000000046);
    v11 = v14[0];
    if ( IsEqualGUID )
    {
      *a4 = v14[0];
LABEL_4:
      if ( (*a1 & 4) == 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v11 + 36));
        v11 = v14[0];
      }
      result = 0LL;
      *(_DWORD *)(v11 + 56) = *(_DWORD *)a1;
      *(_QWORD *)(v11 + 48) = a2;
      return result;
    }
    if ( (unsigned int)InlineIsEqualGUID(v10, &GUID_5c6c279c_d7ca_4779_9188_4057219ce64c) )
    {
      *a4 = v13;
      goto LABEL_4;
    }
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<13>,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics2,Microsoft::WRL::Details::InterfaceList<Windows::System::IMemoryManagerStatics3,Microsoft::WRL::Details::Nil>>,1,0>::CanCastTo(
                  v13 + 8,
                  a3,
                  a4);
    if ( CanCastTo >= 0 )
      goto LABEL_4;
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  return (unsigned int)CanCastTo;
}
