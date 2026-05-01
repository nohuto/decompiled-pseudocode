/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x1800098C4
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18000A7D0 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 *     _lambda_c35d5355421e51b91e1b7dc40faf7951_::operator() @ 0x18001DBC0 (_lambda_c35d5355421e51b91e1b7dc40faf7951_--operator().c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ @ 0x180003FA4 (-InternalAddRef@-$ComPtr@UIInspectable@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K0@Z @ 0x18000CA34 (-_EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGG.c)
 *     ?Release@?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ @ 0x18000CBD0 (-Release@-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@UEAAKXZ.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x18000CDB4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?IsViewGhosted@CImmersiveApp@@UEBA_NXZ @ 0x18004C360 (-IsViewGhosted@CImmersiveApp@@UEBA_NXZ.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_d @ 0x180112280 (WPP_SF_d.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        struct IUnknown *a2,
        int a3,
        struct IUnknown *a4)
{
  _QWORD *v5; // r15
  unsigned __int64 v6; // r14
  RTL_SRWLOCK *v7; // rsi
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  int v10; // esi
  struct IUnknown **v11; // rbx
  int v12; // edi
  bool (__fastcall *v13)(CImmersiveApp *__hidden); // rax
  char v14; // al
  struct IUnknown **v15; // rdi
  int v16; // eax
  CImmersiveApp **v17; // rax
  __int64 (__fastcall *v18)(void *); // rax
  __int64 v19; // rax
  void *v20; // rcx
  void (*v21)(void); // rax
  __int64 v22; // rdx
  struct IUnknownVtbl *lpVtbl; // rax
  unsigned __int64 i; // rbx
  void *v25; // rcx
  void (*v26)(void); // rax
  __int64 v27; // [rsp+20h] [rbp-58h]
  CImmersiveApp *v28; // [rsp+28h] [rbp-50h] BYREF
  struct IUnknown **v29; // [rsp+30h] [rbp-48h] BYREF
  PSRWLOCK v30; // [rsp+38h] [rbp-40h]
  __int64 v31; // [rsp+40h] [rbp-38h]
  PSRWLOCK v32; // [rsp+48h] [rbp-30h]
  _QWORD *v33; // [rsp+50h] [rbp-28h] BYREF
  __int64 v34; // [rsp+58h] [rbp-20h]
  __int64 v35; // [rsp+60h] [rbp-18h]
  __int64 v36; // [rsp+68h] [rbp-10h]
  struct IImmersiveApplicationInternal *v37; // [rsp+C0h] [rbp+48h] BYREF
  struct IUnknown *v38; // [rsp+C8h] [rbp+50h]
  int v39; // [rsp+D0h] [rbp+58h]
  struct IUnknown *v40; // [rsp+D8h] [rbp+60h]

  v40 = a4;
  v39 = a3;
  v38 = a2;
  v31 = -2LL;
  v5 = 0LL;
  v33 = 0LL;
  v6 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  v7 = CApplicationManagerUtility::g_pIAMGlobals;
  v30 = CApplicationManagerUtility::g_pIAMGlobals;
  v32 = CApplicationManagerUtility::g_pIAMGlobals;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v8 = *(_QWORD *)(a1 + 96);
  v27 = v8;
  if ( v8 )
  {
    v9 = v8 - 1;
    v10 = v39;
    while ( 1 )
    {
      v29 = *(struct IUnknown ***)(*(_QWORD *)(a1 + 88) + 8 * v9);
      v11 = v29;
      Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v29);
      if ( (unsigned int)SHIsSameObject(v38, v11[2]) )
        break;
LABEL_36:
      lpVtbl = (*v11)[2].lpVtbl;
      if ( lpVtbl == (struct IUnknownVtbl *)CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release )
        CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(v11);
      else
        ((void (__fastcall *)(struct IUnknown **))lpVtbl)(v11);
      v27 = --v8;
      --v9;
      if ( !v8 )
      {
        v7 = v30;
        goto LABEL_2;
      }
    }
    v12 = -2147467260;
    LOBYTE(v37) = 0;
    if ( v10 != 6 )
    {
      if ( *((_DWORD *)v11 + 2) == 1 )
      {
        if ( v10 != 8 )
          goto LABEL_35;
        v28 = 0LL;
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
        if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, CImmersiveApp **))v38->lpVtbl->QueryInterface)(
               v38,
               &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
               &v28) >= 0 )
        {
          v13 = *(bool (__fastcall **)(CImmersiveApp *__hidden))(*(_QWORD *)v28 + 472LL);
          v14 = v13 == CImmersiveApp::IsViewGhosted ? CImmersiveApp::IsViewGhosted(v28) : ((__int64 (*)(void))v13)();
          if ( !v14 )
          {
            LOBYTE(v37) = 1;
            v12 = v40 != v11[4] ? 0x80004004 : 0;
          }
        }
        Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v28);
        if ( !(_BYTE)v37 )
          goto LABEL_35;
      }
      else
      {
        if ( *((_DWORD *)v11 + 2) != 2 || v40 != v11[4] )
        {
LABEL_35:
          v8 = v27;
          goto LABEL_36;
        }
        v12 = v10 != 8 ? 0x80004004 : 0;
      }
    }
    v37 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    if ( ((__int64 (__fastcall *)(struct IUnknown *, GUID *, struct IImmersiveApplicationInternal **))v11[2]->lpVtbl->QueryInterface)(
           v11[2],
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v37) >= 0 )
    {
      CAppViewManager::_s_QueueCallback(v37, (struct CMarshaledInterface *)(v11 + 3), v12);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          31LL,
          &WPP_30bd9181394d37182917d8f42fc22ff1_Traceguids,
          *((unsigned int *)v11 + 10));
    }
    v15 = v11;
    v28 = (CImmersiveApp *)v11;
    Microsoft::WRL::ComPtr<IInspectable>::InternalAddRef((__int64 *)&v28);
    if ( v6 != v36
      || (v16 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::_EnsureCapacity(
                  &v33,
                  v6 + 1),
          v6 = v34,
          v5 = v33,
          v16 >= 0) )
    {
      v34 = ++v6;
      v17 = (CImmersiveApp **)&v5[v6 - 1];
      if ( v17 )
      {
        *v17 = 0LL;
        if ( v17 != &v28 )
        {
          *v17 = (CImmersiveApp *)v11;
          v15 = 0LL;
        }
      }
    }
    if ( v15 )
    {
      v18 = (__int64 (__fastcall *)(void *))(*v15)[2].lpVtbl;
      if ( v18 == CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release )
        CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(v15);
      else
        v18(v15);
    }
    if ( v9 < *(_QWORD *)(a1 + 96) )
    {
      v19 = *(_QWORD *)(a1 + 88);
      v20 = *(void **)(v19 + 8 * v9);
      if ( v20 )
      {
        *(_QWORD *)(v19 + 8 * v9) = 0LL;
        v21 = *(void (**)(void))(*(_QWORD *)v20 + 16LL);
        if ( (char *)v21 == (char *)CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release )
          CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(v20);
        else
          v21();
      }
      v22 = *(_QWORD *)(a1 + 96);
      if ( v9 != v22 - 1 )
      {
        memmove(
          (void *)(*(_QWORD *)(a1 + 88) + 8 * v9),
          (const void *)(*(_QWORD *)(a1 + 88) + 8 * v9 + 8),
          8 * (v22 - v9) - 8);
        v22 = *(_QWORD *)(a1 + 96);
      }
      *(_QWORD *)(a1 + 96) = v22 - 1;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v37);
    goto LABEL_35;
  }
LABEL_2:
  if ( v7 )
    ReleaseSRWLockExclusive(v7);
  if ( v5 )
  {
    for ( i = 0LL; i < v6; ++i )
    {
      v25 = (void *)v5[i];
      if ( v25 )
      {
        v5[i] = 0LL;
        v26 = *(void (**)(void))(*(_QWORD *)v25 + 16LL);
        if ( (char *)v26 == (char *)CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release )
          CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>::Release(v25);
        else
          v26();
      }
    }
    LocalFree(v5);
  }
}
