/*
 * XREFs of DxgkCheckExclusiveOwnership @ 0x1C0197400
 * Callers:
 *     <none>
 * Callees:
 *     Template_q @ 0x1C00142D4 (Template_q.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00CCEF0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ @ 0x1C0194D1C (-CheckExclusiveOwnership@DXGGLOBAL@@QEAAEXZ.c)
 */

char __fastcall DxgkCheckExclusiveOwnership(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  char v9; // bl
  __int64 v10; // r8

  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, a3, 2047);
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  v9 = DXGGLOBAL::CheckExclusiveOwnership(Global, v5, v6, v7);
  if ( (qword_1C006E790 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerExit, v10, 2047);
  return v9;
}
