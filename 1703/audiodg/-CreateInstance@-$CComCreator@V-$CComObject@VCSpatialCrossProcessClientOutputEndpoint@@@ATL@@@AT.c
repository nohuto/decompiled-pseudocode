/*
 * XREFs of ?CreateInstance@?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058820
 * Callers:
 *     ?CreateInstance@?$CComCreator2@V?$CComCreator@V?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@ATL@@V?$CComCreator@V?$CComAggObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@@2@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140058580 (-CreateInstance@-$CComCreator2@V-$CComCreator@V-$CComObject@VCSpatialCrossProcessClientOutputEnd.c)
 * Callees:
 *     ?Init@CComCriticalSection@ATL@@QEAAJXZ @ 0x14000493C (-Init@CComCriticalSection@ATL@@QEAAJXZ.c)
 *     ?AERTAllocate@@YAPEAX_KPEAX@Z @ 0x140016C70 (-AERTAllocate@@YAPEAX_KPEAX@Z.c)
 *     ?AERTGetDLLRTHeap@@YAPEAXXZ @ 0x140019BD8 (-AERTGetDLLRTHeap@@YAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x14001E780 (_guard_dispatch_icall_nop.c)
 *     ??0?$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z @ 0x1400575B0 (--0-$CComObject@VCSpatialCrossProcessClientOutputEndpoint@@@ATL@@QEAA@PEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ATL::CComCreator<ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>>::CreateInstance(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  _QWORD *v3; // r14
  __int64 v4; // r15
  unsigned int v6; // esi
  void *v7; // rax
  CSpatialCrossProcessClientOutputEndpoint *v8; // rax
  CSpatialCrossProcessClientOutputEndpoint *v9; // rdi
  int v10; // eax
  CSpatialCrossProcessClientOutputEndpoint *v13; // [rsp+78h] [rbp+20h]

  v3 = a3;
  v4 = a2;
  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v6 = -2147024882;
  try
  {
    v7 = (void *)AERTGetDLLRTHeap();
    v8 = (CSpatialCrossProcessClientOutputEndpoint *)AERTAllocate(0x430uLL, v7);
    if ( v8 )
      v9 = ATL::CComObject<CSpatialCrossProcessClientOutputEndpoint>::CComObject<CSpatialCrossProcessClientOutputEndpoint>(v8);
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
    _InterlockedIncrement((volatile signed __int32 *)v9 + 246);
    v10 = ATL::CComCriticalSection::Init((struct _RTL_CRITICAL_SECTION *)((char *)v9 + 992));
    if ( v10 >= 0 )
    {
      *((_BYTE *)v9 + 1032) = 1;
      v10 = 0;
    }
    v6 = 0;
    if ( v10 < 0 )
      v6 = v10;
    _InterlockedDecrement((volatile signed __int32 *)v9 + 246);
    if ( v6
      || (v6 = (**(__int64 (__fastcall ***)(CSpatialCrossProcessClientOutputEndpoint *, __int64, _QWORD *))v9)(
                 v9,
                 v4,
                 v3)) != 0 )
    {
      (*(void (__fastcall **)(CSpatialCrossProcessClientOutputEndpoint *, __int64))(*(_QWORD *)v9 + 64LL))(v9, 1LL);
    }
  }
  return v6;
}
