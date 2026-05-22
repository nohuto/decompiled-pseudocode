/*
 * XREFs of ??1?$list@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAA@XZ @ 0x180080798
 * Callers:
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$32 @ 0x1800D0416 (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$32.c)
 *     _InputDeliveryServer::InputDeliveryServer_::_1_::dtor$102 @ 0x1800D047C (_InputDeliveryServer--InputDeliveryServer_--_1_--dtor$102.c)
 *     _ViewHierarchy::ViewHierarchy_::_1_::dtor$17 @ 0x1800D0755 (_ViewHierarchy--ViewHierarchy_--_1_--dtor$17.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::~list<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>(
        void **a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi
  __int64 v4; // rcx

  v2 = *(_QWORD **)*a1;
  *(_QWORD *)*a1 = *a1;
  *((_QWORD *)*a1 + 1) = *a1;
  a1[1] = 0LL;
  if ( v2 != *a1 )
  {
    do
    {
      v3 = (_QWORD *)*v2;
      v4 = v2[3];
      if ( v4 )
      {
        v2[3] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      operator delete(v2);
      v2 = v3;
    }
    while ( v3 != *a1 );
  }
  operator delete(*a1);
}
