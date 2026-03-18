/*
 * XREFs of DpiSetTargetAdjustedColorimetry @ 0x1C0123798
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ @ 0x1C010BB74 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqq @ 0x1C0020624 (McTemplateK0pqq.c)
 */

__int64 __fastcall DpiSetTargetAdjustedColorimetry(__int64 a1, __int128 *a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  __int64 v4; // rsi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rbp
  int v9; // edi
  __int64 v10; // r14
  __int64 v11; // rdi
  int (__fastcall *v13)(__int64, _QWORD, _OWORD *); // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  _QWORD *v17; // rax
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int128 v20; // [rsp+30h] [rbp-78h]
  _OWORD v21[3]; // [rsp+60h] [rbp-48h] BYREF
  int v22; // [rsp+90h] [rbp-18h]

  v2 = *(_QWORD *)(a1 + 64);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 32) + 64LL);
  v4 = *(_QWORD *)(v3 + 40);
  if ( *(_DWORD *)(v4 + 28) < 0x700Au )
  {
    LODWORD(v11) = 0;
  }
  else
  {
    v5 = *a2;
    v6 = a2[1];
    v7 = a2[2];
    v8 = *(unsigned int *)(*(_QWORD *)(v2 + 936) + 24LL);
    v9 = *((_DWORD *)a2 + 12);
    v10 = *(_QWORD *)(v3 + 48);
    v20 = *a2;
    if ( *(_QWORD *)(v4 + 1120) )
    {
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        McTemplateK0pqq(v3, &EventEnterDdiSetTargetAdjustedColorimetry, v2, v10, v8, 0);
        v5 = v20;
      }
      v13 = *(int (__fastcall **)(__int64, _QWORD, _OWORD *))(v4 + 1120);
      v21[0] = v5;
      v21[1] = v6;
      v21[2] = v7;
      v22 = v9;
      v11 = v13(v10, (unsigned int)v8, v21);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        LODWORD(v19) = v11;
        LODWORD(v18) = v8;
        McTemplateK0pqq(v15, &EventExitDdiSetTargetAdjustedColorimetry, v16, v10, v18, v19);
      }
      v17 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14);
      v17[3] = v4;
      v17[4] = v8;
      v17[5] = v11;
      v17[6] = 0LL;
      v17[7] = 0LL;
    }
    else
    {
      LODWORD(v11) = -1073741637;
    }
  }
  return (unsigned int)v11;
}
