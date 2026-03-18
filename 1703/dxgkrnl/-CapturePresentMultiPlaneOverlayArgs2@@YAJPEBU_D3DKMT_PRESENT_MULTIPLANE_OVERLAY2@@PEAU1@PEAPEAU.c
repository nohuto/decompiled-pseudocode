/*
 * XREFs of ?CapturePresentMultiPlaneOverlayArgs2@@YAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2@@PEAU1@PEAPEAU_D3DKMT_MULTIPLANE_OVERLAY2@@PEAPEAUtagRECT@@@Z @ 0x1C01B6F28
 * Callers:
 *     DxgkPresentMultiPlaneOverlay2 @ 0x1C01BB110 (DxgkPresentMultiPlaneOverlay2.c)
 * Callees:
 *     memmove @ 0x1C00153C0 (memmove.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00DA530 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall CapturePresentMultiPlaneOverlayArgs2(
        const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a1,
        struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *a2,
        struct _D3DKMT_MULTIPLANE_OVERLAY2 **a3,
        struct tagRECT **a4)
{
  _OWORD *v7; // rax
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  SIZE_T v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct _D3DKMT_MULTIPLANE_OVERLAY2 *v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rbx
  unsigned int v19; // edi
  __int64 v20; // rcx
  void *v21; // rdx
  char *v22; // rcx
  _OWORD *v23; // rax
  __int64 v25; // rax
  _QWORD *v26; // rbx
  __int64 v27; // rcx
  _BYTE v28[284]; // [rsp+40h] [rbp-148h] BYREF
  unsigned int v29; // [rsp+15Ch] [rbp-2Ch]
  void *Src; // [rsp+160h] [rbp-28h]

  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)MmUserProbeAddress;
  v7 = v28;
  v8 = 2LL;
  v9 = 2LL;
  do
  {
    *v7 = *(_OWORD *)&a1->hAdapter;
    v7[1] = *(_OWORD *)&a1->BroadcastContext[1];
    v7[2] = *(_OWORD *)&a1->BroadcastContext[5];
    v7[3] = *(_OWORD *)&a1->BroadcastContext[9];
    v7[4] = *(_OWORD *)&a1->BroadcastContext[13];
    v7[5] = *(_OWORD *)&a1->BroadcastContext[17];
    v7[6] = *(_OWORD *)&a1->BroadcastContext[21];
    v7 += 8;
    *(v7 - 1) = *(_OWORD *)&a1->BroadcastContext[25];
    a1 = (const struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a1 + 128);
    --v9;
  }
  while ( v9 );
  *v7 = *(_OWORD *)&a1->hAdapter;
  v7[1] = *(_OWORD *)&a1->BroadcastContext[1];
  v7[2] = *(_OWORD *)&a1->BroadcastContext[5];
  v10 = v29;
  if ( v29 - 1 > 6 )
  {
    v26 = (_QWORD *)WdLogNewEntry5_WdError(a1, 0LL);
    v26[3] = v10;
    v19 = -1073741811;
    v26[4] = -1073741811LL;
    v26[5] = PsGetCurrentProcess(v27);
    WdLogEvent5_WdError(v26);
    return v19;
  }
  v11 = 120LL * v29;
  if ( v11 > 0xFFFFFFFF )
  {
    v25 = WdLogNewEntry5_WdWarning(v29, 0LL, 128LL, a4);
    *(_QWORD *)(v25 + 24) = 182LL;
    WdLogEvent5_WdWarning(v25);
    return 3221225621LL;
  }
  v12 = 120LL * v29;
  if ( !is_mul_ok(v29, 0x78uLL) )
    v12 = -1LL;
  v15 = (struct _D3DKMT_MULTIPLANE_OVERLAY2 *)operator new(v12, 0x4B677844u, PagedPool);
  if ( !v15 )
  {
    v18 = WdLogNewEntry5_WdWarning(v14, v13, v16, v17);
    v19 = -1073741801;
    *(_QWORD *)(v18 + 24) = -1073741801LL;
    *(_QWORD *)(v18 + 32) = PsGetCurrentProcess(v20);
    WdLogEvent5_WdWarning(v18);
    return v19;
  }
  v21 = Src;
  v22 = (char *)Src + (unsigned int)v11;
  if ( v22 < Src || (unsigned __int64)v22 > MmUserProbeAddress )
    *(_BYTE *)MmUserProbeAddress = 0;
  memmove(v15, v21, (unsigned int)v11);
  Src = v15;
  v23 = v28;
  do
  {
    *(_OWORD *)&a2->hAdapter = *v23;
    *(_OWORD *)&a2->BroadcastContext[1] = v23[1];
    *(_OWORD *)&a2->BroadcastContext[5] = v23[2];
    *(_OWORD *)&a2->BroadcastContext[9] = v23[3];
    *(_OWORD *)&a2->BroadcastContext[13] = v23[4];
    *(_OWORD *)&a2->BroadcastContext[17] = v23[5];
    *(_OWORD *)&a2->BroadcastContext[21] = v23[6];
    a2 = (struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY2 *)((char *)a2 + 128);
    *(_OWORD *)&a2[-1].pPresentPlanes = v23[7];
    v23 += 8;
    --v8;
  }
  while ( v8 );
  *(_OWORD *)&a2->hAdapter = *v23;
  *(_OWORD *)&a2->BroadcastContext[1] = v23[1];
  *(_OWORD *)&a2->BroadcastContext[5] = v23[2];
  *a3 = v15;
  *a4 = 0LL;
  return 0LL;
}
