/*
 * XREFs of ?EndQFrameNodeDeferment@@YAXPEAUtagPOINTERQFRAME@@PEAUtagPOINTERINFONODE@@PEAUtagPOINTERINPUTFRAME@@_K@Z @ 0x1C01990A0
 * Callers:
 *     ?_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z @ 0x1C01CDA3C (-_AdjustEdgyFrameHwndWorker@Edgy@@YAXQEAXUtagINPUTDEST@@@Z.c)
 * Callees:
 *     ?GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z @ 0x1C0199670 (-GetPreviousFrameByDeviceInt@@YAPEAUtagPOINTERINPUTFRAME@@PEBU1@@Z.c)
 *     ?InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z @ 0x1C01996B0 (-InitializeQFrameCoalesceState@@YAXPEAUtagPOINTERQFRAME@@H@Z.c)
 *     ?ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@Z @ 0x1C0199B78 (-ProcessQFrameNode@@YAXPEAUtagPOINTERQFRAME@@PEBUtagPOINTERINPUTFRAME@@PEAUtagPOINTERINFONODE@@@.c)
 *     ?TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z @ 0x1C019A2D0 (-TryCoalesceQFrame@@YAXPEAUtagPOINTERINPUTFRAME@@PEBU1@PEBUtagPOINTERQFRAME@@@Z.c)
 *     ?UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C019A5A8 (-UnreferenceFrameInt@@YAKPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     GetInputDelegate @ 0x1C01BCA10 (GetInputDelegate.c)
 */

void __fastcall EndQFrameNodeDeferment(
        struct tagPOINTERQFRAME *a1,
        struct tagPOINTERINFONODE *a2,
        struct tagPOINTERINPUTFRAME *a3)
{
  struct tagPOINTERINPUTFRAME *PreviousFrameByDeviceInt; // rax
  __int64 v6; // r10
  __int64 v7; // r11
  const struct tagPOINTERINPUTFRAME *v8; // rbx
  __int64 v9; // r10
  struct tagPOINTERINFONODE *v10; // r10

  PreviousFrameByDeviceInt = GetPreviousFrameByDeviceInt(a3);
  v8 = PreviousFrameByDeviceInt;
  if ( PreviousFrameByDeviceInt )
    _InterlockedIncrement((volatile signed __int32 *)PreviousFrameByDeviceInt + 9);
  *(_DWORD *)(v6 + 4) &= ~0x100u;
  *((_DWORD *)a3 + 18) &= ~4u;
  *((_QWORD *)a1 + 1) = v7;
  InitializeQFrameCoalesceState(a1, PreviousFrameByDeviceInt != 0LL);
  if ( GetInputDelegate(*(_QWORD *)(gpKernelHandleTable + 16LL * (unsigned __int16)*(_DWORD *)(v9 + 80)), 4096LL) )
    *(_DWORD *)v10 |= 0x100000u;
  ProcessQFrameNode(a1, v8, v10);
  TryCoalesceQFrame(a3, v8, a1);
  if ( v8 )
    UnreferenceFrameInt(v8);
}
