/*
 * XREFs of DxgkSubmitCommand @ 0x1C0096280
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C00CBD30 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 */

__int64 __fastcall DxgkSubmitCommand(struct _D3DKMT_SUBMITCOMMAND *a1)
{
  __int64 CurrentProcess; // rax
  __int64 v3; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct DXGPROCESS *v7; // rbx
  unsigned int v8; // edi
  struct DXGPROCESS **ThreadProperty; // rax
  __int64 v11; // rbx
  __int64 v12; // rax

  CurrentProcess = PsGetCurrentProcess();
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v3);
  v7 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    if ( (*(_BYTE *)(ProcessDxgProcess + 275) & 2) != 0 )
    {
      ThreadProperty = (struct DXGPROCESS **)PsGetThreadProperty(KeGetCurrentThread(), 0x72507844uLL, 0);
      if ( ThreadProperty )
        v7 = *ThreadProperty;
    }
  }
  if ( v7 )
  {
    v8 = DxgkSubmitCommandInternal(a1, v7);
    if ( (int)(v8 + 0x80000000) >= 0
      && v8 != -1073741130
      && !g_DwmRenderDebugMode
      && (*(unsigned int (**)(void))(*((_QWORD *)v7 + 9) + 216LL))()
      && !KdRefreshDebuggerNotPresent() )
    {
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "An unexpected render failure 0x%x from DWM has been detected.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "To disable debug breaks for DWM render failures, run \"?? dxgmms2!g_DwmRenderDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v8,
        (const void *)&g_DwmRenderDebugMode);
      JUMPOUT(0x1C0138EC8LL);
    }
    return v8;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v6, v5);
    v12 = PsGetCurrentProcess();
    *(_QWORD *)(v11 + 32) = -1073741811LL;
    *(_QWORD *)(v11 + 24) = v12;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}
