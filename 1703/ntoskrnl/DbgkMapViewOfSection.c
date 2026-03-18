/*
 * XREFs of DbgkMapViewOfSection @ 0x1404C95A0
 * Callers:
 *     PsDispatchIumService @ 0x140239D84 (PsDispatchIumService.c)
 *     NtMapViewOfSection @ 0x1404C9130 (NtMapViewOfSection.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14008BA00 (RtlImageNtHeader.c)
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1404F9C90 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140681A94 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x140681B40 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *Object, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rsi
  void *Teb; // rbx
  HANDLE Handle; // [rsp+60h] [rbp-118h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v7 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)&v7[1].SwapListEntry + 2);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      CurrentThread = (struct _KTHREAD *)Object[1].ActiveProcessors.Bitmap[6];
      if ( CurrentThread )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb
          || Object != v7->Process
          || (LODWORD(CurrentThread) = DbgkpSuppressDbgMsg(Teb), !(_DWORD)CurrentThread) )
        {
          Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
          RtlImageNtHeader(a3);
          LODWORD(CurrentThread) = DbgkpSendApiMessage(Object);
          if ( Handle )
            LODWORD(CurrentThread) = ObCloseHandle(Handle, 0);
        }
      }
    }
  }
  return (int)CurrentThread;
}
