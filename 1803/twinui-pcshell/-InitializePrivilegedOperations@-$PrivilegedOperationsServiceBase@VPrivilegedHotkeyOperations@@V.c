/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18019F088
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18019F290 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowOwnershipOper.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedHotkeyOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x18019D684 (--$MakeAndInitialize@VPrivilegedHotkeyOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18019F160 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOpera.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x1802B4D6C (-InternalRelease@-$ComPtr@VPrivilegedWindowOwnershipOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedHotkeyOperations,PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 a1,
        __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rcx
  void (*v7)(void); // rax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+38h] [rbp+10h] BYREF

  v4 = *a2;
  v11 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = PrivilegedOperationsServiceBase<PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(a1, &v11);
  if ( v5 < 0 )
  {
    v6 = *a2;
    if ( !*a2 )
      return (unsigned int)v5;
    *a2 = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
    goto LABEL_10;
  }
  v11 = *(_QWORD *)a1;
  Microsoft::WRL::ComPtr<PrivilegedWindowOwnershipOperations>::InternalRelease(a1 + 16);
  v8 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedHotkeyOperations,PrivilegedHotkeyOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
         (PrivilegedHotkeyOperations **)(a1 + 16),
         &v11,
         a2);
  v5 = v8;
  if ( v8 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x278,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v8);
  v6 = *a2;
  if ( *a2 )
  {
    *a2 = 0LL;
    v7 = *(void (**)(void))(*(_QWORD *)v6 + 16LL);
LABEL_10:
    if ( (char *)v7 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v6,
        (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release);
    else
      v7();
  }
  return (unsigned int)v5;
}
