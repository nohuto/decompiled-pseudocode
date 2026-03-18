/*
 * XREFs of ?GetAllocationSize@@YAJPEAVDXGDEVICE@@IPEAUtagRECT@@@Z @ 0x1C01AC960
 * Callers:
 *     ?ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUTEX@@PEAU_PRODUCER_INFO@@PEAH3@Z @ 0x1C01B3560 (-ProcessUpdateLowLevel@OUTPUTDUPL_CONTEXT@@AEAAJPEAU_OUTPUTDUPL_UPDATE_INFO@@PEAVDXGDXGIKEYEDMUT.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006E30 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00BF530 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z @ 0x1C00CCDB0 (--0DXGALLOCATIONREFERENCE@@QEAA@PEAVDXGALLOCATION@@@Z.c)
 *     ??1DXGALLOCATIONREFERENCE@@QEAA@XZ @ 0x1C00CCDF0 (--1DXGALLOCATIONREFERENCE@@QEAA@XZ.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall GetAllocationSize(struct DXGDEVICE *a1, unsigned int a2, struct tagRECT *a3)
{
  __int64 v4; // rbp
  struct DXGPROCESS *Current; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *v9; // rbx
  __int64 v10; // rax
  char *v12; // r14
  __int64 v13; // rdx
  __int64 v14; // r9
  int v15; // r8d
  __int64 v16; // rdx
  struct _EX_RUNDOWN_REF *v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbp
  __int64 v22; // rcx
  _QWORD *v23; // rax
  unsigned int v24; // ebx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rcx
  UINT Width; // eax
  struct _DXGKARG_DESCRIBEALLOCATION v31; // [rsp+20h] [rbp-48h] BYREF
  struct _EX_RUNDOWN_REF *v32; // [rsp+88h] [rbp+20h] BYREF

  v4 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v9 = Current;
  if ( !Current )
  {
    v10 = WdLogNewEntry5_WdError(v8, v7);
    *(_QWORD *)(v10 + 24) = 2476LL;
    WdLogEvent5_WdError(v10);
    return -1073741811LL;
  }
  v12 = (char *)Current + 168;
  DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 168));
  v13 = ((unsigned int)v4 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v13 < *((_DWORD *)v9 + 52)
    && (v14 = *((_QWORD *)v9 + 24),
        v15 = *(_DWORD *)(v14 + 16LL * (unsigned int)v13 + 8),
        (((unsigned int)v4 >> 26) & 0x30) == (*(_BYTE *)(v14 + 16LL * (unsigned int)v13 + 8) & 0x30))
    && (v15 & 0x1000) == 0
    && (v15 & 0xF) != 0
    && (v16 = 2 * v13, (*(_BYTE *)(v14 + 8 * v16 + 8) & 0xF) == 5) )
  {
    v17 = *(struct _EX_RUNDOWN_REF **)(v14 + 8 * v16);
  }
  else
  {
    v17 = 0LL;
  }
  DXGALLOCATIONREFERENCE::DXGALLOCATIONREFERENCE((DXGALLOCATIONREFERENCE *)&v32, v17);
  ExReleasePushLockSharedEx(v12, 0LL);
  KeLeaveCriticalRegion();
  if ( !v32 )
  {
    v20 = WdLogNewEntry5_WdError(v19, v18);
    *(_QWORD *)(v20 + 24) = v4;
LABEL_16:
    WdLogEvent5_WdError(v20);
    v24 = -1073741823;
    goto LABEL_18;
  }
  v21 = *((_QWORD *)a1 + 2);
  v22 = *(_QWORD *)(v32[1].Count + 16);
  if ( *(_QWORD *)(v22 + 16) == *(_QWORD *)(v21 + 16) )
  {
    memset(&v31, 0, sizeof(v31));
    v31.hAllocation = *(HANDLE *)(v32[6].Count + 16);
    if ( (int)ADAPTER_RENDER::DdiDescribeAllocation(*(ADAPTER_RENDER **)(*(_QWORD *)(v21 + 16) + 2288LL), &v31, v28) >= 0 )
    {
      Width = v31.Width;
      a3->left = 0;
      a3->top = 0;
      a3->right = Width;
      v24 = 0;
      a3->bottom = v31.Height;
      goto LABEL_18;
    }
    v20 = WdLogNewEntry5_WdError(v29, v25);
    *(_QWORD *)(v20 + 24) = v31.hAllocation;
    *(_QWORD *)(v20 + 32) = a1;
    goto LABEL_16;
  }
  v23 = (_QWORD *)WdLogNewEntry5_WdError(v22, v18);
  v24 = -1073741811;
  v23[3] = a1;
  v23[4] = v32;
  v23[5] = -1073741811LL;
  WdLogEvent5_WdError(v23);
LABEL_18:
  DXGALLOCATIONREFERENCE::~DXGALLOCATIONREFERENCE(&v32, v25, v26, v27);
  return v24;
}
