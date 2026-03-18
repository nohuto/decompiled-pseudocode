/*
 * XREFs of ?FreeSomeVideoMemory@CD3DResourceManager@@QEAA_NJ@Z @ 0x18004D20C
 * Callers:
 *     ?CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U?$TMILFlagsEnum@W4FlagsEnum@MilRTInitialization@@@@PEBVCDisplay@@PEAPEAVCSwapChainBase@@@Z @ 0x180077AB8 (-CreateSwapChain@CD3DDeviceLevel1@@QEAAJPEAUDXGI_SWAP_CHAIN_DESC@@W4DXGI_COLOR_SPACE_TYPE@@U-$TM.c)
 *     ?CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEAUID3D11Texture2D@@@Z @ 0x1800793BC (-CreateTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAUD3D11_SUBRESOURCE_DATA@@PEAPEA.c)
 *     ?CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture@@@Z @ 0x180196210 (-CreateLockableTexture@CD3DDeviceLevel1@@QEAAJAEBVDWM_TEXTURE2D_DESC@@PEAPEAVCD3DLockableTexture.c)
 * Callees:
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18004D0C0 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ @ 0x18004D24C (-DestroyAndDeleteDelayedResources@CD3DResourceManager@@AEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CD3DResourceManager::FreeSomeVideoMemory(CD3DResourceManager *this, int a2)
{
  char v3; // bl
  CD3DResourceManager *v5; // rax
  char *v6; // rdi
  CD3DResourceManager *v7; // rcx

  v3 = 0;
  if ( a2 == -2147024882 )
  {
    if ( CD3DResourceManager::DestroyAndDeleteDelayedResources(this) )
    {
      return 1;
    }
    else
    {
      v3 = 0;
      v5 = (CD3DResourceManager *)*((_QWORD *)this + 6);
      v6 = (char *)v5 - 32;
      if ( v5 == (CD3DResourceManager *)((char *)this + 48) )
        v6 = 0LL;
      if ( v6 )
        goto LABEL_11;
      v7 = (CD3DResourceManager *)*((_QWORD *)this + 9);
      v6 = (char *)v7 - 32;
      if ( v7 == (CD3DResourceManager *)((char *)this + 64) )
        v6 = 0LL;
      if ( v6 )
      {
LABEL_11:
        v3 = 1;
        if ( _InterlockedIncrement((volatile signed __int32 *)v6 + 2) == 1 )
        {
          *((_DWORD *)v6 + 2) = 0;
          Sleep(1u);
        }
        else
        {
          CD3DResourceManager::DestroyResource(this, (struct CD3DResource ***)v6);
          if ( _InterlockedExchangeAdd((volatile signed __int32 *)v6 + 2, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)v6 + 16LL))(v6, 1LL);
        }
      }
    }
  }
  return v3;
}
