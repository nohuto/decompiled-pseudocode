/*
 * XREFs of DpiDxgkDdiDisplayDetectControl @ 0x1C020A0CC
 * Callers:
 *     DpiFdoInvalidateChildRelations @ 0x1C01F7D20 (DpiFdoInvalidateChildRelations.c)
 *     DpiFdoInvalidateChildStatus @ 0x1C01F7F34 (DpiFdoInvalidateChildStatus.c)
 *     DpiFdoStartAdapter @ 0x1C01F913C (DpiFdoStartAdapter.c)
 *     DpiFdoStopAdapter @ 0x1C01FAB88 (DpiFdoStopAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     DpiFdoHandleDisplayDetectControl @ 0x1C003B0E8 (DpiFdoHandleDisplayDetectControl.c)
 *     DxgkQueryConnectionChanges @ 0x1C003BA24 (DxgkQueryConnectionChanges.c)
 *     McTemplateK0pqqqq @ 0x1C0042734 (McTemplateK0pqqqq.c)
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
  unsigned __int64 v17; // rcx
  char v18; // r8
  int ConnectionChanges; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int64 v23; // [rsp+20h] [rbp-38h]
  __int64 v24; // [rsp+28h] [rbp-30h]
  __int64 v25; // [rsp+30h] [rbp-28h]
  unsigned int v26; // [rsp+30h] [rbp-28h]
  __int64 v27; // [rsp+38h] [rbp-20h]

  if ( (*(_BYTE *)(a1 + 3737) & 8) == 0 )
    return DpiFdoHandleDisplayDetectControl(a1, a4);
  v9 = 1;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v26 = (*a4 >> 28) & 1;
    McTemplateK0pqqqq(v26, &EventEnterDdiDisplayDetectControl, a3, a3, HIBYTE(*a4) & 0xF, *a4 & 0xFFFFFF, v26, 0);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(a2 + 1128))(a3, a4);
  v15 = v10;
  if ( bTracingEnabled )
  {
    v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      LODWORD(v27) = v10;
      LODWORD(v25) = (*a4 >> 28) & 1;
      LODWORD(v24) = *a4 & 0xFFFFFF;
      LODWORD(v23) = HIBYTE(*a4) & 0xF;
      McTemplateK0pqqqq((unsigned int)v24, &EventExitDdiDisplayDetectControl, (unsigned int)v23, a3, v23, v24, v25, v27);
    }
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[3] = a2;
  v16[4] = HIBYTE(*a4) & 0xF;
  v16[5] = *a4 & 0xFFFFFF;
  v17 = ((unsigned __int64)*a4 >> 28) & 1;
  v16[7] = v15;
  v16[6] = v17;
  if ( *((_BYTE *)a4 + 18) )
  {
    v18 = *((_BYTE *)a4 + 16);
    if ( (*a4 & 0xF000000) != 0x2000000 || !v18 )
      v9 = 0;
    ConnectionChanges = DxgkQueryConnectionChanges(*(_QWORD *)(a1 + 24), v9, v18, *((_BYTE *)a4 + 17), 0);
    v21 = ConnectionChanges;
    if ( ConnectionChanges < 0 )
    {
      v22 = WdLogNewEntry5_WdError(v20);
      *(_QWORD *)(v22 + 24) = v21;
      WdLogEvent5_WdError(v22);
    }
  }
  return (unsigned int)v15;
}
