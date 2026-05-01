/*
 * XREFs of ?RuntimeClassInitialize@PrivilegedOperationsService@@QEAAJXZ @ 0x1800D0248
 * Callers:
 *     ?CreateInstance@?$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAUIUnknown@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D2E40 (-CreateInstance@-$SimpleClassFactory@VPrivilegedOperationsService@@$0A@@WRL@Microsoft@@UEAAJPEAU.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800D10D0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSit_ea_1800D10D0.c)
 *     ?InitializePrivilegedOperations@?$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperations@@VCPrivilegedNotificationOperations@@VCPrivilegedArrangementOperations@@VCPrivilegedForegroundOperations@@VCPrivilegedTabletModeOperations@@VCPrivilegedSizeConstraintsOperations@@VPrivilegedWindowOwnershipOperations@@VPrivilegedHotkeyOperations@@@@IEAAJVWeakRef@WRL@Microsoft@@@Z @ 0x1800D18D4 (-InitializePrivilegedOperations@-$PrivilegedOperationsServiceBase@VCPrivilegedPresentationOperat.c)
 *     ??$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCPrivilegedDesktopOperations@@@WRL@Microsoft@@@012@$$QEAPEAVIamAccess@@AEAVWeakRef@12@@Z @ 0x1800D2640 (--$MakeAndInitialize@VCPrivilegedDesktopOperations@@V1@PEAVIamAccess@@AEAVWeakRef@WRL@Microsoft@.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PrivilegedOperationsService::RuntimeClassInitialize(__int64 **this)
{
  __int64 *v1; // rbx
  __int64 v3; // rax
  __int64 *v4; // rdi
  int v5; // eax
  __int64 *v6; // rcx
  __int64 *v7; // rcx
  int v8; // edi
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  __int64 *v12; // [rsp+40h] [rbp+20h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+28h] BYREF

  v1 = 0LL;
  PrivilegedOperationsService::s_this = (struct PrivilegedOperationsService *)this;
  v13 = 0LL;
  if ( (int)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
              this,
              &_uuidof__AUIWeakReferenceSource_Details_Platform__,
              &v13) < 0 )
  {
    if ( !v13 )
    {
LABEL_5:
      v12 = 0LL;
      goto LABEL_15;
    }
    v3 = *v13;
LABEL_4:
    (*(void (**)(void))(v3 + 16))();
    goto LABEL_5;
  }
  v4 = v13;
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64 *, __int64 **))(*v13 + 24))(v13, &v12);
  v6 = v12;
  if ( v5 < 0 )
  {
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v6 + 16))(v6);
    }
    v3 = *v4;
    goto LABEL_4;
  }
  v1 = v12;
  if ( v12 )
  {
    (*(void (**)(void))(*v12 + 8))();
    v7 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64 *))(*v7 + 16))(v7);
    }
  }
  (*(void (__fastcall **)(__int64 *))(*v4 + 16))(v4);
  v12 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64 *))(*v1 + 8))(v1);
LABEL_15:
  v13 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64 *))(*v1 + 8))(v1);
  v8 = PrivilegedOperationsServiceBase<CPrivilegedPresentationOperations,CPrivilegedNotificationOperations,CPrivilegedArrangementOperations,CPrivilegedForegroundOperations,CPrivilegedTabletModeOperations,CPrivilegedSizeConstraintsOperations,PrivilegedWindowOwnershipOperations,PrivilegedHotkeyOperations>::InitializePrivilegedOperations(
         this + 17,
         &v13);
  if ( v8 >= 0 )
  {
    v13 = this[17];
    v9 = Microsoft::WRL::Details::MakeAndInitialize<CPrivilegedDesktopOperations,CPrivilegedDesktopOperations,IamAccess *,Microsoft::WRL::WeakRef &>(
           this + 26,
           &v13,
           &v12);
    v8 = v9;
    if ( v9 < 0 )
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x24F,
        (__int64)"pcshell\\twinui\\privilegedoperations\\lib\\privilegedoperations.cpp",
        (const char *)(unsigned int)v9);
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64 *))(*v1 + 16))(v1);
    (*(void (__fastcall **)(__int64 *))(*v1 + 16))(v1);
  }
  return (unsigned int)v8;
}
