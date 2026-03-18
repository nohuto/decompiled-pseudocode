/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001D0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C00155F0 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0016050 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C001A268 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C001D654 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0025A54 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C008E584 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C0150664 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  struct _ERESOURCE *v2; // rbx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 *v6; // rcx
  __int64 v7; // rbx
  DirectComposition::CBatch *v8; // rcx
  DirectComposition::CAnimationBinding *v9; // rcx
  struct DirectComposition::CrossChannelVisualData *v10; // rdx
  int v11; // esi
  CInputManager *v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  char v15; // r8
  __int64 v16; // rcx

  v2 = *(struct _ERESOURCE **)(*((_QWORD *)this + 5) + 8LL);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite(v2, 1u);
  v3 = 6;
  v4 = *((_QWORD *)this + 5);
  if ( *((int *)this + 6) <= 2 )
    v3 = 2;
  *((_DWORD *)this + 6) = v3;
  ExReleaseResourceLite(*(PERESOURCE *)(v4 + 8));
  KeLeaveCriticalRegion();
  if ( *((_DWORD *)this + 6) == 2 )
  {
    LOBYTE(v5) = 1;
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 48LL))(this, v5);
  }
  DirectComposition::CApplicationChannel::ReleaseAllResources(this, 0LL);
  if ( *((_QWORD *)this + 29) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  if ( *((_QWORD *)this + 25) )
  {
    do
    {
      v6 = (__int64 *)*((_QWORD *)this + 25);
      v7 = *v6;
      if ( v6 )
        Win32FreePool(v6);
      *((_QWORD *)this + 25) = v7;
    }
    while ( v7 );
  }
  v8 = (DirectComposition::CBatch *)*((_QWORD *)this + 23);
  if ( v8 )
  {
    DirectComposition::CBatch::Clear(v8);
    v16 = *((_QWORD *)this + 23);
    if ( v16 )
      Win32FreePool(v16);
    *((_QWORD *)this + 23) = 0LL;
  }
  v9 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 46);
  if ( v9 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v9, this);
    *((_QWORD *)this + 46) = 0LL;
  }
  v10 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 51);
  if ( v10 )
  {
    *((_QWORD *)this + 51) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v10);
  }
  v11 = *((_DWORD *)this + 178);
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 128, 0LL);
    v12 = g_pInputManager;
    v13 = 0LL;
    while ( (unsigned int)v13 < *((_DWORD *)v12 + 30) )
    {
      if ( *(_DWORD *)(*(_QWORD *)(*((_QWORD *)v12 + 14) + 8 * v13) + 4LL) == v11 )
      {
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt((char *)v12 + 112, (unsigned int)v13);
        v12 = g_pInputManager;
      }
      else
      {
        v13 = (unsigned int)(v13 + 1);
      }
    }
    ExReleasePushLockSharedEx((char *)v12 + 128, 0LL);
  }
  v14 = *((_QWORD *)this + 24);
  if ( v14 )
  {
    *(_BYTE *)(v14 + 32) ^= (*(_BYTE *)(v14 + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *(_DWORD *)(v14 + 16) = ++*((_DWORD *)this + 98);
    v15 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 24) = 0LL;
    DirectComposition::CConnection::UnregisterChannel(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v14,
      v15 & 1);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
