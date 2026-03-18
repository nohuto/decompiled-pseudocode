/*
 * XREFs of ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C018C798
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0023A84 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C002F3E0 (-GetPinnedPrimary@DXGDEVICE@@QEAAII@Z.c)
 */

void __fastcall DXGDEVICE::UnpinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 i; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 424) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3755LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3756LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 211)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3757LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 3758LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (unsigned int)DXGDEVICE::GetPinnedPrimary((struct _KTHREAD **)this, v3) )
  {
    v13 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( *((_QWORD *)this + 211) == v13 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 198); i = (unsigned int)(i + 1) )
      {
        v15 = *((_QWORD *)this + v3 + 83);
        v16 = *(_QWORD *)(v15 + 8 * i);
        if ( v16 )
        {
          v17 = *(unsigned int *)(*(_QWORD *)(v16 + 48) + 4LL);
          if ( (v17 & 1) == 0 )
          {
            v18 = WdLogNewEntry5_WdAssertion(v17);
            *(_QWORD *)(v18 + 24) = 3774LL;
            WdLogEvent5_WdAssertion(v18);
            v15 = *((_QWORD *)this + v3 + 83);
          }
          VIDMM_EXPORT::VidMmUnpinAllocation(
            *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
            *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
            *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v15 + 8 * i) + 24LL));
        }
      }
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    }
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v10, v11, v12) + 24) = v3;
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 262) &= 0xFFFFFCFF;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v3, 0LL, 0, 1u);
  }
}
