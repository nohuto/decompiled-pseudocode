/*
 * XREFs of ?DoSetCellularRouting@PhoneTopology@@AEAAJAEBU_tagKSTOPOLOGY_ENDPOINTIDPAIR@@@Z @ 0x18011874C
 * Callers:
 *     ?Process@SetCellularRoutingWorkItem@@UEAAXPEAVPhoneTopology@@@Z @ 0x1801196E0 (-Process@SetCellularRoutingWorkItem@@UEAAXPEAVPhoneTopology@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhoneTopology::DoSetCellularRouting(
        PhoneTopology *this,
        const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *a2)
{
  unsigned int v2; // ebx
  _OWORD *v3; // r8
  __int64 v4; // rax
  __int128 v5; // xmm1
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  _BYTE v16[1064]; // [rsp+20h] [rbp-428h] BYREF

  v2 = 0;
  v3 = v16;
  v4 = 8LL;
  do
  {
    v5 = *((_OWORD *)a2 + 1);
    *v3 = *(_OWORD *)a2;
    v6 = *((_OWORD *)a2 + 2);
    v3[1] = v5;
    v7 = *((_OWORD *)a2 + 3);
    v3[2] = v6;
    v8 = *((_OWORD *)a2 + 4);
    v3[3] = v7;
    v9 = *((_OWORD *)a2 + 5);
    v3[4] = v8;
    v10 = *((_OWORD *)a2 + 6);
    v3[5] = v9;
    v11 = *((_OWORD *)a2 + 7);
    a2 = (const struct _tagKSTOPOLOGY_ENDPOINTIDPAIR *)((char *)a2 + 128);
    v3[6] = v10;
    v3 += 8;
    *(v3 - 1) = v11;
    --v4;
  }
  while ( v4 );
  v12 = *((_QWORD *)a2 + 2);
  v13 = *((_QWORD *)this + 4);
  *v3 = *(_OWORD *)a2;
  *((_QWORD *)v3 + 2) = v12;
  v14 = (*(__int64 (__fastcall **)(__int64, _BYTE *, _OWORD *, __int64))(*(_QWORD *)v13 + 48LL))(v13, v16, v3, 128LL);
  if ( v14 < 0 )
    return (unsigned int)v14;
  return v2;
}
