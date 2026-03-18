/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00C50F0
 * Callers:
 *     DestroyThreadsMessages @ 0x1C00C4FF0 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00C5090 (FreeMessageList.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00C8CC4 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C00CFAB0 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00D07A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     SuspendThreadQueue @ 0x1C0105060 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0137D18 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     DestroyNotify @ 0x1C0058630 (DestroyNotify.c)
 *     FreePointerMessageParams @ 0x1C01BF114 (FreePointerMessageParams.c)
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  unsigned int DLT; // eax
  struct _KTHREAD **DomainLockRef; // rax
  char v7; // di
  tagObjLock *v8; // rsi
  __int64 v9; // rcx

  v4 = (unsigned int)(*((_DWORD *)a1 + 24) - 3);
  if ( *((_DWORD *)a1 + 24) == 3 || (v4 = (unsigned int)(*((_DWORD *)a1 + 24) - 4), *((_DWORD *)a1 + 24) == 4) )
  {
    v9 = *((_QWORD *)a1 + 4);
    goto LABEL_16;
  }
  if ( *((_DWORD *)a1 + 24) == 9 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
      UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
    return;
  }
  if ( *((_DWORD *)a1 + 24) == 12 )
  {
    DLT = DLT_WINEVENT::getDLT();
    DomainLockRef = (struct _KTHREAD **)GetDomainLockRef(DLT);
    v7 = 0;
    v8 = (tagObjLock *)DomainLockRef;
    if ( DomainLockRef[1] == KeGetCurrentThread() )
      v7 = 1;
    else
      tagObjLock::LockExclusive((tagObjLock *)DomainLockRef);
    DestroyNotify(*((struct tagNOTIFY ***)a1 + 5));
    if ( !v7 )
      tagObjLock::UnLock(v8);
    return;
  }
  v4 = (unsigned int)(*((_DWORD *)a1 + 24) - 17);
  switch ( *((_DWORD *)a1 + 24) )
  {
    case 0x11:
      if ( *((_QWORD *)a1 + 4) != 1LL )
        return;
      v9 = *((_QWORD *)a1 + 5);
LABEL_16:
      Win32FreePool(v9, v4, a3);
      return;
    case 0x14:
      FreePointerMessageParams(a1);
      return;
    case 0x16:
      Win32FreePool(**((_QWORD **)a1 + 4), (unsigned int)(*((_DWORD *)a1 + 24) - 20), a3);
      v9 = *((_QWORD *)a1 + 4);
      goto LABEL_16;
  }
}
