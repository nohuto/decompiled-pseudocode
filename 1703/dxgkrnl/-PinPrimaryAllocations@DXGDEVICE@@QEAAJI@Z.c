/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C00C07C0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C0098B40 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C000DD94 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C000DF04 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  int v20; // ebp
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // r8
  _BYTE v29[40]; // [rsp+30h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 452) )
  {
    v22 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v22 + 24) = 3492LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v23 + 24) = 3493LL;
    WdLogEvent5_WdAssertion(v23);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 225)) )
  {
    v24 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v24 + 24) = 3494LL;
    WdLogEvent5_WdAssertion(v24);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v25 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    *(_QWORD *)(v25 + 24) = 3495LL;
    WdLogEvent5_WdAssertion(v25);
  }
  if ( (*((_DWORD *)this + v5 + 258) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 225) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_18:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v29,
      (struct _KTHREAD **)this + 32,
      v12,
      v13);
    *((_DWORD *)this + v5 + 258) |= 0x100u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v29,
    (struct _KTHREAD **)this + 32,
    v12,
    v13);
  v17 = 0LL;
  if ( !*((_DWORD *)this + v5 + 194) )
  {
LABEL_17:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v18 = *(_QWORD *)(*((_QWORD *)this + v5 + 81) + 8 * v17);
    if ( v18 )
    {
      v19 = *(unsigned int *)(*(_QWORD *)(v18 + 48) + 4LL);
      if ( (v19 & 1) == 0 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v19, v14, v15, v16);
        *(_QWORD *)(v26 + 24) = 3508LL;
        WdLogEvent5_WdAssertion(v26);
      }
      v20 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(*((_QWORD *)this + v5 + 81) + 8 * v17) + 24LL),
              0LL,
              0LL);
      if ( v20 < 0 )
        break;
    }
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= *((_DWORD *)this + v5 + 194) )
      goto LABEL_17;
  }
  if ( (_DWORD)v17 )
  {
    v27 = 0LL;
    do
    {
      v28 = *(_QWORD *)(v27 + *((_QWORD *)this + v5 + 81));
      if ( v28 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 432LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 440LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v28 + 24));
      v27 += 8LL;
      --v17;
    }
    while ( v17 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return (unsigned int)v20;
}
