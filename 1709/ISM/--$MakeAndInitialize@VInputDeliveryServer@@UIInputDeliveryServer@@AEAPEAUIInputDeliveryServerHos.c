/*
 * XREFs of ??$MakeAndInitialize@VInputDeliveryServer@@UIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@1@@Details@WRL@Microsoft@@YAJPEAPEAUIInputDeliveryServer@@AEAPEAUIInputDeliveryServerHost@@AEAPEBGAEAW4TestMode@InputDeliveryServer@@@Z @ 0x180080940
 * Callers:
 *     ?Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeliveryServer@@@Z @ 0x18007DDA8 (-Create@InputDeliveryServer@@SAJPEAUIInputDeliveryServerHost@@PEBGW4TestMode@1@PEAPEAUIInputDeli.c)
 * Callees:
 *     ??0InputDeliveryServer@@QEAA@XZ @ 0x180080A1C (--0InputDeliveryServer@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<InputDeliveryServer,IInputDeliveryServer,IInputDeliveryServerHost * &,unsigned short const * &,enum InputDeliveryServer::TestMode &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        unsigned int *a4)
{
  InputDeliveryServer *v7; // rax
  int v8; // edi
  InputDeliveryServer *v9; // rbx

  InputDeliveryServer::s_pInputDeliveryServer = 0LL;
  v7 = (InputDeliveryServer *)operator new(0x270uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v7 )
  {
    v9 = InputDeliveryServer::InputDeliveryServer(v7);
    v8 = (*(__int64 (__fastcall **)(InputDeliveryServer *, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v9 + 80LL))(
           v9,
           *a2,
           *a3,
           *a4);
    if ( v8 >= 0 )
      v8 = (**(__int64 (__fastcall ***)(InputDeliveryServer *, GUID *, struct IInputDeliveryServer **))v9)(
             v9,
             &GUID_32cc20dc_af78_43d9_b31d_cfc456c2dfba,
             &InputDeliveryServer::s_pInputDeliveryServer);
    (*(void (__fastcall **)(InputDeliveryServer *))(*(_QWORD *)v9 + 16LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v8;
}
