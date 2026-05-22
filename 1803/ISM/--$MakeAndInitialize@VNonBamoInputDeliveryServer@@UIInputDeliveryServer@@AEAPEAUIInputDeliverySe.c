/*
 * XREFs of ??$MakeAndInitialize@VNonBamoInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@NonBamoInputDeliveryServer@@@Z @ 0x180024D40
 * Callers:
 *     ?Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x180023E28 (-Create@NonBamoInputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIIn.c)
 * Callees:
 *     ??0NonBamoInputDeliveryServer@@QEAA@XZ @ 0x180024EB0 (--0NonBamoInputDeliveryServer@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<NonBamoInputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum NonBamoInputDeliveryServer::TestMode &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  NonBamoInputDeliveryServer *v7; // rax
  int v8; // edi
  NonBamoInputDeliveryServer *v9; // rbx

  NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer = 0LL;
  v7 = (NonBamoInputDeliveryServer *)operator new(0x120uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = NonBamoInputDeliveryServer::NonBamoInputDeliveryServer(v7);
    v8 = (*(__int64 (__fastcall **)(NonBamoInputDeliveryServer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 56LL))(
           v9,
           *a2,
           *a3,
           *a4);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(NonBamoInputDeliveryServer *, GUID *, struct IInputDeliveryServer **))v9)(
             v9,
             &GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba,
             &NonBamoInputDeliveryServer::s_pNonBamoInputDeliveryServer);
    (*(void (__fastcall **)(NonBamoInputDeliveryServer *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
