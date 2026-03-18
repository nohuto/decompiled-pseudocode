/*
 * XREFs of ?SendBindCompositionSurface@DXG_GUEST_COMPOSITIONOBJECTCHANNEL@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01BE804
 * Callers:
 *     ?VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_K@Z @ 0x1C01E7B88 (-VailSendBindCompositionSurface@DXGSESSIONDATA@@QEAAJPEAXHPEAU_DXGK_REMOTE_CSM_BUFFER_INFO@@PEA_.c)
 * Callees:
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001C5F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001C940 (memset.c)
 */

__int64 __fastcall DXG_GUEST_COMPOSITIONOBJECTCHANNEL::SendBindCompositionSurface(
        DXG_GUEST_COMPOSITIONOBJECTCHANNEL *this,
        void *a2,
        __int64 a3,
        struct _DXGK_REMOTE_CSM_BUFFER_INFO *a4,
        unsigned __int64 *a5)
{
  __int64 v8; // rcx
  _OWORD *v9; // rax
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int64 v17; // rcx
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v30; // [rsp+38h] [rbp-D0h] BYREF
  signed __int64 v31; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v32; // [rsp+48h] [rbp-C0h]
  unsigned __int64 v33; // [rsp+50h] [rbp-B8h]
  _QWORD v34[125]; // [rsp+58h] [rbp-B0h] BYREF

  memset(v34, 0, sizeof(v34));
  v34[0] = 0xC0000001706D6F63uLL;
  LODWORD(v34[1]) = 5;
  memset(&v34[4], 0, 968);
  v8 = 7LL;
  v33 = 0LL;
  v9 = &v34[4];
  v31 = 0xC0000001706D6F63uLL;
  v32 = 6LL;
  LODWORD(v30) = 24;
  v34[2] = a2;
  LODWORD(v34[3]) = 1;
  do
  {
    v10 = *((_OWORD *)a4 + 1);
    *v9 = *(_OWORD *)a4;
    v11 = *((_OWORD *)a4 + 2);
    v9[1] = v10;
    v12 = *((_OWORD *)a4 + 3);
    v9[2] = v11;
    v13 = *((_OWORD *)a4 + 4);
    v9[3] = v12;
    v14 = *((_OWORD *)a4 + 5);
    v9[4] = v13;
    v15 = *((_OWORD *)a4 + 6);
    v9[5] = v14;
    v16 = *((_OWORD *)a4 + 7);
    a4 = (struct _DXGK_REMOTE_CSM_BUFFER_INFO *)((char *)a4 + 128);
    v9[6] = v15;
    v9 += 8;
    *(v9 - 1) = v16;
    --v8;
  }
  while ( v8 );
  v17 = *((_QWORD *)this + 1);
  v18 = *((_OWORD *)a4 + 1);
  *v9 = *(_OWORD *)a4;
  v19 = *((_OWORD *)a4 + 2);
  v9[1] = v18;
  v20 = *((_OWORD *)a4 + 3);
  v9[2] = v19;
  v9[3] = v20;
  v21 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64, signed __int64 *, __int64 *))(*(_QWORD *)v17 + 32LL))(
          v17,
          v34,
          1000LL,
          &v31,
          &v30);
  v25 = v21;
  if ( v21 < 0 )
  {
    v26 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    *(_QWORD *)(v26 + 24) = v25;
    WdLogEvent5_WdWarning(v26);
    return (unsigned int)v25;
  }
  if ( (_DWORD)v30 != 24 )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    v28 = (unsigned int)v30;
LABEL_7:
    *(_QWORD *)(v27 + 24) = v28;
    *(_QWORD *)(v27 + 32) = -1073741823LL;
    WdLogEvent5_WdWarning(v27);
    LODWORD(v25) = -1073741823;
    return (unsigned int)v25;
  }
  if ( (_DWORD)v32 != 6 )
  {
    v27 = WdLogNewEntry5_WdWarning(v23, v22, v24);
    v28 = (int)v32;
    goto LABEL_7;
  }
  LODWORD(v25) = HIDWORD(v31);
  if ( v31 >= 0 )
    *a5 = v33;
  return (unsigned int)v25;
}
