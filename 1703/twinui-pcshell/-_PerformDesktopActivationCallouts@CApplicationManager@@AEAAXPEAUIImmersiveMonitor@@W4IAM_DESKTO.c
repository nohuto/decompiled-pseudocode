/*
 * XREFs of ?_PerformDesktopActivationCallouts@CApplicationManager@@AEAAXPEAUIImmersiveMonitor@@W4IAM_DESKTOP_SWITCH_OPTION@@@Z @ 0x180008DB8
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___::operator() @ 0x180019F40 (CDelayIAMOperations--CDelayedOperation__lambda_9f5e0378c1f80d1f3850aec2e7057c94___--operator().c)
 * Callees:
 *     ?_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@PEAPEAUIObjectArray@@PEA_N@Z @ 0x180010E44 (-_GetMonitorObjectArray@CApplicationManager@@AEAAJPEAV-$CCoSimpleArray@V-$ComPtr@UIImmersiveMoni.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180010F60 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800111C8 (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ?EnsureCapacity@?$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@PEAUIUnknown@@@@V?$CSimpleArrayStandardCompareHelper@PEAUIUnknown@@@@V?$CSimpleArrayStandardMergeHelper@PEAUIUnknown@@@@@@QEAAJ_K@Z @ 0x18001A030 (-EnsureCapacity@-$CTSimpleArray@PEAUIUnknown@@$0PPPPPPPO@V-$CTPolicyCoTaskMem@PEAUIUnknown@@@@V-.c)
 *     SHIsSameObject @ 0x180026D1C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall CApplicationManager::_PerformDesktopActivationCallouts(
        CApplicationManager *a1,
        struct IObjectArray *a2,
        int a3)
{
  char v3; // di
  struct IImmersiveMonitor *v4; // r15
  CApplicationManager *v5; // r13
  int v6; // r12d
  _QWORD *v7; // r14
  unsigned __int64 v8; // rsi
  struct IObjectArray *v9; // rbx
  int v10; // eax
  struct ISyncIAMEventHandler **v11; // rax
  unsigned int v12; // r13d
  __int64 v13; // rbx
  __int64 v14; // rdi
  char v15; // di
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // eax
  _QWORD *v19; // rax
  __int64 v20; // rdi
  int GlobalSyncEventHandler; // eax
  struct ISyncIAMEventHandler *v22; // rbx
  int SingleMonitorObjectArray; // eax
  struct IObjectArray *v24; // rcx
  unsigned __int64 i; // rbx
  __int64 v26; // rcx
  __int64 v27; // [rsp+50h] [rbp-21h] BYREF
  _QWORD v28[2]; // [rsp+58h] [rbp-19h] BYREF
  _QWORD *v29; // [rsp+68h] [rbp-9h] BYREF
  __int64 v30; // [rsp+70h] [rbp-1h]
  __int64 v31; // [rsp+78h] [rbp+7h]
  __int64 v32; // [rsp+80h] [rbp+Fh]
  struct IObjectArray *v34; // [rsp+E0h] [rbp+6Fh] BYREF
  int v35; // [rsp+E8h] [rbp+77h]
  struct ISyncIAMEventHandler *v36; // [rsp+F0h] [rbp+7Fh] BYREF

  v35 = a3;
  v34 = a2;
  v28[1] = -2LL;
  v3 = a3;
  v4 = (struct IImmersiveMonitor *)a2;
  v5 = a1;
  v6 = 0;
  v7 = 0LL;
  v29 = 0LL;
  v8 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v32 = 0LL;
  if ( a2 )
  {
    v9 = a2;
    v36 = (struct ISyncIAMEventHandler *)a2;
    ((void (__fastcall *)(struct IObjectArray *))a2->lpVtbl->AddRef)(a2);
    v10 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
            &v29,
            1LL);
    v7 = v29;
    v8 = v30;
    if ( v10 >= 0 )
    {
      v8 = v30 + 1;
      v30 = v8;
      v11 = (struct ISyncIAMEventHandler **)&v29[v8 - 1];
      if ( v11 )
      {
        *v11 = 0LL;
        if ( v11 != &v36 )
        {
          *v11 = (struct ISyncIAMEventHandler *)v9;
          v9 = 0LL;
        }
      }
    }
    if ( v9 )
      ((void (__fastcall *)(struct IObjectArray *))v9->lpVtbl->Release)(v9);
  }
  if ( v4 && (v3 & 0x12) == 0
    || (*(int (__fastcall **)(_QWORD *, struct ISyncIAMEventHandler **))(**((_QWORD **)v5 + 62) + 32LL))(
         *((_QWORD **)v5 + 62),
         &v36) < 0 )
  {
    goto LABEL_39;
  }
  v12 = 0;
  if ( !(_DWORD)v36 )
    goto LABEL_38;
  v13 = v28[0];
  do
  {
    v27 = 0LL;
    if ( (*(int (__fastcall **)(_QWORD *, _QWORD, __int64 *))(**((_QWORD **)a1 + 62) + 40LL))(
           *((_QWORD **)a1 + 62),
           v12,
           &v27) < 0 )
      goto LABEL_20;
    v13 = v27;
    v28[0] = v27;
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
    v6 |= 1u;
    v14 = 0LL;
    if ( v8 )
    {
      while ( !(unsigned int)SHIsSameObject(v7[v14], v13) )
      {
        if ( ++v14 >= v8 )
          goto LABEL_19;
      }
LABEL_20:
      v15 = 0;
      goto LABEL_21;
    }
LABEL_19:
    v15 = 1;
LABEL_21:
    if ( (v6 & 1) != 0 )
    {
      v6 &= ~1u;
      v16 = v13;
      if ( v13 )
      {
        v13 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      }
    }
    if ( v15 )
    {
      v17 = v27;
      v28[0] = v27;
      if ( v27 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 8LL))(v27);
      if ( v8 != v32
        || (v18 = CTSimpleArray<IUnknown *,4294967294,CTPolicyCoTaskMem<IUnknown *>,CSimpleArrayStandardCompareHelper<IUnknown *>,CSimpleArrayStandardMergeHelper<IUnknown *>>::EnsureCapacity(
                    &v29,
                    v8 + 1),
            v8 = v30,
            v7 = v29,
            v18 >= 0) )
      {
        v30 = ++v8;
        v19 = &v7[v8 - 1];
        if ( v19 )
        {
          *v19 = 0LL;
          if ( v19 != v28 )
          {
            *v19 = v17;
            v17 = 0LL;
          }
        }
      }
      if ( v17 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v20 = v27;
    if ( v27 )
    {
      v27 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    }
    ++v12;
  }
  while ( v12 < (unsigned int)v36 );
  v4 = (struct IImmersiveMonitor *)v34;
  v3 = v35;
LABEL_38:
  v5 = a1;
LABEL_39:
  if ( (v3 & 1) != 0 )
  {
    v36 = 0LL;
    GlobalSyncEventHandler = CApplicationManager::_GetGlobalSyncEventHandler(v5, &v36);
    v22 = v36;
    if ( GlobalSyncEventHandler >= 0 )
    {
      v34 = 0LL;
      if ( v4 )
        SingleMonitorObjectArray = CApplicationManager::_GetSingleMonitorObjectArray(v5, v4, &v34);
      else
        SingleMonitorObjectArray = CApplicationManager::_GetMonitorObjectArray(v5);
      if ( SingleMonitorObjectArray >= 0 )
      {
        AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
        (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, unsigned __int64, _QWORD, int, int, int))(*(_QWORD *)v22 + 24LL))(
          v22,
          v34,
          ((unsigned __int64)v5 + 208) & -(__int64)(v5 != 0LL),
          0LL,
          1,
          (v3 & 8) != 0 ? 4 : 1,
          0xFFFF);
        ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
      }
      v24 = v34;
      if ( v34 )
      {
        v34 = 0LL;
        ((void (__fastcall *)(struct IObjectArray *))v24->lpVtbl->Release)(v24);
      }
    }
    if ( v22 )
      (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v22 + 16LL))(v22);
  }
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
    CoTaskMemFree(v7);
  }
}
