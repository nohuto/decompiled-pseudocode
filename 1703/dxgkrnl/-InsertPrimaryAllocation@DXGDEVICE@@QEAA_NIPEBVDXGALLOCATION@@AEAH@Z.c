/*
 * XREFs of ?InsertPrimaryAllocation@DXGDEVICE@@QEAA_NIPEBVDXGALLOCATION@@AEAH@Z @ 0x1C0004EEC
 * Callers:
 *     ?AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z @ 0x1C00C1AA8 (-AddPrimaryAllocation@DXGDEVICE@@QEAAJPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ??_V@YAXPEAX@Z @ 0x1C00AF918 (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

char __fastcall DXGDEVICE::InsertPrimaryAllocation(
        DXGDEVICE *this,
        unsigned int a2,
        const struct DXGALLOCATION *a3,
        int *a4)
{
  __int64 v4; // rbx
  int *v6; // r15
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // si
  unsigned int v12; // ebp
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rax
  __int64 v17; // rcx
  unsigned int v18; // eax
  __int64 v19; // r14
  unsigned __int64 v20; // rax
  char *v21; // rax
  void *v22; // r15
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  _BYTE v26[32]; // [rsp+20h] [rbp-48h] BYREF

  v4 = a2;
  v6 = a4;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v26, (DXGDEVICE *)((char *)this + 256));
  v11 = 0;
  v12 = *((_DWORD *)this + v4 + 194);
  v13 = (unsigned __int8)*((_DWORD *)this + v4 + 258);
  if ( v12 == (_DWORD)v13 )
  {
    v17 = 2 * v12;
    v18 = 255;
    v19 = *((unsigned int *)this + v4 + 194);
    v12 = 4;
    if ( (unsigned int)v17 < 0xFF )
      v18 = v17;
    if ( v18 >= 4 )
    {
      v12 = 255;
      if ( (unsigned int)v17 < 0xFF )
        v12 = v17;
    }
    if ( v12 == (_DWORD)v19 )
    {
      v23 = WdLogNewEntry5_WdError(v17, 255LL);
      *(_QWORD *)(v23 + 24) = 703LL;
      WdLogEvent5_WdError(v23);
      goto LABEL_6;
    }
    v20 = 8LL * v12;
    if ( !is_mul_ok(v12, 8uLL) )
      v20 = -1LL;
    v21 = (char *)operator new(v20, 0x4B677844u, PagedPool);
    v22 = v21;
    if ( !v21 )
    {
      v24 = WdLogNewEntry5_WdLowResource();
      *(_QWORD *)(v24 + 24) = v12;
      WdLogEvent5_WdLowResource(v24);
      goto LABEL_6;
    }
    memset(&v21[8 * v19], 0, 8LL * (v12 - (unsigned int)v19));
    if ( (_DWORD)v19 )
    {
      memmove(v22, *((const void **)this + v4 + 81), 8 * v19);
      operator delete[](*((void **)this + v4 + 81));
    }
    *((_QWORD *)this + v4 + 81) = v22;
    v6 = a4;
    *((_DWORD *)this + v4 + 194) = v12;
  }
  v14 = 0;
  if ( v12 )
  {
    v8 = *((_QWORD *)this + v4 + 81);
    while ( *(_QWORD *)(v8 + 8LL * v14) )
    {
      if ( ++v14 >= *((_DWORD *)this + v4 + 194) )
        goto LABEL_24;
    }
    v15 = WdLogNewEntry5_WdTrace();
    v11 = 1;
    *(_QWORD *)(v15 + 24) = a3;
    *(_QWORD *)(v15 + 32) = v4;
    *(_QWORD *)(*((_QWORD *)this + v4 + 81) + 8LL * v14) = a3;
    ++*((_BYTE *)this + 4 * v4 + 1032);
    *v6 = (*((_DWORD *)this + v4 + 258) >> 8) & 1;
  }
  else
  {
LABEL_24:
    v25 = WdLogNewEntry5_WdAssertion(v8, v13, v9, v10);
    *(_QWORD *)(v25 + 24) = 760LL;
    WdLogEvent5_WdAssertion(v25);
  }
LABEL_6:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v26);
  return v11;
}
