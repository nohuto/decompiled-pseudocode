/*
 * XREFs of DbgkUnMapViewOfSection @ 0x140479FC0
 * Callers:
 *     MiUnmapViewOfSection @ 0x14047B340 (MiUnmapViewOfSection.c)
 * Callees:
 *     KeIsAttachedProcess @ 0x1400FCB20 (KeIsAttachedProcess.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x140681108 (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x140681B40 (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // rdi
  void *Teb; // rcx

  result = (__int64)KeGetCurrentThread();
  if ( *(_BYTE *)(result + 562) )
  {
    CurrentThread = KeGetCurrentThread();
    result = *((unsigned int *)&CurrentThread[1].SwapListEntry + 2);
    if ( (result & 4) == 0 )
    {
      result = Object[1].ActiveProcessors.Bitmap[6];
      if ( result )
      {
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeIsAttachedProcess() )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb )
          return DbgkpSendApiMessage(Object);
        if ( Object != CurrentThread->Process )
          return DbgkpSendApiMessage(Object);
        result = DbgkpSuppressDbgMsg();
        if ( !(_DWORD)result )
          return DbgkpSendApiMessage(Object);
      }
    }
  }
  return result;
}
