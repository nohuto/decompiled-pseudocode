/*
 * XREFs of ?EnsureFramePool@CApplicationFrameService@@UEAAJXZ @ 0x18004E040
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_d @ 0x180006C40 (WPP_SF_d.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004F518 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?Add@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@PEA_K@Z @ 0x1800503A4 (-Add@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicy.c)
 *     ??$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PEAUIApplicationFrameManager@@PEAUIApplicationFrame@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@012@$$QEAPEAVCApplicationFrameService@@$$QEAPEAUIApplicationFrameManager@@$$QEAPEAUIApplicationFrame@@@Z @ 0x180050A84 (--$MakeAndInitialize@VCApplicationFrameWrapper@@V1@PEAVCApplicationFrameService@@PE_ea_180050A84.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  volatile signed __int32 *v12; // rcx
  __int64 v13; // rcx
  __int64 v15; // [rsp+40h] [rbp-30h] BYREF
  __int64 v16; // [rsp+48h] [rbp-28h] BYREF
  __int64 v17; // [rsp+50h] [rbp-20h] BYREF
  __int64 v18; // [rsp+58h] [rbp-18h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp-10h] BYREF
  int pvData; // [rsp+A0h] [rbp+30h] BYREF
  DWORD pcbData; // [rsp+A8h] [rbp+38h] BYREF
  __int64 v22; // [rsp+B0h] [rbp+40h] BYREF
  __int64 v23; // [rsp+B8h] [rbp+48h] BYREF

  v19[1] = -2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (unsigned int)++*((_DWORD *)this + 16);
  v3 = *((_QWORD *)this + 10);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v4 = 0;
  if ( v3 < v2 )
  {
    v15 = 0LL;
    v4 = CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v15);
    if ( v4 < 0 )
    {
      v5 = v15;
    }
    else
    {
      v22 = 0LL;
      v5 = v15;
      v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v15 + 24LL))(v15, &v22);
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
          pvData = 0;
          pcbData = 4;
          ValueW = RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\PPI\\DeviceCapabilities",
                     L"FullFrameUI",
                     0x10u,
                     0LL,
                     &pvData,
                     &pcbData);
          v8 = (unsigned __int16)ValueW | 0x80070000;
          if ( ValueW <= 0 )
            v8 = ValueW;
          if ( v8 < 0 || pvData == 1 )
          {
            v16 = 0LL;
            if ( (*(int (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 144LL))(v22, &v16) >= 0 )
              (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v16 + 88LL))(v16, 255LL, 24LL);
            v10 = v16;
            if ( v16 )
            {
              v16 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
            }
          }
        }
        v23 = 0LL;
        v17 = v22;
        v18 = v5;
        v19[0] = (char *)this - 40;
        v4 = Microsoft::WRL::Details::MakeAndInitialize<CApplicationFrameWrapper,CApplicationFrameWrapper,CApplicationFrameService *,IApplicationFrameManager *,IApplicationFrame *>(
               &v23,
               v19,
               &v18,
               &v17);
        if ( v4 < 0 )
          goto LABEL_21;
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        v11 = SHIsSameObject(
                *((int (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 18),
                *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v23 + 104));
        v4 = v11 == 0 ? 0x80070057 : 0;
        if ( v11 )
          v4 = CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::Add(
                 (char *)this + 72,
                 &v23);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        if ( v4 < 0 )
LABEL_21:
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, v22);
        v12 = (volatile signed __int32 *)v23;
        if ( v23 )
        {
          v23 = 0LL;
          if ( _InterlockedExchangeAdd(v12 + 13, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v12 + 256LL))(v12, 1LL);
            if ( Microsoft::WRL::Details::ModuleBase::module_ )
              (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                   + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
          }
          v5 = v15;
        }
      }
      v13 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v4 >= 0 && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xAu,
          &WPP_527c504cd8e237716dcb46030ca89a63_Traceguids,
          *((_DWORD *)this + 16));
    }
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (unsigned int)v4;
}
