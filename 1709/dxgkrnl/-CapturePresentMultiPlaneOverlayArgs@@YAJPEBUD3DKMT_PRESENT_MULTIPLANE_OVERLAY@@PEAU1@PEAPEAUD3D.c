/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs@@YAJPEBUD3DKMT_PRESENT_MULTIPLANE_OVERLAY@@PEAU1@PEAPEAUD3DKMT_MULTIPLANE_OVERLAY@@PEAPEAUtagRECT@@@Z @ 0x1C01CF970
 * Callers:
 *     DxgkPresentMultiPlaneOverlay @ 0x1C01D3010 (DxgkPresentMultiPlaneOverlay.c)
 * Callees:
 *     memmove @ 0x1C0016740 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00A3090 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs(
        const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a1,
        struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *a2,
        struct D3DKMT_MULTIPLANE_OVERLAY **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rcx
  __int64 v12; // rsi
  unsigned int v13; // edi
  __int64 v14; // rax
  SIZE_T v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct D3DKMT_MULTIPLANE_OVERLAY *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  void *v23; // rdx
  _OWORD *v24; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // rcx
  _BYTE v29[280]; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v30; // [rsp+158h] [rbp-30h]
  void *Src; // [rsp+160h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)MmUserProbeAddress;
  v7 = v29;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hDevice;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[10];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[14];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[18];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[22];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[26];
    a1 = (const struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hDevice;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[2];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[6];
  v10 = v30;
  if ( v30 - 1 > 6 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v26[3] = v10;
    v13 = -1073741811;
    v26[4] = -1073741811LL;
    v26[5] = PsGetCurrentProcess(v28, v27);
    WdLogEvent5_WdError(v26);
    return v13;
  }
  v11 = 120LL * v30;
  v12 = 0xFFFFFFFFLL;
  if ( v11 <= 0xFFFFFFFF )
    v12 = (unsigned int)v11;
  v13 = v11 > 0xFFFFFFFF ? 0xC0000095 : 0;
  if ( v11 > 0xFFFFFFFF )
  {
    v14 = WdLogNewEntry5_WdWarning(v11, v30, 128LL);
    *(_QWORD *)(v14 + 24) = 71LL;
    WdLogEvent5_WdWarning(v14);
    return v13;
  }
  v15 = 120LL * v30;
  if ( !is_mul_ok(v30, 0x78uLL) )
    v15 = -1LL;
  v18 = (struct D3DKMT_MULTIPLANE_OVERLAY *)operator new(v15, 0x4B677844u, PagedPool);
  if ( !v18 )
  {
    v20 = WdLogNewEntry5_WdWarning(v17, v16, v19);
    v13 = -1073741801;
    *(_QWORD *)(v20 + 24) = -1073741801LL;
    *(_QWORD *)(v20 + 32) = PsGetCurrentProcess(v22, v21);
    WdLogEvent5_WdWarning(v20);
    return v13;
  }
  v23 = Src;
  if ( (char *)Src + v12 < Src || (unsigned __int64)Src + v12 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v18, v23, (unsigned int)v12);
  Src = v18;
  v24 = v29;
  do
  {
    *(_OWORD *)&a2->hDevice = *v24;
    *(_OWORD *)&a2->BroadcastContext[2] = v24[1];
    *(_OWORD *)&a2->BroadcastContext[6] = v24[2];
    *(_OWORD *)&a2->BroadcastContext[10] = v24[3];
    *(_OWORD *)&a2->BroadcastContext[14] = v24[4];
    *(_OWORD *)&a2->BroadcastContext[18] = v24[5];
    *(_OWORD *)&a2->BroadcastContext[22] = v24[6];
    a2 = (struct D3DKMT_PRESENT_MULTIPLANE_OVERLAY *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = v24[7];
    v24 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&a2->hDevice = *v24;
  *(_OWORD *)&a2->BroadcastContext[2] = v24[1];
  *(_OWORD *)&a2->BroadcastContext[6] = v24[2];
  *a3 = v18;
  *a4 = 0LL;
  return 0LL;
}
