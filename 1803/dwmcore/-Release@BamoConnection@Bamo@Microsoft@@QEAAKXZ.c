/*
 * XREFs of ?Release@BamoConnection@Bamo@Microsoft@@QEAAKXZ @ 0x18015459C
 * Callers:
 *     ??$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessageSession@@PEAUIMessagePort@@UMsgScopeID@@PEBGPEAPEAVDataProviderRegistrarConnection@@@Z @ 0x1800C4B7C (--$CreateServer@VDataProviderRegistrarConnection@@@BamoConnection@Bamo@Microsoft@@SAJPEAUIMessag.c)
 *     ?InternalRelease@?$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ @ 0x180153A54 (-InternalRelease@-$ComPtr@VDataProviderRegistrarConnection@@@WRL@Microsoft@@IEAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::Bamo::BamoConnection::Release(Microsoft::Bamo::BamoConnection *this)
{
  __int64 (__fastcall ***v1)(_QWORD); // rax

  v1 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(Microsoft::Bamo::BamoConnection *))(*(_QWORD *)this + 40LL))(this);
  return (**v1)(v1);
}
