/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0003B5C
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00951D4 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C0016740 (memmove.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??3@YAXPEAX@Z @ 0x1C00A3070 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r14
  struct _KTHREAD *v8; // rcx
  char v9; // si
  unsigned int v10; // ebp
  unsigned int v11; // eax
  __int64 v12; // rbp
  __int64 v13; // rax
  unsigned int v15; // ecx
  unsigned int v16; // eax
  __int64 v17; // r14
  SIZE_T v18; // rax
  char *v19; // rax
  void *v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v24[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v24, this + 32);
  v9 = 0;
  v10 = *((_DWORD *)this + v4 + 194);
  if ( v10 == (unsigned __int8)*((_DWORD *)this + v4 + 258) )
  {
    v15 = 2 * v10;
    v16 = 255;
    v17 = *((unsigned int *)this + v4 + 194);
    v10 = 4;
    if ( v15 < 0xFF )
      v16 = v15;
    if ( v16 >= 4 )
    {
      v10 = 255;
      if ( v15 < 0xFF )
        v10 = v15;
    }
    if ( v10 == (_DWORD)v17 )
    {
      v21 = WdLogNewEntry5_WdError();
      *(_QWORD *)(v21 + 24) = 785LL;
      WdLogEvent5_WdError(v21);
      goto LABEL_6;
    }
    v18 = 8LL * v10;
    if ( !is_mul_ok(v10, 8uLL) )
      v18 = -1LL;
    v19 = (char *)operator new(v18, 0x4B677844u, PagedPool);
    v20 = v19;
    if ( !v19 )
    {
      v22 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v22 + 24) = v10;
      WdLogEvent5_WdLowResource(v22);
      goto LABEL_6;
    }
    memset(&v19[8 * v17], 0, 8LL * (v10 - (unsigned int)v17));
    if ( (_DWORD)v17 )
    {
      memmove(v20, this[v4 + 81], 8 * v17);
      operator delete(this[v4 + 81]);
    }
    v6 = a4;
    this[v4 + 81] = (struct _KTHREAD *)v20;
    *((_DWORD *)this + v4 + 194) = v10;
  }
  v11 = 0;
  if ( v10 )
  {
    v8 = this[v4 + 81];
    while ( 1 )
    {
      v12 = v11;
      if ( !*((_QWORD *)v8 + v11) )
        break;
      if ( ++v11 >= *((_DWORD *)this + v4 + 194) )
        goto LABEL_24;
    }
    v13 = WdLogNewEntry5_WdTrace();
    v9 = 1;
    *(_QWORD *)(v13 + 24) = a3;
    *(_QWORD *)(v13 + 32) = v4;
    *((_QWORD *)this[v4 + 81] + v12) = a3;
    ++*((_BYTE *)this + 4 * v4 + 1032);
    *v6 = (*((_DWORD *)this + v4 + 258) >> 8) & 1;
  }
  else
  {
LABEL_24:
    v23 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v23 + 24) = 842LL;
    WdLogEvent5_WdAssertion(v23);
  }
LABEL_6:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v24);
  return v9;
}
