/*
 * XREFs of ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x1800378A0
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x1800273C0 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ??$GetAppPosition@VCClassicWindowFinderByHWND@@@?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@QEBAJAEBVCClassicWindowFinderByHWND@@_KPEA_K@Z @ 0x180039B0C (--$GetAppPosition@VCClassicWindowFinderByHWND@@@-$CActivationBasedCollection@V-$ComPtr@UIClassic.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_818e1247758777a74d4013294a5c3000___ @ 0x18003A0D4 (Windows--Internal--ComTaskPool--QueueTask__lambda_818e1247758777a74d4013294a5c3000___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CClassicWindowManager::AttachApplicationId(CClassicWindowManager *this, HWND a2, unsigned __int16 *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rdi
  int v7; // ebp
  __int64 v8; // r8
  __int64 v9; // rcx
  PSRWLOCK v10; // rsi
  HWND Ptr; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  _QWORD v14[3]; // [rsp+28h] [rbp-40h] BYREF
  int v15; // [rsp+40h] [rbp-28h]
  HWND v16; // [rsp+70h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+10h] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)96));
  v14[2] = v6;
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  v15 = v7;
  v16 = a2;
  if ( (int)CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::GetAppPosition<CClassicWindowFinderByHWND>(
              (char *)this + 96,
              &v16,
              v8,
              &v17) < 0 )
  {
    CoTaskMemFree(a3);
  }
  else
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 13) + 8 * v17);
    (*(void (__fastcall **)(__int64, unsigned __int16 *))(*(_QWORD *)v9 + 48LL))(v9, a3);
    v10 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = (HWND)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
    v16 = Ptr;
    if ( Ptr )
    {
      (*(void (__fastcall **)(HWND))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v14[0] = Ptr;
      (*(void (__fastcall **)(HWND))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v14[1] = a2;
      Windows::Internal::ComTaskPool::QueueTask__lambda_818e1247758777a74d4013294a5c3000___(
        v13,
        v12,
        LODWORD(v10[13].Ptr),
        v14,
        -2LL);
      if ( v14[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v14[0] + 16LL))(v14[0]);
      (*(void (__fastcall **)(HWND))(*(_QWORD *)Ptr + 16LL))(Ptr);
    }
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
