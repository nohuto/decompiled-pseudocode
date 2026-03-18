/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C019D5A8
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C00038C8 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 i; // rbp
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 420) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3490LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3491LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 209)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3492LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 82) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 3493LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 32);
  *((_DWORD *)this + v3 + 258) &= ~0x200u;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 194); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10);
      v13[3] = *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i);
      v13[4] = (unsigned int)i;
      v13[5] = v3;
      v14 = *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i) + 48LL) + 4LL);
      if ( (v14 & 0x10) != 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v14);
        *(_QWORD *)(v15 + 24) = 3505LL;
        WdLogEvent5_WdAssertion(v15);
      }
      VIDMM_EXPORT::VidMmInvalidateAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
        *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i) + 48LL) + 8LL));
      v11 = *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i);
      *(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1032);
    }
  }
  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v3, 0LL, 0, 1u);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
}
