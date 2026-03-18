/*
 * XREFs of ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01D7278
 * Callers:
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C01D731C (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0015320 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0015370 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C00165E0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00F460C (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

void __fastcall DXGDODPRESENT::StopHwVSync(struct _KTHREAD **this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rax
  _BYTE v8[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v8, this + 13, 0);
  DXGPUSHLOCK::AcquireExclusive(v9);
  v3 = *((_DWORD *)this + 32);
  v10 = 2;
  if ( v3 < 0 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 3549LL;
    WdLogEvent5_WdAssertion(v4);
    v3 = *((_DWORD *)this + 32);
  }
  v5 = v3 - 1;
  *((_DWORD *)this + 32) = v5;
  if ( !v5
    && (int)DXGADAPTER::DdiControlInterrupt(*((DXGADAPTER **)this[11] + 2), DXGK_INTERRUPT_DISPLAYONLY_VSYNC, 0) < 0 )
  {
    v7 = WdLogNewEntry5_WdAssertion(v6);
    *(_QWORD *)(v7 + 24) = 3556LL;
    WdLogEvent5_WdAssertion(v7);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}
