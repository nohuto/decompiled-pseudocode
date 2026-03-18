/*
 * XREFs of ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01B67F8
 * Callers:
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103E30 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00D37EC (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

void __fastcall DXGDODPRESENT::StartHwVSync(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // sf
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  _BYTE v16[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v17; // [rsp+28h] [rbp-20h]
  int v18; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v16, this + 13, a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v17);
  v9 = *((int *)this + 32) < 0;
  v18 = 2;
  if ( v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 3532LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( ++*((_DWORD *)this + 32) == 1
    && (int)DXGADAPTER::DdiControlInterrupt(*((DXGADAPTER **)this[11] + 2), DXGK_INTERRUPT_DISPLAYONLY_VSYNC, 1u) < 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    *(_QWORD *)(v15 + 24) = 3539LL;
    WdLogEvent5_WdAssertion(v15);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v16);
}
