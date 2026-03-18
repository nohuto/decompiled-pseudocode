/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C0093648
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C00E6690 (DxgkSetDisplayMode.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C00E8460 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000278C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C0003628 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C0003834 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rcx
  int v10; // ebp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  __int64 v17; // r8
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 420) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 3535LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v12 + 24) = 3536LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 209)) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v13 + 24) = 3537LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v14 + 24) = 3538LL;
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (*((_DWORD *)this + v3 + 258) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 209) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_16:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 258) |= 0x100u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v18, (struct _KTHREAD **)this + 32);
  v7 = 0LL;
  if ( !*((_DWORD *)this + v3 + 194) )
  {
LABEL_15:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
    goto LABEL_16;
  }
  while ( 1 )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * v7);
    if ( v8 )
    {
      v9 = *(unsigned int *)(*(_QWORD *)(v8 + 48) + 4LL);
      if ( (v9 & 1) == 0 )
      {
        v15 = WdLogNewEntry5_WdAssertion(v9);
        *(_QWORD *)(v15 + 24) = 3551LL;
        WdLogEvent5_WdAssertion(v15);
      }
      v10 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * v7) + 24LL),
              0LL,
              0LL);
      if ( v10 < 0 )
        break;
    }
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= *((_DWORD *)this + v3 + 194) )
      goto LABEL_15;
  }
  if ( (_DWORD)v7 )
  {
    v16 = 0LL;
    do
    {
      v17 = *(_QWORD *)(v16 + *((_QWORD *)this + v3 + 81));
      if ( v17 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 528LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 536LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v17 + 24));
      v16 += 8LL;
      --v7;
    }
    while ( v7 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v18);
  return (unsigned int)v10;
}
