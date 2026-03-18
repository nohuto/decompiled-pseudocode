/*
 * XREFs of ?BeginFrame@CConnection@DirectComposition@@QEAAJAEBUCOMPOSITION_FRAME_INFO@@PEA_K@Z @ 0x1C0015964
 * Callers:
 *     NtDCompositionBeginFrame @ 0x1C0013EE0 (NtDCompositionBeginFrame.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000FEF0 (UserIsCurrentProcessDwm.c)
 *     ?Create@CCompositionFrame@DirectComposition@@SAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAV12@@Z @ 0x1C0013520 (-Create@CCompositionFrame@DirectComposition@@SAJAEBUCOMPOSITION_FRAME_INFO@@PEAPEAV12@@Z.c)
 *     ?Release@CCompositionFrame@DirectComposition@@QEBAJXZ @ 0x1C0013648 (-Release@CCompositionFrame@DirectComposition@@QEBAJXZ.c)
 *     ?Discard@CCompositionFrame@DirectComposition@@QEAAXXZ @ 0x1C00136E4 (-Discard@CCompositionFrame@DirectComposition@@QEAAXXZ.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C0015440 (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 *     ?AddCompositionFrame@CConnection@DirectComposition@@AEAAXPEAVCCompositionFrame@2@@Z @ 0x1C00157C4 (-AddCompositionFrame@CConnection@DirectComposition@@AEAAXPEAVCCompositionFrame@2@@Z.c)
 *     ?ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z @ 0x1C0029E48 (-ReleaseToFrameInternal@CTokenManager@@IEAAXPEAVCCompositionFrame@DirectComposition@@@Z.c)
 *     ?AcquireTokenManagerLock@CTokenManager@@AEAAXXZ @ 0x1C0029F48 (-AcquireTokenManagerLock@CTokenManager@@AEAAXXZ.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C007C7F4 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?Release@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C007C844 (-Release@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::BeginFrame(
        DirectComposition::CConnection *this,
        const struct COMPOSITION_FRAME_INFO *a2,
        unsigned __int64 *a3)
{
  BOOL IsCurrentProcessDwm; // eax
  BOOL v7; // ebx
  DirectComposition::CCriticalSection *v8; // rcx
  int ReadyBatches; // esi
  __int64 *v10; // rbx
  CTokenManager *v11; // rcx
  CTokenManager *v12; // rcx
  struct DirectComposition::CCompositionFrame *v14; // [rsp+40h] [rbp+8h] BYREF
  struct DirectComposition::CBatch *v15; // [rsp+48h] [rbp+10h] BYREF

  IsCurrentProcessDwm = UserIsCurrentProcessDwm();
  *a3 = 0LL;
  v7 = IsCurrentProcessDwm;
  v8 = (DirectComposition::CCriticalSection *)*((_QWORD *)this + 1);
  DirectComposition::CConnection::s_capabilityInfo = *(_OWORD *)((char *)a2 + 28);
  DirectComposition::CCriticalSection::AcquireShared(v8);
  if ( v7 && !DirectComposition::CConnection::s_pDwmRenderThread )
    DirectComposition::CConnection::s_pDwmRenderThread = KeGetCurrentThread();
  if ( *((_DWORD *)this + 37) )
  {
    ReadyBatches = DirectComposition::CCompositionFrame::Create(a2, &v14);
    if ( ReadyBatches >= 0 )
    {
      if ( g_pTokenManager )
        CTokenManager::AcquireTokenManagerLock(g_pTokenManager);
      v10 = (__int64 *)v14;
      *((_QWORD *)this + 20) = *(_QWORD *)a2;
      ReadyBatches = DirectComposition::CConnection::GetReadyBatches(this, v10[9], &v15);
      if ( ReadyBatches >= 0 )
      {
        *((_QWORD *)this + 21) = *((_QWORD *)a2 + 1);
        *((_DWORD *)this + 44) = *((_DWORD *)a2 + 5);
        *((_DWORD *)this + 45) = *((_DWORD *)a2 + 6);
        if ( v15 )
          v10[11] = (__int64)v15;
        if ( g_pTokenManager )
          CTokenManager::ReleaseToFrameInternal(v11, (struct DirectComposition::CCompositionFrame *)v10);
        DirectComposition::CConnection::AddCompositionFrame(this, (struct DirectComposition::CCompositionFrame *)v10);
      }
      v12 = g_pTokenManager;
      if ( g_pTokenManager )
      {
        *((_QWORD *)g_pTokenManager + 8) = 0LL;
        ExReleasePushLockExclusiveEx((char *)v12 + 56, 0LL);
      }
      if ( ReadyBatches < 0 )
        DirectComposition::CCompositionFrame::Discard((DirectComposition::CCompositionFrame *)v10);
      else
        *a3 = v10[9];
      DirectComposition::CCompositionFrame::Release((DirectComposition::CCompositionFrame *)v10);
    }
  }
  else
  {
    ReadyBatches = -1073741300;
  }
  DirectComposition::CCriticalSection::Release(*((DirectComposition::CCriticalSection **)this + 1));
  return (unsigned int)ReadyBatches;
}
