/*
 * XREFs of ?InvalidatePrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C018AD10
 * Callers:
 *     ?DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z @ 0x1C0152D80 (-DisableAllPrimaries@ADAPTER_DISPLAY@@QEAAXPEAVADAPTER_RENDER@@@Z.c)
 *     ?DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z @ 0x1C0153370 (-DisablePrimaryAllocation@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@PEAVDXGALLOCATION@@@Z.c)
 *     ?DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z @ 0x1C0153734 (-DisablePrimaryOnDevice@ADAPTER_DISPLAY@@QEAAXPEAVDXGDEVICE@@IE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z @ 0x1C0023A84 (-SetDisplayedPrimary@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@IE@Z.c)
 *     ?VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@Z @ 0x1C0028188 (-VidMmInvalidateAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_GLOBAL_ALLOC@@@.c)
 */

void __fastcall DXGDEVICE::InvalidatePrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 i; // rsi
  _QWORD *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rax
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 424) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3618LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3619LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 211)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3620LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 82) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 3621LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
  *((_DWORD *)this + v3 + 262) &= ~0x200u;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 198); i = (unsigned int)(i + 1) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + v3 + 83) + 8 * i) )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdTrace(v11, v10, v12, v13);
      v15[3] = *(_QWORD *)(*((_QWORD *)this + v3 + 83) + 8 * i);
      v15[4] = (unsigned int)i;
      v15[5] = v3;
      v16 = *((_QWORD *)this + v3 + 83);
      v17 = *(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 48LL);
      if ( (*(_DWORD *)(v17 + 4) & 0x10) != 0 )
      {
        v18 = WdLogNewEntry5_WdAssertion(v17);
        *(_QWORD *)(v18 + 24) = 3633LL;
        WdLogEvent5_WdAssertion(v18);
        v16 = *((_QWORD *)this + v3 + 83);
      }
      VIDMM_EXPORT::VidMmInvalidateAllocation(
        *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
        *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
        *(struct _VIDMM_MULTI_GLOBAL_ALLOC **)(*(_QWORD *)(*(_QWORD *)(v16 + 8 * i) + 48LL) + 8LL));
      v11 = *(_QWORD *)(*((_QWORD *)this + v3 + 83) + 8 * i);
      *(_DWORD *)(*(_QWORD *)(v11 + 48) + 4LL) |= 0x10u;
      *(_QWORD *)(*((_QWORD *)this + v3 + 83) + 8 * i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1048);
    }
  }
  DXGDEVICE::SetDisplayedPrimary((struct _KTHREAD **)this, v3, 0LL, 0, 1u);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
}
