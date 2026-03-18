/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJPEA_N@Z @ 0x1801FDE00
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x18000D61C (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4ScheduledCompositionPassReason@@@Z @ 0x18013E5B4 (-ScheduleCompositionPass@CComposition@@QEAAXKW4ScheduledCompositionPassReason@@@Z.c)
 *     McTemplateU0 @ 0x180143900 (McTemplateU0.c)
 *     ?GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ @ 0x18014A414 (-GetStereoscopicContentManager@CComposition@@QEAAPEAVCStereoscopicContentManager@@XZ.c)
 *     McTemplateU0pp @ 0x18014AD40 (McTemplateU0pp.c)
 *     McTemplateU0xxx @ 0x1801AA4A4 (McTemplateU0xxx.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801F8A8C (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ @ 0x1801FAB04 (-CacheDirtyRegion@CHolographicInteropTexture@@QEAAXXZ.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z @ 0x1801FE504 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@II@Z.c)
 *     McTemplateU0xxxx @ 0x1801FE73C (McTemplateU0xxxx.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801FEA40 (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(CHolographicInteropTarget *this, bool *a2)
{
  unsigned int v2; // edi
  __int64 v3; // r8
  DWORD v6; // eax
  unsigned int j; // esi
  struct CHolographicInteropTexture *v8; // r14
  unsigned int v9; // ebp
  unsigned int v10; // r8d
  void *v11; // rbp
  void *v12; // r14
  __int64 v13; // rsi
  CHolographicInteropTaskQueue *v14; // rcx
  CD3DDeviceLevel1 *v15; // rcx
  unsigned int i; // esi
  CHolographicInteropTexture *TextureAtIndex; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0;
  v3 = qword_1802D5F78 + 1;
  *a2 = 0;
  qword_1802D5F78 = v3;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0pp((__int64)this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v3, qword_1802D5F80);
  if ( *(_DWORD *)(*((_QWORD *)this + 13) + 144LL) )
  {
    v6 = WaitForSingleObject(*((HANDLE *)this + 19), 0xAu);
    v2 = *(_DWORD *)(*((_QWORD *)this + 13) + 144LL);
    if ( v6 )
    {
      for ( i = 0; i < v2; ++i )
      {
        TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 13), i);
        if ( TextureAtIndex )
          CHolographicInteropTexture::CacheDirtyRegion(TextureAtIndex);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0xxx(
          Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED,
          qword_1802D5F78,
          qword_1802D5F80,
          0LL);
      CComposition::ScheduleCompositionPass(*((_QWORD *)this - 6));
    }
    else
    {
      *a2 = v2 != 0;
      for ( j = 0; j < v2; ++j )
      {
        v8 = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 13), j);
        if ( v8 )
        {
          v9 = 0;
          if ( CComposition::GetStereoscopicContentManager(*((CComposition **)this - 6)) )
            LOBYTE(v9) = *((_BYTE *)CComposition::GetStereoscopicContentManager(*((CComposition **)this - 6)) + 84) != 0;
          CHolographicInteropTarget::RenderTexture((CHolographicInteropTarget *)((char *)this - 64), v8, v10, v9);
        }
      }
      ++qword_1802D5F80;
      v11 = (void *)*((_QWORD *)this + 19);
      v12 = (void *)*((_QWORD *)this + 18);
      v13 = *((_QWORD *)this + 13);
      QueryPerformanceCounter(&PerformanceCount);
      v14 = *(CHolographicInteropTaskQueue **)(v13 + 40);
      if ( v14 && *(_BYTE *)(v13 + 224) )
        CHolographicInteropTaskQueue::PostMessageW(v14, 5u, 0LL, 0LL, v12, v11, (void *)PerformanceCount.QuadPart);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        McTemplateU0(Microsoft_Windows_Dwm_Core_Provider_Context, &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED);
      v15 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 14);
      if ( v15 )
        CD3DDeviceLevel1::EnqueueSetEvent(v15, *((void **)this + 18));
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    McTemplateU0xxxx(
      v2,
      (unsigned int)&EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE,
      qword_1802D5F78,
      qword_1802D5F80,
      qword_1802D5F78 - qword_1802D5F80,
      v2);
  return 0LL;
}
