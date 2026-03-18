/*
 * XREFs of DbgkMapViewOfSection @ 0x1404E91B8
 * Callers:
 *     PsDispatchIumService @ 0x14015CBE4 (PsDispatchIumService.c)
 *     MiMapViewOfSectionExCommon @ 0x1404E8D2C (MiMapViewOfSectionExCommon.c)
 *     NtMapViewOfSection @ 0x140593910 (NtMapViewOfSection.c)
 *     NtLoadEnclaveData @ 0x1407535B8 (NtLoadEnclaveData.c)
 * Callees:
 *     RtlImageNtHeader @ 0x14003EEB0 (RtlImageNtHeader.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     ObCloseHandle @ 0x1404B5DD0 (ObCloseHandle.c)
 *     DbgkpSendApiMessage @ 0x140710C10 (DbgkpSendApiMessage.c)
 *     DbgkpSectionToFileHandle @ 0x140711604 (DbgkpSectionToFileHandle.c)
 *     DbgkpSuppressDbgMsg @ 0x1407116B0 (DbgkpSuppressDbgMsg.c)
 */

int __fastcall DbgkMapViewOfSection(_KPROCESS *Object, __int64 a2, void *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *v7; // rdx
  void *v8; // rbx
  HANDLE Handle; // [rsp+60h] [rbp-108h]

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread->PreviousMode )
  {
    v7 = KeGetCurrentThread();
    LODWORD(CurrentThread) = *((_DWORD *)&v7[1].SwapListEntry + 2);
    if ( ((unsigned __int8)CurrentThread & 4) == 0 )
    {
      if ( Object[1].ActiveProcessors.Bitmap[6] )
      {
        v8 = (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1
           ? 0LL
           : KeGetCurrentThread()->Teb;
        if ( !v8 || Object != v7->Process || (LODWORD(CurrentThread) = DbgkpSuppressDbgMsg(v8), !(_DWORD)CurrentThread) )
        {
          if ( a2 )
            Handle = (HANDLE)DbgkpSectionToFileHandle(a2);
          else
            Handle = 0LL;
          if ( a3 )
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
