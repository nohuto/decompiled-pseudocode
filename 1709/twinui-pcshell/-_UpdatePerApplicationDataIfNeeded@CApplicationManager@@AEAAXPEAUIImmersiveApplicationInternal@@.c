/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011D10
 * Callers:
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013F2C (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?GetItem@?$CStringHashTable@V?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@VCStringHashPolicy@@VCStringCompare@@@@QEBAJAEBQEBGAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18001742C (-GetItem@-$CStringHashTable@V-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microso.c)
 *     ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x1801C1294 (-GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
char __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        __int64 a2,
        CallerIdentity *a3,
        int a4)
{
  signed int Item; // eax
  __int64 v9; // rbx
  void **v10; // r8
  bool v11; // si
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  HLOCAL hMem; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+28h] [rbp-18h]
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+60h] [rbp+20h] BYREF
  __int64 v22; // [rsp+68h] [rbp+28h] BYREF

  v20 = -2LL;
  v22 = 0LL;
  v21 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  Item = CStringHashTable<Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CStringHashPolicy,CStringCompare>::GetItem(
           a1 + 880,
           &v21,
           &v22);
  v9 = v22;
  if ( Item < 0 )
    goto LABEL_28;
  if ( *(_QWORD *)(v22 + 24) || a4 )
  {
    if ( *(CallerIdentity **)(v22 + 24) == a3 && a4 == 1 )
    {
      *(_QWORD *)(v22 + 24) = 0LL;
      v16 = *(_QWORD *)(v9 + 16);
      if ( v16 )
      {
        *(_QWORD *)(v9 + 16) = 0LL;
        LOBYTE(Item) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      *(_BYTE *)(v9 + 32) = 0;
    }
  }
  else
  {
    Item = (unsigned int)GetPropW((HWND)a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
    if ( Item )
    {
      if ( Item != 1 )
        goto LABEL_28;
      goto LABEL_12;
    }
    v11 = 0;
    if ( CallerIdentity::GetPackageSidFromWindow(a3, (HWND)&hMem, v10) < 0 )
      goto LABEL_11;
    if ( !(unsigned int)RtlGetAppContainerSidType(hMem, &v21) )
      v11 = (_DWORD)v21 == 1;
    LOBYTE(Item) = (unsigned __int8)LocalFree(hMem);
    if ( !v11 )
    {
LABEL_11:
      SetPropW((HWND)a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
LABEL_12:
      v21 = 0LL;
      hMem = a3;
      v19 = 0LL;
      (*(void (__fastcall **)(__int64, HLOCAL *, __int64 *))(*(_QWORD *)a2 + 304LL))(a2, &hMem, &v21);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      v13 = v21;
      *(_QWORD *)(v9 + 24) = a3;
      if ( *(_QWORD *)(v9 + 16) != v13 )
      {
        if ( v13 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
        v14 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 16) = v13;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( !*(_BYTE *)(v9 + 36) )
        *(_BYTE *)(v9 + 32) = (unsigned int)GetPropW(
                                              (HWND)a3,
                                              L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      LOBYTE(Item) = GetPropW((HWND)a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      *(_BYTE *)(v9 + 33) = Item;
      v15 = v21;
      if ( v21 )
      {
        v21 = 0LL;
        LOBYTE(Item) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
LABEL_28:
  if ( v9 )
    LOBYTE(Item) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return Item;
}
