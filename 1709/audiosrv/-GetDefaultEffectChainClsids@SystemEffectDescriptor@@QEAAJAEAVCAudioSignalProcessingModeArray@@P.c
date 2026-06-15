/*
 * XREFs of ?GetDefaultEffectChainClsids@SystemEffectDescriptor@@QEAAJAEAVCAudioSignalProcessingModeArray@@PEAIPEAPEAU_GUID@@@Z @ 0x1800BC5D4
 * Callers:
 *     _lambda_9b7b4ff0acd9889e01bbf173a6c75851_::operator() @ 0x1800B0328 (_lambda_9b7b4ff0acd9889e01bbf173a6c75851_--operator().c)
 *     ?AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ @ 0x1800B16C8 (-AddProcessingModeSupport_for_VSS@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BD9F8 (-GetAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSy.c)
 *     ?GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@@PEAVSystemEffectDescriptor@@U_GUID@@PEAW4INBOX_AEC_INSERTION_POLICY@@AEAU_AEC_POLICY_RESULTS@@@Z @ 0x1800BDBCC (-GetDelayedAECInsertionPolicy@EffectPolicy@@SAJPEAVCEndpointCharacteristics@@PEAUIPropertyStore@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800353A0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memcpy_0 @ 0x180036B8F (memcpy_0.c)
 *     ?Allocate@?$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18005C878 (-Allocate@-$CHeapPtr@U_GUID@@VCComAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??4?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z @ 0x1800B00F4 (--4-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAAEAV01@AEBV01@@Z.c)
 *     ?RemoveAll@?$CSimpleArray@U_GUID@@V?$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ @ 0x1800B79E4 (-RemoveAll@-$CSimpleArray@U_GUID@@V-$CSimpleArrayEqualHelper@U_GUID@@@ATL@@@ATL@@QEAAXXZ.c)
 */

__int64 __fastcall SystemEffectDescriptor::GetDefaultEffectChainClsids(
        SystemEffectDescriptor *this,
        struct CAudioSignalProcessingModeArray *a2,
        unsigned int *a3,
        struct _GUID **a4)
{
  __int64 v8; // rdx
  __int64 v9; // rsi
  int v10; // eax
  __int64 v12; // rdi
  unsigned __int64 v13; // rdx
  struct _GUID *v14; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  LPVOID pv; // [rsp+40h] [rbp+8h] BYREF

  ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::RemoveAll((__int64)a2);
  *a3 = 0;
  v8 = *((_QWORD *)this + 2);
  if ( v8 )
  {
    ATL::CSimpleArray<_GUID,ATL::CSimpleArrayEqualHelper<_GUID>>::operator=(a2, v8);
    v9 = *((_QWORD *)this + 2);
    v10 = *(_DWORD *)(v9 + 8);
    if ( *((_DWORD *)a2 + 2) != v10 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBC,
        (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
        (const char *)0x8007000ELL);
      return 2147942414LL;
    }
    v12 = 40LL;
    if ( v10 <= 0 )
      v12 = 56LL;
    if ( a4 )
    {
      v13 = *(int *)(v12 + v9 + 8);
      pv = 0LL;
      if ( !ATL::CHeapPtr<_GUID,ATL::CComAllocator>::Allocate(&pv, v13) )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC2,
          (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\systemeffect.cpp",
          (const char *)0x8007000ELL);
        CoTaskMemFree(pv);
        return 2147942414LL;
      }
      v14 = (struct _GUID *)pv;
      memcpy_0(pv, *(const void **)(v12 + v9), 16LL * *(int *)(v12 + v9 + 8));
      *a4 = v14;
      CoTaskMemFree(0LL);
    }
    *a3 = *(_DWORD *)(v12 + v9 + 8);
  }
  return 0LL;
}
