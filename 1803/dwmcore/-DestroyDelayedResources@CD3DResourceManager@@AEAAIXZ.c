/*
 * XREFs of ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x1800D7758
 * Callers:
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x180021C20 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180048000 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x1800D7708 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D7EA0 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180021C3C (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // edi
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v4; // rax
  struct _SLIST_ENTRY *Next; // rbx

  v1 = 0;
  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v4 = InterlockedFlushSList(i);
    if ( !v4 )
      break;
    do
    {
      Next = v4->Next;
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource ***)&v4[-3]);
      ++v1;
      v4 = Next;
    }
    while ( Next );
  }
  return v1;
}
