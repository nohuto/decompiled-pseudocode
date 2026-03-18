/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x1C011917C
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C0117FA8 (DpiFdoStartAdapter.c)
 *     DpiFdoInvalidateChildRelations @ 0x1C0118F60 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C01DE850 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStopAdapter @ 0x1C01DEF64 (DpiFdoStopAdapter.c)
 * Callees:
 *     DxgkQueryConnectionChanges @ 0x1C0011A64 (DxgkQueryConnectionChanges.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C0012498 (DpiFdoHandleDisplayDetectControl.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     McTemplateK0pqqqq @ 0x1C0020738 (McTemplateK0pqqqq.c)
 */

__int64 __fastcall DpiDxgkDdiDisplayDetectControl(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  char v9; // di
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _QWORD *v14; // rax
  unsigned __int64 v15; // rcx
  int ConnectionChanges; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]
  unsigned int v23; // [rsp+30h] [rbp-28h]
  __int64 v24; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 3737) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, (__int64)a4);
  v9 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v23 = (*a4 >> 28) & 1;
    McTemplateK0pqqqq(v23, &EventEnterDdiDisplayDetectControl, a3, a3, HIBYTE(*a4) & 0xF, *a4 & 0xFFFFFF, v23, 0);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v13 = v10;
  if ( bTracingEnabled )
  {
    v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v24) = v10;
      LODWORD(v22) = (*a4 >> 28) & 1;
      LODWORD(v21) = *a4 & 0xFFFFFF;
      LODWORD(v20) = HIBYTE(*a4) & 0xF;
      McTemplateK0pqqqq((unsigned int)v21, &EventExitDdiDisplayDetectControl, (unsigned int)v20, a3, v20, v21, v22, v24);
    }
  }
  v14 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11);
  v14[3] = a2;
  v14[4] = HIBYTE(*a4) & 0xF;
  v14[5] = *a4 & 0xFFFFFF;
  v15 = ((unsigned __int64)*a4 >> 28) & 1;
  v14[7] = v13;
  v14[6] = v15;
  if ( *((_BYTE *)a4 + 18) )
  {
    if ( (*a4 & 0xF000000) != 0x2000000 || !*((_BYTE *)a4 + 16) )
      v9 = 0;
    ConnectionChanges = DxgkQueryConnectionChanges(
                          *(_QWORD *)(a1 + 24),
                          v9,
                          *((_BYTE *)a4 + 16),
                          *((_BYTE *)a4 + 17),
                          0);
    v18 = ConnectionChanges;
    if ( ConnectionChanges < 0 )
    {
      v19 = WdLogNewEntry5_WdError(v17);
      *(_QWORD *)(v19 + 24) = v18;
      WdLogEvent5_WdError(v19);
    }
  }
  return (unsigned int)v13;
}
