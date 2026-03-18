/*
 * XREFs of ExHandleLogBadReference @ 0x14025A50C
 * Callers:
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     ExMapHandleToPointerEx @ 0x1404F6FA8 (ExMapHandleToPointerEx.c)
 *     ObpCloseHandle @ 0x1404F9CCC (ObpCloseHandle.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     NtClose @ 0x14052EB10 (NtClose.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 * Callees:
 *     DbgPrintEx @ 0x1400680A0 (DbgPrintEx.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     KeRaiseUserException @ 0x1401FE6D0 (KeRaiseUserException.c)
 *     ExpUpdateDebugInfo @ 0x140717598 (ExpUpdateDebugInfo.c)
 */

void __fastcall ExHandleLogBadReference(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  if ( (*(_BYTE *)(BugCheckParameter2 + 44) & 2) != 0 )
  {
    if ( *(_QWORD *)(BugCheckParameter2 + 96) )
      ExpUpdateDebugInfo(BugCheckParameter2, KeGetCurrentThread(), BugCheckParameter1, 3LL);
    if ( a3 == 1 )
    {
      if ( !KeIsAttachedProcess()
        && BugCheckParameter2 == KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[5] )
      {
        if ( (NtGlobalFlag & 0x100) != 0 )
          DbgPrintEx(
            0x5Du,
            0,
            "AVRF: Invalid handle %p in process %p \n",
            (const void *)BugCheckParameter1,
            KeGetCurrentThread()->ApcState.Process);
        KeRaiseUserException(0xC0000008);
      }
    }
    else if ( (NtGlobalFlag & 0x40000000) != 0 )
    {
      KeBugCheckEx(0x93u, BugCheckParameter1, BugCheckParameter2, 0LL, 1uLL);
    }
  }
}
