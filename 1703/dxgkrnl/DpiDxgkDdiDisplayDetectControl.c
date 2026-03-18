/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x1C011233C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0111538 (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0112120 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C01C4DD8 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStopAdapter @ 0x1C01C545C (DpiFdoStopAdapter.c)
 * Callees:
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0010714 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C0011068 (DxgkQueryConnectionChanges.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     Template_pdqqq @ 0x1C0042BC8 (Template_pdqqq.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayDetectControl(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char v9; // di
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  _QWORD *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  int ConnectionChanges; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-38h]
  __int64 v25; // [rsp+28h] [rbp-30h]
  __int64 v26; // [rsp+30h] [rbp-28h]
  unsigned int v27; // [rsp+30h] [rbp-28h]
  __int64 v28; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 3713) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, a4);
  v9 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v27 = (*a4 >> 28) & 1;
    Template_pdqqq(v27, &EventEnterDdiDisplayDetectControl, a3, a3, HIBYTE(*a4) & 0xF, *a4 & 0xFFFFFF, v27, 0);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v15 = v10;
  if ( bTracingEnabled )
  {
    v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v28) = v10;
      LODWORD(v26) = (*a4 >> 28) & 1;
      LODWORD(v25) = *a4 & 0xFFFFFF;
      LODWORD(v24) = HIBYTE(*a4) & 0xF;
      Template_pdqqq((unsigned int)v25, &EventExitDdiDisplayDetectControl, (unsigned int)v24, a3, v24, v25, v26, v28);
    }
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[3] = a2;
  v16[4] = HIBYTE(*a4) & 0xF;
  v16[5] = *a4 & 0xFFFFFF;
  v18 = ((unsigned __int64)*a4 >> 28) & 1;
  v16[7] = v15;
  v16[6] = v18;
  if ( *((_BYTE *)a4 + 18) )
  {
    if ( (*a4 & 0xF000000) != 0x2000000 || !*((_BYTE *)a4 + 16) )
      v9 = 0;
    LOBYTE(v17) = v9;
    ConnectionChanges = DxgkQueryConnectionChanges(
                          *(_QWORD *)(a1 + 24),
                          v17,
                          *((_BYTE *)a4 + 16),
                          *((_BYTE *)a4 + 17),
                          0);
    v22 = ConnectionChanges;
    if ( ConnectionChanges < 0 )
    {
      v23 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v23 + 24) = v22;
      WdLogEvent5_WdError(v23);
    }
  }
  return (unsigned int)v15;
}
