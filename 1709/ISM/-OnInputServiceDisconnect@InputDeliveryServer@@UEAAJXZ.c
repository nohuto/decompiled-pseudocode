/*
 * XREFs of ?OnInputServiceDisconnect@InputDeliveryServer@@UEAAJXZ @ 0x18007FA30
 * Callers:
 *     <none>
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::OnInputServiceDisconnect(InputDeliveryServer *this)
{
  _QWORD *v1; // rbx
  _QWORD **v2; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx

  *((_BYTE *)this + 368) = 0;
  v1 = (_QWORD *)((char *)this + 384);
  v2 = (_QWORD **)*((_QWORD *)this + 49);
  v3 = *v2;
  *v2 = v2;
  *(_QWORD *)(*((_QWORD *)this + 49) + 8LL) = *((_QWORD *)this + 49);
  *((_QWORD *)this + 50) = 0LL;
  if ( v3 != *((_QWORD **)this + 49) )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      v5 = v3[3];
      if ( v5 )
      {
        v3[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      }
      operator delete(v3);
      v3 = v4;
    }
    while ( v4 != (_QWORD *)v1[1] );
  }
  std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
    v1,
    8LL);
  return 0LL;
}
