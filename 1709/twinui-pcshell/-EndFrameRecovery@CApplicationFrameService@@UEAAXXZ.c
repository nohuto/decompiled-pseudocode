/*
 * XREFs of ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18004DEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004F518 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x180050280 (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x18005030C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationFrameService::EndFrameRecovery(CApplicationFrameService *this)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rdi
  unsigned __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v8; // [rsp+30h] [rbp-20h]
  __int64 v9; // [rsp+38h] [rbp-18h]
  unsigned __int64 v10; // [rsp+40h] [rbp-10h]
  __int64 v11; // [rsp+88h] [rbp+38h] BYREF
  __int64 v12; // [rsp+90h] [rbp+40h]

  if ( *((_BYTE *)this + 192) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v9 = 0LL;
    v2 = *((_QWORD *)this + 9);
    v3 = *((_QWORD *)this + 10);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 10) = 0LL;
    *((_QWORD *)this + 12) = 0LL;
    v7 = v2;
    v8 = v3;
    v10 = v3;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v11 = 0LL;
    if ( (int)CApplicationFrameService::_EnsureFrameManager((char *)this - 40, 1LL, &v11) >= 0 && v3 )
    {
      v4 = v3 - 1;
      v5 = 8 * v3;
      do
      {
        v6 = *(_QWORD *)(v5 + v2 - 8);
        v12 = v6;
        if ( v6 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v6 + 52));
          v6 = v12;
        }
        if ( v4 < v8 )
          CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
            &v7,
            v4);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v11, *(_QWORD *)(v6 + 96));
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 52), 0xFFFFFFFF) == 1 )
        {
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v12 + 256LL))(v12, 1LL);
          if ( Microsoft::WRL::Details::ModuleBase::module_ )
            (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                                 + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
        }
        v5 -= 8LL;
        --v4;
        --v3;
        v2 = v7;
      }
      while ( v3 );
    }
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v2 )
      CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll(&v7);
  }
}
