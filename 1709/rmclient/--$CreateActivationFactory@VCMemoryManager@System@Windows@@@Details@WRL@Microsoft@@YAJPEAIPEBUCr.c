/*
 * XREFs of ??$CreateActivationFactory@VCMemoryManager@System@Windows@@@Details@WRL@Microsoft@@YAJPEAIPEBUCreatorMap@012@AEBU_GUID@@PEAPEAUIUnknown@@@Z @ 0x180001E80
 * Callers:
 *     ??$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAPEAUIActivationFactory@@@Z @ 0x1800036C0 (--$GetActivationFactory@$00@Details@WRL@Microsoft@@YAJPEAVModuleBase@012@PEBGPEAUHSTRING__@@PEAP.c)
 * Callees:
 *     ??$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVCMemoryManager@System@Windows@@@Z @ 0x180001F30 (--$MakeAndInitialize@VCMemoryManager@System@Windows@@V123@$$V@Details@WRL@Microsoft@@YAJPEAPEAVC.c)
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x180003690 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180008290 (_guard_dispatch_icall_nop.c)
 *     ??$CanCastToHelper@$0A@@?$ImplementsHelper@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryManagerStatics@System@Windows@@UIMemoryManagerStatics2@56@UIMemoryManagerStatics3@56@UIMemoryManagerStatics4@56@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x18000A088 (--$CanCastToHelper@$0A@@-$ImplementsHelper@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00UIMemoryMa.c)
 *     ?CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18000A120 (-CanCastTo@FtmBase@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAX@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::CreateActivationFactory<Windows::System::CMemoryManager>(
        _BYTE *a1,
        __int64 a2,
        const struct _GUID *a3,
        void **a4)
{
  int v8; // r15d
  int IsEqualGUID; // eax
  __int64 v10; // rbx
  __int64 result; // rax
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v12[0] = 0LL;
  v8 = Microsoft::WRL::Details::MakeAndInitialize<Windows::System::CMemoryManager,Windows::System::CMemoryManager,>(v12);
  if ( v8 < 0 )
  {
    v10 = v12[0];
  }
  else
  {
    IsEqualGUID = InlineIsEqualGUID(a3, &GUID_00000035_0000_0000_c000_000000000046);
    v10 = v12[0];
    if ( IsEqualGUID )
    {
      *a4 = (void *)v12[0];
LABEL_4:
      if ( (*a1 & 4) == 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v10 + 116));
        v10 = v12[0];
      }
      result = 0LL;
      *(_DWORD *)(v10 + 136) = *(_DWORD *)a1;
      *(_QWORD *)(v10 + 128) = a2;
      return result;
    }
    if ( Microsoft::WRL::FtmBase::CanCastTo((Microsoft::WRL::FtmBase *)(v12[0] + 8LL), a3, a4) < 0 )
    {
      v8 = -2147467262;
      if ( (int)Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Windows::System::IMemoryManagerStatics,Windows::System::IMemoryManagerStatics2,Windows::System::IMemoryManagerStatics3,Windows::System::IMemoryManagerStatics4>::CanCastToHelper<0>(
                  v10 + 48,
                  a3) >= 0 )
        v8 = 0;
    }
    else
    {
      v8 = 0;
    }
    if ( v8 >= 0 )
      goto LABEL_4;
  }
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return (unsigned int)v8;
}
