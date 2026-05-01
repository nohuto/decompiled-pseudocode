/*
 * XREFs of ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003DD20
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370__&___ptr64_ @ 0x180043FE0 (Microsoft--WRL--Callback_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::SwitchViews(__int64 a1, __int64 a2, __int64 a3, int a4, struct IAsyncCallback *a5)
{
  CAppViewManager *v8; // rbx
  struct IAsyncCallback *v9; // rsi
  struct IAsyncCallback *v10; // rdi
  unsigned int v11; // ebp
  _QWORD v13[3]; // [rsp+28h] [rbp-40h] BYREF
  int v14; // [rsp+40h] [rbp-28h]
  struct IAsyncCallback *v15; // [rsp+48h] [rbp-20h]

  v8 = (CAppViewManager *)(a1 - 24);
  if ( a1 != 24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(a1 - 24);
  v9 = a5;
  if ( a5 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a5 + 8LL))(a5);
  v13[0] = v8;
  if ( v8 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 8LL))(v8);
  v13[1] = a2;
  v13[2] = a3;
  v14 = a4;
  v15 = v9;
  if ( v9 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v9 + 8LL))(v9);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370______ptr64_(&a5, v13);
  v10 = a5;
  v11 = CAppViewManager::_QueueOperation(v8, a5);
  if ( v10 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v9 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v8 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v8 + 16LL))(v8);
  return v11;
}
