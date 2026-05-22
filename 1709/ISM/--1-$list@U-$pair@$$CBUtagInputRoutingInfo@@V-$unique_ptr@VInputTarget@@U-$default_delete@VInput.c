/*
 * XREFs of ??1?$list@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBUtagInputRoutingInfo@@V?$unique_ptr@VInputTarget@@U?$default_delete@VInputTarget@@@std@@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180080818
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$67 @ 0x1800D0449 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$67.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>::~list<std::pair<tagInputRoutingInfo const,std::unique_ptr<InputTarget>>>(
        void **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  void (__fastcall ***v4)(_QWORD, __int64); // rcx

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = (void (__fastcall ***)(_QWORD, __int64))v2[8];
      if ( v4 )
        (**v4)(v4, 1LL);
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  operator delete(*a1);
}
