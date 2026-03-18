/*
 * XREFs of ?StopHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C01B6898
 * Callers:
 *     ?StopVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C0103DA4 (-StopVSync@BLTQUEUE@@AEAAXH@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006DD0 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0006E80 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0006ED0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C00D37EC (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

void __fastcall DXGDODPRESENT::StopHwVSync(struct _KTHREAD **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  bool v9; // sf
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  _BYTE v17[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v18; // [rsp+28h] [rbp-20h]
  int v19; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v17, this + 13, a3, a4);
  DXGPUSHLOCK::AcquireExclusive(v18);
  v9 = *((int *)this + 32) < 0;
  v19 = 2;
  if ( v9 )
  {
    v10 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
    *(_QWORD *)(v10 + 24) = 3549LL;
    WdLogEvent5_WdAssertion(v10);
  }
  v11 = (*((_DWORD *)this + 32))-- == 1;
  if ( v11
    && (int)DXGADAPTER::DdiControlInterrupt(*((DXGADAPTER **)this[11] + 2), DXGK_INTERRUPT_DISPLAYONLY_VSYNC, 0) < 0 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v13, v12, v14, v15);
    *(_QWORD *)(v16 + 24) = 3556LL;
    WdLogEvent5_WdAssertion(v16);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v17);
}
