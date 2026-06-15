/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140051658
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140050FF0 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCCrossProcessClientOutputEndpoint@@.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x140015B48 (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140015B70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140017944 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x14001D50C (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x14001D710 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x14004F6D0 (--0-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 *     ?InternalFinalConstructRelease@CCrossProcessClientInputEndpoint@@QEAAXXZ @ 0x140051B58 (-InternalFinalConstructRelease@CCrossProcessClientInputEndpoint@@QEAAXXZ.c)
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
  volatile int *v9; // rdx
  CCrossProcessClientOutputEndpoint *v10; // rdi
  int v11; // eax
  _QWORD v12[11]; // [rsp+0h] [rbp-58h] BYREF
  CCrossProcessClientOutputEndpoint *v15; // [rsp+78h] [rbp+20h]

  v12[4] = -2LL;
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
    v12[5] = v8;
    if ( v8 )
      v10 = ATL::CComObject<CCrossProcessClientOutputEndpoint>::CComObject<CCrossProcessClientOutputEndpoint>(v8);
    else
      v10 = 0LL;
    v15 = v10;
  }
  catch ( ... )
  {
    v9 = (volatile int *)v12;
    v3 = a3;
    v4 = a2;
    v6 = -2147024882;
    v10 = v15;
  }
  if ( v10 )
  {
    Microsoft::WRL::Details::SafeUnknownIncrementReference((CCrossProcessClientOutputEndpoint *)((char *)v10 + 472), v9);
    v11 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)v10 + 12);
    if ( v11 >= 0 )
    {
      *((_BYTE *)v10 + 520) = 1;
      v11 = 0;
    }
    v6 = 0;
    if ( v11 < 0 )
      v6 = v11;
    CCrossProcessClientInputEndpoint::InternalFinalConstructRelease(v10);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CCrossProcessClientOutputEndpoint *, __int64, _QWORD *))v10)(v10, v4, v3)) != 0 )
    {
      (*(void (__fastcall **)(CCrossProcessClientOutputEndpoint *, __int64))(*(_QWORD *)v10 + 64LL))(v10, 1LL);
    }
  }
  return v6;
}
