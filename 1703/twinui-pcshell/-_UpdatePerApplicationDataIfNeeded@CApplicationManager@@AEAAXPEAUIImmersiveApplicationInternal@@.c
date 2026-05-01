/*
 * XREFs of ?_UpdatePerApplicationDataIfNeeded@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@PEAUHWND__@@W4UpdateAppDataReason@1@@Z @ 0x180011630
 * Callers:
 *     ?_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z @ 0x180013450 (-_HandleActivation@CApplicationManager@@AEAAXQEBUHSHELL_DATA@1@@Z.c)
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?s_LookupEntry@?$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@CAAEAVHashBucket@1@PEAV21@IAEBQEBG@Z @ 0x180017684 (-s_LookupEntry@-$CSimpleHashTable@PEBGUPER_APPLICATION_DATA@@VCStringHashPolicy@@VCStringCompare.c)
 *     ?GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z @ 0x180175B2C (-GetPackageSidFromWindow@CallerIdentity@@YAJPEAUHWND__@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded(
        __int64 a1,
        __int64 a2,
        CallerIdentity *a3,
        int a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  void **v10; // r8
  bool v11; // di
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  CallerIdentity *v18; // [rsp+28h] [rbp-18h] BYREF
  __int64 v19; // [rsp+30h] [rbp-10h]
  __int64 v20; // [rsp+70h] [rbp+30h] BYREF
  HLOCAL hMem; // [rsp+78h] [rbp+38h] BYREF

  hMem = (HLOCAL)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 24LL))(a2);
  v8 = -*(_QWORD *)(a1 + 816);
  if ( !*(_QWORD *)(a1 + 816) )
    return v8;
  v8 = CSimpleHashTable<unsigned short const *,PER_APPLICATION_DATA,CStringHashPolicy,CStringCompare,CDefaultResizePolicy,CDefaultRehashPolicy>::s_LookupEntry(
         *(_QWORD *)(a1 + 816),
         *(unsigned int *)(a1 + 804),
         &hMem);
  v9 = v8;
  if ( *(_DWORD *)v8 != 1 )
    return v8;
  if ( *(_QWORD *)(v8 + 24) || a4 )
  {
    if ( *(CallerIdentity **)(v8 + 24) == a3 && a4 == 1 )
    {
      *(_QWORD *)(v8 + 24) = 0LL;
      v16 = *(_QWORD *)(v8 + 16);
      if ( v16 )
      {
        *(_QWORD *)(v8 + 16) = 0LL;
        LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
      *(_BYTE *)(v9 + 32) = 0;
    }
  }
  else
  {
    LODWORD(v8) = (unsigned int)GetPropW((HWND)a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow") - 1;
    if ( (_DWORD)v8 )
    {
      if ( (_DWORD)v8 != 1 )
        return v8;
      goto LABEL_13;
    }
    v11 = 0;
    if ( CallerIdentity::GetPackageSidFromWindow(a3, (HWND)&hMem, v10) < 0 )
      goto LABEL_12;
    if ( !(unsigned int)RtlGetAppContainerSidType(hMem, &v20) )
      v11 = (_DWORD)v20 == 1;
    LOBYTE(v8) = (unsigned __int8)LocalFree(hMem);
    if ( !v11 )
    {
LABEL_12:
      SetPropW((HWND)a3, L"Windows.ImmersiveShell.IdentifyAsMainCoreWindow", HANDLE_FLAG_PROTECT_FROM_CLOSE);
LABEL_13:
      v20 = 0LL;
      v18 = a3;
      v19 = 0LL;
      (*(void (__fastcall **)(__int64, CallerIdentity **, __int64 *))(*(_QWORD *)a2 + 304LL))(a2, &v18, &v20);
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
      }
      *(_QWORD *)(v9 + 24) = a3;
      v13 = v20;
      if ( *(_QWORD *)(v9 + 16) != v20 )
      {
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
        v14 = *(_QWORD *)(v9 + 16);
        *(_QWORD *)(v9 + 16) = v13;
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      }
      if ( !*(_BYTE *)(v9 + 35) )
        *(_BYTE *)(v9 + 32) = (unsigned int)GetPropW(
                                              (HWND)a3,
                                              L"Windows.ImmersiveShell.DisableShowingMainViewOnActivation") == 0;
      LOBYTE(v8) = GetPropW((HWND)a3, L"Windows.ImmersiveShell.ForceTerminateOnClose") != 0LL;
      *(_BYTE *)(v9 + 33) = v8;
      v15 = v20;
      if ( v20 )
      {
        v20 = 0LL;
        LOBYTE(v8) = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      }
    }
  }
  return v8;
}
