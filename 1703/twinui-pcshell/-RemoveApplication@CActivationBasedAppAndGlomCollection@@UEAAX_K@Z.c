/*
 * XREFs of ?RemoveApplication@CActivationBasedAppAndGlomCollection@@UEAAX_K@Z @ 0x180007070
 * Callers:
 *     ?_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetReason@@@Z @ 0x180015400 (-_ForgetApplicationNoLock@CApplicationManager@@AEAAXPEAUIImmersiveApplicationInternal@@W4ForgetR.c)
 * Callees:
 *     ??ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA?BV?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@_K@Z @ 0x1800072EC (--ACGlomCollection@CActivationBasedAppAndGlomCollection@@QEBA-BV-$ComPtr@UIImmersiveApplicationI.c)
 *     ?_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAVCGlomCollection@1@PEA_K@Z @ 0x18000746C (-_GetGlomCollection@CActivationBasedAppAndGlomCollection@@AEAAJPEAUIImmersiveApplicationInternal.c)
 *     ?RemoveAt@?$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardCompareHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@V?$CSimpleArrayStandardMergeHelper@VCGlomCollection@CActivationBasedAppAndGlomCollection@@@@@@QEAAJ_K@Z @ 0x180016BE0 (-RemoveAt@-$CTSimpleArray@VCGlomCollection@CActivationBasedAppAndGlomCollection@@$0PPPPPPPO@V-$C.c)
 *     ?RemoveAt@?$CTSimpleArray@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180016F3C (-RemoveAt@-$CTSimpleArray@V-$ComPtr@UIImmersiveApplicationInternal@@@WRL@Microsoft@@$0PPPPPPPO@V.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_0f991d08293db6427bbb64df0845a292___ @ 0x18001B540 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_0f991d08293db6427bbb64df0845a292___.c)
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CActivationBasedAppAndGlomCollection::RemoveApplication(
        CActivationBasedAppAndGlomCollection *this,
        __int64 a2)
{
  char *v4; // r15
  struct IImmersiveApplicationInternal *v5; // rdi
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbx
  _QWORD *v9; // rax
  int v10; // r12d
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v11; // rcx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v12; // rcx
  PSRWLOCK v13; // rsi
  PVOID Ptr; // rbx
  unsigned int v15; // esi
  char *v16; // rcx
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v17; // rcx
  PVOID v18; // [rsp+48h] [rbp-20h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v19; // [rsp+50h] [rbp-18h]
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v20; // [rsp+B0h] [rbp+48h] BYREF
  struct CActivationBasedAppAndGlomCollection::CGlomCollection *v21; // [rsp+B8h] [rbp+50h] BYREF
  char *v22; // [rsp+C0h] [rbp+58h] BYREF
  unsigned __int64 v23; // [rsp+C8h] [rbp+60h] BYREF

  v4 = (char *)this + 8;
  v22 = (char *)this + 8;
  v5 = *(struct IImmersiveApplicationInternal **)(*((_QWORD *)this + 1) + 8 * a2);
  if ( v5 )
    (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v5 + 8LL))(v5);
  if ( (int)CActivationBasedAppAndGlomCollection::_GetGlomCollection(this, v5, &v20, &v23) >= 0 )
  {
    v6 = v20;
    v7 = *((_QWORD *)v20 + 1);
    v8 = 0LL;
    if ( v7 )
    {
      while ( 1 )
      {
        v9 = (_QWORD *)CActivationBasedAppAndGlomCollection::CGlomCollection::operator[](v6, &v20, v8);
        v10 = SHIsSameObject(*v9, v5);
        v11 = v20;
        if ( v20 )
        {
          v20 = 0LL;
          (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v11 + 16LL))(v11);
        }
        if ( v10 )
          break;
        if ( ++v8 >= v7 )
          goto LABEL_11;
      }
      CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
        v6,
        v8);
    }
LABEL_11:
    if ( !*((_QWORD *)v6 + 1) )
      CTSimpleArray<CActivationBasedAppAndGlomCollection::CGlomCollection,4294967294,CTPolicyCoTaskMem<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardCompareHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>,CSimpleArrayStandardMergeHelper<CActivationBasedAppAndGlomCollection::CGlomCollection>>::RemoveAt(
        (char *)this + 40,
        v23);
    v4 = v22;
  }
  v21 = 0LL;
  if ( (**(int (__fastcall ***)(struct IImmersiveApplicationInternal *, GUID *, struct CActivationBasedAppAndGlomCollection::CGlomCollection **))v5)(
         v5,
         &GUID_8b14e88b_5663_4caf_b196_c31479262831,
         &v21) >= 0 )
  {
    v12 = v21;
    v20 = v21;
    if ( v21 )
    {
      (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v21 + 8LL))(v21);
      v12 = v20;
    }
    v23 = (unsigned __int64)&v20;
    v13 = CApplicationManagerUtility::g_pIAMGlobals;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
    if ( Ptr )
    {
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v18 = Ptr;
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
      v19 = v20;
      if ( v20 )
        (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v20 + 8LL))(v20);
      v15 = (unsigned int)v13[13].Ptr;
      Windows::Internal::ComTaskPool::WrapWithTask__lambda_0f991d08293db6427bbb64df0845a292___(&v22, &v18);
      Windows::Internal::ComTaskPool::RunTask(3LL, 2LL, v15, 0LL);
      v16 = v22;
      if ( v22 )
      {
        v22 = 0LL;
        (*(void (__fastcall **)(char *))(*(_QWORD *)v16 + 16LL))(v16);
      }
      if ( v19 )
        (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v19 + 16LL))(v19);
      if ( v18 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v18 + 16LL))(v18);
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
      v12 = v20;
    }
    if ( v12 )
    {
      v20 = 0LL;
      (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v12 + 16LL))(v12);
    }
  }
  CTSimpleArray<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<IImmersiveApplicationInternal>>>::RemoveAt(
    v4,
    a2);
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(struct CActivationBasedAppAndGlomCollection::CGlomCollection *))(*(_QWORD *)v17 + 16LL))(v17);
  }
  (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v5 + 16LL))(v5);
}
