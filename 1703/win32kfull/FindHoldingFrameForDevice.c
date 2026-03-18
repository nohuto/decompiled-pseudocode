/*
 * XREFs of FindHoldingFrameForDevice @ 0x1C019AB7C
 * Callers:
 *     ?CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z @ 0x1C0198A7C (-CommitHoldingFrame@@YAPEAUtagPOINTERINPUTFRAME@@PEAX@Z.c)
 *     HoldRimCompleteFrame @ 0x1C019AC00 (HoldRimCompleteFrame.c)
 *     ?xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01AF110 (-xxxInertiaTimerProc@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     xxxDoTouchpadProcessing @ 0x1C01B13B8 (xxxDoTouchpadProcessing.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@KPEAGPEAI@Z @ 0x1C01EA710 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     <none>
 */

struct tagPOINTERHOLDINGFRAME *__fastcall FindHoldingFrameForDevice(__int64 a1)
{
  struct tagPOINTERHOLDINGFRAME *v1; // rax
  struct tagPOINTERHOLDINGFRAME *v4; // rcx

  v1 = qword_1C03302F8;
  if ( qword_1C03302F8 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C03302F8 )
    return 0LL;
  do
  {
    v4 = v1;
    if ( *((_QWORD *)v1 + 2) == a1 )
      break;
    v1 = *(struct tagPOINTERHOLDINGFRAME **)v1;
  }
  while ( v1 != (struct tagPOINTERHOLDINGFRAME *)&qword_1C03302F8 );
  if ( v1 == (struct tagPOINTERHOLDINGFRAME *)&qword_1C03302F8 )
    return 0LL;
  return v4;
}
