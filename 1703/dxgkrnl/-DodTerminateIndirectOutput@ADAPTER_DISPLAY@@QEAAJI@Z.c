/*
 * XREFs of ?DodTerminateIndirectOutput@ADAPTER_DISPLAY@@QEAAJI@Z @ 0x1C0171000
 * Callers:
 *     DxgkSetDodIndirectSwapchain @ 0x1C017E0B0 (DxgkSetDodIndirectSwapchain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00A6600 (DxgkMiracastStopAllMiracastSessions.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DodTerminateIndirectOutput(
        ADAPTER_DISPLAY *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // rcx

  v5 = (unsigned int)a2;
  if ( !*((_QWORD *)this + 33) )
    return 3221225485LL;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 20) )
  {
    v7 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = v5;
LABEL_5:
    WdLogEvent5_WdWarning(v7);
    return 3221225485LL;
  }
  v8 = *((_QWORD *)this + 2);
  if ( (*(_DWORD *)(v8 + 300) & 0x100) == 0 )
  {
    v7 = WdLogNewEntry5_WdWarning(v8, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = *((_QWORD *)this + 2);
    goto LABEL_5;
  }
  if ( !*(_QWORD *)(v8 + 1584) )
    return 3221225659LL;
  if ( (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(v8 + 1584))(*(_QWORD *)(v8 + 1520), (unsigned int)a2) == -1073741637 )
    DxgkMiracastStopAllMiracastSessions(0, 0LL, 0x90u);
  return 0LL;
}
