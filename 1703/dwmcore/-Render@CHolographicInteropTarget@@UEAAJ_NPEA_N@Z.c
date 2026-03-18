/*
 * XREFs of ?Render@CHolographicInteropTarget@@UEAAJ_NPEA_N@Z @ 0x1801A6AB0
 * Callers:
 *     <none>
 * Callees:
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     Template_xxx @ 0x1801459E8 (Template_xxx.c)
 *     Template_xxxx @ 0x180145A64 (Template_xxxx.c)
 *     Template_xx @ 0x18016786C (Template_xx.c)
 *     ?EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z @ 0x180196590 (-EnqueueSetEvent@CD3DDeviceLevel1@@QEAAJPEAX@Z.c)
 *     ?GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z @ 0x1801A61A0 (-GetTextureAtIndex@CHolographicManager@@QEAAPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z @ 0x1801A70E4 (-RenderTexture@CHolographicInteropTarget@@AEAAJPEAVCHolographicInteropTexture@@I@Z.c)
 *     ?PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z @ 0x1801A8C3C (-PostMessageW@CHolographicInteropTaskQueue@@QEAA_NIPEAUIUnknown@@PEAX111@Z.c)
 */

__int64 __fastcall CHolographicInteropTarget::Render(CHolographicInteropTarget *this, __int64 a2, bool *a3)
{
  unsigned int v4; // esi
  __int64 v5; // r8
  __int64 v7; // rcx
  unsigned int i; // ebx
  struct CHolographicInteropTexture *TextureAtIndex; // rax
  unsigned int v10; // r8d
  void *v11; // rbp
  void *v12; // r14
  __int64 v13; // rbx
  CHolographicInteropTaskQueue *v14; // rcx
  CD3DDeviceLevel1 *v15; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  v5 = ++qword_180241C30;
  *a3 = 0;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    Template_xx((__int64)this, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDER, v5, qword_180241C28);
  if ( *(_DWORD *)(*((_QWORD *)this + 6) + 104LL) )
  {
    if ( WaitForSingleObject(*((HANDLE *)this + 13), 0xAu) )
    {
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) == 0 )
        return 0LL;
      Template_xxx(v7, &EVTDESC_HOLOGRAPHICINTEROPTARGET_WAITONINCOMINGFAILED, qword_180241C30, qword_180241C28, 0LL);
    }
    else
    {
      v4 = *(_DWORD *)(*((_QWORD *)this + 6) + 104LL);
      *a3 = v4 != 0;
      for ( i = 0; i < v4; ++i )
      {
        TextureAtIndex = CHolographicManager::GetTextureAtIndex(*((RTL_SRWLOCK **)this + 6), i);
        if ( TextureAtIndex )
          CHolographicInteropTarget::RenderTexture(
            (CHolographicInteropTarget *)((char *)this - 64),
            TextureAtIndex,
            v10);
      }
      ++qword_180241C28;
      v11 = (void *)*((_QWORD *)this + 13);
      v12 = (void *)*((_QWORD *)this + 12);
      v13 = *((_QWORD *)this + 6);
      QueryPerformanceCounter(&PerformanceCount);
      v14 = *(CHolographicInteropTaskQueue **)(v13 + 40);
      if ( v14 )
        CHolographicInteropTaskQueue::PostMessageW(v14, 5u, 0LL, 0LL, v12, v11, (void *)PerformanceCount.QuadPart);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
        TemplateEventDescriptor((__int64)v14, &EVTDESC_HOLOGRAPHICINTEROPTARGET_SYNCPOSTED);
      v15 = (CD3DDeviceLevel1 *)*((_QWORD *)this + 7);
      if ( v15 )
        CD3DDeviceLevel1::EnqueueSetEvent(v15, *((void **)this + 12));
    }
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
    Template_xxxx(v4, &EVTDESC_HOLOGRAPHICINTEROPTARGET_RENDERCOMPLETE);
  return 0LL;
}
