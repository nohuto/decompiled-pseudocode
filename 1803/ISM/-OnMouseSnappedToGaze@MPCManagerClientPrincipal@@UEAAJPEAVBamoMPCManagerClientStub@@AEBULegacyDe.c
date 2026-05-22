/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@@Z @ 0x18002A510
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMouseSnappedToGaze(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3)
{
  __int64 v3; // rax
  _OWORD *v4; // rdx
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int64 v17; // rcx
  __int64 result; // rax
  _BYTE v19[992]; // [rsp+20h] [rbp-3F8h] BYREF

  v3 = 7LL;
  v4 = v19;
  do
  {
    v5 = *((_OWORD *)a3 + 1);
    *v4 = *(_OWORD *)a3;
    v6 = *((_OWORD *)a3 + 2);
    v4[1] = v5;
    v7 = *((_OWORD *)a3 + 3);
    v4[2] = v6;
    v8 = *((_OWORD *)a3 + 4);
    v4[3] = v7;
    v9 = *((_OWORD *)a3 + 5);
    v4[4] = v8;
    v10 = *((_OWORD *)a3 + 6);
    v4[5] = v9;
    v11 = *((_OWORD *)a3 + 7);
    a3 = (const struct LegacyDeviceInfo *)((char *)a3 + 128);
    v4[6] = v10;
    v4 += 8;
    *(v4 - 1) = v11;
    --v3;
  }
  while ( v3 );
  v12 = *((_QWORD *)a3 + 10);
  v13 = *((_OWORD *)a3 + 1);
  *v4 = *(_OWORD *)a3;
  v14 = *((_OWORD *)a3 + 2);
  v4[1] = v13;
  v15 = *((_OWORD *)a3 + 3);
  v4[2] = v14;
  v16 = *((_OWORD *)a3 + 4);
  v4[3] = v15;
  v4[4] = v16;
  *((_QWORD *)v4 + 10) = v12;
  v17 = *(_QWORD *)(*((_QWORD *)this + 7) + 1040LL);
  result = 0LL;
  if ( v17 )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *, const struct LegacyDeviceInfo *, __int64))(*(_QWORD *)v17 + 48LL))(
             v17,
             v19,
             a3,
             128LL);
  return result;
}
