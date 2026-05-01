/*
 * XREFs of CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___ @ 0x180039E20
 * Callers:
 *     ?GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV?$CCoSimpleArray@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@@@@Z @ 0x1800366B0 (-GetIntersectingMonitors@CClassicWindowManager@@UEAAJPEAUHWND__@@PEAV-$CCoSimpleArray@V-$ComPtr@.c)
 * Callees:
 *     ?IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z @ 0x180035F94 (-IsWindowOwnedBy@CClassicWindowManager@@AEAA_NPEAUIClassicWindow@@0@Z.c)
 *     _lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator() @ 0x180036994 (_lambda_e5644482fbd8f2bfe422e00f476b1ca8_--operator().c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall CClassicWindowManager::ForEachOwnee__lambda_858344172df6f9bddab2a469aab627e9___(
        CClassicWindowManager *a1,
        struct IClassicWindow *a2,
        __int64 *a3)
{
  char v4; // di
  unsigned __int64 v5; // rbp
  unsigned __int64 i; // rsi
  struct IClassicWindow *v7; // rbx
  struct IClassicWindow *v9; // [rsp+60h] [rbp+8h] BYREF
  struct IClassicWindow *v10; // [rsp+68h] [rbp+10h]
  __int64 *v11; // [rsp+70h] [rbp+18h]

  v11 = a3;
  v10 = a2;
  v4 = 1;
  v5 = *((_QWORD *)a1 + 26);
  for ( i = 0LL; i < v5; ++i )
  {
    if ( !v4 )
      break;
    v7 = *(struct IClassicWindow **)(*((_QWORD *)a1 + 25) + 8 * i);
    v9 = v7;
    if ( v7 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 8LL))(v7);
    v4 = CClassicWindowManager::IsWindowOwnedBy(a1, v7, v10)
       ? lambda_e5644482fbd8f2bfe422e00f476b1ca8_::operator()(v11, &v9)
       : 1;
    if ( v7 )
      (*(void (__fastcall **)(struct IClassicWindow *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return v4;
}
