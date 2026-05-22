/*
 * XREFs of ?SetBootstrapProxy@MPCManagerConnection@@MEAAJPEAVBamoProxy@Bamo@Microsoft@@@Z @ 0x180058C50
 * Callers:
 *     <none>
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z @ 0x1800524A0 (-OnPeerConnected@MPCManager@@QEAAXPEAVBamoMPCManagerClientProxy@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCManagerConnection::SetBootstrapProxy(MPCManager **this, struct Microsoft::Bamo::BamoProxy *a2)
{
  int v3; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v6 = 0LL;
  v3 = (*(__int64 (__fastcall **)(struct Microsoft::Bamo::BamoProxy *, GUID *, unsigned __int64 *))(*(_QWORD *)a2 + 16LL))(
         a2,
         &GUID_8dd118f0_5eaf_969f_c656_98015fdc30ef,
         &v6);
  if ( v3 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanagerconnection.cpp",
      (const char *)(unsigned int)v3);
    JUMPOUT(0x180058CE2LL);
  }
  MPCManager::OnPeerConnected(
    this[19],
    (struct BamoMPCManagerClientProxy *)((v6 - 8) & ((unsigned __int128)-(__int128)v6 >> 64)));
  if ( v6 )
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v6 + 16LL))(v6);
  return 0LL;
}
