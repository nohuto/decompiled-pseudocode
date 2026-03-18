/*
 * XREFs of ?CheckCrossThreadInput@@YAHQEAUtagWND@@PEAUtagQMSG@@PEAH2PEAPEAU2@@Z @ 0x1C00CCF90
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01BBAB8 (xxxRetrievePointerInputMessage.c)
 * Callees:
 *     CalcWakeMask @ 0x1C00522A0 (CalcWakeMask.c)
 *     ?ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z @ 0x1C0131B18 (-ReassignInputMessage@@YAXPEAUtagTHREADINFO@@0PEAUtagQMSG@@@Z.c)
 */

__int64 __fastcall CheckCrossThreadInput(
        struct tagWND *const a1,
        struct tagQMSG *a2,
        int *a3,
        int *a4,
        struct tagQMSG **a5)
{
  struct tagTHREADINFO *v9; // r11
  int v10; // esi
  int v11; // eax
  __int64 result; // rax

  v9 = (struct tagTHREADINFO *)gptiCurrent;
  if ( *(_QWORD *)(gptiCurrent + 592LL)
    || *(struct tagQMSG **)(*(_QWORD *)(gptiCurrent + 384LL) + 48LL) != a2
    || a2 == (struct tagQMSG *)1 )
  {
    goto LABEL_7;
  }
  v10 = *((_DWORD *)a2 + 25);
  if ( (v10 & 0x20) != 0 )
  {
    *a3 = 0;
    *a5 = a2;
    return 0LL;
  }
  if ( (v10 & 0x40) != 0
    || (v11 = *((_DWORD *)a1 + 84)) == 0
    || (v11 & 2) == 0
    || (CalcWakeMask(*((_DWORD *)a2 + 6), *((_DWORD *)a2 + 6), 0) & 2) == 0
    || v9 == *((struct tagTHREADINFO **)a1 + 41) )
  {
LABEL_7:
    *a3 = *((_QWORD *)a1 + 2) != (_QWORD)v9;
    *a5 = 0LL;
    return 0LL;
  }
  *((_DWORD *)a2 + 25) = v10 | 0x20;
  ReassignInputMessage(v9, *((struct tagTHREADINFO **)a1 + 41), a2);
  result = 1LL;
  *((_QWORD *)a2 + 2) = *(_QWORD *)a1;
  *a4 = 0;
  *a3 = 0;
  return result;
}
