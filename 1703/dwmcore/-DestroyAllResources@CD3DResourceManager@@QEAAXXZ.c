/*
 * XREFs of ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18004D1A8
 * Callers:
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18003A580 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z @ 0x18003A700 (-Present@CHwDisplayRenderTarget@@UEAAJ_N0PEAURenderTargetPresentParameters@@@Z.c)
 *     ?ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ @ 0x180078E6C (-ProcessDeviceLost@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180078EA0 (--1CD3DDeviceLevel1@@MEAA@XZ.c)
 * Callees:
 *     ?AreActiveResources@CD3DResourceManager@@QEBA_NXZ @ 0x18004D178 (-AreActiveResources@CD3DResourceManager@@QEBA_NXZ.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18004D24C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     ??_GCD3DResourceSourceReference@@QEAAPEAXI@Z @ 0x1800CC1EC (--_GCD3DResourceSourceReference@@QEAAPEAXI@Z.c)
 *     ?DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ @ 0x1800CF8BC (-DestroySomeActiveResources@CD3DResourceManager@@AEAAIXZ.c)
 */

void __fastcall CD3DResourceManager::DestroyAllResources(union _SLIST_HEADER *this)
{
  CD3DResourceManager *v2; // rcx
  char *v3; // rdi
  char *Region; // rbx
  unsigned int active; // edi
  CD3DResourceSourceReference *v6; // rcx
  CD3DResourceSourceReference **v7; // r8
  CD3DResourceSourceReference **v8; // rdx

  if ( CD3DResourceManager::AreActiveResources((CD3DResourceManager **)this) )
  {
    active = CD3DResourceManager::DestroySomeActiveResources(v2);
    while ( QueryDepthSList(this + 1) != active )
      Sleep(1u);
    CD3DResourceManager::DestroyAndDeleteDelayedResources((CD3DResourceManager *)this);
  }
  v3 = (char *)&this[6].HeaderX64 + 8;
  Region = (char *)this[6].Region;
  while ( Region != v3 )
  {
    v6 = (CD3DResourceSourceReference *)(Region - 16);
    Region = *(char **)Region;
    v7 = (CD3DResourceSourceReference **)*((_QWORD *)v6 + 2);
    v8 = (CD3DResourceSourceReference **)*((_QWORD *)v6 + 3);
    if ( v7[1] != (CD3DResourceSourceReference *)((char *)v6 + 16)
      || *v8 != (CD3DResourceSourceReference *)((char *)v6 + 16) )
    {
      __fastfail(3u);
    }
    *v8 = (CD3DResourceSourceReference *)v7;
    v7[1] = (CD3DResourceSourceReference *)v8;
    if ( v6 )
      CD3DResourceSourceReference::`scalar deleting destructor'(v6, (unsigned int)v8);
  }
}
