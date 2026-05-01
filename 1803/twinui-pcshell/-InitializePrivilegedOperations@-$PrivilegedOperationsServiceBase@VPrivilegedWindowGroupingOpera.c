/*
 * XREFs of ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18019F160
 * Callers:
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@VPrivilegedWindowGroupingOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x18019F088 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VPrivilegedHotkeyOperations@@V.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18006F410 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800955F4 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z @ 0x18019D5D0 (--$MakeAndInitialize@VIamAccess@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVIamAccess@@@Z.c)
 *     ??$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJPEAPEAVPrivilegedWindowGroupingOperations@@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x18019D7FC (--$MakeAndInitialize@VPrivilegedWindowGroupingOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Micr.c)
 *     ?InternalRelease@?$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ @ 0x18019F638 (-InternalRelease@-$ComPtr@VPrivilegedWindowGroupingOperations@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall PrivilegedOperationsServiceBase<PrivilegedWindowGroupingOperations>::InitializePrivilegedOperations(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // rbx
  int v5; // eax
  volatile int *v6; // rdx
  int v7; // esi
  __int64 (__fastcall *v8)(__int64, volatile int *); // rax
  __int64 v9; // rcx
  void (*v10)(void); // rax
  int v12; // eax
  volatile int *v13; // rdx
  unsigned int v14; // ebx
  __int64 v15; // rcx
  void (*v16)(void); // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  volatile int *v18; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(*a2);
  Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease((volatile int **)a1);
  v5 = Microsoft::WRL::Details::MakeAndInitialize<IamAccess,IamAccess,>((Microsoft::WRL::FtmBase **)a1);
  v7 = v5;
  if ( v5 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x250,
      (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
      (const char *)(unsigned int)v5);
  if ( v2 )
  {
    v8 = *(__int64 (__fastcall **)(__int64, volatile int *))(*(_QWORD *)v2 + 16LL);
    if ( v8 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
        v2,
        v6);
    else
      ((void (__fastcall *)(__int64))v8)(v2);
  }
  if ( v7 >= 0 )
  {
    v18 = *(volatile int **)a1;
    Microsoft::WRL::ComPtr<PrivilegedWindowGroupingOperations>::InternalRelease(a1 + 8);
    v12 = Microsoft::WRL::Details::MakeAndInitialize<PrivilegedWindowGroupingOperations,PrivilegedWindowGroupingOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
            (PrivilegedWindowGroupingOperations **)(a1 + 8),
            &v18,
            a2);
    v14 = v12;
    if ( v12 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x278,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v12);
    v15 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v16 = *(void (**)(void))(*(_QWORD *)v15 + 16LL);
      if ( (char *)v16 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          v15,
          v13);
      else
        v16();
    }
    return v14;
  }
  else
  {
    v9 = *a2;
    if ( *a2 )
    {
      *a2 = 0LL;
      v10 = *(void (**)(void))(*(_QWORD *)v9 + 16LL);
      if ( (char *)v10 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IWeakReference>::Release(
          v9,
          v6);
      else
        v10();
    }
    return (unsigned int)v7;
  }
}
