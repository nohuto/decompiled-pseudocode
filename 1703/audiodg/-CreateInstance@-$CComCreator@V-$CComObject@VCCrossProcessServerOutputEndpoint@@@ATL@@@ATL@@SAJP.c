/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051DF0
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessServerOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051550 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessServerOutputEndpoint@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004FDC4 (--0-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CCrossProcessServerOutputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  CCrossProcessServerOutputEndpoint *v8; // rax
  CCrossProcessServerOutputEndpoint *v9; // rdi
  int v10; // eax
  CCrossProcessServerOutputEndpoint *v13; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (void *)AERTGetDLLRTHeap();
    v8 = (CCrossProcessServerOutputEndpoint *)AERTAllocate(0x238uLL, v7);
    if ( v8 )
      v9 = ATL::CComObject<CCrossProcessServerOutputEndpoint>::CComObject<CCrossProcessServerOutputEndpoint>(v8);
    else
      v9 = 0LL;
    v13 = v9;
  }
  catch ( ... )
  {
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v9 = v13;
  }
  if ( v9 )
  {
    _InterlockedIncrement((volatile signed __int32 *)v9 + 116);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 472));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 512) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    _InterlockedDecrement((volatile signed __int32 *)v9 + 116);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CCrossProcessServerOutputEndpoint *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CCrossProcessServerOutputEndpoint *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 1LL);
    }
  }
  return v6;
}
