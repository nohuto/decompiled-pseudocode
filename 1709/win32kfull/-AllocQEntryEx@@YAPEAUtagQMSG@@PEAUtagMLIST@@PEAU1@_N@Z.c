/*
 * XREFs of ?AllocQEntryEx@@YAPEAUtagQMSG@@PEAUtagMLIST@@PEAU1@_N@Z @ 0x1C00CD370
 * Callers:
 *     _PostThreadMessageEx @ 0x1C009E6C0 (_PostThreadMessageEx.c)
 *     PostInputMessage @ 0x1C009ED18 (PostInputMessage.c)
 *     PostEventMessageEx @ 0x1C009F99C (PostEventMessageEx.c)
 *     xxxSetForegroundWindow2 @ 0x1C00CDBE4 (xxxSetForegroundWindow2.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 * Callees:
 *     UserSetLastError @ 0x1C0064344 (UserSetLastError.c)
 *     memset @ 0x1C0145A00 (memset.c)
 */

struct tagQMSG *__fastcall AllocQEntryEx(struct tagMLIST *a1, struct tagQMSG *a2, char a3)
{
  struct tagQMSG *v4; // rbx
  struct tagQMSG *v6; // rax
  struct tagQMSG **v7; // rax
  __int64 v9; // rcx

  v4 = a2;
  if ( *((_DWORD *)a1 + 4) >= gUserPostMessageLimit )
  {
    v9 = 1816LL;
  }
  else
  {
    if ( a2 )
      goto LABEL_5;
    v6 = (struct tagQMSG *)Win32AllocateFromPagedLookasideList(QEntryLookaside);
    v4 = v6;
    if ( v6 )
    {
      memset(v6, 0, 0xA0uLL);
LABEL_5:
      if ( *((_DWORD *)a1 + 5) == 2 )
        *((_DWORD *)v4 + 25) |= 8u;
      else
        *((_DWORD *)v4 + 25) |= 4u;
      v7 = (struct tagQMSG **)*((_QWORD *)a1 + 1);
      if ( v7 )
      {
        if ( !a3 )
        {
          *v7 = v4;
          *((_QWORD *)v4 + 1) = *((_QWORD *)a1 + 1);
          *((_QWORD *)a1 + 1) = v4;
          goto LABEL_10;
        }
        *(_QWORD *)(*(_QWORD *)a1 + 8LL) = v4;
        *(_QWORD *)v4 = *(_QWORD *)a1;
      }
      else
      {
        *((_QWORD *)a1 + 1) = v4;
      }
      *(_QWORD *)a1 = v4;
LABEL_10:
      ++*((_DWORD *)a1 + 4);
      return v4;
    }
    v9 = 8LL;
  }
  UserSetLastError(v9, (__int64)a2);
  return 0LL;
}
