/*
 * XREFs of ?OnInputProviderChanged@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@I@Z @ 0x18002A440
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnInputProviderChanged(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  _OWORD *v6; // rcx
  __int128 v7; // xmm1
  __int64 result; // rax
  __int64 v9; // rcx

  v4 = *((_QWORD *)this + 7);
  v5 = 7LL;
  v6 = (_OWORD *)(v4 + 48);
  do
  {
    *v6 = *(_OWORD *)a3;
    v6[1] = *((_OWORD *)a3 + 1);
    v6[2] = *((_OWORD *)a3 + 2);
    v6[3] = *((_OWORD *)a3 + 3);
    v6[4] = *((_OWORD *)a3 + 4);
    v6[5] = *((_OWORD *)a3 + 5);
    v6[6] = *((_OWORD *)a3 + 6);
    v6 += 8;
    v7 = *((_OWORD *)a3 + 7);
    a3 = (const struct LegacyDeviceInfo *)((char *)a3 + 128);
    *(v6 - 1) = v7;
    --v5;
  }
  while ( v5 );
  *v6 = *(_OWORD *)a3;
  v6[1] = *((_OWORD *)a3 + 1);
  v6[2] = *((_OWORD *)a3 + 2);
  v6[3] = *((_OWORD *)a3 + 3);
  v6[4] = *((_OWORD *)a3 + 4);
  *((_QWORD *)v6 + 10) = *((_QWORD *)a3 + 10);
  result = 0LL;
  v9 = *(_QWORD *)(v4 + 1040);
  *(_DWORD *)(v4 + 1032) = a4;
  if ( v9 )
    return (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v9 + 40LL))(v9, v4 + 48, a4);
  return result;
}
