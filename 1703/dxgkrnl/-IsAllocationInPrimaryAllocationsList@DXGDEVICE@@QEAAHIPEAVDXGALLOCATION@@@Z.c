/*
 * XREFs of ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C00C06F0
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0096EF0 (DxgkSetDisplayMode.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000622C (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::IsAllocationInPrimaryAllocationsList(
        DXGDEVICE *this,
        __int64 a2,
        struct DXGALLOCATION *a3,
        __int64 a4)
{
  __int64 v5; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int v15; // ebx
  unsigned int v16; // edx
  __int64 v17; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  _BYTE v23[40]; // [rsp+20h] [rbp-28h] BYREF

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 452) )
  {
    v19 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v19 + 24) = 3545LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v20 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = 3546LL;
    WdLogEvent5_WdAssertion(v20);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 225)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v21 + 24) = 3547LL;
    WdLogEvent5_WdAssertion(v21);
  }
  v15 = 1;
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v22 + 24) = 3548LL;
    WdLogEvent5_WdAssertion(v22);
  }
  if ( *((_QWORD *)this + 225) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
      (DXGAUTOPUSHLOCKEXCLUSIVE *)v23,
      (struct _KTHREAD **)this + 32,
      v13,
      v14);
    v16 = *((_DWORD *)this + v5 + 194);
    v17 = 0LL;
    if ( v16 )
    {
      while ( *(struct DXGALLOCATION **)(*((_QWORD *)this + v5 + 81) + 8 * v17) != a3 )
      {
        v17 = (unsigned int)(v17 + 1);
        if ( (unsigned int)v17 >= v16 )
          goto LABEL_15;
      }
    }
    else
    {
LABEL_15:
      v15 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v23);
  }
  return v15;
}
