/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18004BB90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180006BA0 (WPP_SF_d.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004CF68 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@PEA_K@Z @ 0x18004DC40 (-Add@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEBQEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x18004E338 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@QEAVCApplicationFrameService@@PE_ea_18004E338.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationFrameService::EnsureFramePool(CApplicationFrameService *this)
{
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  signed int v4; // esi
  __int64 v5; // rbx
  DWORD v6; // eax
  LSTATUS ValueW; // eax
  signed int v8; // ecx
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  _QWORD v16[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 pvData; // [rsp+90h] [rbp+30h] BYREF
  __int64 pcbData; // [rsp+98h] [rbp+38h] BYREF
  __int64 v19; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+48h] BYREF

  v16[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 12);
  v3 = *((_QWORD *)this + 8);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v15 = 0LL;
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 32, 1LL, &v15);
    v5 = v15;
    if ( v4 >= 0 )
    {
      v19 = 0LL;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v19);
      if ( v4 >= 0 )
      {
        v6 = `IsPPIEdition'::`2'::s_dwProductType;
        if ( !`IsPPIEdition'::`2'::s_dwProductType )
        {
          GetProductInfo(0xAu, 0, 0, 0, &`IsPPIEdition'::`2'::s_dwProductType);
          v6 = 0;
          `IsPPIEdition'::`2'::s_dwProductType = 0;
        }
        if ( v6 == 119 )
        {
          LODWORD(pvData) = 0;
          LODWORD(pcbData) = 4;
          ValueW = RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\PPI\\DeviceCapabilities",
                     L"FullFrameUI",
                     0x10u,
                     0LL,
                     &pvData,
                     (LPDWORD)&pcbData);
          v8 = (unsigned __int16)ValueW | 0x80070000;
          if ( ValueW <= 0 )
            v8 = ValueW;
          if ( v8 < 0 || (_DWORD)pvData == 1 )
          {
            pvData = 0LL;
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 144LL))(v19, &pvData) >= 0 )
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)pvData + 88LL))(pvData, 255LL, 24LL);
            v10 = pvData;
            if ( pvData )
            {
              pvData = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
          }
        }
        v20 = 0LL;
        pvData = v19;
        pcbData = v5;
        v16[0] = (char *)this - 32;
        v4 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService * const,IApplicationFrameManager *,IApplicationFrame *>(
               &v20,
               v16,
               &pcbData,
               &pvData);
        if ( v4 < 0 )
          goto LABEL_21;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v11 = -(int)SHIsSameObject(
                      *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 16),
                      *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v20 + 88));
        v4 = v11 == 0 ? 0x80070057 : 0;
        if ( v11 )
          v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::Add(
                 (char *)this + 56,
                 &v20);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_21:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v19);
        v12 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v12);
        }
      }
      v13 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xAu,
          &WPP_527c504cd8e237716dcb46030ca89a63_Traceguids,
          *((_DWORD *)this + 12));
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
