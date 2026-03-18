/*
 * XREFs of ?DxgkEnableFormattingBuffer@@YAXH@Z @ 0x1C01AA090
 * Callers:
 *     ?DxgkEtwEnableCallback@@YAXKK_K@Z @ 0x1C00133D4 (-DxgkEtwEnableCallback@@YAXKK_K@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z @ 0x1C01AA488 (-EnableFormattingBuffer@DXGGLOBAL@@QEAAXH@Z.c)
 */

void __fastcall DxgkEnableFormattingBuffer(__int64 a1)
{
  int v1; // ebx
  DXGGLOBAL *Global; // rax

  v1 = a1;
  Global = DXGGLOBAL::GetGlobal(a1);
  DXGGLOBAL::EnableFormattingBuffer(Global, v1);
}
