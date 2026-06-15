/*
 * XREFs of ?GetOffloadDeviceFormat@CEndpointCharacteristics@@QEAAJPEAPEAUtWAVEFORMATEX@@@Z @ 0x1800BD5AC
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18009B6BC (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___ @ 0x1800BB150 (CEndpointCharacteristics--GetDefaultFormat__lambda_068f763f677867854f08eaa5008b23ee___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___ @ 0x1800BB264 (CEndpointCharacteristics--GetDefaultFormat__lambda_4d461d498790dddb1db29f8fdd447ecc___.c)
 * Callees:
 *     ?LogEPCError@@YAXPEBDHJ@Z @ 0x18002D7BC (-LogEPCError@@YAXPEBDHJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::GetOffloadDeviceFormat(
        CEndpointCharacteristics *this,
        struct tWAVEFORMATEX **a2)
{
  int v4; // ebx

  v4 = (*(__int64 (__fastcall **)(_QWORD, GUID *, __int64))(**((_QWORD **)this + 2) + 24LL))(
         *((_QWORD *)this + 2),
         &GUID_eddce3e4_f3c1_453a_b461_223563cbd886,
         1LL);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct tWAVEFORMATEX **))(MEMORY[0] + 32LL))(
           0LL,
           *((_QWORD *)this + 2),
           1LL,
           a2);
  LogEPCError("CEndpointCharacteristics::GetOffloadDeviceFormat", 5492, v4);
  return (unsigned int)v4;
}
