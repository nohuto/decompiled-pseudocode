/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C0003CE4
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C0095094 (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002D90 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0002E60 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
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
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 194); i = (unsigned int)(i + 1) )
  {
    if ( a3 == *((const struct DXGALLOCATION **)this[v3 + 81] + i) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v7[3] = a3;
      v7[4] = (unsigned int)i;
      v7[5] = v3;
      if ( !(unsigned __int8)*((_DWORD *)this + v3 + 258) )
      {
        v9 = WdLogNewEntry5_WdAssertion(v8);
        *(_QWORD *)(v9 + 24) = 856LL;
        WdLogEvent5_WdAssertion(v9);
      }
      *((_QWORD *)this[v3 + 81] + i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1032);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
