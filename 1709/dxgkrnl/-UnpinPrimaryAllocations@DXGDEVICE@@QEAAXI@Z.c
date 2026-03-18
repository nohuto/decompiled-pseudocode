/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E09C
 * Callers:
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C00ACD28 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C010240C (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0174158 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0003DA0 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0003E74 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 i; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _BYTE v16[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 420) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 3627LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 3628LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 209)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v13 + 24) = 3629LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v14 + 24) = 3630LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((struct _KTHREAD **)this, v3) )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 209) == v7 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 32);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 194); i = (unsigned int)(i + 1) )
      {
        v9 = *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i);
        if ( v9 )
        {
          v10 = *(unsigned int *)(*(_QWORD *)(v9 + 48) + 4LL);
          if ( (v10 & 1) == 0 )
          {
            v15 = WdLogNewEntry5_WdAssertion(v10);
            *(_QWORD *)(v15 + 24) = 3646LL;
            WdLogEvent5_WdAssertion(v15);
          }
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
            *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6) + 24) = v3;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 258) &= 0xFFFFFCFF;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v3, 0LL, 0, 1u);
  }
}
