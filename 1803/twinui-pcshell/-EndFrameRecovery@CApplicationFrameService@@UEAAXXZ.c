/*
 * XREFs of ?EndFrameRecovery@CApplicationFrameService@@UEAAXXZ @ 0x180129DD0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameManager@@@Z @ 0x18008146C (-_EnsureFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@PEAPEAUIApplicationFrameMana.c)
 *     ?InternalRelease@?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ @ 0x180094544 (-InternalRelease@-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x1800F9100 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTP.c)
 *     ?IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ @ 0x1801082C0 (-IncrementStrongReference@StrongReference@Details@WRL@Microsoft@@QEAAKXZ.c)
 *     ??0?$CCoSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAA@$$QEAV0@@Z @ 0x1801290EC (--0-$CCoSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CSimpleAr.c)
 *     ?RemoveAll@?$CTSimpleArray@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@@@@@QEAAXXZ @ 0x18012A78C (-RemoveAll@-$CTSimpleArray@V-$ComPtr@VCApplicationFrameWrapper@@@WRL@Microsoft@@$0PPPPPPPO@V-$CT.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CApplicationFrameService::EndFrameRecovery(CApplicationFrameService *this)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  signed __int64 v4; // rax
  signed __int64 v5; // rtt
  _QWORD v6[5]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v7; // [rsp+60h] [rbp+10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+18h] BYREF

  if ( *((_BYTE *)this + 184) )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::CCoSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>(
      v6,
      (__int64 *)this + 8);
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v7 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    if ( (int)CApplicationFrameService::_EnsureFrameManager((__int64)this - 40, 1, &v7) >= 0 )
    {
      v2 = v6[1];
      while ( v2 )
      {
        v3 = *(_QWORD *)(v6[0] + 8 * v2 - 8);
        v8 = v3;
        if ( v3 )
        {
          v4 = *(_QWORD *)(v3 + 72);
          while ( v4 >= 0 )
          {
            if ( (_DWORD)v4 != 0x7FFFFFFF )
            {
              v5 = v4;
              v4 = _InterlockedCompareExchange64((volatile signed __int64 *)(v3 + 72), v4 + 1, v4);
              if ( v5 != v4 )
                continue;
            }
            goto LABEL_11;
          }
          Microsoft::WRL::Details::StrongReference::IncrementStrongReference(
            (Microsoft::WRL::Details *)(2 * v4 + 16),
            (volatile int *)v3);
        }
LABEL_11:
        CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAt(
          v6,
          --v2);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 32LL))(v7, *(_QWORD *)(v8 + 120));
        Microsoft::WRL::ComPtr<CApplicationFrameWrapper>::InternalRelease(&v8);
      }
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v7);
    CTSimpleArray<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CApplicationFrameWrapper>>>::RemoveAll(v6);
  }
}
