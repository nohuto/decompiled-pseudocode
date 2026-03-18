/*
 * XREFs of ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18011DB78
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z @ 0x180029EC0 (-PreRender@CCrossThreadComposition@@MEAAJPEA_N@Z.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x1800811E4 (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18011B3D8 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800810C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // edi
  union _SLIST_HEADER *i; // rcx
  struct _SLIST_ENTRY *Next; // rbx
  PSLIST_ENTRY v5; // rax

  v1 = 0;
  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v5 = InterlockedFlushSList(i);
    if ( !v5 )
      break;
    do
    {
      Next = v5->Next;
      CD3DResourceManager::DestroyResource(this, (struct CD3DResource ***)&v5[-3]);
      ++v1;
      v5 = Next;
    }
    while ( Next );
  }
  return v1;
}
