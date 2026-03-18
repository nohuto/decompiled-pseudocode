/*
 * XREFs of FindHoldingFrameForDevice @ 0x1C01A67E8
 * Callers:
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C01A45D4 (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C01A68DC (HoldRimCompleteFrame.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01B24A0 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B47C0 (xxxDoTouchpadProcessing.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01F6604 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERHOLDINGFRAME *__fastcall FindHoldingFrameForDevice(__int64 a1)
{
  struct tagPOINTERHOLDINGFRAME *v1; // rax
  struct tagPOINTERHOLDINGFRAME *v4; // rcx

  v1 = qword_1C032B7B8;
  if ( qword_1C032B7B8 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C032B7B8 )
    return 0LL;
  do
  {
    v4 = v1;
    if ( *((_QWORD *)v1 + 2) == a1 )
      break;
    v1 = *(struct tagPOINTERHOLDINGFRAME **)v1;
  }
  while ( v1 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C032B7B8 );
  if ( v1 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C032B7B8 )
    return 0LL;
  return v4;
}
