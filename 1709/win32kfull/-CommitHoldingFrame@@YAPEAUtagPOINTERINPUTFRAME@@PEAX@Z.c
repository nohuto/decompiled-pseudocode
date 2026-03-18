/*
 * XREFs of ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A45D4
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C01A43A0 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C00A93E0 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C01A3CFC (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     FindHoldingFrameForDevice @ 0x1C01A67E8 (FindHoldingFrameForDevice.c)
 *     ResetHoldingFrame @ 0x1C01A6E04 (ResetHoldingFrame.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitHoldingFrame(unsigned __int64 a1)
{
  __int64 HoldingFrameForDevice; // rdi
  __int64 v3; // rbx
  struct tagPOINTERQFRAME *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // ecx
  bool v11; // zf
  int v12; // eax
  __int64 v13; // rax
  struct _LIST_ENTRY *Flink; // rax
  _QWORD v15[3]; // [rsp+20h] [rbp-18h] BYREF

  HoldingFrameForDevice = FindHoldingFrameForDevice();
  EtwTraceBeginPointerFrameCommit(0LL, *(unsigned int *)(HoldingFrameForDevice + 32));
  v3 = Win32AllocPoolZInit(112LL, 1718645589LL);
  if ( !v3 )
    return 0LL;
  v5 = AllocPointerQFrameList(*(_DWORD *)(HoldingFrameForDevice + 32));
  *(_QWORD *)(v3 + 96) = v5;
  if ( !v5 )
  {
    Win32FreePool(v3, v6, v7);
    return 0LL;
  }
  v9 = 1LL;
  *(_QWORD *)(v3 + 64) = *(_QWORD *)(HoldingFrameForDevice + 24);
  v10 = dword_1C0327610;
  v11 = dword_1C0327610 == -1;
  v12 = dword_1C0327610 + 1;
  *(_DWORD *)(v3 + 32) = dword_1C0327610;
  if ( v11 )
    v12 = 1;
  dword_1C0327610 = v12;
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(HoldingFrameForDevice + 32);
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(HoldingFrameForDevice + 16);
  *(_QWORD *)(v3 + 88) = *(_QWORD *)(HoldingFrameForDevice + 64);
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(HoldingFrameForDevice + 40);
  v13 = *(_QWORD *)(HoldingFrameForDevice + 48);
  *(_QWORD *)(v3 + 80) = v13;
  while ( v13 )
  {
    *(_DWORD *)v13 = v10;
    v13 = *(_QWORD *)(v13 + 24);
  }
  LOBYTE(v9) = 19;
  v15[0] = v3 + 104;
  v15[1] = *(_QWORD *)(HMValidateHandleNoSecure(a1, v9, v7, v8) + 472);
  HMAssignmentLock(v15);
  ResetHoldingFrame(HoldingFrameForDevice);
  Flink = gFrameListHead.Flink;
  if ( gFrameListHead.Flink->Blink != &gFrameListHead )
    __fastfail(3u);
  *(_QWORD *)v3 = gFrameListHead.Flink;
  *(_QWORD *)(v3 + 8) = &gFrameListHead;
  Flink->Blink = (struct _LIST_ENTRY *)v3;
  gFrameListHead.Flink = (struct _LIST_ENTRY *)v3;
  *(_QWORD *)(v3 + 24) = v3 + 16;
  *(_QWORD *)(v3 + 16) = v3 + 16;
  return (struct tagPOINTERINPUTFRAME *)v3;
}
