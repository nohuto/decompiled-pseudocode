/*
 * XREFs of ?AddUnghostWindowCallbackTrigger@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@PEAUHWND__@@PEAUIAsyncCallback@@@Z @ 0x18011E2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAUIAsyncCallback@@PEAK@Z @ 0x180009BE4 (-_AddPresentedWindowCallbackTrigger@CAppViewManager@@AEAAJW4PresentedWindowWaitType@1@PEAUIImmer.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAppViewManager::AddUnghostWindowCallbackTrigger(
        CAppViewManager *this,
        struct IImmersiveApplication *a2,
        __int64 a3,
        struct IAsyncCallback *a4)
{
  RTL_SRWLOCK *v8; // rbx
  int v9; // edi
  __int64 v11[4]; // [rsp+30h] [rbp-38h] BYREF
  int v12; // [rsp+78h] [rbp+10h] BYREF

  v11[1] = -2LL;
  v8 = CApplicationManagerUtility::g_pIAMGlobals;
  v11[2] = (__int64)CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11[0] = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  v9 = (**(__int64 (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))a2)(
         a2,
         &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
         v11);
  if ( v9 >= 0 )
  {
    v9 = -2147019873;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v11[0] + 472LL))(v11[0]) )
      v9 = CAppViewManager::_AddPresentedWindowCallbackTrigger((__int64)this - 40, 1, v11[0], a3, (__int64)a4, &v12);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v11);
  if ( v8 )
    ReleaseSRWLockExclusive(v8);
  return (unsigned int)v9;
}
