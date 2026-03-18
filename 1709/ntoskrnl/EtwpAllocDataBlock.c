/*
 * XREFs of EtwpAllocDataBlock @ 0x1404EFAC4
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpBuildNotificationPacket @ 0x1404EE23C (EtwpBuildNotificationPacket.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpQueueReply @ 0x140744924 (EtwpQueueReply.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocDataBlock(size_t Size, void *Src, _QWORD *a3)
{
  unsigned int v3; // ebx
  unsigned int v6; // ebp
  _DWORD *PoolWithTag; // rax
  _DWORD *v8; // rdi

  v3 = 0;
  *a3 = 0LL;
  if ( !Src || *((_DWORD *)Src + 1) == (_DWORD)Size )
  {
    v6 = Size;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)Size, 0x44777445u);
    v8 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( Src )
        memmove(PoolWithTag, Src, v6);
      else
        memset(PoolWithTag, 0, v6);
      v8[2] = 1;
      *a3 = v8;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  else
  {
    return (unsigned int)-1073741820;
  }
  return v3;
}
