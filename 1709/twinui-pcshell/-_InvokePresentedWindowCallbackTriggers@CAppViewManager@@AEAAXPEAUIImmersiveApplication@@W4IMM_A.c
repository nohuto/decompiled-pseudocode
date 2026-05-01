/*
 * XREFs of ?_InvokePresentedWindowCallbackTriggers@CAppViewManager@@AEAAXPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x180044284
 * Callers:
 *     ?ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND__@@@Z @ 0x18003F860 (-ApplicationChanged@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@W4IMM_APP_CHANGED@@PEAUHWND.c)
 * Callees:
 *     WPP_SF_d @ 0x180006C40 (WPP_SF_d.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     ?_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface@@J@Z @ 0x1800445C4 (-_s_QueueCallback@CAppViewManager@@CAXPEAUIImmersiveApplicationInternal@@AEAVCMarshaledInterface.c)
 *     ?EnsureCapacity@?$CTSimpleArray@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyLocalMem@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@V?$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGER@CAppViewManager@@@@@WRL@Microsoft@@@@@@QEAAJ_K@Z @ 0x180046610 (-EnsureCapacity@-$CTSimpleArray@V-$ComPtr@V-$CRefCountedObject@UPRESENTED_WINDOW_CALLBACK_TRIGGE.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CAppViewManager::_InvokePresentedWindowCallbackTriggers(
        __int64 a1,
        int (__fastcall ***a2)(_QWORD, GUID *, __int64 *),
        int a3,
        __int64 a4)
{
  int v4; // edi
  int (__fastcall ***v5)(_QWORD, GUID *, __int64 *); // r15
  _QWORD *v7; // r14
  unsigned __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // r12
  __int64 v11; // rbx
  int v12; // r15d
  int (__fastcall **v13)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v14; // rax
  char v15; // di
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  char *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  struct IImmersiveApplicationInternal *v24; // rcx
  unsigned __int64 i; // rbx
  __int64 v26; // rcx
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  struct IImmersiveApplicationInternal *v28; // [rsp+28h] [rbp-50h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h]
  __int64 v30; // [rsp+38h] [rbp-40h]
  __int64 v31; // [rsp+40h] [rbp-38h]
  _QWORD *v32; // [rsp+48h] [rbp-30h] BYREF
  __int64 v33; // [rsp+50h] [rbp-28h]
  __int64 v34; // [rsp+58h] [rbp-20h]
  __int64 v35; // [rsp+60h] [rbp-18h]
  char v36; // [rsp+C0h] [rbp+48h] BYREF
  int (__fastcall ***v37)(_QWORD, GUID *, __int64 *); // [rsp+C8h] [rbp+50h]
  int v38; // [rsp+D0h] [rbp+58h]
  __int64 v39; // [rsp+D8h] [rbp+60h]

  v39 = a4;
  v38 = a3;
  v37 = a2;
  v30 = -2LL;
  v4 = a3;
  v5 = a2;
  v7 = 0LL;
  v32 = 0LL;
  v8 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v9 = *(_QWORD *)(a1 + 104);
  v29 = v9;
  if ( v9 )
  {
    v10 = v9 - 1;
    while ( 1 )
    {
      v11 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 8 * v10);
      v31 = v11;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
      if ( !(unsigned int)SHIsSameObject(v5, *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 16)) )
        goto LABEL_40;
      v12 = -2147467260;
      v36 = 0;
      if ( v4 == 6 )
        goto LABEL_19;
      if ( *(_DWORD *)(v11 + 8) != 1 )
        break;
      if ( v4 == 8 )
      {
        v27 = 0LL;
        v13 = *v37;
        v14 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v27);
        if ( (*v13)(v37, &GUID_c9301630_27da_428e_a432_0a5e49c0ffee, v14) < 0
          || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v27 + 472LL))(v27) )
        {
          v15 = v36;
        }
        else
        {
          v12 = v39 != *(_QWORD *)(v11 + 32) ? 0x80004004 : 0;
          v15 = 1;
        }
        v16 = v27;
        if ( v27 )
        {
          v27 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        }
        if ( v15 )
          goto LABEL_19;
        goto LABEL_38;
      }
LABEL_39:
      v5 = v37;
LABEL_40:
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      --v29;
      --v10;
      if ( !v29 )
        goto LABEL_41;
    }
    if ( *(_DWORD *)(v11 + 8) != 2 || v39 != *(_QWORD *)(v11 + 32) )
      goto LABEL_39;
    v12 = v4 != 8 ? 0x80004004 : 0;
LABEL_19:
    v28 = 0LL;
    v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v28);
    if ( (***(int (__fastcall ****)(_QWORD, GUID *, __int64 *))(v11 + 16))(
           *(_QWORD *)(v11 + 16),
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           v17) >= 0 )
    {
      CAppViewManager::_s_QueueCallback(v28, (struct CMarshaledInterface *)(v11 + 24), v12);
      if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0x1Eu,
          &WPP_dd55687d9f3130295d495cf49017a234_Traceguids,
          *(_DWORD *)(v11 + 40));
    }
    v18 = v11;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    if ( v8 != v35
      || (v19 = CTSimpleArray<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>,4294967294,CTPolicyLocalMem<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<CRefCountedObject<CAppViewManager::PRESENTED_WINDOW_CALLBACK_TRIGGER>>>>::EnsureCapacity(
                  &v32,
                  v8 + 1),
          v8 = v33,
          v7 = v32,
          v19 >= 0) )
    {
      v33 = ++v8;
      v20 = (char *)&v7[v8 - 1];
      if ( v20 )
      {
        *(_QWORD *)v20 = 0LL;
        if ( v20 != &v36 )
        {
          *(_QWORD *)v20 = v11;
          v18 = 0LL;
        }
      }
    }
    if ( v18 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
    if ( v10 < *(_QWORD *)(a1 + 104) )
    {
      v21 = *(_QWORD *)(a1 + 96);
      v22 = *(_QWORD *)(v21 + 8 * v10);
      if ( v22 )
      {
        *(_QWORD *)(v21 + 8 * v10) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
      }
      v23 = *(_QWORD *)(a1 + 104);
      if ( v10 != v23 - 1 )
        memmove(
          (void *)(*(_QWORD *)(a1 + 96) + 8 * v10),
          (const void *)(*(_QWORD *)(a1 + 96) + 8 * v10 + 8),
          8 * (v23 - v10) - 8);
      --*(_QWORD *)(a1 + 104);
    }
    v24 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(struct IImmersiveApplicationInternal *))(*(_QWORD *)v24 + 16LL))(v24);
    }
LABEL_38:
    v4 = v38;
    goto LABEL_39;
  }
LABEL_41:
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v7 )
  {
    for ( i = 0LL; i < v8; ++i )
    {
      v26 = v7[i];
      if ( v26 )
      {
        v7[i] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    LocalFree(v7);
  }
}
