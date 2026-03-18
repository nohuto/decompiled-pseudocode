/*
 * XREFs of ?IsAllocationInPrimaryAllocationsList@DXGDEVICE@@QEAAHIPEAVDXGALLOCATION@@@Z @ 0x1C018AEEC
 * Callers:
 *     DxgkSetDisplayMode @ 0x1C0194F30 (DxgkSetDisplayMode.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00160D0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::IsAllocationInPrimaryAllocationsList(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION *a3)
{
  __int64 v4; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rcx
  _BYTE v16[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = a2;
  if ( a2 >= *((_DWORD *)this + 424) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v6 + 24) = 3716LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 3717LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*((PERESOURCE **)this + 211)) )
  {
    v10 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v10 + 24) = 3718LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = 1;
  if ( *((_DWORD *)this + 82) != 1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9);
    *(_QWORD *)(v12 + 24) = 3719LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_QWORD *)this + 211) == *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
  {
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v16, (struct _KTHREAD **)this + 32);
    v13 = *((_DWORD *)this + v4 + 198);
    v14 = 0LL;
    if ( v13 )
    {
      while ( *(struct DXGALLOCATION **)(*((_QWORD *)this + v4 + 83) + 8 * v14) != a3 )
      {
        v14 = (unsigned int)(v14 + 1);
        if ( (unsigned int)v14 >= v13 )
          goto LABEL_13;
      }
    }
    else
    {
LABEL_13:
      v11 = 0;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
  }
  return v11;
}
