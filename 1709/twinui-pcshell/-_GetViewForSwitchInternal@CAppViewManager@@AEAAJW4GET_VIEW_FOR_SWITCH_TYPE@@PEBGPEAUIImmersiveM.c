/*
 * XREFs of ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180040F6C
 * Callers:
 *     ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003F570 (-GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@P.c)
 *     ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003F890 (-DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x180043660 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180043780 (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 CAppViewManager::_GetViewForSwitchInternal(CAppViewManager *a1, int a2, unsigned __int16 *a3, ...)
{
  struct IImmersiveApplicationInternal *v6; // r12
  struct IImmersiveApplicationInternal *v7; // rdi
  int MostRecentlyUsedViewForApp; // esi
  HWND v9; // r15
  int GlomForWindow; // eax
  struct IImmersiveApplicationInternal *v11; // rbx
  __int64 v12; // rcx
  struct IImmersiveApplicationInternal *v13; // rcx
  struct IImmersiveApplicationInternal *v14; // rax
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  struct IImmersiveApplicationInternal *v17; // [rsp+38h] [rbp-18h] BYREF
  struct IImmersiveApplicationInternal *v18; // [rsp+40h] [rbp-10h]
  __int64 v19; // [rsp+48h] [rbp-8h]
  __int64 v20; // [rsp+98h] [rbp+48h] BYREF
  va_list va; // [rsp+98h] [rbp+48h]
  struct IImmersiveApplicationInternal *v22; // [rsp+A0h] [rbp+50h] BYREF
  va_list va1; // [rsp+A0h] [rbp+50h]
  va_list va2; // [rsp+A8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v20 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v22 = va_arg(va2, struct IImmersiveApplicationInternal *);
  v19 = -2LL;
  v6 = v22;
  *(_QWORD *)v22 = 0LL;
  v7 = 0LL;
  v18 = 0LL;
  v22 = 0LL;
  MostRecentlyUsedViewForApp = CAppViewManager::_GetMostRecentlyUsedViewForApp(
                                 a1,
                                 a3,
                                 (struct IImmersiveMonitor *)a3,
                                 (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForApp < 0 || a2 != 1 )
    goto LABEL_17;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v16 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, unsigned __int16 *, __int64 *))(**((_QWORD **)a1 + 16) + 56LL))(
         *((_QWORD **)a1 + 16),
         a3,
         &v16) >= 0
    && *(_BYTE *)(v16 + 32) )
  {
    v9 = *(HWND *)(v16 + 24);
    v17 = 0LL;
    GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, v9, &v17, (bool *)va);
    v11 = v17;
    if ( GlomForWindow >= 0 )
    {
      if ( (_BYTE)v20 )
      {
        if ( v17 )
        {
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v17 + 8LL))(v17);
          v7 = v11;
          v18 = v11;
        }
      }
      else
      {
        if ( !(unsigned int)SHIsSameObject(
                              (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v22,
                              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v17) )
          (*(void (__fastcall **)(_QWORD *, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)a1 + 16) + 88LL))(
            *((_QWORD **)a1 + 16),
            v9,
            v11,
            v22,
            0LL);
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, __int64))(*(_QWORD *)v22 + 112LL))(
          v22,
          v9,
          2LL);
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( !v7 )
  {
LABEL_17:
    v13 = v22;
    if ( !v22 )
      goto LABEL_20;
    v7 = v22;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v22 + 8LL))(v22);
    v18 = v7;
  }
  v13 = v22;
LABEL_20:
  if ( MostRecentlyUsedViewForApp >= 0 )
  {
    v14 = v13;
    v13 = 0LL;
    v22 = 0LL;
    *(_QWORD *)v6 = v14;
  }
  if ( v13 )
  {
    v22 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)MostRecentlyUsedViewForApp;
}
