/*
 * XREFs of ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXIPEBVDXGALLOCATION@@@Z @ 0x1C0005078
 * Callers:
 *     ?RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z @ 0x1C00C196C (-RemovePrimaryAllocation@DXGDEVICE@@QEAAXPEBVDXGALLOCATION@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000738C (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 */

void __fastcall DXGDEVICE::RemovePrimaryAllocation(DXGDEVICE *this, unsigned int a2, const struct DXGALLOCATION *a3)
{
  __int64 v3; // rbx
  __int64 i; // rsi
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v13, (DXGDEVICE *)((char *)this + 256));
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + v3 + 194); i = (unsigned int)(i + 1) )
  {
    if ( a3 == *(const struct DXGALLOCATION **)(*((_QWORD *)this + v3 + 81) + 8 * i) )
    {
      v7 = (_QWORD *)WdLogNewEntry5_WdTrace();
      v7[3] = a3;
      v7[4] = (unsigned int)i;
      v7[5] = v3;
      if ( !(unsigned __int8)*((_DWORD *)this + v3 + 258) )
      {
        v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
        *(_QWORD *)(v12 + 24) = 774LL;
        WdLogEvent5_WdAssertion(v12);
      }
      *(_QWORD *)(*((_QWORD *)this + v3 + 81) + 8 * i) = 0LL;
      --*((_BYTE *)this + 4 * v3 + 1032);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
}
