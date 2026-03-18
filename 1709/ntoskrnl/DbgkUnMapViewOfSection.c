/*
 * XREFs of DbgkUnMapViewOfSection @ 0x140579A58
 * Callers:
 *     MiUnmapViewOfSection @ 0x140499D10 (MiUnmapViewOfSection.c)
 *     MiFreeEnclaveModules @ 0x1406E8898 (MiFreeEnclaveModules.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     DbgkpSendApiMessage @ 0x1406AC2E4 (DbgkpSendApiMessage.c)
 *     DbgkpSuppressDbgMsg @ 0x1406ACE08 (DbgkpSuppressDbgMsg.c)
 */

__int64 __fastcall DbgkUnMapViewOfSection(_KPROCESS *Object)
{
  __int64 result; // rax
  struct _KTHREAD *CurrentThread; // r8
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
        if ( (KeGetCurrentThread()->MiscFlags & 0x400) != 0 || KeGetCurrentThread()->ApcStateIndex == 1 )
          Teb = 0LL;
        else
          Teb = KeGetCurrentThread()->Teb;
        if ( !Teb )
          return DbgkpSendApiMessage(Object);
        if ( Object != CurrentThread->Process )
          return DbgkpSendApiMessage(Object);
        result = DbgkpSuppressDbgMsg(Teb);
        if ( !(_DWORD)result )
          return DbgkpSendApiMessage(Object);
      }
    }
  }
  return result;
}
