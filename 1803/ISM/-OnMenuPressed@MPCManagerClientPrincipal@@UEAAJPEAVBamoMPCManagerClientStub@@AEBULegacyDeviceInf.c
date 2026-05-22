/*
 * XREFs of ?OnMenuPressed@MPCManagerClientPrincipal@@UEAAJPEAVBamoMPCManagerClientStub@@AEBULegacyDeviceInfo@@I@Z @ 0x18002A350
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MPCManagerClientPrincipal::OnMenuPressed(
        MPCManagerClientPrincipal *this,
        struct BamoMPCManagerClientStub *a2,
        const struct LegacyDeviceInfo *a3,
        unsigned int a4)
{
  __int64 v4; // rax
  _OWORD *v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int64 v13; // rax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int64 v18; // rcx
  __int64 result; // rax
  _BYTE v20[992]; // [rsp+20h] [rbp-3F8h] BYREF

  v4 = 7LL;
  v5 = v20;
  do
  {
    v6 = *((_OWORD *)a3 + 1);
    *v5 = *(_OWORD *)a3;
    v7 = *((_OWORD *)a3 + 2);
    v5[1] = v6;
    v8 = *((_OWORD *)a3 + 3);
    v5[2] = v7;
    v9 = *((_OWORD *)a3 + 4);
    v5[3] = v8;
    v10 = *((_OWORD *)a3 + 5);
    v5[4] = v9;
    v11 = *((_OWORD *)a3 + 6);
    v5[5] = v10;
    v12 = *((_OWORD *)a3 + 7);
    a3 = (const struct LegacyDeviceInfo *)((char *)a3 + 128);
    v5[6] = v11;
    v5 += 8;
    *(v5 - 1) = v12;
    --v4;
  }
  while ( v4 );
  v13 = *((_QWORD *)a3 + 10);
  v14 = *((_OWORD *)a3 + 1);
  *v5 = *(_OWORD *)a3;
  v15 = *((_OWORD *)a3 + 2);
  v5[1] = v14;
  v16 = *((_OWORD *)a3 + 3);
  v5[2] = v15;
  v17 = *((_OWORD *)a3 + 4);
  v5[3] = v16;
  v5[4] = v17;
  *((_QWORD *)v5 + 10) = v13;
  v18 = *(_QWORD *)(*((_QWORD *)this + 7) + 1040LL);
  result = 0LL;
  if ( v18 )
    return (*(__int64 (__fastcall **)(__int64, _BYTE *, _QWORD))(*(_QWORD *)v18 + 32LL))(v18, v20, a4);
  return result;
}
