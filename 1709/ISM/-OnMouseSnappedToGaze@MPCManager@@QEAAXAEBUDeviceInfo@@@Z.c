/*
 * XREFs of ?OnMouseSnappedToGaze@MPCManager@@QEAAXAEBUDeviceInfo@@@Z @ 0x18005DE8C
 * Callers:
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004B7A0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall MPCManager::OnMouseSnappedToGaze(MPCManager *this, const struct DeviceInfo *a2)
{
  __int64 *v2; // rdi
  __int64 *v5; // rbx
  const struct DeviceInfo *v6; // rax
  _OWORD *v7; // rcx
  __int64 v8; // rdx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int64 v20; // rax
  int v21; // eax
  __int64 *v22; // rax
  __int64 *i; // rax
  int v24; // [rsp+20h] [rbp-A78h]
  int v25; // [rsp+38h] [rbp-A60h]
  _BYTE v26[2624]; // [rsp+40h] [rbp-A58h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+A98h] [rbp+0h]
  __int64 v28; // [rsp+AA0h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 14);
  v5 = (__int64 *)*v2;
  while ( v5 != v2 )
  {
    v6 = a2;
    v7 = v26;
    v8 = 20LL;
    do
    {
      v9 = *(_OWORD *)v6;
      v10 = *((_OWORD *)v6 + 1);
      v6 = (const struct DeviceInfo *)((char *)v6 + 128);
      *v7 = v9;
      v11 = *((_OWORD *)v6 - 6);
      v7[1] = v10;
      v12 = *((_OWORD *)v6 - 5);
      v7[2] = v11;
      v13 = *((_OWORD *)v6 - 4);
      v7[3] = v12;
      v14 = *((_OWORD *)v6 - 3);
      v7[4] = v13;
      v15 = *((_OWORD *)v6 - 2);
      v7[5] = v14;
      v16 = *((_OWORD *)v6 - 1);
      v7[6] = v15;
      v7 += 8;
      *(v7 - 1) = v16;
      --v8;
    }
    while ( v8 );
    v17 = *((_OWORD *)v6 + 1);
    *v7 = *(_OWORD *)v6;
    v18 = *((_OWORD *)v6 + 2);
    v7[1] = v17;
    v19 = *((_OWORD *)v6 + 3);
    v20 = v5[9];
    v7[2] = v18;
    v28 = v20;
    v7[3] = v19;
    LOWORD(v24) = 3;
    v21 = ((__int64 (__fastcall *)(_QWORD, __int64 *, __int64, __int64, int, void *, _BYTE *, int))CoreUICallSend)(
            *((_QWORD *)this + 2),
            &v28,
            1LL,
            1LL,
            v24,
            &unk_1800E53EB,
            v26,
            v25);
    if ( v21 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xFF,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcmanager.cpp",
        (const char *)(unsigned int)v21);
    if ( !*((_BYTE *)v5 + 25) )
    {
      v22 = (__int64 *)v5[2];
      if ( *((_BYTE *)v22 + 25) )
      {
        for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
          v5 = i;
        v5 = i;
      }
      else
      {
        do
        {
          v5 = v22;
          v22 = (__int64 *)*v22;
        }
        while ( !*((_BYTE *)v22 + 25) );
      }
    }
  }
}
