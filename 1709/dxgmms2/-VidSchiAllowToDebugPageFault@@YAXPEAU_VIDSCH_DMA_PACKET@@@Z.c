/*
 * XREFs of ?VidSchiAllowToDebugPageFault@@YAXPEAU_VIDSCH_DMA_PACKET@@@Z @ 0x1C0024604
 * Callers:
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0008120 (VidSchiProcessDpcCompletedPacket.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAllowToDebugPageFault(struct _VIDSCH_DMA_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // r9
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax

  if ( !g_PageFaultDebugMode && !KdRefreshDebuggerNotPresent() )
  {
    v2 = *((_QWORD *)a1 + 6);
    v3 = *(_QWORD *)(v2 + 104);
    v4 = *(_QWORD *)(v2 + 96);
    v5 = *(_QWORD *)(v3 + 40);
    v6 = *(_QWORD *)(v4 + 24);
    v7 = *(_QWORD *)(v3 + 192);
    v8 = *(unsigned __int16 *)(v4 + 6);
    v9 = *(_DWORD *)(v6 + 4);
    if ( g_pVidSchSystemProcess == v5 )
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "The GPU Scheduler detected a page fault at GPU VA 0x%I64X.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "Run \"!dxgkdx.gpuva -a %d -o %d 0x%I64X  [-h]\" command for more info.\n"
        "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v7,
        v8,
        v9,
        v7,
        (const void *)&g_PageFaultDebugMode);
    else
      DbgPrintEx(
        0x65u,
        0,
        "\n"
        "The GPU Scheduler detected a page fault at GPU VA 0x%I64X.\n"
        "We broke into the debugger to allow a chance for debugging this issue.\n"
        "Run \"!dxgkdx.gpuva -a %d -p 0x%p -o %d 0x%I64X[ -h]\" command for more info.\n"
        "To disable debug breaks on page fault, run \"?? dxgmms2!g_PageFaultDebugMode=1\" command,\n"
        "or \"ed 0x%p 1\"\n"
        "\n",
        v7,
        v8,
        *(const void **)(v5 + 2648),
        v9,
        v7,
        (const void *)&g_PageFaultDebugMode);
    __debugbreak();
  }
}
