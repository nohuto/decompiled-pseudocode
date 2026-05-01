/*
 * XREFs of ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x18004B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18004CF68 (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ??0?$CCoSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAA@$$QEAV0@@Z @ 0x18004DD74 (--0-$CCoSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleAr.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIApplicationFrameProxy@@UIApplicationFrame@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004DF10 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIApplicationFrameProxy@@UIApplicati.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationFrameService::EndFrameRecovery(CApplicationFrameService *this)
{
  int v2; // eax
  unsigned __int64 v3; // rsi
  __int64 v4; // rbx
  unsigned __int64 v5; // r15
  __int64 *v6; // r14
  unsigned __int64 v7; // r13
  __int64 v8; // rdi
  signed __int32 v9; // eax
  __int64 v10; // rcx
  unsigned __int64 v11; // r12
  _QWORD *v12; // rdi
  unsigned __int64 i; // rbx
  __int64 v14; // rcx
  LPVOID pv; // [rsp+28h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+30h] [rbp-20h]
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  __int64 v18; // [rsp+98h] [rbp+48h]

  if ( *((_BYTE *)this + 176) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>(
      &pv,
      (char *)this + 56);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v17 = 0LL;
    v2 = CApplicationFrameService::_EnsureFrameManager((char *)this - 32, 1LL, &v17);
    v3 = v16;
    v4 = v17;
    if ( v2 >= 0 && v16 )
    {
      v5 = v16 - 1;
      v6 = (__int64 *)((char *)pv + 8 * v16 - 8);
      v7 = v16;
      do
      {
        v8 = *v6;
        v18 = v8;
        if ( v8 )
        {
          do
            v9 = *(_DWORD *)(v8 + 36);
          while ( v9 != 0x7FFFFFFF
               && v9 != _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 36), v9 + 1, v9) );
          v3 = v16;
          v4 = v17;
          v8 = v18;
        }
        if ( v5 < v3 )
        {
          v10 = *v6;
          if ( *v6 )
          {
            *v6 = 0LL;
            Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v10);
          }
          v11 = v3 - 1;
          if ( v5 != v3 - 1 )
            memmove(v6, v6 + 1, 8 * (v3 - v5) - 8);
          --v3;
          v16 = v11;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v4 + 32LL))(v4, *(_QWORD *)(v8 + 80));
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v8);
        --v5;
        --v6;
        --v7;
      }
      while ( v7 );
    }
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
    v12 = pv;
    if ( pv )
    {
      for ( i = 0LL; i < v3; ++i )
      {
        v14 = v12[i];
        if ( v14 )
        {
          v12[i] = 0LL;
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IApplicationFrameProxy,IApplicationFrame,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v14);
        }
      }
      CoTaskMemFree(v12);
    }
  }
}
