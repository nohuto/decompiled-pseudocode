/*
 * XREFs of ?SendEnqueueFlipExToken@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN@@@Z @ 0x1C01BEC88
 * Callers:
 *     ?VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN@@@Z @ 0x1C01E8428 (-VailSendEnqueueFlipExToken@DXGSESSIONDATA@@QEAAJPEAU_D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendEnqueueFlipExToken(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        struct _D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN *a2)
{
  _DWORD *v4; // rcx
  __int64 v5; // rax
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
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  unsigned __int64 v30; // [rsp+40h] [rbp-C8h] BYREF
  int v31; // [rsp+48h] [rbp-C0h]
  int v32; // [rsp+4Ch] [rbp-BCh]
  _DWORD v33[130]; // [rsp+50h] [rbp-B8h] BYREF

  memset(v33, 0, sizeof(v33));
  v33[0] = 1886220131;
  v33[1] = -1073741823;
  v33[2] = 9;
  memset(&v33[4], 0, 0x1F8uLL);
  LODWORD(v29) = 16;
  v4 = &v33[4];
  v32 = 0;
  v5 = 3LL;
  v30 = 0xC0000001706D6F63uLL;
  v31 = 10;
  do
  {
    v6 = *((_OWORD *)a2 + 1);
    *(_OWORD *)v4 = *(_OWORD *)a2;
    v7 = *((_OWORD *)a2 + 2);
    *((_OWORD *)v4 + 1) = v6;
    v8 = *((_OWORD *)a2 + 3);
    *((_OWORD *)v4 + 2) = v7;
    v9 = *((_OWORD *)a2 + 4);
    *((_OWORD *)v4 + 3) = v8;
    v10 = *((_OWORD *)a2 + 5);
    *((_OWORD *)v4 + 4) = v9;
    v11 = *((_OWORD *)a2 + 6);
    *((_OWORD *)v4 + 5) = v10;
    v12 = *((_OWORD *)a2 + 7);
    a2 = (struct _D3DKMT_FLIPMODEL_REMOTEPRESENTHISTORYTOKEN *)((char *)a2 + 128);
    *((_OWORD *)v4 + 6) = v11;
    v4 += 32;
    *((_OWORD *)v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *((_QWORD *)a2 + 14);
  v14 = *((_OWORD *)a2 + 1);
  *(_OWORD *)v4 = *(_OWORD *)a2;
  v15 = *((_OWORD *)a2 + 2);
  *((_OWORD *)v4 + 1) = v14;
  v16 = *((_OWORD *)a2 + 3);
  *((_OWORD *)v4 + 2) = v15;
  v17 = *((_OWORD *)a2 + 4);
  *((_OWORD *)v4 + 3) = v16;
  v18 = *((_OWORD *)a2 + 5);
  *((_OWORD *)v4 + 4) = v17;
  v19 = *((_OWORD *)a2 + 6);
  *((_OWORD *)v4 + 5) = v18;
  *((_OWORD *)v4 + 6) = v19;
  *((_QWORD *)v4 + 14) = v13;
  v20 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *, __int64, unsigned __int64 *, __int64 *))(**((_QWORD **)this + 1)
                                                                                            + 32LL))(
          *((_QWORD *)this + 1),
          v33,
          520LL,
          &v30,
          &v29);
  v24 = v20;
  if ( v20 >= 0 )
  {
    if ( (_DWORD)v29 == 16 )
    {
      if ( v31 == 10 )
      {
        LODWORD(v24) = HIDWORD(v30);
        return (unsigned int)v24;
      }
      v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      v27 = v31;
    }
    else
    {
      v26 = WdLogNewEntry5_WdWarning(v22, v21, v23);
      v27 = (unsigned int)v29;
    }
    *(_QWORD *)(v26 + 24) = v27;
    *(_QWORD *)(v26 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v26);
    LODWORD(v24) = -1073741823;
  }
  else
  {
    v25 = WdLogNewEntry5_WdWarning(v22, v21, v23);
    *(_QWORD *)(v25 + 24) = v24;
    WdLogEvent5_WdWarning(v25);
  }
  return (unsigned int)v24;
}
