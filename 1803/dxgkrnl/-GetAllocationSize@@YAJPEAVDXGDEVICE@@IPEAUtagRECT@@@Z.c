/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01C91E8
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01D355C (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0016650 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00E5A90 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00E8320 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00E8360 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, __int64 a2, struct tagRECT *a3)
{
  __int64 v4; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rcx
  struct DXGPROCESS *v8; // rbx
  __int64 v9; // rax
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // r9
  int v14; // edx
  struct _EX_RUNDOWN_REF *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbp
  __int64 v19; // rcx
  _QWORD *v20; // rax
  unsigned int v21; // ebx
  __int64 v22; // r8
  __int64 v23; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v25; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v26; // [rsp+88h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1, a2);
  v8 = Current;
  if ( !Current )
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = 2557LL;
    WdLogEvent5_WdError(v9);
    return -1073741811LL;
  }
  v11 = (char *)Current + 208;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 208));
  v12 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v12 < *((_DWORD *)v8 + 62)
    && (v13 = *((_QWORD *)v8 + 29),
        v14 = *(_DWORD *)(v13 + 16 * v12 + 8),
        (((unsigned int)v4 >> 25) & 0x60) == (*(_BYTE *)(v13 + 16 * v12 + 8) & 0x60))
    && (v14 & 0x2000) == 0
    && (v14 & 0x1F) == 5 )
  {
    v15 = *(struct _EX_RUNDOWN_REF **)(v13 + 16LL * (unsigned int)v12);
  }
  else
  {
    v15 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v26, v15);
  ExReleasePushLockSharedEx(v11, 0LL);
  KeLeaveCriticalRegion();
  if ( !v26 )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = v4;
LABEL_15:
    WdLogEvent5_WdError(v17);
    v21 = -1073741823;
    goto LABEL_17;
  }
  v18 = *((_QWORD *)a1 + 2);
  v19 = *(_QWORD *)(v26[1].Count + 16);
  if ( *(_QWORD *)(v19 + 16) == *(_QWORD *)(v18 + 16) )
  {
    memset(&v25, 0, sizeof(v25));
    v25.hAllocation = *(HANDLE *)(v26[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v18 + 16) + 2464LL), &v25, v22) >= 0 )
    {
      Width = v25.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      v21 = 0;
      a3->bottom = v25.Height;
      goto LABEL_17;
    }
    v17 = WdLogNewEntry5_WdError(v23);
    *(_QWORD *)(v17 + 24) = v25.hAllocation;
    *(_QWORD *)(v17 + 32) = a1;
    goto LABEL_15;
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
  v21 = -1073741811;
  v20[3] = a1;
  v20[4] = v26;
  v20[5] = -1073741811LL;
  WdLogEvent5_WdError(v20);
LABEL_17:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v26);
  return v21;
}
