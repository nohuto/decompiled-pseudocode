/*
 * XREFs of ?OnGamepadIsSupportedForProcess@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@I@Z @ 0x18002A600
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnGamepadIsSupportedForProcess(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        unsigned int a3)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(*((_QWORD *)this + 7) + 1040LL);
  result = 0LL;
  if ( v3 )
    return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, a3);
  return result;
}
