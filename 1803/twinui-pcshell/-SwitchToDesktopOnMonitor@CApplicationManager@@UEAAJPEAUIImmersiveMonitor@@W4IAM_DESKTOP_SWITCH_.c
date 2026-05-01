/*
 * XREFs of ?SwitchToDesktopOnMonitor@CApplicationManager@@UEAAJPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18010DA20
 * Callers:
 *     ?SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x18010D970 (-SwitchToDesktop@CApplicationManager@@UEAAJPEBUtagPOINT@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z.c)
 *     ?SwitchToShellWindow@CApplicationManager@@UEAAJXZ @ 0x18010DC60 (-SwitchToShellWindow@CApplicationManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ @ 0x1800F7A4C (-IsCalledOnIAMThread@CIAMGlobals@@QEBA_NXZ.c)
 *     CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___ @ 0x180101E58 (CDelayIAMOperations--AddOperation__lambda_d2a883147a4aaef7223296bf15465975___.c)
 *     ??$CreateRefCountedObj@V?$CAutoHandle@PEAX@@@@YA?AV?$ComPtr@V?$CRefCountedObject@V?$CAutoHandle@PEAX@@@@@WRL@Microsoft@@XZ @ 0x1801021A4 (--$CreateRefCountedObj@V-$CAutoHandle@PEAX@@@@YA-AV-$ComPtr@V-$CRefCountedObject@V-$CAutoHandle@.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ @ 0x18010EAD4 (-_ActivateIamSpecialWindow@CApplicationManager@@AEAAJXZ.c)
 *     ?_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ @ 0x180111810 (-_ValidateCallerUiContextForDesktopSwitch@CApplicationManager@@AEAAJXZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationManager::SwitchToDesktopOnMonitor(int **a1, __int64 a2, int a3)
{
  __int64 v4; // r14
  signed int Error; // esi
  HANDLE *v7; // rbx
  bool IsCalledOnIAMThread; // al
  bool v9; // di
  int v10; // r12d
  __int64 *RefCounted; // rax
  __int64 v12; // rdi
  HANDLE *v13; // r14
  __int64 v14; // rcx
  HANDLE *v15; // rdx
  HANDLE Event; // rax
  int v17; // edi
  __int64 v18; // rcx
  __int64 v20[2]; // [rsp+20h] [rbp-40h] BYREF
  int **v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  bool v23; // [rsp+40h] [rbp-20h]
  HANDLE *v24; // [rsp+48h] [rbp-18h] BYREF
  int v25; // [rsp+50h] [rbp-10h]
  bool v27; // [rsp+B0h] [rbp+50h]
  __int64 v28; // [rsp+B8h] [rbp+58h] BYREF

  v20[1] = -2LL;
  v4 = a2;
  Error = 0;
  if ( (a3 & 0x20) == 0 )
  {
    Error = CApplicationManager::_ValidateCallerUiContextForDesktopSwitch((CApplicationManager *)a1);
    if ( Error < 0 )
      return (unsigned int)Error;
  }
  v7 = 0LL;
  v28 = 0LL;
  IsCalledOnIAMThread = CIAMGlobals::IsCalledOnIAMThread((CIAMGlobals *)a1);
  v9 = IsCalledOnIAMThread;
  v27 = IsCalledOnIAMThread;
  v10 = 3;
  if ( (a3 & 4) != 0 )
    goto LABEL_17;
  if ( IsCalledOnIAMThread )
  {
    Error = CApplicationManager::_ActivateIamSpecialWindow((CApplicationManager *)(a1 - 19));
    goto LABEL_17;
  }
  RefCounted = CreateRefCountedObj<CAutoHandle<void *>>(v20);
  v12 = 0LL;
  v13 = 0LL;
  if ( &v28 != RefCounted )
  {
    v12 = *RefCounted;
    *RefCounted = 0LL;
    v13 = (HANDLE *)v12;
  }
  v28 = v12;
  v14 = v20[0];
  v15 = v13;
  if ( v20[0] )
  {
    v20[0] = 0LL;
    (*(void (__fastcall **)(__int64, HANDLE *))(*(_QWORD *)v14 + 16LL))(v14, v13);
    v15 = v13;
  }
  Error = v15 == 0LL ? 0x8007000E : 0;
  v7 = v13;
  v28 = (__int64)v13;
  if ( !v15 )
  {
LABEL_16:
    v4 = a2;
    v9 = v27;
LABEL_17:
    if ( Error >= 0 )
    {
      v20[0] = v4;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(v20);
      v21 = a1 - 19;
      v22 = v4;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef(&v22);
      v23 = v9;
      v24 = v7;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v24);
      v25 = a3;
      AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      v17 = CDelayIAMOperations::AddOperation__lambda_d2a883147a4aaef7223296bf15465975___(a1[80], (HWND)&v21, v10);
      ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      if ( v17 )
      {
        Error = 0;
        if ( v7 )
          WaitForSingleObjectEx(v7[1], 0x1388u, 0);
      }
      else
      {
        Error = -2147467259;
      }
      v18 = (__int64)v24;
      if ( v24 )
      {
        v24 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(&v22);
      Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease(v20);
    }
    goto LABEL_25;
  }
  Event = CreateEventExW(0LL, 0LL, 1u, 0x1F0003u);
  *(_QWORD *)(v12 + 8) = Event;
  if ( Event )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  if ( Error >= 0 )
  {
    v10 = 4;
    v28 = (__int64)v13;
    goto LABEL_16;
  }
LABEL_25:
  if ( v7 )
    (*((void (__fastcall **)(HANDLE *))*v7 + 2))(v7);
  return (unsigned int)Error;
}
