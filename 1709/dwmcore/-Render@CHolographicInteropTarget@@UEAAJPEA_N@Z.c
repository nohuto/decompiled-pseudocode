/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801C1A50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18001FDF8 (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1800C58D0 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ??B?$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ @ 0x1800C5B08 (--B-$ComPtr@VCD3DDeviceLevel1@@@WRL@Microsoft@@QEBAPEQBoolStruct@Details@12@HXZ.c)
 *     McTemplateU0 @ 0x180120DC8 (McTemplateU0.c)
 *     McTemplateU0xx @ 0x180126DF8 (McTemplateU0xx.c)
 *     McTemplateU0xxx @ 0x180179FA8 (McTemplateU0xxx.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801C089C (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801C20EC (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 *     McTemplateU0xxxx @ 0x1801C2330 (McTemplateU0xxxx.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801C3DC8 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(CHolographicInteropTarget *this, bool *a2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  DWORD v6; // eax
  unsigned int i; // esi
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  unsigned int v9; // r8d
  void *v10; // rbp
  void *v11; // r14
  __int64 v12; // rsi
  CHolographicInteropTaskQueue *v13; // rcx
  CD3DDeviceLevel1 **v14; // rcx
  unsigned int j; // esi
  CHolographicInteropTexture *v16; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = qword_180272F48 + 1;
  *a2 = 0;
  qword_180272F48 = v3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xx(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER,
      v3,
      qword_180272F40);
  if ( !*(_DWORD *)(*((_QWORD *)this + 6) + 144LL) )
    goto LABEL_22;
  v6 = WaitForSingleObject(*((HANDLE *)this + 13), 0xAu);
  v2 = *(_DWORD *)(*((_QWORD *)this + 6) + 144LL);
  if ( !v6 )
  {
    *a2 = v2 != 0;
    for ( i = 0; i < v2; ++i )
    {
      TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 6), i);
      if ( TextureAtIndex )
        CHolographicInteropTarget::RenderTexture((CHolographicInteropTarget *)((char *)this - 64), TextureAtIndex, v9);
    }
    ++qword_180272F40;
    v10 = (void *)*((_QWORD *)this + 13);
    v11 = (void *)*((_QWORD *)this + 12);
    v12 = *((_QWORD *)this + 6);
    QueryPerformanceCounter(&PerformanceCount);
    v13 = *(CHolographicInteropTaskQueue **)(v12 + 40);
    if ( v13 && *(_BYTE *)(v12 + 192) )
      CHolographicInteropTaskQueue::PostMessageW(v13, 5u, 0LL, 0LL, v11, v10, (void *)PerformanceCount.QuadPart);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED);
    if ( (unsigned int)Microsoft::WRL::ComPtr<CD3DDeviceLevel1>::operator int Microsoft::WRL::Details::BoolStruct::*((_QWORD *)this + 7) != -1 )
      CD3DDeviceLevel1::EnqueueSetEvent(*v14, *((void **)this + 12));
    goto LABEL_22;
  }
  for ( j = 0; j < v2; ++j )
  {
    v16 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 6), j);
    if ( v16 )
      CHolographicInteropTexture::CacheDirtyRegion(v16);
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
  {
    McTemplateU0xxx(
      Microsoft_Windows_Dwm_Core_Provider_Context,
      &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
      qword_180272F48,
      qword_180272F40,
      0LL);
LABEL_22:
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0xxxx(
        v2,
        (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
        qword_180272F48,
        qword_180272F40,
        qword_180272F48 - qword_180272F40,
        v2);
  }
  return 0LL;
}
