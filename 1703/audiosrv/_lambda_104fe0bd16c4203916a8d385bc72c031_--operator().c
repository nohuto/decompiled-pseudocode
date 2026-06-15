/*
 * XREFs of _lambda_104fe0bd16c4203916a8d385bc72c031_::operator() @ 0x18004C3D8
 * Callers:
 *     std::_Func_impl__lambda_104fe0bd16c4203916a8d385bc72c031__std::allocator_int__long_SystemEffectDescriptor_____ptr64_SystemEffectChainDescriptor_____ptr64_::_Do_call @ 0x18004CF80 (std--_Func_impl__lambda_104fe0bd16c4203916a8d385bc72c031__std--allocator_int__long_SystemEffectD.c)
 * Callees:
 *     ?UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IPEBU_GUID@@W4SED_APOPLACEMENT@@W4ConnectorSupportsMode@@@Z @ 0x180010434 (-UpdateEffectsInOverridingChain@SystemEffectDescriptor@@QEAAJPEAVSystemEffectChainDescriptor@@IP.c)
 *     ??1?$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ @ 0x18002C540 (--1-$CComHeapPtr@U_KSAUDIO_PACKETSIZE_CONSTRAINTS2@@@ATL@@QEAA@XZ.c)
 *     ?GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x1800330C0 (-GetDeviceFormat@CEndpointCharacteristics@@QEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?Find@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z @ 0x180033790 (-Find@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEBAHAEBU_GUID@@@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007ECA8 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z @ 0x1800BE13C (-IsDolbyMatFormat@CEndpointCharacteristics@@CA_NPEBUWAVEFORMATEXTENSIBLE@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_104fe0bd16c4203916a8d385bc72c031_::operator()(
        __int64 a1,
        unsigned int *a2,
        struct CAudioSignalProcessingModeArray *a3)
{
  int DeviceFormat; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdx
  int v9; // eax
  unsigned __int8 v10; // r11
  int v12; // [rsp+20h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  struct WAVEFORMATEXTENSIBLE *v14; // [rsp+50h] [rbp+8h] BYREF

  v14 = 0LL;
  DeviceFormat = CEndpointCharacteristics::GetDeviceFormat(
                   *(CEndpointCharacteristics **)a1,
                   0,
                   0,
                   a2[12],
                   (struct tWAVEFORMATEX **)&v14);
  v7 = DeviceFormat;
  if ( DeviceFormat >= 0 )
  {
    if ( v14->Format.wFormatTag == 0xFFFE )
      CEndpointCharacteristics::IsDolbyMatFormat(v14);
    v9 = ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::Find(
           (__int64 *)(*(_QWORD *)a1 + 64LL),
           &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3);
    DeviceFormat = SystemEffectDescriptor::UpdateEffectsInOverridingChain(
                     (SystemEffectDescriptor *)a2,
                     a3,
                     1u,
                     (_OWORD *)(a1 + 8),
                     v10 ^ 1u,
                     v9 != -1);
    v7 = DeviceFormat;
    if ( DeviceFormat >= 0 )
    {
      *((_BYTE *)a3 + 16) = 1;
      v7 = 0;
      goto LABEL_9;
    }
    v8 = 1377LL;
  }
  else
  {
    v8 = 1371LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\lib\\audioserviceutil\\endpointcharacteristics.cpp",
    (const char *)(unsigned int)DeviceFormat,
    v12);
LABEL_9:
  ATL::CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>::~CComHeapPtr<_KSAUDIO_PACKETSIZE_CONSTRAINTS2>((LPVOID *)&v14);
  return v7;
}
