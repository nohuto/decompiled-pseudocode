/*
 * XREFs of ?PurgeAndNotify@CAtlasTexture@@QEAAXXZ @ 0x1801B3B48
 * Callers:
 *     ?HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z @ 0x18001A6C0 (-HandleAdvanceFrame@CD3DDeviceManager@@AEAAJ_K_N@Z.c)
 *     ?MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z @ 0x1801AE740 (-MergeAtlases@CAtlasManager@@AEAAXPEA_N@Z.c)
 * Callees:
 *     ?GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ @ 0x18008B9A8 (-GetDevice@CAtlasTexture@@QEBAPEAVCD3DDeviceLevel1@@XZ.c)
 *     ?NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z @ 0x1801CF588 (-NotifyOwner@CAtlasEntry@@AEBAXPEBVCD3DDeviceLevel1@@@Z.c)
 */

void __fastcall CAtlasTexture::PurgeAndNotify(CAtlasTexture *this)
{
  __int64 i; // rdi
  CAtlasTexture **v3; // rsi
  const struct CD3DDeviceLevel1 *Device; // rax

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 6); i = (unsigned int)(i + 1) )
  {
    v3 = *(CAtlasTexture ***)(*((_QWORD *)this + 2) + 8 * i);
    if ( v3 )
    {
      Device = CAtlasTexture::GetDevice(*v3);
      CAtlasEntry::NotifyOwner((CAtlasEntry *)v3, Device);
    }
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  *((_DWORD *)this + 8) = 0;
}
