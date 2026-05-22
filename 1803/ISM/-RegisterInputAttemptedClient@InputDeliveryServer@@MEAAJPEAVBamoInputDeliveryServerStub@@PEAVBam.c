/*
 * XREFs of ?RegisterInputAttemptedClient@InputDeliveryServer@@MEAAJPEAVBamoInputDeliveryServerStub@@PEAVBamoInputAttemptedDeliveryClientProxy@@@Z @ 0x180023940
 * Callers:
 *     <none>
 * Callees:
 *     ??$emplace_back@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@AEBV234@@Z @ 0x180025460 (--$emplace_back@AEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@-$vector@V.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputDeliveryServer::RegisterInputAttemptedClient(
        InputDeliveryServer *this,
        struct BamoInputDeliveryServerStub *a2,
        struct BamoInputAttemptedDeliveryClientProxy *a3)
{
  struct BamoInputAttemptedDeliveryClientProxy *v4; // rcx
  struct BamoInputAttemptedDeliveryClientProxy *v6; // [rsp+40h] [rbp+8h] BYREF
  struct BamoInputAttemptedDeliveryClientProxy **v7; // [rsp+50h] [rbp+18h]

  v6 = a3;
  if ( a3 )
    (**(void (__fastcall ***)(struct BamoInputAttemptedDeliveryClientProxy *, struct BamoInputDeliveryServerStub *))a3)(
      a3,
      a2);
  v7 = &v6;
  std::vector<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy>>::emplace_back<Microsoft::WRL::ComPtr<BamoInputAttemptedDeliveryClientProxy> const &>(
    (char *)this + 64,
    &v6);
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(struct BamoInputAttemptedDeliveryClientProxy *))(*(_QWORD *)v4 + 8LL))(v4);
  }
  return 0LL;
}
