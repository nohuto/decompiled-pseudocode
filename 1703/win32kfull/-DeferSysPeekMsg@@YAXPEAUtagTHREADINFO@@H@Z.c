/*
 * XREFs of ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0003688
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferSysPeekMsg(struct tagTHREADINFO *a1, int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 48) + 48LL);
  if ( a2 )
  {
    *(_DWORD *)(v2 + 100) |= 0x10000u;
    *((_DWORD *)a1 + 274) |= 0x4000000u;
  }
  else
  {
    *(_DWORD *)(v2 + 100) |= 0x40000u;
  }
  *(_QWORD *)(v2 + 104) = a1;
  --*(_DWORD *)(*((_QWORD *)a1 + 48) + 16LL);
}
