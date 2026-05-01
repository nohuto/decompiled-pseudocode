/*
 * XREFs of ?_ObliterateOperation@CAppViewManager@@AEAAJAEBU_GUID@@@Z @ 0x18003F41C
 * Callers:
 *     ?DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z @ 0x18003EEE0 (-DragCancel@CAppViewManager@@UEAAJU_GUID@@@Z.c)
 *     ?WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z @ 0x18003EF80 (-WindowProvided@CAppViewManager@@UEAAJU_GUID@@PEAUHWND__@@@Z.c)
 *     ?_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z @ 0x18003F14C (-_WindowProvidedWorker@CAppViewManager@@AEAAJAEBU_GUID@@PEAUHWND__@@@Z.c)
 *     wil::details::ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___::_ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___ @ 0x1800436DC (wil--details--ScopeExitFn__lambda_f9c9d82077cc2726e9c79a56f048e710___--_ScopeExitFn__lambda_f9c9.c)
 *     wil::details::ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___::_ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___ @ 0x1800436FC (wil--details--ScopeExitFn__lambda_beb76a894d0ae0e432907038b695058b___--_ScopeExitFn__lambda_beb7.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUIImmersiveApplication@@W4ApplicationDisappearReason@@@Z @ 0x180041B4C (-_TransferAllWindowsToNextGlomWorker@CAppViewManager@@AEAAJPEAUIImmersiveApplicationInternal@@PE.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAppViewManager::_ObliterateOperation(CAppViewManager *this, const struct _GUID *a2)
{
  RTL_SRWLOCK *v4; // rbx
  int v5; // eax
  unsigned int v6; // edi
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, _QWORD *); // rcx
  __int128 v13; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  int v15; // [rsp+70h] [rbp+30h] BYREF
  __int64 v16; // [rsp+78h] [rbp+38h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+80h] [rbp+40h] BYREF
  PSRWLOCK v18; // [rsp+88h] [rbp+48h]

  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  v18 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v13 = (__int128)*a2;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int128 *, int *))(**((_QWORD **)this + 22) + 24LL))(
         *((_QWORD *)this + 22),
         &v13,
         &v15);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v15 )
    {
      v17 = 0LL;
      v7 = *((_QWORD *)this + 22);
      v13 = (__int128)*a2;
      (*(void (__fastcall **)(__int64, __int128 *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))(*(_QWORD *)v7 + 56LL))(
        v7,
        &v13,
        &v17);
      v16 = 0LL;
      v8 = (**v17)(v17, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, &v16);
      v6 = v8;
      if ( v8 >= 0 )
      {
        CAppViewManager::_TransferAllWindowsToNextGlomWorker(this, v16, 0LL, 4294967293LL, -2LL);
        (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 14) + 168LL))(*((_QWORD *)this + 14), v16);
        v9 = *((_QWORD *)this + 22);
        v13 = (__int128)*a2;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v9 + 72LL))(v9, &v13);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x482,
          (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
          (const char *)(unsigned int)v8);
      }
      v10 = v16;
      if ( v16 )
      {
        v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
      v11 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, _QWORD *)))(*v11)[2])(v11);
      }
    }
    else
    {
      v6 = -2147023728;
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x479,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
      (const char *)(unsigned int)v5);
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return v6;
}
