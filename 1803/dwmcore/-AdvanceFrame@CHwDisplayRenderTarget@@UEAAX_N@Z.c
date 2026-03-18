/*
 * XREFs of ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_N@Z @ 0x180046970
 * Callers:
 *     ?PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z @ 0x180060C30 (-PostPresent@CHwndRenderTarget@@UEAAJ_N0@Z.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180059E10 (-TranslateDXGIorD3DErrorInContext@@YA_NJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z @ 0x180088F48 (-GetAdapterHwProtectedEntityCount@CD3DDeviceManager@@QEBAIU_LUID@@@Z.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800D7E4C (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ @ 0x1800D7EA0 (-DeleteFreedResources@CD3DDeviceLevel1@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ @ 0x18013F9C8 (-ReclaimAtlasEntries@CAtlasManager@@QEAAXXZ.c)
 *     ?EndFrame@CD3DResourceManager@@QEAAXXZ @ 0x18014074C (-EndFrame@CD3DResourceManager@@QEAAXXZ.c)
 *     ?AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ @ 0x180140924 (-AgeRenderTargetBitmaps@CRenderTargetBitmapCache@@IEAAXXZ.c)
 *     ?TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ @ 0x1801DE8D0 (-TempDisableHardwareProtection@CD3DDeviceManager@@SAXXZ.c)
 */

void __fastcall CHwDisplayRenderTarget::AdvanceFrame(CHwDisplayRenderTarget *this, char a2)
{
  __int64 v2; // rax
  CHwDisplayRenderTarget *v4; // rcx
  int v6; // ebx
  __int64 (*v7)(void); // rax
  char IsValid; // al
  unsigned int v9; // edi
  __int64 v10; // rbx
  __int64 v11; // rbp
  int v12; // eax
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // eax
  bool v18; // zf
  char v19; // cl
  unsigned int v20; // [rsp+60h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 1);
  v4 = (CHwDisplayRenderTarget *)((char *)this - 216);
  if ( v2 )
  {
    v6 = *(_DWORD *)(v2 + 888);
    if ( v6 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v6, 0x36Au);
    }
    else
    {
      v7 = *(__int64 (**)(void))(*(_QWORD *)v4 + 32LL);
      if ( (char *)v7 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(v4);
      else
        IsValid = v7();
      if ( !IsValid )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
        return;
      }
    }
  }
  else
  {
    v6 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  if ( v6 >= 0 )
  {
    v9 = 0;
    v10 = *((_QWORD *)this + 1);
    v11 = *((_QWORD *)g_pComposition + 48);
    if ( v11 != *(_QWORD *)(v10 + 1040) )
    {
      v14 = *(_QWORD *)(v10 + 184);
      v15 = *((_QWORD *)g_pComposition + 48);
      v16 = *(_QWORD *)(v10 + 624);
      *(_BYTE *)(v10 + 1052) = 0;
      v17 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 152LL))(v14, v16, v15);
      v9 = v17;
      if ( v17 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0xEBBu);
      *(_QWORD *)(v10 + 1040) = v11;
    }
    v12 = *(_DWORD *)(v10 + 888);
    if ( !v12 )
    {
      if ( v9 != -2005532292 && v9 != -2147024882 && v9 != -2005270523
        || !CD3DDeviceManager::GetAdapterHwProtectedEntityCount(
              (CD3DDeviceManager *)&g_D3DDeviceManager,
              *(struct _LUID *)(v10 + 728)) )
      {
        goto LABEL_12;
      }
      if ( v9 == -2005270523 )
      {
        v18 = (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v10 + 648) + 312LL))(*(_QWORD *)(v10 + 648)) == -2005270480;
        *(_DWORD *)(v10 + 888) = -2003304307;
        v12 = -2003304307;
        v19 = v18;
      }
      else
      {
        v12 = 0;
        v19 = 1;
      }
      if ( v19 )
      {
        CD3DDeviceManager::TempDisableHardwareProtection();
        v12 = *(_DWORD *)(v10 + 888);
      }
    }
    if ( v12 )
    {
LABEL_16:
      if ( *(_QWORD *)(v10 + 1024) != v11 )
      {
        *(_QWORD *)(v10 + 1024) = v11;
        *(_BYTE *)(v10 + 1049) = 1;
        CRenderTargetBitmapCache::AgeRenderTargetBitmaps((CRenderTargetBitmapCache *)(v10 + 536));
        CAtlasManager::ReclaimAtlasEntries((CAtlasManager *)(v10 + 584));
        if ( a2 )
          CD3DDeviceLevel1::ProcessUnpinResources((CD3DDeviceLevel1 *)v10);
        CD3DResourceManager::EndFrame((CD3DResourceManager *)(v10 + 896));
        CD3DDeviceLevel1::DeleteFreedResources((CD3DDeviceLevel1 *)v10);
      }
      v13 = *((_QWORD *)this + 3);
      if ( *(_BYTE *)(v13 + 324) )
      {
        if ( *(_BYTE *)(v13 + 325) )
          (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 4) + 272LL))(*((_QWORD *)this + 4));
      }
      return;
    }
LABEL_12:
    if ( (unsigned __int8)TranslateDXGIorD3DErrorInContext(v9, 0LL, &v20) )
      v9 = v20;
    if ( v9 == -2003304307 )
      *(_DWORD *)(v10 + 888) = -2003304307;
    goto LABEL_16;
  }
}
