/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D8BF0
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00B7D4C (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CD334 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00CD8F0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DestroyThreadsMessages @ 0x1C00D8B00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00D8B90 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C00FAC40 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0131A68 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  switch ( *((_DWORD *)a1 + 24) )
  {
    case 3:
    case 4:
      Win32FreePool(*((_QWORD *)a1 + 4));
      break;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
      break;
    case 0xC:
      DestroyNotify(*((_QWORD *)a1 + 5));
      break;
    case 0x11:
      if ( *((_QWORD *)a1 + 4) == 1LL )
        Win32FreePool(*((_QWORD *)a1 + 5));
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      break;
    case 0x16:
      Win32FreePool(**((_QWORD **)a1 + 4));
      Win32FreePool(*((_QWORD *)a1 + 4));
      break;
  }
}
