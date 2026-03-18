/*
 * XREFs of ?_RetrieveMonitorConfigurationFromRegistry@DXGMONITOR@@AEAAJPEAXE@Z @ 0x1C0107D1C
 * Callers:
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1C0107C3C (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ @ 0x1C0107CC0 (-_RetrieveMonitorConfigurationFromMonitorStore@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z @ 0x1C01E6324 (-_UpdateMonitorConfigurationToMonitorStore@DXGMONITOR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGMONITOR::_RetrieveMonitorConfigurationFromRegistry(DXGMONITOR *this, void *a2, char a3)
{
  unsigned int v3; // r14d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near **v4; // rdi
  __int64 v5; // rsi
  unsigned int v9; // r9d
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v10; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  __int64 v23; // [rsp+38h] [rbp-39h] BYREF
  int v24; // [rsp+40h] [rbp-31h]
  struct DXGMONITOR::_MONTIOR_CONFIG_TABLE near *v25; // [rsp+48h] [rbp-29h]
  unsigned int *v26; // [rsp+50h] [rbp-21h]
  int v27; // [rsp+58h] [rbp-19h]
  unsigned int *v28; // [rsp+60h] [rbp-11h]
  int v29; // [rsp+68h] [rbp-9h]
  __int64 v30; // [rsp+70h] [rbp-1h]
  int v31; // [rsp+78h] [rbp+7h]
  _BYTE v32[40]; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v33; // [rsp+F0h] [rbp+7Fh] BYREF

  v3 = 0;
  v4 = &DXGMONITOR::_MonitorConfigInfoTable;
  v5 = 0LL;
  do
  {
    v9 = *(_DWORD *)((char *)this + *((int *)v4 + 2));
    v10 = *v4;
    v23 = 0LL;
    v30 = 0LL;
    v31 = 0;
    v25 = v10;
    v26 = &v33;
    v28 = &v33;
    v33 = v9;
    v24 = 288;
    v27 = 67108868;
    v29 = 4;
    memset(v32, 0, sizeof(v32));
    v11 = RtlQueryRegistryValuesEx(0x40000000LL, a2, &v23, 0LL, 0LL);
    v14 = v11;
    if ( v11 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v13, v12);
      v22[3] = v5;
      v22[4] = *((unsigned int *)this + 7);
      v22[5] = v14;
      goto LABEL_11;
    }
    if ( !((unsigned __int8 (__fastcall *)(DXGMONITOR *, _QWORD))v4[2])(this, v33) )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v16, v15);
      v22[3] = v33;
      v22[4] = v5;
      v22[5] = *((unsigned int *)this + 7);
LABEL_11:
      WdLogEvent5_WdError(v22);
      goto LABEL_5;
    }
    v19 = *((int *)v4 + 3);
    if ( *(_DWORD *)((char *)this + v19) != v33 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19, v15, v17, v18);
      v21[3] = v33;
      v21[4] = v5;
      v21[5] = *((unsigned int *)this + 7);
      WdLogEvent5_WdDmmEvent(v21);
      *(_DWORD *)((char *)this + *((int *)v4 + 3)) = v33;
      if ( a3 )
        DXGMONITOR::_UpdateMonitorConfigurationToMonitorStore(this, v3);
    }
LABEL_5:
    ++v3;
    ++v5;
    v4 += 3;
  }
  while ( v3 < 2 );
  return 0LL;
}
