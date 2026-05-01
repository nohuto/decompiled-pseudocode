/*
 * XREFs of _lambda_8d0ab586cd065271f427bd7ab75519d7_::operator() @ 0x18000F984
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_8d0ab586cd065271f427bd7ab75519d7___::operator() @ 0x18001AB90 (CDelayIAMOperations--CDelayedOperation__lambda_8d0ab586cd065271f427bd7ab75519d7___--operator().c)
 * Callees:
 *     ?_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z @ 0x18000922C (-_GetForegroundApplicationNoLock@CApplicationManager@@AEAAJPEAPEAUIImmersiveApplication@@@Z.c)
 *     ?_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArray@@@Z @ 0x180011674 (-_GetSingleMonitorObjectArray@CApplicationManager@@AEAAJPEAUIImmersiveMonitor@@PEAPEAUIObjectArr.c)
 *     ?_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z @ 0x1800118DC (-_GetGlobalSyncEventHandler@CApplicationManager@@AEAAJPEAPEAUISyncIAMEventHandler@@@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     SHIsSameObject @ 0x18002748C (SHIsSameObject.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall lambda_8d0ab586cd065271f427bd7ab75519d7_::operator()(__int64 a1)
{
  struct IObjectArray *v2; // rbx
  struct IObjectArrayVtbl *lpVtbl; // rdi
  __int64 v4; // rax
  int GlobalSyncEventHandler; // eax
  struct ISyncIAMEventHandler *v6; // rbx
  __int64 v7; // rcx
  struct IObjectArray *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  struct IImmersiveApplication *v11; // rcx
  __int64 v12; // [rsp+40h] [rbp-20h] BYREF
  __int64 v13; // [rsp+48h] [rbp-18h] BYREF
  struct ISyncIAMEventHandler *v14[2]; // [rsp+50h] [rbp-10h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  struct IObjectArray *v16; // [rsp+98h] [rbp+38h] BYREF
  struct IImmersiveApplication *v17; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+48h] BYREF

  v14[1] = (struct ISyncIAMEventHandler *)-2LL;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v17 = 0LL;
  if ( (int)CApplicationManager::_GetForegroundApplicationNoLock(*(CApplicationManager **)a1, &v17) >= 0 )
  {
    v13 = 0LL;
    if ( (**(int (__fastcall ***)(struct IImmersiveApplication *, GUID *, __int64 *))v17)(
           v17,
           &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
           &v13) >= 0 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 464LL))(v13, &v12);
      if ( (unsigned int)SHIsSameObject(v12, *(_QWORD *)(a1 + 8)) )
      {
        v16 = 0LL;
        v18 = 0LL;
        if ( (int)CApplicationManager::_GetSingleMonitorObjectArray(*(CApplicationManager **)a1, 0LL, &v16) >= 0 )
        {
          v2 = v16;
          lpVtbl = v16->lpVtbl;
          v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v18);
          if ( ((int (__fastcall *)(struct IObjectArray *, _QWORD, GUID *, __int64))lpVtbl->GetAt)(
                 v2,
                 0LL,
                 &GUID_880b26f8_9197_43d0_8045_8702d0d72000,
                 v4) >= 0
            && (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 48LL))(v18, &v15) >= 0
            && v15 )
          {
            v14[0] = 0LL;
            GlobalSyncEventHandler = CApplicationManager::_GetGlobalSyncEventHandler(*(CApplicationManager **)a1, v14);
            v6 = v14[0];
            if ( GlobalSyncEventHandler >= 0 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *, struct IObjectArray *, __int64, struct IImmersiveApplication *, int, int, int))(*(_QWORD *)v14[0] + 24LL))(
                v14[0],
                v16,
                (*(_QWORD *)a1 + 256LL) & -(__int64)(*(_QWORD *)a1 != 0LL),
                v17,
                8,
                8,
                0xFFFF);
            if ( v6 )
              (*(void (__fastcall **)(struct ISyncIAMEventHandler *))(*(_QWORD *)v6 + 16LL))(v6);
          }
        }
        v7 = v18;
        if ( v18 )
        {
          v18 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
        }
        v8 = v16;
        if ( v16 )
        {
          v16 = 0LL;
          ((void (__fastcall *)(struct IObjectArray *))v8->lpVtbl->Release)(v8);
        }
      }
      v9 = v12;
      if ( v12 )
      {
        v12 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
    }
    v10 = v13;
    if ( v13 )
    {
      v13 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v11 = v17;
  if ( v17 )
  {
    v17 = 0LL;
    (*(void (__fastcall **)(struct IImmersiveApplication *))(*(_QWORD *)v11 + 16LL))(v11);
  }
}
