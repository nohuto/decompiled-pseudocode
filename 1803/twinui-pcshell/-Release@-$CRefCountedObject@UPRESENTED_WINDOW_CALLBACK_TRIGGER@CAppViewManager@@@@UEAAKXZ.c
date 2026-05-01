/*
 * XREFs of ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x18000CBD0
 * Callers:
 *     ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800098C4 (-_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_A.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180009BE4 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     ??_G?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x1800F8FE4 (--_G-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Mic.c)
 *     ??1?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9024 (--1-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Micr.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18007120C (-InternalRelease@-$ComPtr@VCDelayedTask@ComTaskPool@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180098AB4 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(char *a1)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)a1 + 12);
  if ( !v2 && a1 )
  {
    Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease(a1 + 24);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)a1 + 2);
    operator delete(a1, (const struct std::nothrow_t *)0x38);
  }
  return v2;
}
