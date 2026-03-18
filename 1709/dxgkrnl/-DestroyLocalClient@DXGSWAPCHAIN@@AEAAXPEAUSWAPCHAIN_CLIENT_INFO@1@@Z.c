/*
 * XREFs of ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01D5214
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C01D5188 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C01D5390 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C01D553C (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01D6074 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0002A50 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002CE0 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008BA68 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C009E4B0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocalClient(DXGSWAPCHAIN *this, struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2)
{
  void *v3; // rcx
  struct DXGPROCESS *Current; // r15
  unsigned int i; // ebp
  __int64 v7; // r12
  HANDLE *v8; // rbx
  unsigned int v9; // r14d
  __int64 v10; // rax
  __int64 v11; // r8
  int v12; // edx
  struct DXGSYNCOBJECT *v13; // rbx
  __int64 v14; // rcx
  PERESOURCE *Global; // rax

  v3 = (void *)*((_QWORD *)a2 + 4);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v3, (__int64)a2);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v7 = 56LL * i;
    v8 = (HANDLE *)(*((_QWORD *)this + 7) + v7 + 16 * (*((int *)a2 + 7) + 2LL));
    if ( *v8 )
    {
      ObCloseHandle(*v8, 1);
      *v8 = 0LL;
    }
    v9 = *(_DWORD *)(v7 + 16LL * *((int *)a2 + 7) + *((_QWORD *)this + 7) + 28);
    if ( v9 )
    {
      if ( Current )
      {
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 200));
        v10 = (v9 >> 6) & 0xFFFFFF;
        if ( (unsigned int)v10 < *((_DWORD *)Current + 60)
          && (v11 = *((_QWORD *)Current + 28),
              v12 = *(_DWORD *)(v11 + 16 * v10 + 8),
              ((v9 >> 25) & 0x60) == (*(_BYTE *)(v11 + 16 * v10 + 8) & 0x60))
          && (v12 & 0x2000) == 0
          && (v12 & 0x1F) != 0
          && (*(_BYTE *)(v11 + 16LL * (unsigned int)v10 + 8) & 0x1F) == 8 )
        {
          v13 = *(struct DXGSYNCOBJECT **)(v11 + 16LL * (unsigned int)v10);
        }
        else
        {
          v13 = 0LL;
        }
        ExReleasePushLockSharedEx((char *)Current + 200, 0LL);
        KeLeaveCriticalRegion();
        if ( v13 )
        {
          Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v14);
          DXGGLOBAL::DestroySyncObject(Global, v13, v9);
        }
      }
      *(_DWORD *)(v7 + 16LL * *((int *)a2 + 7) + *((_QWORD *)this + 7) + 28) = 0;
    }
  }
  *((_QWORD *)a2 + 2) = 0LL;
}
