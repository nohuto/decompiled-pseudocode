/*
 * XREFs of DpiDxgkDdiSetTargetAdjustedColorimetry @ 0x1C01CF7CC
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ @ 0x1C0106548 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C0022874 (Template_pqq.c)
 */

__int64 __fastcall DpiDxgkDdiSetTargetAdjustedColorimetry(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v8; // rbx
  int v9; // eax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int64 (__fastcall *v12)(__int64, _QWORD, _OWORD *); // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v20; // [rsp+20h] [rbp-58h]
  int v21; // [rsp+20h] [rbp-58h]
  __int64 v22; // [rsp+28h] [rbp-50h]
  int v23; // [rsp+28h] [rbp-50h]
  _OWORD v24[3]; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+60h] [rbp-18h]

  v5 = (unsigned int)a3;
  if ( *(_QWORD *)(a1 + 1120) )
  {
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v23 = 0;
      v21 = a3;
      Template_pqq(a1, &EventEnterDdiSetTargetAdjustedColorimetry, a3, a2, v21, v23);
    }
    v9 = *(_DWORD *)(a4 + 48);
    v10 = *(_OWORD *)(a4 + 16);
    v24[0] = *(_OWORD *)a4;
    v11 = *(_OWORD *)(a4 + 32);
    v25 = v9;
    v12 = *(__int64 (__fastcall **)(__int64, _QWORD, _OWORD *))(a1 + 1120);
    v24[2] = v11;
    v24[1] = v10;
    v13 = v12(a2, (unsigned int)v5, v24);
    v8 = v13;
    if ( bTracingEnabled )
    {
      v15 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v22) = v13;
        LODWORD(v20) = v5;
        Template_pqq(
          (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
          &EventExitDdiSetTargetAdjustedColorimetry,
          v16,
          a2,
          v20,
          v22);
      }
    }
    v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    v18[3] = a1;
    v18[4] = v5;
    v18[5] = v8;
    v18[6] = 0LL;
    v18[7] = 0LL;
  }
  else
  {
    LODWORD(v8) = -1073741637;
  }
  return (unsigned int)v8;
}
