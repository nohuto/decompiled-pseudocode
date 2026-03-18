/*
 * XREFs of ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18004D24C
 * Callers:
 *     ?TryReleaseNonResidentVideoMemoryResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x180017D58 (-TryReleaseNonResidentVideoMemoryResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18004D20C (-FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800CDE20 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD3DResourceManager::DestroyAndDeleteDelayedResources(CD3DResourceManager *this)
{
  unsigned int v1; // edi
  union _SLIST_HEADER *i; // rcx
  PSLIST_ENTRY v4; // rbx
  struct CD3DResource ***v6; // rsi

  v1 = 0;
  for ( i = (union _SLIST_HEADER *)((char *)this + 16); ; i = (union _SLIST_HEADER *)((char *)this + 16) )
  {
    v4 = InterlockedFlushSList(i);
    if ( !v4 )
      break;
    do
    {
      v6 = (struct CD3DResource ***)&v4[-3];
      v4 = v4->Next;
      CD3DResourceManager::DestroyResource(this, v6);
      if ( v6 )
        ((void (__fastcall *)(struct CD3DResource ***, __int64))(*v6)[2])(v6, 1LL);
      ++v1;
    }
    while ( v4 );
  }
  return v1;
}
