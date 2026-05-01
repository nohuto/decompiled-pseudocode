/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x1800F10EC
 * Callers:
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x1800F0F34 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x18010F4CC (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18008868C (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ?InternalRelease@?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ @ 0x1800886F0 (-InternalRelease@-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x1800F75C4 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTYPE@1@@Z @ 0x180112B20 (-ValidateWindowProcess@CApplicationManagerUtility@@YA_NPEAUHWND__@@W4WINDOW_BELONGS_TO_PROCESSTY.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(__int64 a1, __int64 a2, HWND a3, int a4)
{
  _QWORD *v8; // rbx
  unsigned int v9; // eax
  __int64 v10; // rdx
  char *v11; // rcx
  __int64 v13; // [rsp+20h] [rbp-30h] BYREF
  _QWORD *v14; // [rsp+28h] [rbp-28h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-20h] BYREF
  HWND v16; // [rsp+40h] [rbp-10h] BYREF
  __int64 v17; // [rsp+48h] [rbp-8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+28h] BYREF

  v15[1] = -2LL;
  v15[0] = -1LL;
  v13 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_068fc85a_d4d0_45b0_ab39_311de750a277, &v13) >= 0
    && (*(int (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v13 + 24LL))(v13, v15) >= 0 )
  {
    v14 = 0LL;
    if ( (int)CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
                a1 + 864,
                (__int64)v15,
                (__int64)&v14) >= 0 )
    {
      v8 = v14;
      if ( v14[3] || a4 )
      {
        if ( (HWND)v14[3] == a3 && a4 == 1 )
        {
          v11 = (char *)(v14 + 2);
          v14[3] = 0LL;
          Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v11, 0LL);
          *((_BYTE *)v8 + 32) = 0;
        }
        goto LABEL_17;
      }
      v9 = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
          goto LABEL_17;
LABEL_11:
        v18 = 0LL;
        v16 = a3;
        v17 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        (*(void (__fastcall **)(__int64, HWND *, __int64 *))(*(_QWORD *)a2 + 304LL))(a2, &v16, &v18);
        Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v17);
        v10 = v18;
        v8[3] = a3;
        Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=(v8 + 2, v10);
        if ( !*((_BYTE *)v8 + 36) )
          *((_BYTE *)v8 + 32) = (unsigned int)GetPropW(a3, L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
        *((_BYTE *)v8 + 33) = GetPropW(a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v18);
        goto LABEL_17;
      }
      if ( !(unsigned __int8)CApplicationManagerUtility::ValidateWindowProcess(a3, 2LL) )
      {
        SetPropW(a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
        goto LABEL_11;
      }
    }
LABEL_17:
    Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::InternalRelease((void **)&v14);
  }
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
}
