/*
 * XREFs of ?PinPrimaryAllocations@DXGDEVICE@@QEAAJI@Z @ 0x1C018B600
 * Callers:
 *     ?RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z @ 0x1C010BB20 (-RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER@@QEAAJH@Z.c)
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_INTEGER@@@Z @ 0x1C00188A4 (-VidMmPinAllocation@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@PEAKPEAT_LARGE_.c)
 *     ?VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z @ 0x1C002C3D4 (-VidMmUnpinAllocation@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAU_VIDMM_MULTI_ALLOC@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::PinPrimaryAllocations(DXGDEVICE *this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // ebp
  __int64 v17; // r14
  __int64 v18; // r8
  _BYTE v19[40]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 424) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 3663LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3664LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 211)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3665LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 3666LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (*((_DWORD *)this + v3 + 262) & 0x100) != 0 )
    return 0LL;
  if ( *((_QWORD *)this + 211) != *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
LABEL_18:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
    *((_DWORD *)this + v3 + 262) |= 0x100u;
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    return 0LL;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v19, (struct _KTHREAD **)this + 32);
  v10 = 0LL;
  if ( !*((_DWORD *)this + v3 + 198) )
  {
LABEL_17:
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
    goto LABEL_18;
  }
  while ( 1 )
  {
    v11 = *((_QWORD *)this + v3 + 83);
    v12 = *(_QWORD *)(v11 + 8 * v10);
    if ( v12 )
    {
      v13 = *(unsigned int *)(*(_QWORD *)(v12 + 48) + 4LL);
      if ( (v13 & 1) == 0 )
      {
        v14 = WdLogNewEntry5_WdAssertion(v13);
        *(_QWORD *)(v14 + 24) = 3679LL;
        WdLogEvent5_WdAssertion(v14);
        v11 = *((_QWORD *)this + v3 + 83);
      }
      v15 = VIDMM_EXPORT::VidMmPinAllocation(
              *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
              *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
              *(struct _VIDMM_MULTI_ALLOC **)(*(_QWORD *)(v11 + 8 * v10) + 24LL),
              0LL,
              0LL);
      if ( v15 < 0 )
        break;
    }
    v10 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v10 >= *((_DWORD *)this + v3 + 198) )
      goto LABEL_17;
  }
  if ( (_DWORD)v10 )
  {
    v17 = 0LL;
    do
    {
      v18 = *(_QWORD *)(v17 + *((_QWORD *)this + v3 + 83));
      if ( v18 )
        VIDMM_EXPORT::VidMmUnpinAllocation(
          *(VIDMM_EXPORT **)(*((_QWORD *)this + 2) + 544LL),
          *(struct VIDMM_GLOBAL **)(*((_QWORD *)this + 2) + 552LL),
          *(struct _VIDMM_MULTI_ALLOC **)(v18 + 24));
      v17 += 8LL;
      --v10;
    }
    while ( v10 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v19);
  return (unsigned int)v15;
}
