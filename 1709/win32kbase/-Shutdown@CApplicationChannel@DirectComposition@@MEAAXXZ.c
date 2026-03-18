/*
 * XREFs of ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0032790
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C002F7D4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z @ 0x1C0032D18 (-ReleaseAllResources@CApplicationChannel@DirectComposition@@QEAAXPEA_N@Z.c)
 *     ?UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z @ 0x1C0033E48 (-UnregisterChannel@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@_N@Z.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C0034CD8 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C007C2CC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0096524 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z @ 0x1C01515B0 (-RemoveAt@-$CStructDynamicArray@UPointerCaptureInfo@CInputManager@@@@QEAAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::Shutdown(DirectComposition::CApplicationChannel *this)
{
  struct _ERESOURCE *v2; // rbx
  int v3; // edx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // rbx
  DirectComposition::CBatch *v10; // rcx
  DirectComposition::CAnimationBinding *v11; // rcx
  struct DirectComposition::CrossChannelVisualData *v12; // rdx
  int v13; // esi
  CInputManager *v14; // rcx
  __int64 i; // rbx
  __int64 v16; // rdx
  char v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  _QWORD *v21; // rcx

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
  if ( *((_QWORD *)this + 27) )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this);
  if ( *((_QWORD *)this + 23) )
  {
    do
    {
      v8 = (__int64 *)*((_QWORD *)this + 23);
      v9 = *v8;
      if ( v8 )
        Win32FreePool(v8, v6, v7);
      *((_QWORD *)this + 23) = v9;
    }
    while ( v9 );
  }
  v10 = (DirectComposition::CBatch *)*((_QWORD *)this + 21);
  if ( v10 )
  {
    DirectComposition::CBatch::Clear(v10);
    v20 = *((_QWORD *)this + 21);
    if ( v20 )
      Win32FreePool(v20, v18, v19);
    *((_QWORD *)this + 21) = 0LL;
  }
  v11 = (DirectComposition::CAnimationBinding *)*((_QWORD *)this + 44);
  if ( v11 )
  {
    DirectComposition::CAnimationBinding::DetachAndDelete(v11, this);
    *((_QWORD *)this + 44) = 0LL;
  }
  v12 = (struct DirectComposition::CrossChannelVisualData *)*((_QWORD *)this + 49);
  if ( v12 )
  {
    *((_QWORD *)this + 49) = 0LL;
    DirectComposition::CApplicationChannel::ReleaseCrossChannelVisuals(
      *((struct DirectComposition::CConnection **)this + 5),
      v12);
  }
  v13 = *((_DWORD *)this + 172);
  if ( g_pInputManager )
  {
    ExAcquirePushLockSharedEx((char *)g_pInputManager + 128, 0LL);
    v14 = g_pInputManager;
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)g_pInputManager + 30); v14 = g_pInputManager )
    {
      v21 = (_QWORD *)((char *)v14 + 112);
      if ( *(_DWORD *)(*(_QWORD *)(*v21 + 8 * i) + 4LL) == v13 )
        CStructDynamicArray<CInputManager::PointerCaptureInfo>::RemoveAt(v21, (unsigned int)i);
      else
        i = (unsigned int)(i + 1);
    }
    ExReleasePushLockSharedEx((char *)v14 + 128, 0LL);
  }
  v16 = *((_QWORD *)this + 22);
  if ( v16 )
  {
    *(_BYTE *)(v16 + 32) ^= (*(_BYTE *)(v16 + 32) ^ ~(*((_BYTE *)this + 48) >> 1)) & 1;
    *(_DWORD *)(v16 + 16) = ++*((_DWORD *)this + 94);
    v17 = *((_BYTE *)this + 48);
    *((_QWORD *)this + 22) = 0LL;
    DirectComposition::CConnection::UnregisterChannel(
      *((DirectComposition::CConnection **)this + 5),
      (struct DirectComposition::CBatch *)v16,
      v17 & 1);
  }
  else
  {
    (*(void (__fastcall **)(DirectComposition::CApplicationChannel *, __int64))(*(_QWORD *)this + 32LL))(this, 1LL);
  }
}
