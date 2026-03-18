/*
 * XREFs of xxxCallMouseHook @ 0x1C010DAD8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     PhkFirstValid @ 0x1C0048EE8 (PhkFirstValid.c)
 *     xxxCallHook2 @ 0x1C0053B80 (xxxCallHook2.c)
 */

_BOOL8 xxxCallMouseHook()
{
  __int64 Valid; // rax
  unsigned int v1; // r11d
  int *v2; // r9
  unsigned int v3; // r10d
  int v5; // [rsp+40h] [rbp+8h] BYREF

  Valid = PhkFirstValid(gptiCurrent, 7);
  return xxxCallHook2(Valid, v3, v1, v2, &v5) != 0;
}
