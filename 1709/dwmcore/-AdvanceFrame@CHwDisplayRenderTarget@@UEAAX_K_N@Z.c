/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40
 * Callers:
 *     ?PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z @ 0x180018550 (-PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800202C4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x18011B3D8 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     ?SignalRenderFence@CD3DDeviceLevel1@@AEAAJ_K@Z @ 0x18011B3F8 (-SignalRenderFence@CD3DDeviceLevel1@@AEAAJ_K@Z.c)
 *     ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x18011CC9C (-ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ.c)
 *     ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x18011DB1C (-EndFrame@CD3DResourceManager@@QEAAXXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x18011DDB0 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this, unsigned __int64 a2, char a3)
{
  __int64 v3; // rax
  CHwDisplayRenderTarget *v5; // rcx
  int v8; // ebx
  __int64 (*v9)(void); // rax
  char IsValid; // al
  __int64 v11; // rbx
  __int64 v12; // rax

  v3 = *((_QWORD *)this + 1);
  v5 = (CHwDisplayRenderTarget *)((char *)this - 192);
  if ( v3 )
  {
    v8 = *(_DWORD *)(v3 + 888);
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, v8, 0x374u);
    }
    else
    {
      v9 = *(__int64 (**)(void))(*(_QWORD *)v5 + 32LL);
      if ( (char *)v9 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v5);
      else
        IsValid = v9();
      if ( !IsValid )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304442, 0x37Eu);
        return;
      }
    }
  }
  else
  {
    v8 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180201D00, 2u, -2003304307, 0x378u);
  }
  if ( v8 >= 0 )
  {
    v11 = *((_QWORD *)this + 1);
    if ( *(_QWORD *)(v11 + 1024) != a2 )
    {
      *(_QWORD *)(v11 + 1024) = a2;
      *(_BYTE *)(v11 + 1041) = 1;
      CD3DDeviceLevel1::SignalRenderFence((CD3DDeviceLevel1 *)v11, a2);
      CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CRenderTargetBitmapCache *)(v11 + 536));
      CAtlasManager::ReclaimAtlasEntries((CAtlasManager *)(v11 + 584));
      if ( a3 )
        CD3DDeviceLevel1::ProcessUnpinResources((CD3DDeviceLevel1 *)v11);
      CD3DResourceManager::EndFrame((CD3DResourceManager *)(v11 + 896));
      CD3DDeviceLevel1::DeleteFreedResources((CD3DDeviceLevel1 *)v11);
    }
    v12 = *((_QWORD *)this + 3);
    if ( *(_BYTE *)(v12 + 304) )
    {
      if ( *(_BYTE *)(v12 + 305) )
        (*(void (__fastcall **)(_QWORD, unsigned __int64))(**((_QWORD **)this + 5) + 248LL))(*((_QWORD *)this + 5), a2);
    }
  }
}
