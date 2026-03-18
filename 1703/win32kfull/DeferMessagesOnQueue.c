/*
 * XREFs of DeferMessagesOnQueue @ 0x1C01B212C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     ?DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z @ 0x1C01B1F50 (-DeferMessage@@YAXPEAUtagMLIST@@PEAUtagQMSG@@@Z.c)
 */

struct tagQMSG *__fastcall DeferMessagesOnQueue(__int64 a1, struct tagQMSG *a2)
{
  int v2; // r10d
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // r10d
  struct tagQMSG *v8; // r8

  v2 = 0;
  if ( a2 )
  {
    do
    {
      v3 = *((_QWORD *)a2 + 13);
      if ( !v3 || (*(_DWORD *)(v3 + 440) & 0x10000) == 0 )
        break;
      v4 = (_QWORD *)*((_QWORD *)a2 + 1);
      v5 = *(_QWORD *)a2;
      if ( v4 )
        *v4 = v5;
      else
        *(_QWORD *)a1 = v5;
      v6 = *((_QWORD *)a2 + 1);
      if ( *(_QWORD *)a2 )
        *(_QWORD *)(*(_QWORD *)a2 + 8LL) = v6;
      else
        *(_QWORD *)(a1 + 8) = v6;
      *((_QWORD *)a2 + 1) = 0LL;
      *(_QWORD *)a2 = 0LL;
      DeferMessage((struct tagMLIST *)a1, a2);
      v2 = v7 + 1;
      a2 = v8;
    }
    while ( v8 );
  }
  *(_DWORD *)(a1 + 16) -= v2;
  return a2;
}
