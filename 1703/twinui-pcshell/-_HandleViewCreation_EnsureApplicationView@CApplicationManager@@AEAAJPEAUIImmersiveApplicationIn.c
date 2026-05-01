/*
 * XREFs of ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x180012860
 * Callers:
 *     ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x18000C8F0 (-HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ??$MakeAndInitialize@VCOperationWaiter@@V1@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VCOperationWaiter@@@WRL@Microsoft@@@012@@Z @ 0x180018BF4 (--$MakeAndInitialize@VCOperationWaiter@@V1@@Details@WRL@Microsoft@@YAJV-$ComPtrRef@V-$ComPtr@VCO.c)
 *     CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___ @ 0x180018D04 (CIAMGlobals--QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18001E470 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Mi.c)
 *     ?SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z @ 0x18002AFD8 (-SHProcessMessagesUntilEventsEx@@YAKPEAUHWND__@@PEAPEAXKKKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::_HandleViewCreation_EnsureApplicationView(
        CApplicationManager *this,
        void (__fastcall ***a2)(struct IImmersiveApplicationInternal *, GUID *, __int64),
        struct IApplicationView **a3)
{
  void (__fastcall **v5)(struct IImmersiveApplicationInternal *, GUID *, __int64); // rbx
  __int64 v6; // rax
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rbx
  signed __int32 v10; // eax
  signed __int32 v11; // eax
  HWND v12; // rcx
  unsigned int v13; // r8d
  unsigned int v14; // r9d
  PVOID Ptr; // rdi
  CApplicationManager *v16; // rcx
  __int64 v17; // rcx
  CApplicationManager *v18; // rcx
  struct IApplicationView *v19; // rax
  __int64 v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-28h]
  unsigned int v23; // [rsp+28h] [rbp-20h]
  _QWORD v24[3]; // [rsp+30h] [rbp-18h] BYREF
  CApplicationManager *v25; // [rsp+70h] [rbp+28h] BYREF
  __int64 v26; // [rsp+78h] [rbp+30h] BYREF
  __int64 v27; // [rsp+80h] [rbp+38h] BYREF
  __int64 v28; // [rsp+88h] [rbp+40h]

  v25 = this;
  v24[1] = -2LL;
  *a3 = 0LL;
  v27 = 0LL;
  v5 = *a2;
  v6 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
  (*v5)((struct IImmersiveApplicationInternal *)a2, &GUID_8b14e88b_5663_4caf_b196_c31479262831, v6);
  v25 = 0LL;
  v7 = (*(__int64 (__fastcall **)(PVOID, __int64, CApplicationManager **))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[12].Ptr
                                                                         + 56LL))(
         CApplicationManagerUtility::g_pIAMGlobals[12].Ptr,
         v27,
         &v25);
  if ( v7 >= 0 )
    goto LABEL_23;
  v26 = 0LL;
  v7 = Microsoft::WRL::Details::MakeAndInitialize<COperationWaiter,COperationWaiter>(&v26);
  if ( v7 >= 0 )
  {
    v9 = v26;
    v28 = v26;
    if ( v26 )
    {
      do
      {
        v10 = *(_DWORD *)(v9 + 28);
        if ( v10 == 0x7FFFFFFF )
          break;
        v8 = (unsigned int)(v10 + 1);
      }
      while ( v10 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), v8, v10) );
      v9 = v28;
    }
    v24[0] = v9;
    if ( v9 )
    {
      do
      {
        v11 = *(_DWORD *)(v9 + 28);
        if ( v11 == 0x7FFFFFFF )
          break;
        v8 = (unsigned int)(v11 + 1);
      }
      while ( v11 != _InterlockedCompareExchange((volatile signed __int32 *)(v9 + 28), v8, v11) );
      v9 = v28;
    }
    if ( (int)CIAMGlobals::QueueViewManagementTask__lambda_04a7eef998d7b1b6cf04498891e66b1a___(v8, v24) >= 0 )
      SHProcessMessagesUntilEventsEx(v12, (void **)(v26 + 32), v13, v14, v22, v23);
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
    v16 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v16 + 16LL))(v16);
    }
    v7 = (*(__int64 (__fastcall **)(PVOID, __int64, CApplicationManager **))(*(_QWORD *)Ptr + 56LL))(Ptr, v27, &v25);
    if ( v9 )
      Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v9);
  }
  v17 = v26;
  if ( v26 )
  {
    v26 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v17);
  }
  if ( v7 >= 0 )
  {
LABEL_23:
    v19 = v25;
    v18 = 0LL;
    v25 = 0LL;
    *a3 = v19;
  }
  else
  {
    v18 = v25;
  }
  if ( v18 )
  {
    v25 = 0LL;
    (*(void (__fastcall **)(CApplicationManager *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v20 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v7;
}
