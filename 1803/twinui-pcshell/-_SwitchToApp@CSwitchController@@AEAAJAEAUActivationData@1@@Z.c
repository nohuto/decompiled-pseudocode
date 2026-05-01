/*
 * XREFs of ?_SwitchToApp@CSwitchController@@AEAAJAEAUActivationData@1@@Z @ 0x1802B2D20
 * Callers:
 *     ?SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1802B1FC0 (-SwitchToApp@CSwitchController@@UEAAJPEAUIImmersiveApplication@@PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 *     ?SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z @ 0x1802B2110 (-SwitchToAppByIdWithArguments@CSwitchController@@UEAAJPEBG00PEBUSWITCH_TO_APP_OPTIONS@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z @ 0x1802B2C90 (-_RemoveAppWithPendingTermination@CSwitchController@@AEAAJPEAUIImmersiveApplication@@@Z.c)
 *     ?CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOPTIONSINTERNAL@@AEBU_GUID@@PEAPEAX@Z @ 0x1802B46F0 (-CDelayedTileActivation_CreateInstance@@YAJPEAUIImmersiveApplication@@PEAUIUnknown@@W4ACTIVATEOP.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CSwitchController::_SwitchToApp(IUnknown **this, struct CSwitchController::ActivationData *a2)
{
  unsigned int v4; // edi
  int Instance; // ebx
  struct IImmersiveApplication **v6; // rsi
  __int64 v7; // rcx
  struct IImmersiveApplication *v8; // rbx
  __int64 *v9; // r14
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  int v15; // [rsp+68h] [rbp+10h] BYREF
  LPVOID pv; // [rsp+70h] [rbp+18h] BYREF

  v4 = 0;
  Instance = 0;
  v6 = (struct IImmersiveApplication **)((char *)a2 + 24);
  v7 = *((_QWORD *)a2 + 3);
  if ( v7 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v7 + 56LL))(v7, &v15);
    if ( !v15 )
      goto LABEL_9;
    pv = 0LL;
    v8 = *v6;
    CoTaskMemFree(0LL);
    Instance = (*(__int64 (__fastcall **)(struct IImmersiveApplication *, LPVOID *))(*(_QWORD *)v8 + 32LL))(v8, &pv);
    if ( Instance >= 0 )
    {
      if ( (*((_BYTE *)a2 + 8) & 2) == 0 )
        Instance = CSwitchController::_RemoveAppWithPendingTermination(this, *v6);
      if ( Instance == -2147023598 )
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)v6);
    }
    CoTaskMemFree(pv);
    if ( Instance >= 0 )
    {
LABEL_9:
      v9 = (__int64 *)((char *)a2 + 32);
      if ( !*v9
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, __int64))(*(_QWORD *)*v6 + 328LL))(*v6, 5LL)
        || (*(unsigned int (__fastcall **)(struct IImmersiveApplication *, _QWORD))(*(_QWORD *)*v6 + 328LL))(*v6, 0LL) )
      {
        pv = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
        Instance = IUnknown_QueryService(
                     this[2],
                     &IID_IImmersiveApplicationManager,
                     &GUID_bf63999f_7411_40da_861c_df72c0ffee84,
                     &pv);
        if ( Instance >= 0 )
        {
          v10 = (*(__int64 (__fastcall **)(LPVOID, struct IImmersiveApplication *, __int64))(*(_QWORD *)pv + 64LL))(
                  pv,
                  *v6,
                  1LL);
          Instance = v10;
          if ( v10 < 0 )
          {
            if ( v10 == -2147024891 )
              goto LABEL_26;
            v11 = *v9;
            if ( !*v9 )
            {
              if ( v10 == -2147023598 )
                v4 = 0x200000;
              Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v9);
              Instance = CDelayedTileActivation_CreateInstance(*v6, v13, v4);
              goto LABEL_26;
            }
            if ( v10 != -2147023598 )
            {
              if ( v10 == -2147019873 )
                Instance = 0;
              goto LABEL_26;
            }
            Instance = 0;
            v12 = 0x200000LL;
            goto LABEL_16;
          }
          v11 = *v9;
          if ( *v9 )
          {
            v12 = 0x1000000LL;
LABEL_16:
            (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v11 + 24LL))(v11, v12, (unsigned int)v12);
          }
        }
LABEL_26:
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&pv);
      }
    }
  }
  return (unsigned int)Instance;
}
