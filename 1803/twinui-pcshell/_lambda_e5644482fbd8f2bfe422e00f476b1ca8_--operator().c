/*
 * XREFs of _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180005508
 * Callers:
 *     CClassicWindowManager::ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___ @ 0x180005BE0 (CClassicWindowManager--ForEachWindow__lambda_e1ecc95e02884a583b315175deae0ef3___.c)
 *     CClassicWindowManager::ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___ @ 0x180005E98 (CClassicWindowManager--ForEachWindowInOwnershipChain__lambda_e5644482fbd8f2bfe422e00f476b1ca8___.c)
 * Callees:
 *     ?GetMonitor@CClassicWindow@@UEAAJPEAPEAUIImmersiveMonitor@@@Z @ 0x180007F90 (-GetMonitor@CClassicWindow@@UEAAJPEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x180082D58 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?_EnsureCapacity@?$CTSimpleArray@_K$0PPPPPPPO@V?$CTPolicyCoTaskMem@_K@@V?$CSimpleArrayStandardCompareHelper@_K@@V?$CSimpleArrayStandardMergeHelper@_K@@@@QEAAJ_K0@Z @ 0x18008CC0C (-_EnsureCapacity@-$CTSimpleArray@_K$0PPPPPPPO@V-$CTPolicyCoTaskMem@_K@@V-$CSimpleArrayStandardCo.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(_QWORD *a1, CClassicWindow **a2)
{
  char v3; // si
  CClassicWindow *v4; // rcx
  __int64 (__fastcall *v5)(CClassicWindow *__hidden, struct IImmersiveMonitor **); // rax
  int Monitor; // eax
  struct IUnknown *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rdi
  char v10; // di
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  struct IUnknown **v13; // rdx
  struct IUnknown *v14; // rcx
  struct IUnknown *v16; // [rsp+70h] [rbp+40h] BYREF
  struct IUnknown *v17; // [rsp+78h] [rbp+48h]

  v3 = 0;
  v16 = 0LL;
  v4 = *a2;
  v5 = *(__int64 (__fastcall **)(CClassicWindow *__hidden, struct IImmersiveMonitor **))(*(_QWORD *)*a2 + 80LL);
  if ( v5 == CClassicWindow::GetMonitor )
    Monitor = CClassicWindow::GetMonitor(v4, (struct IImmersiveMonitor **)&v16);
  else
    Monitor = v5(v4, (struct IImmersiveMonitor **)&v16);
  if ( Monitor < 0 )
  {
    v7 = v17;
LABEL_25:
    v10 = 0;
    goto LABEL_8;
  }
  v7 = v16;
  v17 = v16;
  if ( v16 )
    ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->AddRef)(v16);
  v3 = 1;
  v8 = (_QWORD *)*a1;
  v9 = 0LL;
  if ( *(_QWORD *)(*a1 + 8LL) )
  {
    while ( !(unsigned int)SHIsSameObject(*(struct IUnknown **)(*v8 + 8 * v9), v7) )
    {
      if ( (unsigned __int64)++v9 >= v8[1] )
        goto LABEL_7;
    }
    goto LABEL_25;
  }
LABEL_7:
  v10 = 1;
LABEL_8:
  if ( (v3 & 1) != 0 && v7 )
    ((void (__fastcall *)(struct IUnknown *))v7->lpVtbl->Release)(v7);
  if ( v10 )
  {
    v11 = (_QWORD *)*a1;
    v12 = *(_QWORD *)(*a1 + 8LL);
    if ( v12 != *(_QWORD *)(*a1 + 24LL)
      || (int)CTSimpleArray<unsigned __int64,4294967294,CTPolicyCoTaskMem<unsigned __int64>,CSimpleArrayStandardCompareHelper<unsigned __int64>,CSimpleArrayStandardMergeHelper<unsigned __int64>>::_EnsureCapacity(
                *a1,
                v12 + 1) >= 0 )
    {
      v13 = (struct IUnknown **)(*v11 + 8 * v11[1]++);
      if ( v13 )
      {
        *v13 = v16;
        if ( v16 )
          ((void (__fastcall *)(struct IUnknown *))v16->lpVtbl->AddRef)(v16);
      }
    }
  }
  v14 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(struct IUnknown *))v14->lpVtbl->Release)(v14);
  }
  return 1;
}
