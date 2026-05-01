/*
 * XREFs of ?AttachApplicationId@CClassicWindowManager@@UEAAXPEAUHWND__@@PEAG@Z @ 0x180006B20
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ @ 0x180005208 (-InternalRelease@-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$FindEx@VCClassicWindowFinderByHWND@@@?$CTSimpleFixedArray@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@@@QEBAJAEBVCClassicWindowFinderByHWND@@AEBV?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@PEA_K_K@Z @ 0x1800059C0 (--$FindEx@VCClassicWindowFinderByHWND@@@-$CTSimpleFixedArray@V-$ComPtr@UIClassicWindow@@@WRL@Mic.c)
 *     ?AttachApplicationId@CClassicWindow@@UEAAXPEAG@Z @ 0x180008080 (-AttachApplicationId@CClassicWindow@@UEAAXPEAG@Z.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___ @ 0x18000F39C (CIAMGlobals--QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180090000 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CClassicWindowManager::AttachApplicationId(
        CClassicWindowManager *this,
        volatile int *a2,
        unsigned __int16 *a3)
{
  _QWORD *v5; // r15
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  int v7; // ebp
  int v8; // ebx
  CClassicWindow *v9; // rcx
  void (__fastcall *v10)(CClassicWindow *__hidden, unsigned __int16 *); // rax
  __int64 v11; // rcx
  __int64 (__fastcall ***v12)(); // [rsp+20h] [rbp-58h]
  volatile int *v13; // [rsp+80h] [rbp+8h] BYREF
  volatile int *v14; // [rsp+88h] [rbp+10h] BYREF
  __int64 v15; // [rsp+98h] [rbp+20h] BYREF

  v5 = (_QWORD *)((char *)this + 104);
  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 48) & -(__int64)(this != (CClassicWindowManager *)88));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v6, 1LL);
  v14 = a2;
  v13 = 0LL;
  v8 = CTSimpleFixedArray<Microsoft::WRL::ComPtr<IClassicWindow>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IClassicWindow>>>::FindEx<CClassicWindowFinderByHWND>(
         v5,
         &v14,
         (__int64 *)&v13,
         &v15,
         v12);
  Microsoft::WRL::ComPtr<IClassicWindow>::InternalRelease((__int64 *)&v13);
  if ( v8 < 0 )
  {
    CoTaskMemFree(a3);
  }
  else
  {
    v9 = *(CClassicWindow **)(*v5 + 8 * v15);
    v10 = *(void (__fastcall **)(CClassicWindow *__hidden, unsigned __int16 *))(*(_QWORD *)v9 + 48LL);
    if ( v10 == CClassicWindow::AttachApplicationId )
      CClassicWindow::AttachApplicationId(v9, a3);
    else
      v10(v9, a3);
    v13 = a2;
    CIAMGlobals::QueueViewManagementTask__lambda_05ef3d001510803ebef5a2ea2d6a24c1___(v11, &v13);
  }
  if ( v7 >= 0 )
    LeaveCriticalSection(v6);
}
