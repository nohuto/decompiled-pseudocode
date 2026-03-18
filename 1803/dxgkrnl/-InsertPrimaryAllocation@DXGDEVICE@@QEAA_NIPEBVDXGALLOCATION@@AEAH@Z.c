/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C002F4A0
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C0187C24 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0015040 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C001C600 (memmove.c)
 *     memset @ 0x1C001C940 (memset.c)
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
  int v9; // eax
  __int64 v10; // rdi
  unsigned int v11; // ebp
  char v12; // bl
  __int64 v13; // rcx
  unsigned int v14; // eax
  __int64 v15; // r14
  __int64 v16; // rax
  SIZE_T v17; // rax
  char *v18; // rax
  void *v19; // r15
  __int64 v20; // rax
  unsigned int v21; // eax
  __int64 v22; // rbp
  __int64 v23; // rax
  __int64 v25; // rax
  _BYTE v26[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, this + 32);
  v9 = *((_DWORD *)this + v4 + 262);
  v10 = (unsigned int)v4;
  v11 = *((_DWORD *)this + v4 + 198);
  v12 = 0;
  if ( v11 == (unsigned __int8)v9 )
  {
    v13 = 2 * v11;
    v14 = 255;
    v15 = v11;
    v11 = 4;
    if ( (unsigned int)v13 < 0xFF )
      v14 = v13;
    if ( v14 >= 4 )
    {
      v11 = 255;
      if ( (unsigned int)v13 < 0xFF )
        v11 = v13;
    }
    if ( v11 == (_DWORD)v15 )
    {
      v16 = WdLogNewEntry5_WdError(v13);
      *(_QWORD *)(v16 + 24) = 792LL;
      WdLogEvent5_WdError(v16);
      goto LABEL_22;
    }
    v17 = 8LL * v11;
    if ( !is_mul_ok(v11, 8uLL) )
      v17 = -1LL;
    v18 = (char *)operator new[](v17, 0x4B677844u, PagedPool);
    v19 = v18;
    if ( !v18 )
    {
      v20 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v20 + 24) = v11;
      WdLogEvent5_WdLowResource(v20);
      goto LABEL_22;
    }
    memset(&v18[8 * v15], 0, 8LL * (v11 - (unsigned int)v15));
    if ( (_DWORD)v15 )
    {
      memmove(v19, this[v10 + 83], 8 * v15);
      v8 = this[v10 + 83];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    v6 = a4;
    this[v10 + 83] = (struct _KTHREAD *)v19;
    *((_DWORD *)this + v10 + 198) = v11;
  }
  v21 = 0;
  if ( v11 )
  {
    v8 = this[v10 + 83];
    while ( 1 )
    {
      v22 = v21;
      if ( !*((_QWORD *)v8 + v21) )
        break;
      if ( ++v21 >= *((_DWORD *)this + v10 + 198) )
        goto LABEL_21;
    }
    v25 = WdLogNewEntry5_WdTrace();
    v12 = 1;
    *(_QWORD *)(v25 + 24) = a3;
    *(_QWORD *)(v25 + 32) = v10;
    *((_QWORD *)this[v10 + 83] + v22) = a3;
    ++*((_BYTE *)this + 4 * v10 + 1048);
    *v6 = (*((_DWORD *)this + v10 + 262) >> 8) & 1;
  }
  else
  {
LABEL_21:
    v23 = WdLogNewEntry5_WdAssertion(v8);
    *(_QWORD *)(v23 + 24) = 849LL;
    WdLogEvent5_WdAssertion(v23);
  }
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v12;
}
