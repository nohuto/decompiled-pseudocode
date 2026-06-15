/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140052D90
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140052730 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x1400143AC (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x1400143D0 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017200 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E540 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x140050F50 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CCrossProcessClientOutputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  CCrossProcessClientOutputEndpoint *v8; // rax
  CCrossProcessClientOutputEndpoint *v9; // rdi
  int v10; // eax
  CCrossProcessClientOutputEndpoint *v13; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (void *)AERTGetDLLRTHeap();
    v8 = (CCrossProcessClientOutputEndpoint *)AERTAllocate(0x218uLL, v7);
    if ( v8 )
      v9 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v8);
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
    _InterlockedIncrement((volatile signed __int32 *)v9 + 118);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)v9 + 12);
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 520) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    _InterlockedDecrement((volatile signed __int32 *)v9 + 118);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CCrossProcessClientOutputEndpoint *, __int64, _QWORD *))v9)(v9, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CCrossProcessClientOutputEndpoint *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 1LL);
    }
  }
  return v6;
}
