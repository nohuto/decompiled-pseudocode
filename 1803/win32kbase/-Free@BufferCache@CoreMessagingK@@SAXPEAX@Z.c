/*
 * XREFs of ?Free@BufferCache@CoreMessagingK@@SAXPEAX@Z @ 0x1C0056D04
 * Callers:
 *     ?Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z @ 0x1C0056B58 (-Send@ServerPorts@CoreMessagingK@@SAJPEAXDPEBXI@Z.c)
 *     ?CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0167220 (-CancelBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 *     ?SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z @ 0x1C0167260 (-SubmitBuffer@SendHost@CoreMessagingK@@SAJPEAUIMessageCallSendHost@@PEA_KIPEAXI@Z.c)
 * Callees:
 *     ?Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z @ 0x1C0056E34 (-Remove@BufferCache@CoreMessagingK@@CAXPEAUBufferHeader@12@0@Z.c)
 */

void __fastcall CoreMessagingK::BufferCache::Free(char *a1)
{
  struct CoreMessagingK::BufferCache::BufferHeader *v1; // r8
  char *v2; // rbx
  struct CoreMessagingK::BufferCache::BufferHeader *v3; // r11
  struct CoreMessagingK::BufferCache::BufferHeader *v4; // rax
  int v5; // r10d
  struct CoreMessagingK::BufferCache::BufferHeader *v6; // r9
  struct CoreMessagingK::BufferCache::BufferHeader *v7; // rax
  PVOID v8; // rcx

  if ( a1 )
  {
    v1 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
    v2 = a1 - 16;
    v3 = 0LL;
    v4 = 0LL;
    v5 = 0;
    if ( CoreMessagingK::BufferCache::s_FreeList )
    {
      v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)CoreMessagingK::BufferCache::s_FreeList;
      do
      {
        ++v5;
        if ( *(_WORD *)v6 >= *(_WORD *)v1 )
          v4 = v3;
        v3 = v4;
        v7 = v6;
        if ( *(_WORD *)v6 >= *(_WORD *)v1 )
          v7 = v1;
        v1 = v7;
        v4 = v6;
        v6 = (struct CoreMessagingK::BufferCache::BufferHeader *)*((_QWORD *)v6 + 1);
      }
      while ( v6 );
      if ( v5 == 2 )
      {
        if ( *(_WORD *)v1 >= *(_WORD *)v2 )
        {
          ExFreePoolWithTag(a1 - 16, 0x43424D43u);
          return;
        }
        CoreMessagingK::BufferCache::Remove(v1, v3);
        ExFreePoolWithTag(v8, 0x43424D43u);
      }
    }
    *((_QWORD *)v2 + 1) = CoreMessagingK::BufferCache::s_FreeList;
    CoreMessagingK::BufferCache::s_FreeList = v2;
  }
}
