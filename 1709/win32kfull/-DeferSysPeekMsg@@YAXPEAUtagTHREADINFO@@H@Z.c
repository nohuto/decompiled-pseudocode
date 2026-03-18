/*
 * XREFs of ?DeferSysPeekMsg@@YAXPEAUtagTHREADINFO@@H@Z @ 0x1C0008364
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     <none>
 */

void __fastcall DeferSysPeekMsg(struct tagTHREADINFO *a1, int a2)
{
  __int64 v2; // r8

  v2 = *(_QWORD *)(*((_QWORD *)a1 + 51) + 80LL);
  if ( a2 )
  {
    *(_DWORD *)(v2 + 100) |= 0x10000u;
    *((_DWORD *)a1 + 296) |= 0x10000000u;
  }
  else
  {
    *(_DWORD *)(v2 + 100) |= 0x40000u;
  }
  *(_QWORD *)(v2 + 104) = a1;
  --*(_DWORD *)(*((_QWORD *)a1 + 51) + 40LL);
}
