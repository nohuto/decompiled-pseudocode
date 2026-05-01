/*
 * XREFs of ?_GetViewForSwitchInternal@CAppViewManager@@AEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F5B4
 * Callers:
 *     ?GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplication@@@Z @ 0x18003DE80 (-GetViewForSwitch@CAppViewManager@@UEAAJW4GET_VIEW_FOR_SWITCH_TYPE@@PEBGPEAUIImmersiveMonitor@@P.c)
 *     ?DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z @ 0x18003E1A0 (-DragEnter@CAppViewManager@@UEAAJU_GUID@@PEBGUtagPOINT@@@Z.c)
 * Callees:
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     ?_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N@Z @ 0x1800412E0 (-_GetGlomForWindow@CAppViewManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveApplicationInternal@@PEA_N.c)
 *     ?_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1800413FC (-_GetMostRecentlyUsedViewForApp@CAppViewManager@@AEAAJPEBGPEAUIImmersiveMonitor@@PEAPEAUIImmersi.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
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
  HWND v12; // rcx
  struct IImmersiveApplicationInternal *v13; // rcx
  struct IImmersiveApplicationInternal *v14; // rax
  struct IImmersiveApplicationInternal *v16; // [rsp+30h] [rbp-40h] BYREF
  struct IImmersiveApplicationInternal *v17; // [rsp+38h] [rbp-38h]
  __int64 v18; // [rsp+40h] [rbp-30h]
  HWND v19[2]; // [rsp+48h] [rbp-28h] BYREF
  char v20; // [rsp+58h] [rbp-18h]
  __int64 v21; // [rsp+B8h] [rbp+48h] BYREF
  va_list va; // [rsp+B8h] [rbp+48h]
  struct IImmersiveApplicationInternal *v23; // [rsp+C0h] [rbp+50h] BYREF
  va_list va1; // [rsp+C0h] [rbp+50h]
  va_list va2; // [rsp+C8h] [rbp+58h] BYREF

  va_start(va2, a3);
  va_start(va1, a3);
  va_start(va, a3);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, struct IImmersiveApplicationInternal *);
  v18 = -2LL;
  v6 = v23;
  *(_QWORD *)v23 = 0LL;
  v7 = 0LL;
  v17 = 0LL;
  v23 = 0LL;
  MostRecentlyUsedViewForApp = CAppViewManager::_GetMostRecentlyUsedViewForApp(
                                 a1,
                                 a3,
                                 (struct IImmersiveMonitor *)a3,
                                 (struct IImmersiveApplicationInternal **)va1);
  if ( MostRecentlyUsedViewForApp < 0 || a2 != 1 )
    goto LABEL_17;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  *(_OWORD *)v19 = 0LL;
  if ( (*(int (__fastcall **)(_QWORD *, unsigned __int16 *, HWND *))(**((_QWORD **)a1 + 14) + 56LL))(
         *((_QWORD **)a1 + 14),
         a3,
         v19) >= 0
    && v20 )
  {
    v9 = v19[1];
    v16 = 0LL;
    GlomForWindow = CAppViewManager::_GetGlomForWindow(a1, v19[1], &v16, (bool *)va);
    v11 = v16;
    if ( GlomForWindow >= 0 )
    {
      if ( (_BYTE)v21 )
      {
        if ( v16 )
        {
          (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v16 + 8LL))(v16);
          v7 = v11;
          v17 = v11;
        }
      }
      else
      {
        if ( !(unsigned int)SHIsSameObject(
                              (int (__fastcall ***)(_QWORD, GUID *, __int64 *))v23,
                              (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))v16) )
          (*(void (__fastcall **)(_QWORD *, HWND, struct IImmersiveApplicationInternal *, struct IImmersiveApplicationInternal *, _QWORD))(**((_QWORD **)a1 + 14) + 88LL))(
            *((_QWORD **)a1 + 14),
            v9,
            v11,
            v23,
            0LL);
        (*(void (__fastcall **)(struct IImmersiveApplicationInternal *, HWND, __int64))(*(_QWORD *)v23 + 112LL))(
          v23,
          v9,
          2LL);
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v12 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(HWND))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( !v7 )
  {
LABEL_17:
    v13 = v23;
    if ( !v23 )
      goto LABEL_20;
    v7 = v23;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v23 + 8LL))(v23);
    v17 = v7;
  }
  v13 = v23;
LABEL_20:
  if ( MostRecentlyUsedViewForApp >= 0 )
  {
    v14 = v13;
    v13 = 0LL;
    v23 = 0LL;
    *(_QWORD *)v6 = v14;
  }
  if ( v13 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v13 + 16LL))(v13);
  }
  if ( v7 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v7 + 16LL))(v7);
  return (unsigned int)MostRecentlyUsedViewForApp;
}
