/*
 * XREFs of ?InsertDirectFlipAllocationToList@DXGDEVICE@@AEAAEIPEAVDXGALLOCATION@@@Z @ 0x1C0187C60
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01883E4 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertDirectFlipAllocationToList(
        struct _KTHREAD **this,
        unsigned int a2,
        struct DXGALLOCATION *a3,
        __int64 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rdx
  struct _KTHREAD *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned int v12; // ebp
  char v13; // si
  __int64 v14; // r14
  SIZE_T v15; // rax
  char *v16; // rax
  __int64 v17; // rcx
  void *v18; // r12
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // r14d
  __int64 v22; // rax
  __int64 v23; // rax
  _BYTE v25[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v25, this + 35, (__int64)a3, a4);
  if ( (*((_DWORD *)a3 + 18) & 0x7FE) != 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 8076LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v12 = *((_DWORD *)this + v4 + 306);
  v13 = 0;
  if ( v12 == *((_DWORD *)this + v4 + 322) )
  {
    v14 = v12;
    if ( v12 )
    {
      v12 *= 2;
      if ( v12 > 0x300 )
      {
        v20 = WdLogNewEntry5_WdError(v8, v7);
        *(_QWORD *)(v20 + 24) = 8092LL;
        WdLogEvent5_WdError(v20);
        goto LABEL_26;
      }
    }
    else
    {
      v12 = 4;
    }
    v15 = 8LL * v12;
    if ( !is_mul_ok(v12, 8uLL) )
      v15 = -1LL;
    v16 = (char *)operator new(v15, 0x4B677844u, PagedPool);
    v18 = v16;
    if ( !v16 )
    {
      v19 = WdLogNewEntry5_WdLowResource(v17);
      *(_QWORD *)(v19 + 24) = v12;
      WdLogEvent5_WdLowResource(v19);
      goto LABEL_26;
    }
    memset(&v16[8 * v14], 0, 8LL * (v12 - (unsigned int)v14));
    if ( (_DWORD)v14 )
    {
      memmove(v18, this[v4 + 137], 8 * v14);
      v8 = this[v4 + 137];
      if ( v8 )
        ExFreePoolWithTag(v8, 0);
    }
    this[v4 + 137] = (struct _KTHREAD *)v18;
    *((_DWORD *)this + v4 + 306) = v12;
  }
  v21 = 0;
  if ( v12 )
  {
    v8 = this[v4 + 137];
    do
    {
      if ( !*((_QWORD *)v8 + v21) )
        break;
      ++v21;
    }
    while ( v21 < *((_DWORD *)this + v4 + 306) );
  }
  if ( v21 != v12 )
  {
    if ( *((_QWORD *)this[v4 + 137] + v21) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v22 + 24) = 8137LL;
      WdLogEvent5_WdAssertion(v22);
    }
    if ( *((_DWORD *)this + v4 + 306) < *((_DWORD *)this + v4 + 322) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v23 + 24) = 8138LL;
      WdLogEvent5_WdAssertion(v23);
    }
    v13 = 1;
    *((_QWORD *)this[v4 + 137] + v21) = a3;
    ++*((_DWORD *)this + v4 + 322);
    *((_DWORD *)a3 + 18) ^= (*((_DWORD *)a3 + 18) ^ (2 * v21)) & 0x7FE;
  }
LABEL_26:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v25);
  return v13;
}
