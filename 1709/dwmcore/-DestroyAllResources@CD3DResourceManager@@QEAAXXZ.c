/*
 * XREFs of ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180081198
 * Callers:
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x18002174C (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18002ED10 (-Present@CHwFullScreenRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x18011B56C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x1800810C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18011DB78 (-DestroyDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1801ABD14 (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 */

void __fastcall CD3DResourceManager::DestroyAllResources(union _SLIST_HEADER *this)
{
  union _SLIST_HEADER *v1; // rdi
  char *v3; // rdi
  char *Region; // rbx
  int v5; // esi
  union _SLIST_HEADER *Alignment; // r14
  __int64 v7; // rdx
  CD3DResourceSourceReference *v8; // rcx
  CD3DResourceSourceReference **v9; // rdx
  CD3DResourceSourceReference **v10; // r8

  v1 = this + 2;
  if ( (union _SLIST_HEADER *)v1->Alignment != v1 )
  {
    v5 = 0;
    Alignment = this + 2;
    do
    {
      v7 = Alignment->Alignment - 32;
      if ( *(_DWORD *)(v7 + 8) )
      {
        CD3DResourceManager::DestroyResource((CD3DResourceManager *)this, (struct CD3DResource ***)v7);
      }
      else
      {
        ++v5;
        Alignment = (union _SLIST_HEADER *)Alignment->Alignment;
      }
    }
    while ( (union _SLIST_HEADER *)Alignment->Alignment != v1 );
    while ( QueryDepthSList(this + 1) != v5 )
      Sleep(1u);
    CD3DResourceManager::DestroyDelayedResources((CD3DResourceManager *)this);
  }
  v3 = (char *)&this[3].HeaderX64 + 8;
  Region = (char *)this[3].Region;
  while ( Region != v3 )
  {
    v8 = (CD3DResourceSourceReference *)(Region - 16);
    Region = *(char **)Region;
    v9 = (CD3DResourceSourceReference **)*((_QWORD *)v8 + 2);
    if ( v9[1] != (CD3DResourceSourceReference *)((char *)v8 + 16)
      || (v10 = (CD3DResourceSourceReference **)*((_QWORD *)v8 + 3),
          *v10 != (CD3DResourceSourceReference *)((char *)v8 + 16)) )
    {
      __fastfail(3u);
    }
    *v10 = (CD3DResourceSourceReference *)v9;
    v9[1] = (CD3DResourceSourceReference *)v10;
    if ( v8 )
      CD3DResourceSourceReference::`scalar deleting destructor'(v8, (unsigned int)v9);
  }
}
