/*
 * XREFs of ?CallCheckMultiPlaneOverlaySupport1DDI@@YAJIPEAPEAU_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3@@PEAPEAXPEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019ADE4
 * Callers:
 *     ?CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO@@@Z @ 0x1C019B62C (-CheckMultiPlaneOverlayInternal3@@YAJIPEAVADAPTER_RENDER@@PEAVADAPTER_DISPLAY@@PEAHPEAUD3DKMT_CH.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0014F90 (__security_check_cookie.c)
 *     memset @ 0x1C0016A80 (memset.c)
 *     ??1?$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ @ 0x1C00E75F0 (--1-$PagedPoolArray@PEAU_VIDMM_MULTI_ALLOC@@$0BA@@@QEAA@XZ.c)
 *     ?DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT@@@Z @ 0x1C0179244 (-DdiCheckMultiPlaneOverlaySupport@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPO.c)
 */

__int64 __fastcall CallCheckMultiPlaneOverlaySupport1DDI(
        __int64 a1,
        unsigned __int64 a2,
        void **a3,
        struct ADAPTER_DISPLAY *a4,
        int *a5,
        struct D3DKMT_CHECK_MULTIPLANE_OVERLAY_SUPPORT_RETURN_INFO *a6)
{
  void **v7; // rbx
  struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **v8; // r14
  __int64 v9; // rdi
  char *PoolWithTag; // r9
  DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *v11; // r9
  _QWORD *v12; // rbx
  unsigned int v13; // edi
  __int64 v14; // rdx
  __int64 v15; // rcx
  signed __int64 v16; // r14
  __int64 v17; // r11
  __int64 v18; // r10
  int v19; // ecx
  int v20; // eax
  _DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT v22; // [rsp+20h] [rbp-E0h] BYREF
  char *v23; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v24[312]; // [rsp+48h] [rbp-B8h] BYREF
  int v25; // [rsp+180h] [rbp+80h]

  v7 = a3;
  v23 = 0LL;
  v8 = (struct _D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3 **)a2;
  v25 = 0;
  *a5 = 0;
  a6->Value = 0;
  v9 = (unsigned int)a1;
  if ( (unsigned int)a1 <= 3 )
  {
    PoolWithTag = v24;
    v23 = v24;
  }
  else
  {
    a2 = 0xFFFFFFFFFFFFFFFFuLL % (unsigned int)a1;
    a1 = (unsigned int)a1;
    if ( 0xFFFFFFFFFFFFFFFFuLL / (unsigned int)a1 < 0x68 )
    {
LABEL_7:
      v12 = (_QWORD *)WdLogNewEntry5_WdWarning(a1, a2, a3);
      v12[3] = v9;
      v13 = -1073741801;
      v12[4] = -1073741801LL;
      v12[5] = PsGetCurrentProcess(v15, v14);
      WdLogEvent5_WdWarning(v12);
      goto LABEL_23;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 104LL * (unsigned int)a1, 0x4B677844u);
    v23 = PoolWithTag;
  }
  v25 = v9;
  if ( !PoolWithTag )
    goto LABEL_7;
  memset(PoolWithTag, 0, 104 * v9);
  v11 = (DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE *)v23;
  if ( !v23 )
    goto LABEL_7;
  if ( (_DWORD)v9 )
  {
    a3 = (void **)(v23 + 16);
    v16 = (char *)v8 - (char *)v7;
    v17 = v9;
    do
    {
      v18 = *(__int64 *)((char *)v7 + v16);
      *(a3 - 2) = *v7;
      *((_DWORD *)a3 - 2) = *(_DWORD *)(v18 + 16);
      *(_OWORD *)a3 = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 4LL);
      *((_OWORD *)a3 + 1) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 20LL);
      *((_OWORD *)a3 + 2) = *(_OWORD *)(*(_QWORD *)(v18 + 24) + 36LL);
      *((_DWORD *)a3 + 12) = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 52LL);
      v19 = *(_DWORD *)(*(_QWORD *)(v18 + 24) + 72LL);
      if ( v19 == 6 || v19 == 8 )
        *((_DWORD *)a3 + 15) |= 1u;
      if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(v18 + 24) + 72LL) - 8) <= 1 )
        *((_DWORD *)a3 + 15) |= 2u;
      *((_DWORD *)a3 - 1) ^= (*((_DWORD *)a3 - 1) ^ **(_DWORD **)(v18 + 24)) & 1;
      *((_DWORD *)a3 - 1) ^= ((unsigned __int8)*((_DWORD *)a3 - 1) ^ (unsigned __int8)**(_DWORD **)(v18 + 24)) & 2;
      *((_DWORD *)a3 + 13) ^= (*((_DWORD *)a3 + 13) ^ *(_DWORD *)(*(_QWORD *)(v18 + 24) + 56LL)) & 1;
      if ( *(_DWORD *)(*(_QWORD *)(v18 + 24) + 76LL) == 1 )
      {
        *((_DWORD *)a3 + 20) = 1;
      }
      else if ( *(_DWORD *)(*(_QWORD *)(v18 + 24) + 76LL) == 2 )
      {
        *((_DWORD *)a3 + 20) = 2;
      }
      ++v7;
      a3 += 13;
      --v17;
    }
    while ( v17 );
  }
  v22.PlaneCount = v9;
  *(_QWORD *)&v22.Supported = 0LL;
  v22.pPlanes = v11;
  v20 = ADAPTER_DISPLAY::DdiCheckMultiPlaneOverlaySupport(a4, &v22, (__int64)a3);
  if ( v20 >= 0 )
    *a5 = v22.Supported;
  v13 = v20;
LABEL_23:
  PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>::~PagedPoolArray<_VIDMM_MULTI_ALLOC *,16>((PVOID *)&v23);
  return v13;
}
