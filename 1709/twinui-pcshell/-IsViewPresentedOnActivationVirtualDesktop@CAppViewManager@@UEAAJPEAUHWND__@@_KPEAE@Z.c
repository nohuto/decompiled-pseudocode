/*
 * XREFs of ?IsViewPresentedOnActivationVirtualDesktop@CAppViewManager@@UEAAJPEAUHWND__@@_KPEAE@Z @ 0x18003ED60
 * Callers:
 *     <none>
 * Callees:
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180043660 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z @ 0x180045258 (-_GetVirtualDesktopForPendingActivation@CAppViewManager@@AEAAJ_KPEAPEAUIVirtualDesktop@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::IsViewPresentedOnActivationVirtualDesktop(
        CAppViewManager *this,
        HWND a2,
        unsigned __int64 a3,
        bool *a4)
{
  int GlomForWindow; // edi
  struct IImmersiveApplicationInternal *v9; // rbx
  struct IVirtualDesktop *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v14; // [rsp+20h] [rbp-20h] BYREF
  __int64 v15; // [rsp+28h] [rbp-18h] BYREF
  struct IImmersiveApplicationInternal *v16[2]; // [rsp+30h] [rbp-10h] BYREF
  int v17; // [rsp+70h] [rbp+30h] BYREF
  struct IVirtualDesktop *v18; // [rsp+88h] [rbp+48h] BYREF

  v16[1] = (struct IImmersiveApplicationInternal *)-2LL;
  *a4 = 1;
  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v16[0] = 0LL;
  GlomForWindow = CAppViewManager::_GetGlomForWindow((CAppViewManager *)((char *)this - 40), a2, v16, (bool *)&v17);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = v16[0];
  if ( GlomForWindow >= 0 )
  {
    if ( (_BYTE)v17 )
    {
      v15 = 0LL;
      if ( (**(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v16[0])(
             v16[0],
             &GUID_8b14e88b_5663_4caf_b196_c31479262831,
             &v15) >= 0 )
      {
        v14 = 0LL;
        GlomForWindow = (*(__int64 (__fastcall **)(PVOID, __int64, __int64 *))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                                             + 56LL))(
                          CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
                          v15,
                          &v14);
        if ( GlomForWindow >= 0 )
        {
          v18 = 0LL;
          if ( (int)CAppViewManager::_GetVirtualDesktopForPendingActivation(
                      (CAppViewManager *)((char *)this - 40),
                      a3,
                      &v18) < 0 )
          {
            GlomForWindow = 0;
          }
          else
          {
            GlomForWindow = (*(__int64 (__fastcall **)(struct IVirtualDesktop *, __int64, int *))(*(_QWORD *)v18 + 24LL))(
                              v18,
                              v14,
                              &v17);
            if ( GlomForWindow >= 0 )
              *a4 = v17 != 0;
          }
          v10 = v18;
          if ( v18 )
          {
            v18 = 0LL;
            (*(void (__fastcall **)(struct IVirtualDesktop *))(*(_QWORD *)v10 + 16LL))(v10);
          }
        }
        v11 = v14;
        if ( v14 )
        {
          v14 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      v12 = v15;
      if ( v15 )
      {
        v15 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
    }
    else
    {
      *a4 = 0;
    }
  }
  if ( v9 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v9 + 16LL))(v9);
  return (unsigned int)GlomForWindow;
}
