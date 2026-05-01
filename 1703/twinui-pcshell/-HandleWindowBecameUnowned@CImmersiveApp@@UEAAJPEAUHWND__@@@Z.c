/*
 * XREFs of ?HandleWindowBecameUnowned@CImmersiveApp@@UEAAJPEAUHWND__@@@Z @ 0x180054AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?InsertAt@?$CTSimpleArray@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V?$CTPolicyCoTaskMem@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@V?$CSimpleArrayStandardMergeHelper@V?$ComPtr@UITaskWindow@@@WRL@Microsoft@@@@@@QEAAJAEBV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@_K@Z @ 0x180016FB4 (-InsertAt@-$CTSimpleArray@V-$ComPtr@UITaskWindow@@@WRL@Microsoft@@$0PPPPPPPO@V-$CTPolicyCoTaskMe.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180017E54 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z @ 0x180064B40 (-CTaskWindow_CreateInstance@@YAJQEBUTASKWINDOW_INIT_DATA@@AEBU_GUID@@PEAPEAX@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     memset @ 0x180194E50 (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CImmersiveApp::HandleWindowBecameUnowned(CImmersiveApp *this, HWND a2)
{
  __int64 v3; // rbx
  __int64 *v4; // rax
  const struct _GUID *v5; // rdx
  int Instance; // ebx
  __int64 v7; // rcx
  __int128 v9; // [rsp+28h] [rbp-59h] BYREF
  __int64 v10; // [rsp+38h] [rbp-49h]
  _BYTE v11[36]; // [rsp+40h] [rbp-41h] BYREF
  _QWORD v12[2]; // [rsp+68h] [rbp-19h] BYREF
  int v13; // [rsp+78h] [rbp-9h]
  int v14; // [rsp+7Ch] [rbp-5h]
  __int128 v15; // [rsp+80h] [rbp-1h]
  __int128 v16; // [rsp+90h] [rbp+Fh]
  __int128 v17; // [rsp+A0h] [rbp+1Fh]
  int v18; // [rsp+B0h] [rbp+2Fh]
  __int64 v19; // [rsp+B8h] [rbp+37h]
  int v20; // [rsp+C0h] [rbp+3Fh]
  int v21; // [rsp+C4h] [rbp+43h]

  v10 = -2LL;
  v9 = 0uLL;
  v3 = *((_QWORD *)this + 35);
  v12[0] = a2;
  v12[1] = 0LL;
  v13 = 3;
  v14 = 0;
  v15 = 0uLL;
  memset(v11, 0, sizeof(v11));
  v16 = *(_OWORD *)v11;
  v17 = *(_OWORD *)&v11[16];
  v18 = *(_DWORD *)&v11[32];
  v19 = (v3 + 88) & -(__int64)(v3 != 0);
  v20 = 3;
  v21 = 15;
  *(_QWORD *)&v9 = 0LL;
  v4 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>((__int64 *)&v9);
  Instance = CTaskWindow_CreateInstance((const struct TASKWINDOW_INIT_DATA *const)v12, v5, (void **)v4);
  if ( Instance >= 0 )
    Instance = CTSimpleArray<Microsoft::WRL::ComPtr<ITaskWindow>,4294967294,CTPolicyCoTaskMem<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardCompareHelper<Microsoft::WRL::ComPtr<ITaskWindow>>,CSimpleArrayStandardMergeHelper<Microsoft::WRL::ComPtr<ITaskWindow>>>::InsertAt(
                 (_QWORD *)this + 47,
                 (__int64 *)&v9,
                 *((_QWORD *)this + 48));
  v7 = v9;
  if ( (_QWORD)v9 )
  {
    *(_QWORD *)&v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)Instance;
}
