/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C002F700
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C018BB4C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0014FAC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(
        struct _KTHREAD **this,
        unsigned int a2,
        const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v10, this + 32);
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 198); i = (unsigned int)(i + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 83] + i) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v7[3] = a3;
      v7[4] = (unsigned int)i;
      v7[5] = v3;
      if ( !*((_BYTE *)this + 4 * v3 + 1048) )
      {
        v9 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v9 + 24) = 863LL;
        WdLogEvent5_WdAssertion(v9);
      }
      *((_QWORD *)this[v3 + 83] + i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1048);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
