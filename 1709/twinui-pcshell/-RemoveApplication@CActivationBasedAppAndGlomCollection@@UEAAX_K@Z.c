/*
 * XREFs of ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007390
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015FC8 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x180007824 (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x180017C54 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180017FB0 (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x1800239B0 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication(
        CActivationBasedAppAndGlomCollection *this,
        __int64 a2)
{
  struct IImmersiveApplicationInternal *v3; // rdi
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rbx
  __int64 v7; // rsi
  int v8; // r13d
  __int64 v9; // rcx
  PSRWLOCK v10; // rsi
  PVOID Ptr; // rbx
  PVOID v12; // r12
  __int64 v13; // r15
  unsigned int v14; // r13d
  _QWORD *v15; // rsi
  _QWORD *v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rcx
  PVOID v19; // [rsp+30h] [rbp-49h] BYREF
  __int64 v20; // [rsp+38h] [rbp-41h] BYREF
  __int64 v21; // [rsp+40h] [rbp-39h]
  unsigned __int64 v22; // [rsp+48h] [rbp-31h] BYREF
  char *v23; // [rsp+50h] [rbp-29h]
  __int64 v24; // [rsp+58h] [rbp-21h]
  struct IImmersiveApplicationInternal *v25; // [rsp+60h] [rbp-19h]
  __int64 *v26; // [rsp+68h] [rbp-11h]
  PVOID v27; // [rsp+70h] [rbp-9h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  _QWORD *v29; // [rsp+80h] [rbp+7h]
  __int64 v30; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v31; // [rsp+E8h] [rbp+6Fh]
  __int64 v32; // [rsp+F0h] [rbp+77h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v33; // [rsp+F8h] [rbp+7Fh] BYREF

  v31 = a2;
  v24 = -2LL;
  v23 = (char *)this + 8;
  v3 = *(struct IImmersiveApplicationInternal **)(*((_QWORD *)this + 1) + 8 * a2);
  v25 = v3;
  if ( v3 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v3 + 8LL))(v3);
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(this, v3, &v33, &v22) >= 0 )
  {
    v4 = v33;
    v5 = *((_QWORD *)v33 + 1);
    v6 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v7 = *(_QWORD *)(*(_QWORD *)v4 + 8 * v6);
        v21 = v7;
        if ( v7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
        v8 = SHIsSameObject(v7, v3);
        if ( v7 )
        {
          v21 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        if ( v8 )
          break;
        if ( ++v6 >= v5 )
          goto LABEL_13;
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        v4,
        v6);
    }
LABEL_13:
    if ( !*((_QWORD *)v4 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v22);
  }
  v32 = 0LL;
  if ( (**(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, __int64 *))v3)(
         v3,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         &v32) >= 0 )
  {
    v9 = v32;
    v30 = v32;
    if ( v32 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 8LL))(v32);
      v9 = v30;
    }
    v26 = &v30;
    v10 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
    v27 = Ptr;
    if ( Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v12 = Ptr;
      v19 = Ptr;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v13 = v30;
      v20 = v30;
      if ( v30 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8LL))(v30);
      v14 = (unsigned int)v10[13].Ptr;
      v15 = 0LL;
      v28 = 0LL;
      v16 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
      v17 = v16;
      if ( v16 )
      {
        *v16 = &IAppViewDataSourceAdapter::`vftable';
        *((_DWORD *)v16 + 3) = 1;
        *v16 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Internal::IComPoolTask>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *v17 = off_1801F93E8;
        v17[2] = 0LL;
        if ( v17 + 2 != &v19 )
        {
          v17[2] = Ptr;
          v12 = 0LL;
          v19 = 0LL;
        }
        v17[3] = 0LL;
        if ( v17 + 3 != &v20 )
        {
          v17[3] = v13;
          v13 = 0LL;
          v20 = 0LL;
        }
        v15 = v17;
      }
      v29 = v15;
      Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v14, 0LL);
      if ( v15 )
        (*(void (__fastcall **)(_QWORD *))(*v15 + 16LL))(v15);
      if ( v13 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      if ( v12 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12 + 16LL))(v12);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      v9 = v30;
    }
    if ( v9 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
    v23,
    v31);
  v18 = v32;
  if ( v32 )
  {
    v32 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v3 + 16LL))(v3);
}
