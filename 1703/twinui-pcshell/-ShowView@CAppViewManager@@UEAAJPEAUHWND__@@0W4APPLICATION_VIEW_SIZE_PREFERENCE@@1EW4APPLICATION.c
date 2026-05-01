/*
 * XREFs of ?ShowView@CAppViewManager@@UEAAJPEAUHWND__@@0W4APPLICATION_VIEW_SIZE_PREFERENCE@@1EW4APPLICATION_VIEW_MODE@@MMPEAUIAsyncCallback@@@Z @ 0x18003D9D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z @ 0x180043150 (-_QueueOperation@CAppViewManager@@AEAAJPEAUIAsyncCallback@@@Z.c)
 *     Microsoft::WRL::Callback_IAsyncCallback__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d__&___ptr64_ @ 0x180043F68 (Microsoft--WRL--Callback_IAsyncCallback__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d__-___ptr64_.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CAppViewManager::ShowView(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        char a6,
        int a7,
        int a8,
        int a9,
        struct IAsyncCallback *a10)
{
  CAppViewManager *v13; // rbx
  struct IAsyncCallback *v14; // rsi
  struct IAsyncCallback *v15; // rdi
  unsigned int v16; // r14d
  _QWORD v18[3]; // [rsp+28h] [rbp-38h] BYREF
  int v19; // [rsp+40h] [rbp-20h]
  int v20; // [rsp+44h] [rbp-1Ch]
  char v21; // [rsp+48h] [rbp-18h]
  int v22; // [rsp+4Ch] [rbp-14h]
  int v23; // [rsp+50h] [rbp-10h]
  int v24; // [rsp+54h] [rbp-Ch]
  struct IAsyncCallback *v25; // [rsp+58h] [rbp-8h]

  v13 = (CAppViewManager *)(a1 - 24);
  if ( a1 != 24 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(a1 - 24);
  v14 = a10;
  if ( a10 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)a10 + 8LL))(a10);
  v18[0] = v13;
  if ( v13 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v13 + 8LL))(v13);
  v18[1] = a2;
  v18[2] = a3;
  v19 = a4;
  v20 = a5;
  v21 = a6;
  v22 = a7;
  v23 = a8;
  v24 = a9;
  v25 = v14;
  if ( v14 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v14 + 8LL))(v14);
  Microsoft::WRL::Callback_IAsyncCallback__lambda_4d3db48dcfcb6d65bc97b5eb3c36596d______ptr64_(&a10, v18);
  v15 = a10;
  v16 = CAppViewManager::_QueueOperation(v13, a10);
  if ( v15 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v14 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v14 )
    (*(void (__fastcall **)(struct IAsyncCallback *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(CAppViewManager *))(*(_QWORD *)v13 + 16LL))(v13);
  return v16;
}
