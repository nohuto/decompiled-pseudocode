/*
 * XREFs of ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C0198A7C
 * Callers:
 *     ?CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z @ 0x1C0198870 (-CommitAndReferenceFrame@PointerFrameList@@YAPEBUtagPOINTERINPUTFRAME@@PEAX0@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0053930 (HMValidateHandleNoSecure.c)
 *     ?AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z @ 0x1C019815C (-AllocPointerQFrameList@@YAPEAUtagPOINTERQFRAME@@K@Z.c)
 *     FindHoldingFrameForDevice @ 0x1C019AB7C (FindHoldingFrameForDevice.c)
 *     ResetHoldingFrame @ 0x1C019B118 (ResetHoldingFrame.c)
 */

struct tagPOINTERINPUTFRAME *__fastcall CommitHoldingFrame(unsigned __int64 a1)
{
  __int64 HoldingFrameForDevice; // rdi
  __int64 v3; // rbx
  struct tagPOINTERQFRAME *v5; // rax
  int v6; // ecx
  bool v7; // zf
  int v8; // eax
  __int64 v9; // rax
  struct _LIST_ENTRY *Flink; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  HoldingFrameForDevice = FindHoldingFrameForDevice();
  EtwTraceBeginPointerFrameCommit(0LL, *(unsigned int *)(HoldingFrameForDevice + 32));
  v3 = Win32AllocPoolZInit(112LL, 1718645589LL);
  if ( !v3 )
    return 0LL;
  v5 = AllocPointerQFrameList(*(_DWORD *)(HoldingFrameForDevice + 32));
  *(_QWORD *)(v3 + 96) = v5;
  if ( !v5 )
  {
    Win32FreePool(v3);
    return 0LL;
  }
  *(_QWORD *)(v3 + 64) = *(_QWORD *)(HoldingFrameForDevice + 24);
  v6 = dword_1C032C390;
  v7 = dword_1C032C390 == -1;
  v8 = dword_1C032C390 + 1;
  *(_DWORD *)(v3 + 32) = dword_1C032C390;
  if ( v7 )
    v8 = 1;
  dword_1C032C390 = v8;
  *(_DWORD *)(v3 + 40) = *(_DWORD *)(HoldingFrameForDevice + 32);
  *(_QWORD *)(v3 + 56) = *(_QWORD *)(HoldingFrameForDevice + 16);
  *(_QWORD *)(v3 + 88) = *(_QWORD *)(HoldingFrameForDevice + 64);
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(HoldingFrameForDevice + 40);
  v9 = *(_QWORD *)(HoldingFrameForDevice + 48);
  *(_QWORD *)(v3 + 80) = v9;
  while ( v9 )
  {
    *(_DWORD *)v9 = v6;
    v9 = *(_QWORD *)(v9 + 24);
  }
  v11[0] = v3 + 104;
  v11[1] = *(_QWORD *)(HMValidateHandleNoSecure(a1, 19) + 472);
  HMAssignmentLock(v11);
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
